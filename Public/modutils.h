#pragma once

#include <type_traits>

template <typename F> auto IIFE(F f) { return f(); }

template <class T> struct remove_cvref { typedef std::remove_cv_t<std::remove_reference_t<T>> type; };

template <class T> using remove_cvref_t = typename remove_cvref<T>::type;

template <typename Ret, typename Type> Ret &direct_access(Type *type, size_t offset) {
  union {
    size_t raw;
    Type *source;
    Ret *target;
  } u;
  u.source = type;
  u.raw += offset;
  return *u.target;
}