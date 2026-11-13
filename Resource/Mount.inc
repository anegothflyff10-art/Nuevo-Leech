// Mount Animate Script
// Cerbère vert
II_SYS_MOUNT_01
{
	SetMount( __MOUNT_WALK );
	SetBindBone( 2 );
	Rotation( 0.0f -85.0f 0.0f );
	SetGroundSpeed( 0.12f );
	SetFlightSpeed( 0.0f );
	PlayerAnimation( MTI_FSTAND1_F );
	SetOffSet( -0.0f 0.0f 0.55f );
	Animation
	{
		"stand"		MTI_STAND
		"walk"		MTI_WALK
		"walk"		MTI_RUN
		"idle1"		MTI_IDLE1
		"idle1"		MTI_IDLE2
		"stand"		MTI_FLY_STAND
		"walk"		MTI_FLY_WALK
		"stand"		MTI_FLY_IDLE1
        "stand"		MTI_FLY_IDLE2
        "walk"		MTI_FLY_GROUND
        "stand"		MTI_GROUND_FLY
		"walkback"	MTI_BACK
		"jump"		MTI_JUMP1
		"jumpStart"	MTI_JUMP2
		"jumpFall"	MTI_JUMP3
		"jumpEnd"	MTI_JUMP4
	}
}
// Rhinocéros bleu
II_SYS_MOUNT_02
{
	SetMount( __MOUNT_WALK );
	SetBindBone( 3 );
	Rotation( 0.0f -85.0f 0.0f );
	SetGroundSpeed( 0.16f );
	SetFlightSpeed( 0.0f );
	PlayerAnimation( MTI_FSTAND1_F );
	SetOffSet( -0.0f 0.50f 0.65f );
	Animation
	{
		"stand"		MTI_STAND
		"walk"		MTI_WALK
		"run"		MTI_RUN
		"idle1"		MTI_IDLE1
		"idle2"		MTI_IDLE2
		"fly_stand"	MTI_FLY_STAND
		"fly_walk"	MTI_FLY_WALK	
		"fly_idle1"	MTI_FLY_IDLE1
        "fly_idle2"	MTI_FLY_IDLE2
        "fly_land"	MTI_FLY_GROUND
        "fly_start"	MTI_GROUND_FLY
		"walkback"	MTI_BACK
		"jump"		MTI_JUMP1
		"jumpStart"	MTI_JUMP2
		"jumpFall"	MTI_JUMP3
		"jumpEnd"	MTI_JUMP4
	}
}
// Renard orange
II_SYS_MOUNT_03
{
	SetMount( __MOUNT_WALK );
	SetBindBone( 20 );
	Rotation( 0.0f -95.0f 0.0f );
	SetGroundSpeed( 0.32f );
	SetFlightSpeed( 0.0f );
	PlayerAnimation( MTI_FSTAND1_F );
	SetOffSet( -0.0f -0.35f 0.30f );
	Animation
	{
		"stand"		MTI_STAND
		"walk"		MTI_WALK
		"run"		MTI_RUN
		"idle1"		MTI_IDLE1
		"idle2"		MTI_IDLE2
		"fly_stand"	MTI_FLY_STAND
		"fly_walk"	MTI_FLY_WALK	
		"fly_idle1"	MTI_FLY_IDLE1
        "fly_idle2"	MTI_FLY_IDLE2
        "fly_land"	MTI_FLY_GROUND
        "fly_start"	MTI_GROUND_FLY
		"walkback"	MTI_BACK
		"jump"		MTI_JUMP1
		"jumpStart"	MTI_JUMP2
		"jumpFall"	MTI_JUMP3
		"jumpEnd"	MTI_JUMP4
	}
}
// Cheval fantôme
II_SYS_MOUNT_04
{
	SetMount( __MOUNT_WALK );
	SetBindBone( 3 );
	Rotation( 0.0f -95.0f 0.0f );
	SetGroundSpeed( 0.32f );
	SetFlightSpeed( 0.0f );
	PlayerAnimation( MTI_FSTAND1_F );
	SetOffSet( -0.0f -0.20f 0.40f );
	Animation
	{
		"stand"		MTI_STAND
		"walk"		MTI_WALK
		"run"		MTI_RUN
		"idle1"		MTI_IDLE1
		"idle2"		MTI_IDLE2
		"fly_stand"	MTI_FLY_STAND
		"fly_walk"	MTI_FLY_WALK	
		"fly_idle1"	MTI_FLY_IDLE1
        "fly_idle2"	MTI_FLY_IDLE2
        "fly_land"	MTI_FLY_GROUND
        "fly_start"	MTI_GROUND_FLY
		"walkback"	MTI_BACK
		"jump"		MTI_JUMP1
		"jumpStart"	MTI_JUMP2
		"jumpFall"	MTI_JUMP3
		"jumpEnd"	MTI_JUMP4
	}
}
// Basilique
II_SYS_MOUNT_05
{
	SetMount( __MOUNT_WALK );
	SetBindBone( 4 );
	Rotation( 0.0f -95.0f 0.0f );
	SetGroundSpeed( 0.16f );
	SetFlightSpeed( 0.0f );
	PlayerAnimation( MTI_FSTAND1_F );
	SetOffSet( -0.0f -0.0f 0.0f );
	Animation
	{
		"stand"		MTI_STAND
		"walk"		MTI_WALK
		"run"		MTI_RUN
		"idle1"		MTI_IDLE1
		"idle2"		MTI_IDLE2
		"fly_stand"	MTI_FLY_STAND
		"fly_walk"	MTI_FLY_WALK	
		"fly_idle1"	MTI_FLY_IDLE1
        "fly_idle2"	MTI_FLY_IDLE2
        "fly_land"	MTI_FLY_GROUND
        "fly_start"	MTI_GROUND_FLY
		"walkBack"	MTI_BACK
		"jump"		MTI_JUMP1
		"jumpStart"	MTI_JUMP2
		"jumpFall"	MTI_JUMP3
		"jumpEnd"	MTI_JUMP4
	}
}
// Ours noir
II_SYS_MOUNT_06
{
	SetMount( __MOUNT_WALK );
	SetBindBone( 2 );
	Rotation( 0.0f -95.0f 0.0f );
	SetGroundSpeed( 0.24f );
	SetFlightSpeed( 0.0f );
	PlayerAnimation( MTI_FSTAND1_F );
	SetOffSet( -0.0f -0.30f -0.30f );
	Animation
	{
		"stand"		MTI_STAND
		"walk"		MTI_WALK
		"run"		MTI_RUN
		"idle1"		MTI_IDLE1
		"idle2"		MTI_IDLE2
		"fly_stand"	MTI_FLY_STAND
		"fly_walk"	MTI_FLY_WALK	
		"fly_idle1"	MTI_FLY_IDLE1
        "fly_idle2"	MTI_FLY_IDLE2
        "fly_land"	MTI_FLY_GROUND
        "fly_start"	MTI_GROUND_FLY
		"walkback"	MTI_BACK
		"jump"		MTI_JUMP1
		"jumpStart"	MTI_JUMP2
		"jumpFall"	MTI_JUMP3
		"jumpEnd"	MTI_JUMP4
	}
}
// Vieux chameau paresseux
II_SYS_MOUNT_07
{
	SetMount( __MOUNT_WALK );
	SetBindBone( 1 );
	Rotation( 0.0f -95.0f 0.0f );
	SetGroundSpeed( 0.12f );
	SetFlightSpeed( 0.0f );
	PlayerAnimation( MTI_FSTAND1_F );
	SetOffSet( -0.05f -0.20f -0.50f );
	Animation
	{
		"stand"		MTI_STAND
		"walk"		MTI_WALK
		"run"		MTI_RUN
		"idle1"		MTI_IDLE1
		"idle2"		MTI_IDLE2
		"fly_stand"	MTI_FLY_STAND
		"fly_walk"	MTI_FLY_WALK	
		"fly_idle1"	MTI_FLY_IDLE1
        "fly_idle2"	MTI_FLY_IDLE2
        "fly_land"	MTI_FLY_GROUND
        "fly_start"	MTI_GROUND_FLY
		"walkback"	MTI_BACK
		"jump"		MTI_JUMP1
		"jumpStart"	MTI_JUMP2
		"jumpFall"	MTI_JUMP3
		"jumpEnd"	MTI_JUMP4
	}
}
// Cellocopter
II_SYS_MOUNT_08
{
	SetMount( __MOUNT_WALK_FLY );
	SetBindBone( 2 );
	Rotation( 0.0f -85.0f 10.0f ); 
	SetGroundSpeed( 0.2f );
	SetFlightSpeed( 0.2f );
	PlayerAnimation( MTI_FSTAND1_F );
	SetOffSet( -0.0f 0.35f 0.0f );
	Animation
	{
		"stand"		MTI_STAND
		"walk"		MTI_WALK
		"run"		MTI_RUN
		"idle1"		MTI_IDLE1
		"idle2"		MTI_IDLE2
		"flystand"	MTI_FLY_STAND
		"flywalk"	MTI_FLY_WALK 
		"flyidle1"	MTI_FLY_IDLE1
		"flyidle2"	MTI_FLY_IDLE2
		"flyground"	MTI_FLY_GROUND
		"groundfly"	MTI_GROUND_FLY
		"walkback"	MTI_BACK
		"jump"		MTI_JUMP1
		"jumpstart"	MTI_JUMP2
		"jumpFall"	MTI_JUMP3
		"jumpend"	MTI_JUMP4
	}
}
// Grand poulet
II_SYS_MOUNT_09
{
	SetMount( __MOUNT_WALK );
	SetBindBone( 2 );
	Rotation( 0.0f -95.0f 0.0f );
	SetGroundSpeed( 0.24f );
	SetFlightSpeed( 0.0f );
	PlayerAnimation( MTI_FSTAND1_F );
	SetOffSet( -0.0f -0.20f 0.20f );
	Animation
	{
		"stand"		MTI_STAND
		"walk"		MTI_WALK
		"run"		MTI_RUN
		"idle1"		MTI_IDLE1
		"idle2"		MTI_IDLE2
		"fly_stand"	MTI_FLY_STAND
		"fly_walk"	MTI_FLY_WALK	
		"fly_idle1"	MTI_FLY_IDLE1
        "fly_idle2"	MTI_FLY_IDLE2
        "fly_land"	MTI_FLY_GROUND
        "fly_start"	MTI_GROUND_FLY
		"walkback"	MTI_BACK
		"jump"		MTI_JUMP1
		"jumpStart"	MTI_JUMP2
		"jumpFall"	MTI_JUMP3
		"jumpEnd"	MTI_JUMP4
	}
}
// Oiseau de course
II_SYS_MOUNT_10
{
	SetMount( __MOUNT_WALK );
	SetBindBone( 2 );
	Rotation( 0.0f -95.0f 0.0f );
	SetGroundSpeed( 0.40f );
	SetFlightSpeed( 0.0f );
	PlayerAnimation( MTI_FSTAND1_F );
	SetOffSet( -0.0f -0.35f 0.0f );
	Animation
	{
		"stand"		MTI_STAND
		"walk"		MTI_WALK
		"run"		MTI_RUN
		"idle1"		MTI_IDLE1
		"idle2"		MTI_IDLE2
		"fly_stand"	MTI_FLY_STAND
		"fly_walk"	MTI_FLY_WALK	
		"fly_idle1"	MTI_FLY_IDLE1
        "fly_idle2"	MTI_FLY_IDLE2
        "fly_land"	MTI_FLY_GROUND
        "fly_start"	MTI_GROUND_FLY
		"walk"		MTI_BACK
		"walk"		MTI_JUMP1
		"walk"		MTI_JUMP2
		"walk"		MTI_JUMP3
		"stand"		MTI_JUMP4
	}
}
// Tigre violet mort
II_SYS_MOUNT_11
{
	SetMount( __MOUNT_WALK );
	SetBindBone( 1 );
	Rotation( 0.0f -95.0f 0.0f );
	SetGroundSpeed( 0.24f );
	SetFlightSpeed( 0.0f );
	PlayerAnimation( MTI_FSTAND1_F );
	SetOffSet( -0.0f -0.40f 0.30f );
	Animation
	{
		"stand"		MTI_STAND
		"walk"		MTI_WALK
		"run"		MTI_RUN
		"idle1"		MTI_IDLE1
		"idle2"		MTI_IDLE2
		"fly_stand"	MTI_FLY_STAND
		"fly_walk"	MTI_FLY_WALK	
		"fly_idle1"	MTI_FLY_IDLE1
        "fly_idle2"	MTI_FLY_IDLE2
        "fly_land"	MTI_FLY_GROUND
        "fly_start"	MTI_GROUND_FLY
		"walk"		MTI_BACK
		"walk"		MTI_JUMP1
		"walk"		MTI_JUMP2
		"walk"		MTI_JUMP3
		"stand"		MTI_JUMP4
	}
}
// Orc grincheux
II_SYS_MOUNT_12
{
	SetMount( __MOUNT_WALK );
	SetBindBone( 60 );
	Rotation( 0.0f -95.0f 0.0f );
	SetGroundSpeed( 0.16f );
	SetFlightSpeed( 0.0f );
	PlayerAnimation( MTI_FSTAND1_F );
	SetOffSet( -0.0f 0.20f 0.30f );
	Animation
	{
		"stand"		MTI_STAND
		"walk"		MTI_WALK
		"run"		MTI_RUN
		"idle1"		MTI_IDLE1
		"idle2"		MTI_IDLE2
		"fly_stand"	MTI_FLY_STAND
		"fly_walk"	MTI_FLY_WALK	
		"fly_idle1"	MTI_FLY_IDLE1
        "fly_idle2"	MTI_FLY_IDLE2
        "fly_land"	MTI_FLY_GROUND
        "fly_start"	MTI_GROUND_FLY
		"walk"		MTI_BACK
		"walk"		MTI_JUMP1
		"walk"		MTI_JUMP2
		"walk"		MTI_JUMP3
		"stand"		MTI_JUMP4
	}
}
// Shredder X-3000
II_SYS_MOUNT_13
{
	SetMount( __MOUNT_WALK );
	SetBindBone( 13 );
	Rotation( 0.0f -95.0f 0.0f );
	SetGroundSpeed( 0.24f );
	SetFlightSpeed( 0.0f );
	PlayerAnimation( MTI_FSTAND1_F );
	SetOffSet( -0.0f 0.25f 0.25f );
	Animation
	{
		"stand"		MTI_STAND
		"walk"		MTI_WALK
		"run"		MTI_RUN
		"idle1"		MTI_IDLE1
		"idle2"		MTI_IDLE2
		"fly_stand"	MTI_FLY_STAND
		"fly_walk"	MTI_FLY_WALK	
		"fly_idle1"	MTI_FLY_IDLE1
        "fly_idle2"	MTI_FLY_IDLE2
        "fly_land"	MTI_FLY_GROUND
        "fly_start"	MTI_GROUND_FLY
		"walk"		MTI_BACK
		"walk"		MTI_JUMP1
		"walk"		MTI_JUMP2
		"walk"		MTI_JUMP3
		"stand"		MTI_JUMP4
	}
}
// Lion fantôme
II_SYS_MOUNT_14
{
	SetMount( __MOUNT_WALK );
	SetBindBone( 2 );
	Rotation( 0.0f -95.0f 0.0f );
	SetGroundSpeed( 0.24f );
	SetFlightSpeed( 0.0f );
	PlayerAnimation( MTI_FSTAND1_F );
	SetOffSet( -0.0f -0.30f -0.10f );
	Animation
	{
		"stand"		MTI_STAND
		"walk"		MTI_WALK
		"run"		MTI_RUN
		"idle1"		MTI_IDLE1
		"idle2"		MTI_IDLE2
		"fly_stand"	MTI_FLY_STAND
		"fly_walk"	MTI_FLY_WALK	
		"fly_idle1"	MTI_FLY_IDLE1
        "fly_idle2"	MTI_FLY_IDLE2
        "fly_land"	MTI_FLY_GROUND
        "fly_start"	MTI_GROUND_FLY
		"walk"		MTI_BACK
		"walk"		MTI_JUMP1
		"walk"		MTI_JUMP2
		"walk"		MTI_JUMP3
		"stand"		MTI_JUMP4
	}
}
// Gryllidae
II_SYS_MOUNT_15
{
	SetMount( __MOUNT_WALK );
	SetBindBone( 2 );
	Rotation( 0.0f -95.0f 0.0f );
	SetGroundSpeed( 0.24f );
	SetFlightSpeed( 0.0f );
	PlayerAnimation( MTI_FSTAND1_F );
	SetOffSet( -0.0f -0.20f -0.10f );
	Animation
	{
		"stand"		MTI_STAND
		"walk"		MTI_WALK
		"run"		MTI_RUN
		"idle1"		MTI_IDLE1
		"idle2"		MTI_IDLE2
		"fly_stand"	MTI_FLY_STAND
		"fly_walk"	MTI_FLY_WALK	
		"fly_idle1"	MTI_FLY_IDLE1
        "fly_idle2"	MTI_FLY_IDLE2
        "fly_land"	MTI_FLY_GROUND
        "fly_start"	MTI_GROUND_FLY
		"walk"		MTI_BACK
		"walk"		MTI_JUMP1
		"walk"		MTI_JUMP2
		"walk"		MTI_JUMP3
		"stand"		MTI_JUMP4
	}
}
// Tigre musclé en armure
II_SYS_MOUNT_16
{
	SetMount( __MOUNT_WALK );
	SetBindBone( 1 );
	Rotation( 0.0f -95.0f 0.0f );
	SetGroundSpeed( 0.24f );
	SetFlightSpeed( 0.0f );
	PlayerAnimation( MTI_FSTAND1_F );
	SetOffSet( -0.0f -0.40f 0.85f );
	Animation
	{
		"stand"		MTI_STAND
		"walk"		MTI_WALK
		"run"		MTI_RUN
		"idle1"		MTI_IDLE1
		"idle2"		MTI_IDLE2
		"fly_stand"	MTI_FLY_STAND
		"fly_walk"	MTI_FLY_WALK	
		"fly_idle1"	MTI_FLY_IDLE1
        "fly_idle2"	MTI_FLY_IDLE2
        "fly_land"	MTI_FLY_GROUND
        "fly_start"	MTI_GROUND_FLY
		"walk"		MTI_BACK
		"walk"		MTI_JUMP1
		"walk"	MTI_JUMP2
		"walk"	MTI_JUMP3
		"stand"	MTI_JUMP4
	}
}
// Reine des araignées
II_SYS_MOUNT_17
{
	SetMount( __MOUNT_WALK );
	SetBindBone( 2 );
	Rotation( 0.0f -95.0f 0.0f );
	SetGroundSpeed( 0.32f );
	SetFlightSpeed( 0.0f );
	PlayerAnimation( MTI_FSTAND1_F );
	SetOffSet( -0.0f 0.25f 0.0f );
	Animation
	{
		"stand"		MTI_STAND
		"walk"		MTI_WALK
		"run"		MTI_RUN
		"idle1"		MTI_IDLE1
		"idle2"		MTI_IDLE2
		"fly_stand"	MTI_FLY_STAND
		"fly_walk"	MTI_FLY_WALK
		"fly_idle1"	MTI_FLY_IDLE1
        "fly_idle2"	MTI_FLY_IDLE2
        "fly_land"	MTI_FLY_GROUND
        "fly_start"	MTI_GROUND_FLY
		"walk"		MTI_BACK
		"walk"		MTI_JUMP1
		"walk"	MTI_JUMP2
		"walk"	MTI_JUMP3
		"stand"	MTI_JUMP4
	}
}
// Dinosaure squelette
II_SYS_MOUNT_18
{
	SetMount( __MOUNT_WALK );
	SetBindBone( 2 );
	Rotation( 0.0f -95.0f 0.0f );
	SetGroundSpeed( 0.24f );
	SetFlightSpeed( 0.0f );
	PlayerAnimation( MTI_FSTAND1_F );
	SetOffSet( 0.0f -0.4f 0.0f );
	Animation
	{
		"stand"		MTI_STAND
		"walk"		MTI_WALK
		"run"		MTI_RUN
		"idle1"		MTI_IDLE1
		"idle2"		MTI_IDLE2
		"fly_stand"	MTI_FLY_STAND
		"fly_walk"	MTI_FLY_WALK	
		"fly_idle1"	MTI_FLY_IDLE1
        "fly_idle2"	MTI_FLY_IDLE2
        "fly_land"	MTI_FLY_GROUND
        "fly_start"	MTI_GROUND_FLY
		"walk"		MTI_BACK
		"walk"		MTI_JUMP1
		"walk"	MTI_JUMP2
		"walk"	MTI_JUMP3
		"stand"	MTI_JUMP4
	}
}
// Shredder XYZ-9500
II_SYS_MOUNT_19
{
	SetMount( __MOUNT_WALK_FLY );
	SetBindBone( 108 );
	Rotation( 0.0f -95.0f 0.0f ); 
	SetGroundSpeed( 0.24f );
	SetFlightSpeed( 0.4f );
	PlayerAnimation( MTI_MOUNT02 );
	SetOffSet( +0.0f -0.55f -0.05f );
	Animation
	{
		"stand"		MTI_STAND
		"walk"		MTI_WALK
		"run"		MTI_RUN
		"idle1"		MTI_IDLE1
		"idle2"		MTI_IDLE2
		"flystand"	MTI_FLY_STAND
		"flywalk"	MTI_FLY_WALK 
		"flyidle1"	MTI_FLY_IDLE1
		"flyidle2"	MTI_FLY_IDLE2
		"flyground"	MTI_FLY_GROUND
		"groundfly"	MTI_GROUND_FLY
		"walkback"	MTI_BACK
		"jump"		MTI_JUMP1
		"jumpStart"	MTI_JUMP2
		"jumpFall"	MTI_JUMP3
		"jumpEnd"	MTI_JUMP4
	}
}
// Scorpion rouge
II_SYS_MOUNT_20
{
	SetMount( __MOUNT_WALK );
	SetBindBone( 1 );
	Rotation( 0.0f -95.0f 0.0f );
	SetGroundSpeed( 0.24f );
	SetFlightSpeed( 0.0f );
	PlayerAnimation( MTI_MOUNT02 );
	SetOffSet( -0.0f -0.30f 0.0f );
	Animation
	{
		"stand"		MTI_STAND
		"walk"		MTI_WALK
		"run"		MTI_RUN
		"idle1"		MTI_IDLE1
		"idle2"		MTI_IDLE2
		"fly_stand"	MTI_FLY_STAND
		"fly_walk"	MTI_FLY_WALK	
		"fly_idle1"	MTI_FLY_IDLE1
        "fly_idle2"	MTI_FLY_IDLE2
        "fly_land"	MTI_FLY_GROUND
        "fly_start"	MTI_GROUND_FLY
		"walkback"	MTI_BACK
		"jump"		MTI_JUMP1
		"jumpStart"	MTI_JUMP2
		"jumpFall"	MTI_JUMP3
		"jumpEnd"	MTI_JUMP4
	}
}
// Lion chinois
II_SYS_MOUNT_21
{
	SetMount( __MOUNT_WALK );
	SetBindBone( 2 );
	Rotation( 0.0f -85.0f 0.0f );
	SetGroundSpeed( 0.24f );
	SetFlightSpeed( 0.0f );
	PlayerAnimation( MTI_FSTAND1_F );
	SetOffSet( -0.0f -0.20f 0.20f );
	Animation
	{
		"stand"		MTI_STAND
		"walk"		MTI_WALK
		"run"		MTI_RUN
		"idle1"		MTI_IDLE1
		"idle2"		MTI_IDLE2
		"fly_stand"	MTI_FLY_STAND
		"fly_walk"	MTI_FLY_WALK	
		"fly_idle1"	MTI_FLY_IDLE1
        "fly_idle2"	MTI_FLY_IDLE2
        "fly_land"	MTI_FLY_GROUND
        "fly_start"	MTI_GROUND_FLY
		"walkback"	MTI_BACK
		"jump"		MTI_JUMP1
		"jumpStart"	MTI_JUMP2
		"jumpFall"	MTI_JUMP3
		"jumpEnd"	MTI_JUMP4
	}
}
// Yeti noir
II_SYS_MOUNT_22
{
	SetMount( __MOUNT_WALK );
	SetBindBone( 1 );
	Rotation( 0.0f -85.0f 0.0f );
	SetGroundSpeed( 0.16f );
	SetFlightSpeed( 0.0f );
	PlayerAnimation( MTI_FSTAND1_F );
	SetOffSet( -0.0f 1.50f -1.40f );
	Animation
	{
		"stand"		MTI_STAND
		"walk"		MTI_WALK
		"run"		MTI_RUN
		"idle1"		MTI_IDLE1
		"idle2"		MTI_IDLE2
		"fly_stand"	MTI_FLY_STAND
		"fly_walk"	MTI_FLY_WALK	
		"fly_idle1"	MTI_FLY_IDLE1
        "fly_idle2"	MTI_FLY_IDLE2
        "fly_land"	MTI_FLY_GROUND
        "fly_start"	MTI_GROUND_FLY
		"walkback"	MTI_BACK
		"jump"		MTI_JUMP1
		"jumpStart"	MTI_JUMP2
		"jumpFall"	MTI_JUMP3
		"jumpEnd"	MTI_JUMP4
	}
}

// Moto à chenilles
II_SYS_MOUNT_24
{
	SetMount( __MOUNT_WALK );
	SetBindBone( 2 );
	Rotation( 0.0f -85.0f 0.0f );
	SetGroundSpeed( 0.32f );
	SetFlightSpeed( 0.0f );
	PlayerAnimation( MTI_FSTAND1_F );
	SetOffSet( -0.0f 0.14f 0.15f );
	Animation
	{
		"stand"		MTI_STAND
		"walk"		MTI_WALK
		"run"		MTI_RUN
		"idle1"		MTI_IDLE1
		"idle2"		MTI_IDLE2
		"fly_stand"	MTI_FLY_STAND
		"fly_walk"	MTI_FLY_WALK	
		"fly_idle1"	MTI_FLY_IDLE1
        "fly_idle2"	MTI_FLY_IDLE2
        "fly_land"	MTI_FLY_GROUND
        "fly_start"	MTI_GROUND_FLY
		"walk"		MTI_BACK
		"walk"		MTI_JUMP1
		"walk"		MTI_JUMP2
		"walk"		MTI_JUMP3
		"stand"		MTI_JUMP4
	}
}
// Loup de glace
II_SYS_MOUNT_25
{
	SetMount( __MOUNT_WALK );
	SetBindBone( 10 );
	Rotation( 0.0f -85.0f 0.0f );
	SetGroundSpeed( 0.24 );
	SetFlightSpeed( 0.0f );
	PlayerAnimation( MTI_FSTAND1_F );
	SetOffSet( -0.0f -0.40f 0.22f );
	Animation
	{
		"stand"		MTI_STAND
		"walk"		MTI_WALK
		"run"		MTI_RUN
		"idle1"		MTI_IDLE1
		"idle2"		MTI_IDLE2
		"fly_stand"	MTI_FLY_STAND
		"fly_walk"	MTI_FLY_WALK	
		"fly_idle1"	MTI_FLY_IDLE1
        "fly_idle2"	MTI_FLY_IDLE2
        "fly_land"	MTI_FLY_GROUND
        "fly_start"	MTI_GROUND_FLY
		"walkback"	MTI_BACK
		"jump"		MTI_JUMP1
		"jumpStart"	MTI_JUMP2
		"jumpFall"	MTI_JUMP3
		"jumpEnd"	MTI_JUMP4
	}
}
// Tigre fantôme
II_SYS_MOUNT_26
{
	SetMount( __MOUNT_WALK );
	SetBindBone( 4 );
	Rotation( 0.0f -85.0f -20.0f );
	SetGroundSpeed( 0.24f );
	SetFlightSpeed( 0.0f );
	PlayerAnimation( MTI_FSTAND1_F );
	SetOffSet( -0.0f -0.40f 0.22f );
	Animation
	{
		"stand"		MTI_STAND
		"walk"		MTI_WALK
		"run"		MTI_RUN
		"idle1"		MTI_IDLE1
		"idle2"		MTI_IDLE2
		"fly_stand"	MTI_FLY_STAND
		"fly_walk"	MTI_FLY_WALK	
		"fly_idle1"	MTI_FLY_IDLE1
        "fly_idle2"	MTI_FLY_IDLE2
        "fly_land"	MTI_FLY_GROUND
        "fly_start"	MTI_GROUND_FLY
		"walkback"	MTI_BACK
		"jump"		MTI_JUMP1
		"jumpStart"	MTI_JUMP2
		"jumpFall"	MTI_JUMP3
		"jumpEnd"	MTI_JUMP4
	}
}
// Eléphant de la montagne
II_SYS_MOUNT_27
{
	SetMount( __MOUNT_WALK );
	SetBindBone( 12 );
	Rotation( 0.0f -85.0f -0.0f );
	SetGroundSpeed( 0.16f );
	SetFlightSpeed( 0.0f );
	PlayerAnimation( MTI_FSTAND1_C );
	SetOffSet( -0.0f -0.15f 0.40f );
	Animation
	{
		"stand"		MTI_STAND
		"walk"		MTI_WALK
		"run"		MTI_RUN
		"idle1"		MTI_IDLE1
		"idle2"		MTI_IDLE2
		"fly_stand"	MTI_FLY_STAND
		"fly_walk"	MTI_FLY_WALK	
		"fly_idle1"	MTI_FLY_IDLE1
        "fly_idle2"	MTI_FLY_IDLE2
        "fly_land"	MTI_FLY_GROUND
        "fly_start"	MTI_GROUND_FLY
		"walkback"	MTI_BACK
		"jump"		MTI_JUMP1
		"jumpStart"	MTI_JUMP2
		"jumpFall"	MTI_JUMP3
		"jumpEnd"	MTI_JUMP4
	}
}
// Vélociraptor vicieux
II_SYS_MOUNT_28
{
	SetMount( __MOUNT_WALK );
	SetBindBone( 2 );
	Rotation( 0.0f -85.0f 0.0f );
	SetGroundSpeed( 0.24f );
	SetFlightSpeed( 0.0f );
	PlayerAnimation( MTI_FSTAND1_F );
	SetOffSet( -0.0f -0.40f 0.0f );
	Animation
	{
		"stand"		MTI_STAND
		"walk"		MTI_WALK
		"run"		MTI_RUN
		"idle1"		MTI_IDLE1
		"idle2"		MTI_IDLE2
		"fly_stand"	MTI_FLY_STAND
		"fly_walk"	MTI_FLY_WALK	
		"fly_idle1"	MTI_FLY_IDLE1
        "fly_idle2"	MTI_FLY_IDLE2
        "fly_land"	MTI_FLY_GROUND
        "fly_start"	MTI_GROUND_FLY
		"walkback"	MTI_BACK
		"jump"		MTI_JUMP1
		"jumpStart"	MTI_JUMP2
		"jumpFall"	MTI_JUMP3
		"jumpEnd"	MTI_JUMP4
	}
}
// Cheval de lave fantôme
II_SYS_MOUNT_29
{
	SetMount( __MOUNT_WALK );
	SetBindBone( 3 );
	Rotation( 0.0f -85.0f 0.0f );
	SetGroundSpeed( 0.32f );
	SetFlightSpeed( 0.0f );
	PlayerAnimation( MTI_FSTAND1_F );
	SetOffSet( -0.0f -0.10f 0.20f );
	Animation
	{
		"stand"		MTI_STAND
		"walk"		MTI_WALK
		"run"		MTI_RUN
		"idle1"		MTI_IDLE1
		"idle2"		MTI_IDLE2
		"fly_stand"	MTI_FLY_STAND
		"fly_walk"	MTI_FLY_WALK	
		"fly_idle1"	MTI_FLY_IDLE1
        "fly_idle2"	MTI_FLY_IDLE2
        "fly_land"	MTI_FLY_GROUND
        "fly_start"	MTI_GROUND_FLY
		"walkback"	MTI_BACK
		"jump"		MTI_JUMP1
		"jumpStart"	MTI_JUMP2
		"jumpFall"	MTI_JUMP3
		"jumpEnd"	MTI_JUMP4
	}
}
// Crocodile 
II_SYS_MOUNT_30
{
	SetMount( __MOUNT_WALK );
	SetBindBone( 9 );
	Rotation( 0.0f -85.0f -20.0f );
	SetGroundSpeed( 0.16f );
	SetFlightSpeed( 0.0f );
	PlayerAnimation( MTI_FSTAND1_C );
	SetOffSet( -0.0f -0.45f 0.20f );
	Animation
	{
		"stand"		MTI_STAND
		"walk"		MTI_WALK
		"run"		MTI_RUN
		"idle1"		MTI_IDLE1
		"idle2"		MTI_IDLE2
		"fly_stand"	MTI_FLY_STAND
		"fly_walk"	MTI_FLY_WALK	
		"fly_idle1"	MTI_FLY_IDLE1
        "fly_idle2"	MTI_FLY_IDLE2
        "fly_land"	MTI_FLY_GROUND
        "fly_start"	MTI_GROUND_FLY
		"walkback"	MTI_BACK
		"jump"		MTI_JUMP1
		"jumpStart"	MTI_JUMP2
		"jumpFall"	MTI_JUMP3
		"jumpEnd"	MTI_JUMP4
	}
}
// Biche 
II_SYS_MOUNT_31
{
	SetMount( __MOUNT_WALK );
	SetBindBone( 22 );
	Rotation( 0.0f -85.0f 0.0f );
	SetGroundSpeed( 0.24f );
	SetFlightSpeed( 0.0f );
	PlayerAnimation( MTI_FSTAND1_F );
	SetOffSet( -0.0f -0.50f 0.0f );
	Animation
	{
		"stand"		MTI_STAND
		"walk"		MTI_WALK
		"run"		MTI_RUN
		"idle1"		MTI_IDLE1
		"idle2"		MTI_IDLE2
		"fly_stand"	MTI_FLY_STAND
		"fly_walk"	MTI_FLY_WALK	
		"fly_idle1"	MTI_FLY_IDLE1
        "fly_idle2"	MTI_FLY_IDLE2
        "fly_land"	MTI_FLY_GROUND
        "fly_start"	MTI_GROUND_FLY
		"walkback"	MTI_BACK
		"jump"		MTI_JUMP1
		"jumpStart"	MTI_JUMP2
		"jumpFall"	MTI_JUMP3
		"jumpEnd"	MTI_JUMP4
	}
}
// Eléphant 
II_SYS_MOUNT_32
{
	SetMount( __MOUNT_WALK );
	SetBindBone( 11 );
	Rotation( 0.0f -85.0f 0.0f );
	SetGroundSpeed( 0.16f );
	SetFlightSpeed( 0.0f );
	PlayerAnimation( MTI_FSTAND1_C );
	SetOffSet( -0.0f 0.20f 0.0f );
	Animation
	{
		"stand"		MTI_STAND
		"walk"		MTI_WALK
		"run"		MTI_RUN
		"idle1"		MTI_IDLE1
		"idle2"		MTI_IDLE2
		"fly_stand"	MTI_FLY_STAND
		"fly_walk"	MTI_FLY_WALK	
		"fly_idle1"	MTI_FLY_IDLE1
        "fly_idle2"	MTI_FLY_IDLE2
        "fly_land"	MTI_FLY_GROUND
        "fly_start"	MTI_GROUND_FLY
		"walkback"	MTI_BACK
		"jump"		MTI_JUMP1
		"jumpStart"	MTI_JUMP2
		"jumpFall"	MTI_JUMP3
		"jumpEnd"	MTI_JUMP4
	}
}
// Cerf 
II_SYS_MOUNT_33
{
	SetMount( __MOUNT_WALK );
	SetBindBone( 2 );
	Rotation( 0.0f -85.0f 0.0f );
	SetGroundSpeed( 0.24f );
	SetFlightSpeed( 0.0f );
	PlayerAnimation( MTI_FSTAND1_F );
	SetOffSet( -0.0f -0.2f 0.20f );
	Animation
	{
		"stand"		MTI_STAND
		"walk"		MTI_WALK
		"run"		MTI_RUN
		"idle1"		MTI_IDLE1
		"idle2"		MTI_IDLE2
		"fly_stand"	MTI_FLY_STAND
		"fly_walk"	MTI_FLY_WALK	
		"fly_idle1"	MTI_FLY_IDLE1
        "fly_idle2"	MTI_FLY_IDLE2
        "fly_land"	MTI_FLY_GROUND
        "fly_start"	MTI_GROUND_FLY
		"walkback"	MTI_BACK
		"jump"		MTI_JUMP1
		"jumpStart"	MTI_JUMP2
		"jumpFall"	MTI_JUMP3
		"jumpEnd"	MTI_JUMP4
	}
}
// Tricératops 
II_SYS_MOUNT_34
{
	SetMount( __MOUNT_WALK );
	SetBindBone( 25 );
	Rotation( 0.0f -85.0f 15.0f );
	SetGroundSpeed( 0.12f );
	SetFlightSpeed( 0.0f );
	PlayerAnimation( MTI_FSTAND1_F );
	SetOffSet( -0.0f 1.1f 0.30f );
	Animation
	{
		"stand"		MTI_STAND
		"walk"		MTI_WALK
		"run"		MTI_RUN
		"idle1"		MTI_IDLE1
		"idle2"		MTI_IDLE2
		"fly_stand"	MTI_FLY_STAND
		"fly_walk"	MTI_FLY_WALK	
		"fly_idle1"	MTI_FLY_IDLE1
        "fly_idle2"	MTI_FLY_IDLE2
        "fly_land"	MTI_FLY_GROUND
        "fly_start"	MTI_GROUND_FLY
		"walkback"		MTI_BACK
		"jump"		MTI_JUMP1
		"jumpStart"	MTI_JUMP2
		"jumpFall"	MTI_JUMP3
		"jumpEnd"	MTI_JUMP4
	}
}
// Singe 
II_SYS_MOUNT_35
{
	SetMount( __MOUNT_WALK );
	SetBindBone( 4 );
	Rotation( 0.0f -85.0f 0.0f );
	SetGroundSpeed( 0.24f );
	SetFlightSpeed( 0.0f );
	PlayerAnimation( MTI_FSTAND1_F );
	SetOffSet( -0.0f -0.35f 0.0f );
	Animation
	{
		"stand"		MTI_STAND
		"walk"		MTI_WALK
		"run"		MTI_RUN
		"idle1"		MTI_IDLE1
		"idle2"		MTI_IDLE2
		"fly_stand"	MTI_FLY_STAND
		"fly_walk"	MTI_FLY_WALK	
		"fly_idle1"	MTI_FLY_IDLE1
        "fly_idle2"	MTI_FLY_IDLE2
        "fly_land"	MTI_FLY_GROUND
        "fly_start"	MTI_GROUND_FLY
		"walkback"	MTI_BACK
		"jump"		MTI_JUMP1
		"jumpStart"	MTI_JUMP2
		"jumpFall"	MTI_JUMP3
		"jumpEnd"	MTI_JUMP4
	}
}
// Raptor 
II_SYS_MOUNT_36
{
	SetMount( __MOUNT_WALK );
	SetBindBone( 3 );
	Rotation( 0.0f -85.0f 0.0f );
	SetGroundSpeed( 0.24f );
	SetFlightSpeed( 0.0f );
	PlayerAnimation( MTI_FSTAND1_F );
	SetOffSet( -0.0f -0.40f 0.15f );
	Animation
	{
		"stand"		MTI_STAND
		"walk"		MTI_WALK
		"run"		MTI_RUN
		"idle1"		MTI_IDLE1
		"idle2"		MTI_IDLE2
		"fly_stand"	MTI_FLY_STAND
		"fly_walk"	MTI_FLY_WALK	
		"fly_idle1"	MTI_FLY_IDLE1
        "fly_idle2"	MTI_FLY_IDLE2
        "fly_land"	MTI_FLY_GROUND
        "fly_start"	MTI_GROUND_FLY
		"walkback"	MTI_BACK
		"jump"		MTI_JUMP1
		"jumpStart"	MTI_JUMP2
		"jumpFall"	MTI_JUMP3
		"jumpEnd"	MTI_JUMP4
	}
}
// Ours robot
II_SYS_MOUNT_37
{
	SetMount( __MOUNT_WALK );
	SetBindBone( 16 );
	Rotation( 0.0f -85.0f 15.0f );
	SetGroundSpeed( 0.24f );
	SetFlightSpeed( 0.0f );
	PlayerAnimation( MTI_FSTAND1_F );
	SetOffSet( -0.0f -0.45f -0.45f );
	Animation
	{
		"stand"		MTI_STAND
		"walk"		MTI_WALK
		"run"		MTI_RUN
		"idle1"		MTI_IDLE1
		"idle2"		MTI_IDLE2
		"fly_stand"	MTI_FLY_STAND
		"fly_walk"	MTI_FLY_WALK	
		"fly_idle1"	MTI_FLY_IDLE1
        "fly_idle2"	MTI_FLY_IDLE2
        "fly_land"	MTI_FLY_GROUND
        "fly_start"	MTI_GROUND_FLY
		"walkback"	MTI_BACK
		"jump"		MTI_JUMP1
		"jumpStart"	MTI_JUMP2
		"jumpFall"	MTI_JUMP3
		"jumpEnd"	MTI_JUMP4
	}
}
// Panda émeraude
II_SYS_MOUNT_38
{
	SetMount( __MOUNT_WALK );
	SetBindBone( 15 );
	Rotation( 0.0f -85.0f 0.0f );
	SetGroundSpeed( 0.24f );
	SetFlightSpeed( 0.0f );
	PlayerAnimation( MTI_FSTAND1_F );
	SetOffSet( -0.0f -0.50f -0.0f );
	Animation
	{
		"stand"		MTI_STAND
		"walk"		MTI_WALK
		"run"		MTI_RUN
		"idle1"		MTI_IDLE1
		"idle2"		MTI_IDLE2
		"fly_stand"	MTI_FLY_STAND
		"fly_walk"	MTI_FLY_WALK	
		"fly_idle1"	MTI_FLY_IDLE1
        "fly_idle2"	MTI_FLY_IDLE2
        "fly_land"	MTI_FLY_GROUND
        "fly_start"	MTI_GROUND_FLY
		"walkback"	MTI_BACK
		"jump"		MTI_JUMP1
		"jumpStart"	MTI_JUMP2
		"jumpFall"	MTI_JUMP3
		"jumpEnd"	MTI_JUMP4
	}
}
// Tigre rose
II_SYS_MOUNT_39
{
	SetMount( __MOUNT_WALK );
	SetBindBone( 3 );
	Rotation( 0.0f -85.0f 0.0f );
	SetGroundSpeed( 0.24f );
	SetFlightSpeed( 0.0f );
	PlayerAnimation( MTI_FSTAND1_F );
	SetOffSet( -0.0f -0.20f -0.0f );
	Animation
	{
		"stand"		MTI_STAND
		"walk"		MTI_WALK
		"run"		MTI_RUN
		"idle1"		MTI_IDLE1
		"idle2"		MTI_IDLE2
		"fly_stand"	MTI_FLY_STAND
		"fly_walk"	MTI_FLY_WALK	
		"fly_idle1"	MTI_FLY_IDLE1
        "fly_idle2"	MTI_FLY_IDLE2
        "fly_land"	MTI_FLY_GROUND
        "fly_start"	MTI_GROUND_FLY
		"walkback"	MTI_BACK
		"jump"		MTI_JUMP1
		"jumpStart"	MTI_JUMP2
		"jumpFall"	MTI_JUMP3
		"jumpEnd"	MTI_JUMP4
	}
}
// Tigre orange fantôme
II_SYS_MOUNT_40
{
	SetMount( __MOUNT_WALK );
	SetBindBone( 10 );
	Rotation( 0.0f -85.0f 0.0f );
	SetGroundSpeed( 0.24f );
	SetFlightSpeed( 0.0f );
	PlayerAnimation( MTI_FSTAND1_F );
	SetOffSet( -0.0f -0.20f -0.0f );
	Animation
	{
		"stand"		MTI_STAND
		"walk"		MTI_WALK
		"run"		MTI_RUN
		"idle1"		MTI_IDLE1
		"idle2"		MTI_IDLE2
		"fly_stand"	MTI_FLY_STAND
		"fly_walk"	MTI_FLY_WALK	
		"fly_idle1"	MTI_FLY_IDLE1
        "fly_idle2"	MTI_FLY_IDLE2
        "fly_land"	MTI_FLY_GROUND
        "fly_start"	MTI_GROUND_FLY
		"walkback"	MTI_BACK
		"jump"		MTI_JUMP1
		"jumpStart"	MTI_JUMP2
		"jumpFall"	MTI_JUMP3
		"jumpEnd"	MTI_JUMP4
	}
}
// Licorne majestueuse
II_SYS_MOUNT_41
{
	SetMount( __MOUNT_WALK );
	SetBindBone( 25 );
	Rotation( 0.0f -85.0f 0.0f );
	SetGroundSpeed( 0.32f );
	SetFlightSpeed( 0.0f );
	PlayerAnimation( MTI_MOUNT02 );
	SetOffSet( -0.0f -0.40f -0.0f );
	Animation
	{
		"stand"		MTI_STAND
		"walk"		MTI_WALK
		"run"		MTI_RUN
		"idle1"		MTI_IDLE1
		"idle2"		MTI_IDLE2
		"fly_stand"	MTI_FLY_STAND
		"fly_walk"	MTI_FLY_WALK	
		"fly_idle1"	MTI_FLY_IDLE1
        "fly_idle2"	MTI_FLY_IDLE2
        "fly_land"	MTI_FLY_GROUND
        "fly_start"	MTI_GROUND_FLY
		"walkback"	MTI_BACK
		"jump"		MTI_JUMP1
		"jumpStart"	MTI_JUMP2
		"jumpFall"	MTI_JUMP3
		"jumpEnd"	MTI_JUMP4
	}
}
// Smilodon de glace fantôme
II_SYS_MOUNT_42
{
	SetMount( __MOUNT_WALK );
	SetBindBone( 11 );
	Rotation( 0.0f -85.0f 0.0f );
	SetGroundSpeed( 0.24f );
	SetFlightSpeed( 0.0f );
	PlayerAnimation( MTI_MOUNT01 );
	SetOffSet( -0.0f -0.40f -0.0f );
	Animation
	{
		"stand"		MTI_STAND
		"walk"		MTI_WALK
		"run"		MTI_RUN
		"idle1"		MTI_IDLE1
		"idle2"		MTI_IDLE2
		"fly_stand"	MTI_FLY_STAND
		"fly_walk"	MTI_FLY_WALK	
		"fly_idle1"	MTI_FLY_IDLE1
        "fly_idle2"	MTI_FLY_IDLE2
        "fly_land"	MTI_FLY_GROUND
        "fly_start"	MTI_GROUND_FLY
		"walkback"	MTI_BACK
		"jump"		MTI_JUMP1
		"jumpStart"	MTI_JUMP2
		"jumpFall"	MTI_JUMP3
		"jumpEnd"	MTI_JUMP4
	}
}
// Smilodon noir
II_SYS_MOUNT_43
{
	SetMount( __MOUNT_WALK );
	SetBindBone( 11 );
	Rotation( 0.0f -85.0f 0.0f );
	SetGroundSpeed( 0.24f );
	SetFlightSpeed( 0.0f );
	PlayerAnimation( MTI_MOUNT01 );
	SetOffSet( -0.0f -0.40f -0.0f );
	Animation
	{
		"stand"		MTI_STAND
		"walk"		MTI_WALK
		"run"		MTI_RUN
		"idle1"		MTI_IDLE1
		"idle2"		MTI_IDLE2
		"fly_stand"	MTI_FLY_STAND
		"fly_walk"	MTI_FLY_WALK	
		"fly_idle1"	MTI_FLY_IDLE1
        "fly_idle2"	MTI_FLY_IDLE2
        "fly_land"	MTI_FLY_GROUND
        "fly_start"	MTI_GROUND_FLY
		"walkback"	MTI_BACK
		"jump"		MTI_JUMP1
		"jumpStart"	MTI_JUMP2
		"jumpFall"	MTI_JUMP3
		"jumpEnd"	MTI_JUMP4
	}
}
// 	Oiseau de course vicieux
II_SYS_MOUNT_44
{
	SetMount( __MOUNT_WALK );
	SetBindBone( 2 );
	Rotation( 0.0f -85.0f 0.0f );
	SetGroundSpeed( 0.40f );
	SetFlightSpeed( 0.0f );
	PlayerAnimation( MTI_FSTAND1_F );
	SetOffSet( -0.0f -0.25f -0.0f );
	Animation
	{
		"stand"		MTI_STAND
		"walk"		MTI_WALK
		"run"		MTI_RUN
		"idle1"		MTI_IDLE1
		"idle2"		MTI_IDLE2
		"fly_stand"	MTI_FLY_STAND
		"fly_walk"	MTI_FLY_WALK	
		"fly_idle1"	MTI_FLY_IDLE1
        "fly_idle2"	MTI_FLY_IDLE2
        "fly_land"	MTI_FLY_GROUND
        "fly_start"	MTI_GROUND_FLY
		"walkback"		MTI_BACK
		"jump"		MTI_JUMP1
		"jumpStart"	MTI_JUMP2
		"jumpFall"	MTI_JUMP3
		"jumpEnd"	MTI_JUMP4
	}
}
// Hippogryphe
II_SYS_MOUNT_45
{
	SetMount( __MOUNT_WALK );
	SetBindBone( 40 );
	Rotation( 0.0f -85.0f 0.0f );
	SetGroundSpeed( 0.24f );
	SetFlightSpeed( 0.0f );
	PlayerAnimation( MTI_FSTAND1_F );
	SetOffSet( -0.0f 0.10f -0.20f );
	Animation
	{
		"stand"		MTI_STAND
		"walk"		MTI_WALK
		"run"		MTI_RUN
		"idle1"		MTI_IDLE1
		"idle2"		MTI_IDLE2
		"fly_stand"	MTI_FLY_STAND
		"fly_walk"	MTI_FLY_WALK	
		"fly_idle1"	MTI_FLY_IDLE1
        "fly_idle2"	MTI_FLY_IDLE2
        "fly_land"	MTI_FLY_GROUND
        "fly_start"	MTI_GROUND_FLY
		"walkback"	MTI_BACK
		"jump"		MTI_JUMP1
		"jumpStart"	MTI_JUMP2
		"jumpFall"	MTI_JUMP3
		"jumpEnd"	MTI_JUMP4
	}
}
// Hippogryphe de glace
II_SYS_MOUNT_46
{
	SetMount( __MOUNT_WALK );
	SetBindBone( 13 );
	Rotation( 0.0f -85.0f 0.0f );
	SetGroundSpeed( 0.24f );
	SetFlightSpeed( 0.0f );
	PlayerAnimation( MTI_FSTAND1_F );
	SetOffSet( -0.0f -0.05f 0.0f );
	Animation
	{
		"stand"		MTI_STAND
		"walk"		MTI_WALK
		"run"		MTI_RUN
		"idle1"		MTI_IDLE1
		"idle2"		MTI_IDLE2
		"fly_stand"	MTI_FLY_STAND
		"fly_walk"	MTI_FLY_WALK	
		"fly_idle1"	MTI_FLY_IDLE1
        "fly_idle2"	MTI_FLY_IDLE2
        "fly_land"	MTI_FLY_GROUND
        "fly_start"	MTI_GROUND_FLY
		"walkback"	MTI_BACK
		"jump"		MTI_JUMP1
		"jumpStart"	MTI_JUMP2
		"jumpFall"	MTI_JUMP3
		"jumpEnd"	MTI_JUMP4
	}
}
// Dragon cauchemar
II_SYS_MOUNT_47
{
	SetMount( __MOUNT_WALK_FLY );
	SetBindBone( 92 );
	Rotation( 0.0f -85.0f 10.0f ); 
	SetGroundSpeed( 0.12f );
	SetFlightSpeed( 0.40f );
	PlayerAnimation( MTI_FSTAND1_C );
	SetOffSet( -0.0f -0.0f 0.0f );
	Animation
	{
		"stand"		MTI_STAND
		"walk"		MTI_WALK
		"run"		MTI_RUN
		"idle1"		MTI_IDLE1
		"idle2"		MTI_IDLE2
		"fly_stand"	MTI_FLY_STAND
		"fly_walk"	MTI_FLY_WALK 
		"fly_idle1"	MTI_FLY_IDLE1
		"fly_idle2"	MTI_FLY_IDLE2
		"fly_land"	MTI_FLY_GROUND
		"fly_start"	MTI_GROUND_FLY
		"walkback"	MTI_BACK
		"jump"		MTI_JUMP1
		"jumpStart"	MTI_JUMP2
		"jumpFall"	MTI_JUMP3
		"jumpEnd"	MTI_JUMP4
	}
}
// Dragon tonnerre
II_SYS_MOUNT_48
{
	SetMount( __MOUNT_WALK_FLY );
	SetBindBone( 37 );
	Rotation( 0.0f -85.0f 10.0f ); 
	SetGroundSpeed( 0.12f );
	SetFlightSpeed( 0.40f );
	PlayerAnimation( MTI_FSTAND1_C );
	SetOffSet( -0.0f -0.10f 0.0f );
	Animation
	{
		"stand"		MTI_STAND
		"walk"		MTI_WALK
		"run"		MTI_RUN
		"idle1"		MTI_IDLE1
		"idle2"		MTI_IDLE2
		"fly_stand"	MTI_FLY_STAND
		"fly_walk"	MTI_FLY_WALK 
		"fly_idle1"	MTI_FLY_IDLE1
		"fly_idle2"	MTI_FLY_IDLE2
		"fly_land"	MTI_FLY_GROUND
		"fly_start"	MTI_GROUND_FLY
		"walkback"	MTI_BACK
		"jump"		MTI_JUMP1
		"jumpStart"	MTI_JUMP2
		"jumpFall"	MTI_JUMP3
		"jumpEnd"	MTI_JUMP4
	}
}
// Dragon de l'enfer
II_SYS_MOUNT_49
{
	SetMount( __MOUNT_WALK_FLY );
	SetBindBone( 35 );
	Rotation( 0.0f -85.0f 10.0f ); 
	SetGroundSpeed( 0.12f );
	SetFlightSpeed( 0.60f );
	PlayerAnimation( MTI_FSTAND1_F );
	SetOffSet( -0.0f 0.35f 0.0f );
	Animation
	{
		"stand"		MTI_STAND
		"walk"		MTI_WALK
		"run"		MTI_RUN
		"idle1"		MTI_IDLE1
		"idle2"		MTI_IDLE2
		"fly_stand"	MTI_FLY_STAND
		"fly_walk"	MTI_FLY_WALK 
		"fly_idle1"	MTI_FLY_IDLE1
		"fly_idle2"	MTI_FLY_IDLE2
		"fly_land"	MTI_FLY_GROUND
		"fly_start"	MTI_GROUND_FLY
		"walkback"	MTI_BACK
		"jump"		MTI_JUMP1
		"jumpStart"	MTI_JUMP2
		"jumpFall"	MTI_JUMP3
		"jumpEnd"	MTI_JUMP4
	}
}
// Dragon éclair
II_SYS_MOUNT_50
{
	SetMount( __MOUNT_WALK_FLY );
	SetBindBone( 37 );
	Rotation( 0.0f -85.0f 10.0f ); 
	SetGroundSpeed( 0.24f );
	SetFlightSpeed( 0.30f );
	PlayerAnimation( MTI_FSTAND1_F );
	SetOffSet( -0.0f 0.15f 0.15f );
	Animation
	{
		"stand"		MTI_STAND
		"walk"		MTI_WALK
		"run"		MTI_RUN
		"idle1"		MTI_IDLE1
		"idle2"		MTI_IDLE2
		"fly_stand"	MTI_FLY_STAND
		"fly_walk"	MTI_FLY_WALK 
		"fly_idle1"	MTI_FLY_IDLE1
		"fly_idle2"	MTI_FLY_IDLE2
		"fly_land"	MTI_FLY_GROUND
		"fly_start"	MTI_GROUND_FLY
		"walkback"	MTI_BACK
		"jump"		MTI_JUMP1
		"jumpStart"	MTI_JUMP2
		"jumpFall"	MTI_JUMP3
		"jumpEnd"	MTI_JUMP4
	}
}
// Dragon kawaii
II_SYS_MOUNT_51
{
	SetMount( __MOUNT_WALK_FLY );
	SetBindBone( 37 );
	Rotation( 0.0f -85.0f 10.0f ); 
	SetGroundSpeed( 0.24f );
	SetFlightSpeed( 0.30f );
	PlayerAnimation( MTI_FSTAND1_F );
	SetOffSet( -0.0f 0.0f 0.0f );
	Animation
	{
		"stand"		MTI_STAND
		"walk"		MTI_WALK
		"run"		MTI_RUN
		"idle1"		MTI_IDLE1
		"idle2"		MTI_IDLE2
		"fly_stand"	MTI_FLY_STAND
		"fly_walk"	MTI_FLY_WALK 
		"fly_idle1"	MTI_FLY_IDLE1
		"fly_idle2"	MTI_FLY_IDLE2
		"fly_land"	MTI_FLY_GROUND
		"fly_start"	MTI_GROUND_FLY
		"walkback"	MTI_BACK
		"jump"		MTI_JUMP1
		"jumpStart"	MTI_JUMP2
		"jumpFall"	MTI_JUMP3
		"jumpEnd"	MTI_JUMP4
	}
}
// Cerbère de glace
II_SYS_MOUNT_52
{
	SetMount( __MOUNT_WALK );
	SetBindBone( 36 );
	Rotation( 0.0f 85.0f -30.0f );
	SetGroundSpeed( 0.24f );
	SetFlightSpeed( 0.0f );
	PlayerAnimation( MTI_MOUNT02 );
	SetOffSet( -0.0f -0.20f 0.10f );
	Animation
	{
		"stand"		MTI_STAND
		"walk"		MTI_WALK
		"run"		MTI_RUN
		"idle1"		MTI_IDLE1
		"idle2"		MTI_IDLE2
		"fly_stand"	MTI_FLY_STAND
		"fly_walk"	MTI_FLY_WALK	
		"fly_idle1"	MTI_FLY_IDLE1
        "fly_idle2"	MTI_FLY_IDLE2
        "fly_land"	MTI_FLY_GROUND
        "fly_start"	MTI_GROUND_FLY
		"walk"		MTI_BACK
		"walk"		MTI_JUMP1
		"walk"		MTI_JUMP2
		"walk"		MTI_JUMP3
		"stand"		MTI_JUMP4
	}
}

// Garuru
II_SYS_MOUNT_54
{
	SetMount( __MOUNT_WALK );
	SetBindBone( 3 );
	Rotation( 0.0f 85.0f 200.0f );
	SetGroundSpeed( 0.2f );
	SetFlightSpeed( 0.0f );
	PlayerAnimation( MTI_MOUNT02 );
	SetOffSet( -0.0f -0.40f 0.0f );
	Animation
	{
		"stand"		MTI_STAND
		"walk"		MTI_WALK
		"run"		MTI_RUN
		"idle1"		MTI_IDLE1
		"idle2"		MTI_IDLE2
		"fly_stand"	MTI_FLY_STAND
		"fly_walk"	MTI_FLY_WALK	
		"fly_idle1"	MTI_FLY_IDLE1
        "fly_idle2"	MTI_FLY_IDLE2
        "fly_land"	MTI_FLY_GROUND
        "fly_start"	MTI_GROUND_FLY
		"run"		MTI_BACK
		"walk"		MTI_JUMP1
		"walk"		MTI_JUMP2
		"walk"		MTI_JUMP3
		"stand"		MTI_JUMP4
	}
}

// Vaisseau des Mille et une Nuits
II_SYS_MOUNT_56
{
	SetMount( __MOUNT_WALK ); //__MOUNT_WALK_FLY
	SetBindBone( 5 );
	Rotation( -90.0f -170.0f 0.0f ); 
	SetGroundSpeed( 0.24f );
	SetFlightSpeed( 0.0f ); //0.40f
	PlayerAnimation( MTI_SCHNEIDERSITZ );
	SetOffSet( 0.20f 0.37f -0.98f );
	Animation
	{
		"stand"		MTI_STAND
		"walk"		MTI_WALK
		"run"		MTI_RUN
		"idle1"		MTI_IDLE1
		"idle2"		MTI_IDLE2
		"fly_stand"	MTI_FLY_STAND
		"fly_walk"	MTI_FLY_WALK 
		"fly_idle1"	MTI_FLY_IDLE1
		"fly_idle2"	MTI_FLY_IDLE2
		"fly_land"	MTI_FLY_GROUND
		"fly_start"	MTI_GROUND_FLY
		"walkback"	MTI_BACK
		"jump"		MTI_JUMP1
		"jumpStart"	MTI_JUMP2
		"jumpFall"	MTI_JUMP3
		"jumpEnd"	MTI_JUMP4
	}
}
// Balançoire
II_SYS_MOUNT_57
{
	SetMount( __MOUNT_WALK ); //__MOUNT_WALK_FLY
	SetBindBone( 29 );
	Rotation( -90.0f -0.0f 0.0f ); 
	SetGroundSpeed( 0.16f );
	SetFlightSpeed( 0.0f ); //0.24f
	PlayerAnimation( MTI_SOFASITZ );
	SetOffSet( 0.05f 0.21f -0.37f );
	Animation
	{
		"stand"		MTI_STAND
		"walk"		MTI_WALK
		"run"		MTI_RUN
		"idle1"		MTI_IDLE1
		"idle2"		MTI_IDLE2
		"fly_stand"	MTI_FLY_STAND
		"fly_walk"	MTI_FLY_WALK 
		"fly_idle1"	MTI_FLY_IDLE1
		"fly_idle2"	MTI_FLY_IDLE2
		"fly_land"	MTI_FLY_GROUND
		"fly_start"	MTI_GROUND_FLY
		"walkback"	MTI_BACK
		"jump"		MTI_JUMP1
		"jumpStart"	MTI_JUMP2
		"jumpFall"	MTI_JUMP3
		"jumpEnd"	MTI_JUMP4
	}
}
// Adorable lama
II_SYS_MOUNT_58
{
	SetMount( __MOUNT_WALK );
	SetBindBone( 44 );
	Rotation( -90.0f 0.0f +0.0f );
	SetGroundSpeed( 0.24f );
	SetFlightSpeed( 0.0f );
	PlayerAnimation( MTI_FSTAND1_F );
	SetOffSet( +0.0f -0.57f -0.0f );
	Animation
	{
		"stand"		MTI_STAND
		"walk"		MTI_WALK
		"run"		MTI_RUN
		"idle1"		MTI_IDLE1
		"idle2"		MTI_IDLE2
		"fly_stand"	MTI_FLY_STAND
		"fly_walk"	MTI_FLY_WALK 
		"fly_idle1"	MTI_FLY_IDLE1
		"fly_idle2"	MTI_FLY_IDLE2
		"fly_land"	MTI_FLY_GROUND
		"fly_start"	MTI_GROUND_FLY
		"walk"		MTI_BACK
		"walk"		MTI_JUMP1
		"walk"		MTI_JUMP2
		"walk"		MTI_JUMP3
		"stand"		MTI_JUMP4
	}
}
// Justine la patate chevauchable
II_SYS_MOUNT_59
{
	SetMount( __MOUNT_WALK );
	SetBindBone( 0 );
	Rotation( 145.0f 300.0f -945.0f );
	SetGroundSpeed( 0.2f );
	SetFlightSpeed( 0.0f );
	PlayerAnimation( MTI_FSTAND1_F );
	SetOffSet( -0.0f -0.20f 0.20f );
	Animation
	{
		"stand"	MTI_STAND	
		"walk"	MTI_WALK	
		"walk"	MTI_RUN
		"idle1"	MTI_IDLE1	
		"idle1"	MTI_IDLE2
		"fly_stand"	MTI_FLY_STAND
		"fly_walk"	MTI_FLY_WALK 
		"fly_idle1"	MTI_FLY_IDLE1
		"fly_idle2"	MTI_FLY_IDLE2
		"fly_land"	MTI_FLY_GROUND
		"fly_start"	MTI_GROUND_FLY
		"walk"		MTI_BACK
		"walk"		MTI_JUMP1
		"walk"		MTI_JUMP2
		"walk"		MTI_JUMP3
		"stand"		MTI_JUMP4
	}
}

// Custom Mount - Kiyo
II_SYS_MOUNT_60
{
	SetMount( __MOUNT_WALK );
	SetBindBone( 10 );
	Rotation( 180.0f 95.0f -90.0f );
	SetGroundSpeed( 0.24f );
	SetFlightSpeed( 0.0f );
	PlayerAnimation( MTI_FSTAND1_F );
	SetOffSet( +0.0f -0.57f -0.0f );
	Animation
	{
		"stand"		MTI_STAND
		"walk"		MTI_WALK
		"walk"		MTI_RUN
		"stand"		MTI_IDLE1
		"stand"		MTI_IDLE2
		"fly_stand"	MTI_FLY_STAND
		"fly_walk"	MTI_FLY_WALK 
		"fly_idle1"	MTI_FLY_IDLE1
		"fly_idle2"	MTI_FLY_IDLE2
		"fly_land"	MTI_FLY_GROUND
		"fly_start"	MTI_GROUND_FLY
		"walk"		MTI_BACK
		"walk"		MTI_JUMP1
		"walk"		MTI_JUMP2
		"walk"		MTI_JUMP3
		"stand"		MTI_JUMP4
	}
}
