#pragma once

#include "Flash.hpp"
#include "MultiphaseSystem/PVTEnums.hpp"
#include <unordered_map>
#include <list>
#include "Flash.hpp"

namespace PVTPackage
{

struct MultiphaseSystemProperties;
class PhaseModel;

class BlackOilFlash : public Flash
{
public:

  BlackOilFlash() = default;
  bool ComputeEquilibrium(MultiphaseSystemProperties& out_variables) override;
  void set_PhaseState(MultiphaseSystemProperties& out_variables) override;

  ~BlackOilFlash() override = default;

};

}
