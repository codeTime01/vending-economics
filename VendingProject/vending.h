#ifndef vending_h
#define vending_h

// include types & constants of Wiring core API
#include "WConstants.h"

// library interface description
class vending
{
  // user-accessible "public" interface
  public:
    vending(int);
    void doSomething(void);
    void vend(void);
    void retract(void);
    Machine(void);

  // library-accessible "private" interface
  private:
    int value;
    void doSomethingSecret(void);
};

#endif
