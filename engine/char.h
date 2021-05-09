! --------------------------------------------------------------------------
! CHAR.H - basic character creation stuff
! Character class
! "esteem" property determines how highly the NPC thinks of the player.
! We use the short_name property for the character's speech boxes (which we define in the "say" function)
! We'll also define a "NPC" character, so you can have side characters speaking. You could set the short_name property manually as you change characters, or do a switch statement with a character list.
! -----------------------------------------------------------------------------
! To Do: add skeletal life routine with certain actions
! "say" function should have names in all caps and do boxes
! -----------------------------------------------------------------------------
Class Character with
  esteem 50, ! out of 100, a good middle ground
  short_name "CHARACTER", ! used for dialogue and stuff too
  description
    "A person, usually. Non-playable, unless you're doing some player configuration stuff (which I tend to do).",
  
  say [x;
    ClearScreen();
    print "^^^";
    print (string) self.short_name;
    print "^----------^";
    print (string) x;
    Any();
  ],
has animate proper;

Character NPC;