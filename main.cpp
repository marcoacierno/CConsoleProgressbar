#include <iostream>
#include "cprogress.h"

using namespace std;

int main()
{
    CProgressBar c(5);
    
    c.Start();
    
    // ...
    // do stuff
    // ...
    
    c.Tick();
    
    // ...
    // more stuff
    // ...
    
    c.Tick();
  
    // ...
    // more stuff
    // ...
    
    c.Tick();
    
    c.SetMaxTicks(10);
    
    c.Tick();
    c.Tick();
    c.Tick();
    
    c.Close();
    
    CProgressBar d(10);
    
    d.SetMaxTicks(20);
    
    d.Tick();
    
    d.Tick();
    
    d.SetMaxTicks(40);
    
    d.Tick();
    
    d.Tick();
    
    d.Tick();
     
    system("PAUSE");
    return EXIT_SUCCESS;
}

