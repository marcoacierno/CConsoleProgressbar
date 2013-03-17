#include <iostream>

using namespace std;

class CProgressBar {   
      int maxProgressBar, tick;

      public:
             CProgressBar(int max) {
                  maxProgressBar = max;
                  tick = 0;
             }
      
             bool Start() {
                  PopolaProgressbar ();
                  return true;
             }
          
             bool Tick() {
                 tick ++;
                 if (tick > maxProgressBar) return false;
                 
                 PopolaProgressbar ();
                 return true;
             }
             
             int GetTicks() { return tick; }
             
      private:
             void PopolaProgressbar() {
                 string p = "[";
                 
                 for (int x = 0; x < maxProgressBar; x++) {
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
