//////////////////////////////////////////////////////////////////////////
//																		//
// 					Titanium MMO Monster Clash Script					//
//																		//
//////////////////////////////////////////////////////////////////////////

SetMaxGuildMember 	= 5 	// Set the Maximum Member per Guild for a Clash
SetRegisterMinutes 	= 5 	// Set the Time in Minutes how long the Register is Open
SetFightMinutes 	= 10 	// Set the Time in Minutes how long all Guilds have Time for the Clash
SetWaitMinutes 		= 1 	// Set the Time in Minutes how long Players have Time till the First Stage begins

//Rank 0 = Master
//Rank 1 = KingPin
//Rank 2 = Captain
//Rank 3 = Supporter
//Rank 4 = Rookie

SetRegisterRank = 2 	// Set the Minimum Rank to register a Guild to Clash and Choose the Members

// Registration Cost = 100 M.
SetRegisterCost = 100000000

// Monster Clash Map = Arena
SetClashMapId = WI_WORLD_MC

// Spawn to Flaris Location when Clash Ends
SetReturnPort(WI_WORLD_MADRIGAL, 6975.6 , 3331.5 )

SetWaitPort(535.639 , 489.781) 								// Set the point for all Clash Members where to wait till Start
SetFightPort(519.838 , 494.953) 						// Set the point for all Clash Members to fight

// In this Example Sunday Monday and TuesDay the Clash starts at 7PM
//AddClashTime(0, 19:00)								// Add a new clash time
//AddClashTime(1, 19:00)								// Add a new clash time
//AddClashTime(2, 19:00)								// Add a new clash time

// Titanium Clash Every Day
AddClashTime(0, 19:00)									// Add a new clash time
AddClashTime(1, 19:00)									// Add a new clash time
AddClashTime(2, 19:00)									// Add a new clash time
AddClashTime(3, 19:00)									// Add a new clash time
AddClashTime(4, 19:00)									// Add a new clash time
AddClashTime(5, 19:00)									// Add a new clash time
AddClashTime(6, 19:00)									// Add a new clash time
AddClashTime(7, 19:00)									// Add a new clash time

// In this Example the First Place Guild all Clash Members get a Wooden Sword
//AddReward(Rank, ItemId, ItemCount)
//AddReward(1, 21, 1) //Add a Reward for a Clash Rank

// Titanium Clash Reward
AddReward(1, 35084, 100) // = 100x Monster Clash Fragment


// Titanium Redo Stages ! 

AddState 0 //Add a new Stage/Wave to the Clash, always begin with Stage 0 and then count + 1
{
    AddMonster(MI_MCLASHKRRR, 493.240906, 511.366486, 0)//1 = aggro
}

AddState 1
{
    AddMonster(MI_MCLASHSKELDEVIL_1, 493.240906, 511.366486, 1)//1 = aggro
}

AddState 2
{
    AddMonster(MI_MCLASHFLAMEMETEO, 493.240906, 511.366486, 1)//1 = aggro
}

AddState 3
{
	AddMonster(MI_MCLASHLUCIFER, 493.240906, 511.366486, 1)//1 = aggro
}