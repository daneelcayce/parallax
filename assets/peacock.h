! the peacock actually gets its own header file, because it's a pretty complex character.

! Everything in the life routine will have its own subroutines, probably.

Character Peacock "angry peacock" with
    name
        'angry' 'peacock' 'bird',
    short_name
        "Peacock",
    description [;
        "The peacock doesn't look very happy with you right now.";
     ],
     life [;
        Attack: PeacockAttack();
        !Kiss:
        !WakeOther:
        ThrowAt: PeacockThrowAt();
        !Give:
        !Show:
        !Ask:
        !Tell:
        !Answer:
     ],
has animate;

! -----------------------------------------------------------------------------
! Miniboss fight behavior routines!
! After defeating the peacock, we'll move it to the darkness instead of removing it (because I intend for it to show up on the pseudo-Grid later).
! For now, we're cheating and running the printout initial once we're done. I'll figure out something more robust once we do actual turn-based combat.
! -----------------------------------------------------------------------------

[ PeacockAttack x;
    x = random(5);
    print (string) x;
    switch(x) {
        !1: "The peacock isn't very impressed with your stunts. It tells you so by biting you, killing you instantly.";
        default: "You lunge at the peacock, but it dodges you easily, running out of the room.^^";
    }
    move Peacock to thedark;
    Printout.initial();
];

! Need to determine which things you can throw and what happens with each one. Might work better with ThrownAt, etc.
[ PeacockThrowAt x;
    x = random(4);
    print (string) x;
    switch (x) {
        default: "You miss by a wide margin -- but it scares the peacock off.^^";
    }
    move Peacock to thedark;
    Printout.initial();
];