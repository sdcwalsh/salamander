#ifndef SALAMANDERAPP_H
#define SALAMANDERAPP_H

#include "MooseApp.h"

class SalamanderApp;

template<>
InputParameters validParams<SalamanderApp>();

class SalamanderApp : public MooseApp
{
public:
  SalamanderApp(InputParameters parameters);
  virtual ~SalamanderApp();

  static void registerApps();
  static void registerObjects(Factory & factory);
  static void associateSyntax(Syntax & syntax, ActionFactory & action_factory);
};

#endif /* SALAMANDERAPP_H */
