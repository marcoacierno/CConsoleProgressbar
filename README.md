CConsoleProgressbar
===================

Nothing to do &lt;_&lt;

Create a progress bar in a console

main.cpp shows how to use

[CODE]
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
     
[/CODE]

CProgressBar c(5); init progress bar max ticks will be 5.

C.Start(); create the progress bar in the console (Shows [-----])

c.Tick(); will do a tick and the input now show [=----]

When ticks >= max ticks the c.Tick() returns false.

Use GetTick() to know current tick
