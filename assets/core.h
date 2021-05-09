! -----------------------------------------------------------------------------
! Core header - mainly object classes right now so I don't have to repeat stuff too often.
! -----------------------------------------------------------------------------

Class Room with
    description
        "Top-level room class. Helps distinguish between rooms and objects for readability, and cuts down on property statements.",
has static light;