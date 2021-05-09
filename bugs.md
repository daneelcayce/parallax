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
- [ ] Should suppress "You can't since the door is in the way" when we need to take the keycard.


### Printer room/peacock
- [ ] Need to be able to throw multiple things at the peacock, lunge at it, make noise, etc.