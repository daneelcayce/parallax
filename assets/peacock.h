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

[ PeacockAttack x;
    x = random(5);
    switch(x) {
        1: "The peacock isn't very impressed with your stunts. It tells you so by biting you, killing you instantly.";
        default: "You lunge at the peacock, but it dodges you easily.";
    }
];

[ PeacockThrowAt x;
    x = random(4);
    switch (x) {
        default: "You miss by a wide margin.";
    }
];