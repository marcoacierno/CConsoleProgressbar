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
     
    system("PAUSE");
    return EXIT_SUCCESS;
}

