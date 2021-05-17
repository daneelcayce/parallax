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

We're finally past this and into the executive office for the prototype. _Thank the Users._



### 15 May
Added objects to the office, and some basic descriptions.


### 16 May
Today's goals:
	- Basic terminal sequence:
		- sit down and login (do after sitting down, we'll do verbs and stuff later)
		- read some stuff
		- after getting up and going downstairs, we're somewhere different
	- Basic tunnel/cave entrance

I'd eventually like to have auto-sitting in the chair at the terminal, but whatever.

Another thing that'd possibly be helpful for expository stuff: allowing dialogue as a list of strings, so that I don't have to do _nearly_ as much of `print "whatever"; Any();`. It's driving me crazy at the moment and isn't very efficient.

Came up with some bullshit last name for Trent.

Basic "meeting Trent" cutscene, although we aren't quite to the part where he explains what the hell's going on yet.



Changes of note:
Add files:
	- assets/trent.inf
	- assets/tty.inf
	- engine/ext_grammar.h
	- story/1.1_trent_intro.inf


engine/char.h:
	- change how dialogue tags are printed
	- add player character for dialogue
engine/core.h:
	- uncomment PlayScene()

story/1_office.inf:
	- remove server room -- we won't need it for the prototype


