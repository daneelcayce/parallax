# Various Parallax bugs

## Intro Level
### Dead end
- [ ] Opening the door at the dead end (first time) keeps the door locked, but the door _does_ open (light turns green, etc).
    - [ ] Expected behavior: First open requires the player to unlock with the keycard. After that, the player can use "unlock" or "open" to go through the door without having to do both steps.
    - [ ] Note that the behavior _after_ the first unlock/open sequence doesn't require both steps. I do want to suppress the "(first opening/unlocking/whatever the door)" message and replace it with something else.
- [ ] "unlock door" without the keycard has something weird going on.
    ```
    >unlock door
    (with the door)
    (first taking the door)
    The door is fixed in place.
    ```


### Office space
- [ ] We shouldn't be able to go upstairs  (to the executive office) until we have the printout.
- [ ] The stair cutscene kind of screwed itself over, so maybe we should just make the stairs part of the office's initial description. Or something.
- [ ] Should suppress "You can't since the door is in the way" when we need to take the keycard.


### Printer room/peacock
- [ ] The peacock doesn't appear before we look at the printer.
    - 9 May: this appears to be because I forgot to give the peacock an initial description. Fixing by doing a "before" condition.

- [ ] Consequently... there's no printout, even though it says there should be.