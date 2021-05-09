! -----------------------------------------------------------------------------
! core.h - Useful things to drive adventure games
! It handles:
!   * some basic classes
!   * waiting for player input ("press any key to continue")
!   * cutscene advancement (plays initial scene, waits for input, then goes to scene dialogue)
! -----------------------------------------------------------------------------

Class Room with
    description
        "Top-level room class. Helps distinguish between rooms and objects for readability, and cuts down on property statements.",
has static light;

Class Scene with
    initial [;
        print "here is some initial scene text.";
        Any();
        self.description();
    ],
    description[;
        "After the player moves to the scene, the dialogue plays out.";
    ],
has static light;


! "Press any key to continue"
! Not clearing the screen right now, I don't think we need that
[ Any x y;
    print "^^[Continue >]";
    @read_char 1 -> y;
!    ClearScreen();
    "^^";
];


! Automatic scene playthrough - useful for cutscenes, maybe?
! Also not clearing the screen, aesthetics can wait.
![ PlayScene scene;
!  ClearScreen();
!  scene.initial();
!  move player to scene;
!  scene.description();
!];