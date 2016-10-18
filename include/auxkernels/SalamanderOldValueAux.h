/*
 * SalamanderOldValueAux.h
 *
 *  Created on: Oct 18, 2016
 *      Author: stuartwalsh
 */

#ifndef INCLUDE_AUXKERNELS_SALAMANDEROLDVALUEAUX_H_
#define INCLUDE_AUXKERNELS_SALAMANDEROLDVALUEAUX_H_


#include "AuxKernel.h"
#include "RankTwoTensor.h"

// Forward declarations
class SalamanderOldValueAux;

template <>
InputParameters validParams<SalamanderOldValueAux>();

class SalamanderOldValueAux : public AuxKernel
{
public:
  SalamanderOldValueAux(const InputParameters & parameters);
  virtual ~SalamanderOldValueAux()
  {
  }

protected:
  virtual Real computeValue();
  const VariableValue & _old_variable;
};


#endif /* INCLUDE_AUXKERNELS_SALAMANDEROLDVALUEAUX_H_ */
