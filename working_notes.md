# Working notes/changelog
### 5 May
Adding office rooms, will connect and add objects etc later.

Should actually add a stairwell object or something as a door?

Terminal: shouldn't be able to take it, does it have light? how do I make it dim etc?

Need to make it so "unlock" and "open" are basically synonyms, the office building will get super tedious otherwise.


### 8 May
Moved some old macguffin engine code over. Keeping the name because it's magnificent (although "Parallax engine" is also cool, this feels more distinctive). Printer room and peacock, the peacock will need a basic life routine.

I actually think that since I've got everything up to the server room, I'll start expanding things out now. The prototype needs to end somewhere, after all, and starting this off with some mystery about "notebook guy" (he really needs a name...) will give me a good base to go from.

Update: peacock has a basic life routine, need to add deadflags and stuff and some turn-based combat. (cannot believe I just typed that.)

The office is coming along, need to expand the executive office. Going to start working on the reading material and exploratory stuff.

#### Next steps
Start notebook object with a basic reading thing, also give the paper something on it to take you upstairs.

Basic peacock fight (it runs off no matter what so you can get the paper; eventually this will be an entire miniboss fight).

Brainstorm more stuff to put in the executive office.

Maybe consolidate this so we aren't going into as many rooms before the office; we can add everything back after we have this ready to go in prototype. Feels like slightly weird pacing... not that it matters right now, but y'know.


### 9 May
Basic peacock fight (i.e., startling) prototyped. Eventually we'll need an actual turn-based combat system, since we'll have multiple instances of (mini)boss fights, but that can wait. Worked out a _shitload_ of bugs here, but it's still pretty simplistic (and we need to be able to throw more than the lamp).

Turn-based combat stuff will probably go in a separate header file, because I expect it to eventually get quite extensive.