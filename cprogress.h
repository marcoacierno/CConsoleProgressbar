#include <iostream>

using namespace std;

class CProgressBar {   
      int maxTicks, tick;
      bool started;
      
      public:
             CProgressBar(int max) {
                  maxTicks = max;
                  tick = 0;
                  started = false;
             }
      
             bool Start() {
                  PopolaProgressbar ();
                  started = true;
                  return true;
             }
          
             bool Tick() {
                 tick ++;
                 if (tick > maxTicks) {
                    cout << endl;
                    started = false;
                    return false;
                 }
                 
                 PopolaProgressbar ();
                 return true;
             }
             
             bool SetMaxTicks(int ticks) {
                 if (tick > ticks) 
                    return false;
                    
                 maxTicks = ticks;
                 
                 if (started == true) 
                    PopolaProgressbar ();
                    
                 return true;
             }
             
             int GetTicks() { return tick; }
             
             void Close ()
             {
                  cout << endl;     
                  started = false;
             }
             
      private:
             void PopolaProgressbar() {
                 string p = "[";
                 
                 for (int x = 0; x < maxTicks; x++) {
                     if (x < tick) {
                        p = p + "=";      
                     }    
                     else p = p + "-";
                 }
                 
                 p = p + "]";
                 
                 cout << string(p.length(), '\b');
                 cout << p;
             }    
};
