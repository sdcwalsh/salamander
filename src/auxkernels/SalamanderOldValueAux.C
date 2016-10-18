/*
 * SalamanderOldValueAux.C
 *
 *  Created on: Oct 18, 2016
 *      Author: stuartwalsh
 */




#include "SalamanderOldValueAux.h"

template <>
InputParameters
validParams<SalamanderOldValueAux>()
{
  InputParameters params = validParams<AuxKernel>();
  params.addCoupledVar("field", 0.0, "Field");
  return params;
}

SalamanderOldValueAux::SalamanderOldValueAux(const InputParameters & parameters) :
    AuxKernel(parameters), _old_variable(coupledValueOld("field"))
{
}

Real
SalamanderOldValueAux::computeValue()
{
  Real difference;
  difference = _old_variable[ _qp ];
  return difference;
}
