#include "chakra_helper.h"
#include "playerdb.h"
#include <scriptapi.h>
#include <bossbar.h>
#include <stdexcept>

using namespace Mod::Scripting;
using namespace Mod::Bossbar;

static ModuleRegister reg("ez:bossbar", [](JsObjectWrapper native) -> std::string {
  native["create"] = +[](Mod::PlayerEntry entry, std::string const &name, float percent) {
    Config cfg;
    cfg.entry   = entry;
    cfg.percent = percent;
    cfg.text    = name;
    return *Handle::CreateJsObject(Handle::Create(cfg));
  };
  return "export const create = import.meta.native.create;";
});