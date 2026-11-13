//TournamentPreset x=tournamentID must be unique
//(
//	teamsize		x=player each team
//	rounds			x=rounds teams play against each other
//	roundtime		x=roundtime in seconds
//	starttime		hour(00-23) minute(00-59) day(1-31) month(1-12) year
//	friendlyfire	x=friendlyfire on(=1) off(=0)
//	levelreq		x=min level y=max level allowed to apply
//	classes			x=classes allowed to apply (0=all)
//	teamsreq		x=amount of teams required to start the tournament
//	rewardfirst		x=itemid	y=num	(reward first place, can add multiple)
//	rewardsecond	x=itemid	y=num	(reward second place, can add multiple)
//	rewardall		x=itemid	y=num	(reward for all participants, can add multiple)
//)

//classes
//#define	JOB_LORDTEMPLER_HERO	32
//#define	JOB_STORMBLADE_HERO		33
//#define	JOB_WINDLURKER_HERO		34
//#define	JOB_CRACKSHOOTER_HERO	35
//#define	JOB_FLORIST_HERO		36
//#define	JOB_FORCEMASTER_HERO	37
//#define	JOB_MENTALIST_HERO		38
//#define	JOB_ELEMENTORLORD_HERO	39
TournamentPreset
{
		teamsize		1
		rounds			3
		roundtime		180		
		starttime		19	00	15	07	2021
		friendlyfire	0	
		levelreq		0	155
		classes			0
		teamsreq		6
		rewardfirst		II_GEN_FOO_INS_LOLLIPOP	3
		rewardfirst		II_GEN_FOO_INS_LOLLIPOP	30
		rewardsecond	II_GEN_FOO_INS_LOLLIPOP 2
		rewardsecond	II_GEN_FOO_INS_LOLLIPOP 20
		rewardall		II_GEN_FOO_INS_LOLLIPOP	1
		rewardall		II_GEN_FOO_INS_LOLLIPOP	10
}
TournamentPreset
{
		teamsize		3
		rounds			3
		roundtime		180		
		starttime		19	00	15	07	2021
		friendlyfire	0	
		levelreq		0	155
		classes			0
		teamsreq		6
		rewardfirst		II_GEN_FOO_INS_LOLLIPOP	99
		rewardsecond	II_GEN_FOO_INS_LOLLIPOP 99
		rewardall		II_GEN_FOO_INS_LOLLIPOP	99
}
TournamentPreset
{
		teamsize		4
		rounds			5
		roundtime		60		
		starttime		19	00	15	07	2021
		friendlyfire	1	
		levelreq		10	40
		classes			0
		teamsreq		6
		rewardfirst		II_GEN_FOO_INS_LOLLIPOP	99
		rewardsecond	II_GEN_FOO_INS_LOLLIPOP 99
		rewardall		II_GEN_FOO_INS_LOLLIPOP	99
}