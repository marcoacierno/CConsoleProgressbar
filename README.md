CConsoleProgressbar
===================

Nothing to do &lt;_&lt;

Create a progress bar in a console


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
     

CProgressBar c(5); init progress bar max ticks will be 5.

C.Start(); create the progress bar in the console ([-----])

c.Tick(); will do a tick and the output will be [=----]

When ticks > max ticks  c.Tick() returns false.

Use GetTick() to know current tick
SetMaxTicks(int) change max ticks

