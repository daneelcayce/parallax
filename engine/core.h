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


! "Press any key to continue"
[ Any x y;
    print "^^[Continue >]";
    @read_char 1 -> y;
    ClearScreen();
];


! Automatic scene playthrough - useful for cutscenes.
[ PlayScene scene;
  ClearScreen();
  scene.initial();
  move player to scene;
  scene.description();
];