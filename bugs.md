-------------------------------------------------------------------------------
Weird bugs I'm finding as I go, which will need to be fixed at some point
-------------------------------------------------------------------------------

- [ ] Opening the door at the dead end (first time) keeps the door locked, but the door _does_ open (light turns green, etc).
    - [ ] Expected behavior: First open requires the player to unlock with the keycard. After that, the player can use "unlock" or "open" to go through the door without having to do both steps.
    - [ ] Note that the behavior _after_ the first unlock/open sequence doesn't require both steps. I do want to suppress the "(first opening/unlocking/whatever the door)" message and replace it with something else.
- [ ] We shouldn't be able to go upstairs  (to the executive office) until we have the printout.
- [ ] The stair cutscene kind of screwed itself over, so maybe we should just make the stairs part of the office's initial description. Or something.