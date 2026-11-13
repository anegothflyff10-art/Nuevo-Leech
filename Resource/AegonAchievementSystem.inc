//###########################
//                   		#
//  Category - Adventure  	#
//                   		#
//     LAST ID = 89	 		#
//                   		#
//    	01.06.2021     		#
//                   		#
//###########################
//                			#
//                			#
//###############################################################################################
//																								#
//	AEGACH_KILLXMOBS		kill x mobs for x progress											#
//	AEGACH_VISITWORLD		visit a world nTypeVar = worldID									#
//	AEGACH_VISITTOWN		visit a town nTypeVar = townID										#
//	AEGACH_VISITCONT		visit a continent area nTypeVar = contID							#
//	AEGACH_COLLECTXTIME		collecting time in hours, no requirements							#
//	AEGACH_JOINGUILD		join a guild														#
//	AEGACH_GUILDEXP			contribute exp to guild												#
//	AEGACH_GUILDPENYA		contribute penya to guild											#
//	AEGACH_ONLINETIME		online time in hours, no requirements								#
//	AEGACH_USEANARCHY		use anarchy buffs x times											#
//	AEGACH_JOINPARTY		first time party join												#
//	AEGACH_PARTYLEVELUP		+1 every party level up												#
//	AEGACH_PARTYLEVEL		reach partylevel x = nTypeVar										#
//	AEGACH_PARTYSKILL		activate a partyskill for the first time							#
//	AEGACH_VENDOPEN			open a private shop													#
//	AEGACH_NPCVENDOPEN		use an offline vendor												#
//	AEGACH_VENDSELLS		sell items x times vendor/vend npc, no requirements					#
//	AEGACH_VENDBUYS			buy x times from player shop										#
//	AEGACH_PERINNUM			nTypeVar Perin in inventory											#
//	AEGACH_RPNUM			nTypeVar Red Perin in inventory										#
//	AEGACH_DUNGEONRUN		finish x dungeon runs - nTypeExtension with worldID for specific	#
//	AEGACH_XACHIEVES        nTypeVar achievements finished, no requirements    				 	#
//	AEGACH_GWWIN			participate and win gw x times										#
//	AEGACH_GWMVP			become gw mvp x times												#
//	AEGACH_GWKILLS			x gw kills															#
//	AEGACH_MINIGWIN			win x minigames														#
//	AEGACH_VISITREGION		visit region, example: szRegionName = IDS_WDMADRIGAL_WLD_000006		#
//	AEGACH_PETLEVEL			Reach pet level nTypeExtension: D=1/C=2/B=3/A=4/S=5					#	testing needed
//	AEGACH_LEVEL			Reach level x=nTypeVar, maxProgress=1								#	testing needed
//	AEGACH_BADGE			Activate x Badges													#	testing needed
//	AEGACH_INVSRT			Sort inventory x times (spammable keep low number)					#	testing needed
//	AEGACH_FRNDSHP			x friends in messenger												#	testing needed
//	------------------		requireAchievement [ID] = Require Achievement 						#
//																								#
//																								#
//																								#
// AegonAchievementSystem.inc | AchievementCategories.inc                      					#
// defineText.h | textClient.inc                                               					#
//###############################################################################################


///////////////////////////////-------EXPLORATION-------////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////

Achievement 0
{
	name 					"Flaris City"
	category 				"Exploration" 
	subcategory				"Flaris"
	descriptionTID			TID_DESC_ACHIEVEMENT_1
	shortDescriptionTID 	TID_SHORT_DESC_ACHIEVEMENT_1
	imageFile				Flaris_City.png
	reward					II_SYS_ACH_POINT
	rewardNum				1	
	rewardTradeable			1
	maxProgress				1
	achievementType			AEGACH_VISITTOWN
	nTypeVar				TOWN_FLARINENOSPLE
}

Achievement 1
{
	name 					"Saint Morning City"
	category 				"Exploration" 
	subcategory				"Saint Morning"
	descriptionTID			TID_DESC_ACHIEVEMENT_2
	shortDescriptionTID 	TID_SHORT_DESC_ACHIEVEMENT_2
	imageFile				SM_Exploration.png
	reward					II_SYS_ACH_POINT
	rewardNum				1	
	rewardTradeable			1
	maxProgress				1
	achievementType			AEGACH_VISITTOWN
	nTypeVar				TOWN_SAINCITY
}

Achievement 2
{
	name 					"Darkon City"
	category 				"Exploration" 
	subcategory				"Darkon"
	descriptionTID			TID_DESC_ACHIEVEMENT_3
	shortDescriptionTID 	TID_SHORT_DESC_ACHIEVEMENT_3
	imageFile				Darkon_City.png
	reward					II_SYS_ACH_POINT
	rewardNum				1	
	rewardTradeable			1
	maxProgress				1
	achievementType			AEGACH_VISITTOWN
	nTypeVar				TOWN_DARKEN
}

Achievement 3
{
	name 					"Eliun City"
	category 				"Exploration" 
	subcategory				"Eliun"
	descriptionTID			TID_DESC_ACHIEVEMENT_4
	shortDescriptionTID 	TID_SHORT_DESC_ACHIEVEMENT_4
	imageFile				Eliun_City.png
	reward					II_SYS_ACH_POINT
	rewardNum				1	
	rewardTradeable			1
	maxProgress				1
	achievementType			AEGACH_VISITTOWN
	nTypeVar				TOWN_ELIUN
}


Achievement 4
{
	name 					"[Flaris I] The Villa"
	category 				"Exploration" 
	subcategory				"Flaris"
	descriptionTID			TID_DESC_ACHIEVEMENT_5
	shortDescriptionTID 	TID_SHORT_DESC_ACHIEVEMENT_5
	imageFile				Flaris_the_villa.png
	reward					II_SYS_ACH_POINT
	rewardNum				1	
	rewardTradeable			1
	maxProgress				1
	achievementType			AEGACH_VISITREGION
	szRegionName			IDS_WDMADRIGAL_WLD_000014
	requireAchievement		0
}

Achievement 5
{
	name 					"[Flaris II] Priest of Confession"
	category 				"Exploration" 
	subcategory				"Flaris"
	descriptionTID			TID_DESC_ACHIEVEMENT_6
	shortDescriptionTID 	TID_SHORT_DESC_ACHIEVEMENT_6
	imageFile				Flaris_II_0.png
	reward					II_SYS_ACH_POINT
	rewardNum				1	
	rewardTradeable			1
	maxProgress				1
	achievementType			AEGACH_VISITREGION
	szRegionName			IDS_WDMADRIGAL_WLD_000107
	requireAchievement		4
}

Achievement 6
{
	name 					"[Flaris III] Madren Town"
	category 				"Exploration" 
	subcategory				"Flaris"
	descriptionTID			TID_DESC_ACHIEVEMENT_7
	shortDescriptionTID 	TID_SHORT_DESC_ACHIEVEMENT_7
	imageFile				Flaris_III_Madren_Town.png
	reward					II_SYS_ACH_POINT
	rewardNum				1	
	rewardTradeable			1
	maxProgress				1
	achievementType			AEGACH_VISITREGION
	szRegionName			IDS_WDMADRIGAL_WLD_000025
	requireAchievement		4
	requireAchievement		5
}

Achievement 7
{
	name 					"[Flaris IV] Departed Souls"
	category 				"Exploration" 
	subcategory				"Flaris"
	descriptionTID			TID_DESC_ACHIEVEMENT_8
	shortDescriptionTID 	TID_SHORT_DESC_ACHIEVEMENT_8
	imageFile				Flaris_IV_Departed_souls.png
	reward					II_SYS_ACH_POINT
	rewardNum				1	
	rewardTradeable			1
	maxProgress				1
	achievementType			AEGACH_VISITREGION
	szRegionName			IDS_WDMADRIGAL_WLD_000040
	requireAchievement		4
	requireAchievement		5
	requireAchievement		6
}

Achievement 8
{
	name 					"[Flaris V] The Twins"
	category 				"Exploration" 
	subcategory				"Flaris"
	descriptionTID			TID_DESC_ACHIEVEMENT_9
	shortDescriptionTID 	TID_SHORT_DESC_ACHIEVEMENT_9
	imageFile				Flaris_V_The_Twins.png
	reward					II_SYS_ACH_POINT
	rewardNum				1	
	rewardTradeable			1
	maxProgress				1
	achievementType			AEGACH_VISITREGION
	szRegionName			IDS_WDMADRIGAL_WLD_000108
	requireAchievement		4
	requireAchievement		5
	requireAchievement		6
	requireAchievement		7
}

Achievement 9
{
	name 					"[SM I] Marketplace"
	category 				"Exploration" 
	subcategory				"Saint Morning"
	descriptionTID			TID_DESC_ACHIEVEMENT_10
	shortDescriptionTID 	TID_SHORT_DESC_ACHIEVEMENT_10
	imageFile				SM_I_Market.png
	reward					II_SYS_ACH_POINT
	rewardNum				1	
	rewardTradeable			1
	maxProgress				1
	achievementType			AEGACH_VISITREGION
	szRegionName			IDS_WDMADRIGAL_WLD_000035
	requireAchievement		1
}

Achievement 10
{
	name 					"[SM II] Holy Bell Tower"
	category 				"Exploration" 
	subcategory				"Saint Morning"
	descriptionTID			TID_DESC_ACHIEVEMENT_11
	shortDescriptionTID 	TID_SHORT_DESC_ACHIEVEMENT_11
	imageFile				SM_II_Tower.png
	reward					II_SYS_ACH_POINT
	rewardNum				1	
	rewardTradeable			1
	maxProgress				1
	achievementType			AEGACH_VISITREGION
	szRegionName			IDS_WDMADRIGAL_WLD_000035
	requireAchievement		9
}

Achievement 11
{
	name 					"[SM III] Pumpkin's Farm"
	category 				"Exploration" 
	subcategory				"Saint Morning"
	descriptionTID			TID_DESC_ACHIEVEMENT_12
	shortDescriptionTID 	TID_SHORT_DESC_ACHIEVEMENT_12
	imageFile				SM_III_Farm.png
	reward					II_SYS_ACH_POINT
	rewardNum				1	
	rewardTradeable			1
	maxProgress				1
	achievementType			AEGACH_VISITREGION
	szRegionName			IDS_WDMADRIGAL_WLD_000108
	requireAchievement		9
	requireAchievement		10
}

Achievement 12
{
	name 					"[SM IV] Mystic Meteorite"
	category 				"Exploration" 
	subcategory				"Saint Morning"
	descriptionTID			TID_DESC_ACHIEVEMENT_13
	shortDescriptionTID 	TID_SHORT_DESC_ACHIEVEMENT_13
	imageFile				SM_IV_Meterorite.png
	reward					II_SYS_ACH_POINT
	rewardNum				1	
	rewardTradeable			1
	maxProgress				1
	achievementType			AEGACH_VISITREGION
	szRegionName			IDS_WDMADRIGAL_WLD_000109
	requireAchievement		9
	requireAchievement		10
	requireAchievement		11
}

Achievement 57 //TODO: Kontrollieren
{
	name 					"[Flaris VI] Jack in a Box"
	category 				"Exploration" 
	subcategory				"Flaris"
	descriptionTID			TID_DESC_ACHIEVEMENT_57
	shortDescriptionTID 	TID_SHORT_DESC_ACHIEVEMENT_57
	imageFile				Flaris_IV_Jack_in_a_box.png
	reward					II_SYS_ACH_POINT
	rewardNum				1	
	rewardTradeable			1
	maxProgress				1
	achievementType			AEGACH_VISITREGION
	szRegionName			IDS_WDMADRIGAL_WLD_000110
	requireAchievement		4
	requireAchievement		5
	requireAchievement		6
	requireAchievement		7
}

Achievement 58
{
	name 					"[Flaris VII] Mysterious Cult"
	category 				"Exploration" 
	subcategory				"Flaris"
	descriptionTID			TID_DESC_ACHIEVEMENT_58
	shortDescriptionTID 	TID_SHORT_DESC_ACHIEVEMENT_58
	imageFile				Flaris_VII_Mysterious_Cult.png
	reward					II_SYS_ACH_POINT
	rewardNum				1	
	rewardTradeable			1
	maxProgress				1
	achievementType			AEGACH_VISITREGION
	szRegionName			IDS_WDMADRIGAL_WLD_000118
	requireAchievement		4
	requireAchievement		5
	requireAchievement		6
	requireAchievement		7
	requireAchievement		57
}

Achievement 59
{
	name 					"[Flaris VIII] The Astronomer"
	category 				"Exploration" 
	subcategory				"Flaris"
	descriptionTID			TID_DESC_ACHIEVEMENT_59
	shortDescriptionTID 	TID_SHORT_DESC_ACHIEVEMENT_59
	imageFile				Flaris_VIII_The_Astronomer.png
	reward					II_SYS_ACH_POINT
	rewardNum				1	
	rewardTradeable			1
	maxProgress				1
	achievementType			AEGACH_VISITREGION
	szRegionName			IDS_WDMADRIGAL_WLD_000008
	requireAchievement		4
	requireAchievement		5
	requireAchievement		6
	requireAchievement		7
	requireAchievement		57
	requireAchievement		58
}

Achievement 60
{
	name 					"[Flaris IX] The Red Gang"
	category 				"Exploration" 
	subcategory				"Flaris"
	descriptionTID			TID_DESC_ACHIEVEMENT_60
	shortDescriptionTID 	TID_SHORT_DESC_ACHIEVEMENT_60
	imageFile				Flaris_IX_The_Red_Gang.png
	reward					II_SYS_ACH_POINT
	rewardNum				1	
	rewardTradeable			1
	maxProgress				1
	achievementType			AEGACH_VISITREGION
	szRegionName			IDS_WDMADRIGAL_WLD_000112
	requireAchievement		4
	requireAchievement		5
	requireAchievement		6
	requireAchievement		7
	requireAchievement		57
	requireAchievement		58
	requireAchievement		59
}

Achievement 61
{
	name 					"[Flaris X] The Red Gang's secret place"
	category 				"Exploration" 
	subcategory				"Flaris"
	descriptionTID			TID_DESC_ACHIEVEMENT_61
	shortDescriptionTID 	TID_SHORT_DESC_ACHIEVEMENT_61
	imageFile				Flaris_X_The_Red_Gangs_secret_place.png
	reward					II_SYS_ACH_POINT
	rewardNum				1	
	rewardTradeable			1
	maxProgress				1
	achievementType			AEGACH_VISITREGION
	szRegionName			IDS_WDMADRIGAL_WLD_000113
	requireAchievement		4
	requireAchievement		5
	requireAchievement		6
	requireAchievement		7
	requireAchievement		57
	requireAchievement		58
	requireAchievement		59
	requireAchievement		60
}

Achievement 62
{
	name 					"[SM V] Saint Morning Station"
	category 				"Exploration" 
	subcategory				"Saint Morning"
	descriptionTID			TID_DESC_ACHIEVEMENT_62
	shortDescriptionTID 	TID_SHORT_DESC_ACHIEVEMENT_62
	imageFile				SM_V_Saint_Morning_Station.png
	reward					II_SYS_ACH_POINT
	rewardNum				1	
	rewardTradeable			1
	maxProgress				1
	achievementType			AEGACH_VISITREGION
	szRegionName			IDS_WDMADRIGAL_WLD_000114
	requireAchievement		9
	requireAchievement		10
	requireAchievement		11
	requireAchievement		12
}

Achievement 63
{
	name 					"[SM VI] Tree of Life"
	category 				"Exploration" 
	subcategory				"Saint Morning"
	descriptionTID			TID_DESC_ACHIEVEMENT_63
	shortDescriptionTID 	TID_SHORT_DESC_ACHIEVEMENT_63
	imageFile				SM_VI_TreeofLife.png
	reward					II_SYS_ACH_POINT
	rewardNum				1	
	rewardTradeable			1
	maxProgress				1
	achievementType			AEGACH_VISITREGION
	szRegionName			IDS_WDMADRIGAL_WLD_000117
	requireAchievement		9
	requireAchievement		10
	requireAchievement		11
	requireAchievement		12
	requireAchievement		62
}

Achievement 64
{
	name 					"[SM VII] Pest Control"
	category 				"Exploration" 
	subcategory				"Saint Morning"
	descriptionTID			TID_DESC_ACHIEVEMENT_64
	shortDescriptionTID 	TID_SHORT_DESC_ACHIEVEMENT_64
	imageFile				SM_VII_Pest_Control.png
	reward					II_SYS_ACH_POINT
	rewardNum				5	
	rewardTradeable			1
	maxProgress				1
	achievementType			AEGACH_VISITREGION
	szRegionName			IDS_WDMADRIGAL_WLD_000115
	requireAchievement		9
	requireAchievement		10
	requireAchievement		11
	requireAchievement		12
	requireAchievement		62
	requireAchievement		63
}

Achievement 65
{
	name 					"[SM VIII] Mysterious Altar"
	category 				"Exploration" 
	subcategory				"Saint Morning"
	descriptionTID			TID_DESC_ACHIEVEMENT_65
	shortDescriptionTID 	TID_SHORT_DESC_ACHIEVEMENT_65
	imageFile				SM_VIII_Mysterious_Altar.png
	reward					II_SYS_ACH_POINT
	rewardNum				5	
	rewardTradeable			1
	maxProgress				1
	achievementType			AEGACH_VISITREGION
	szRegionName			IDS_WDMADRIGAL_WLD_000111
	requireAchievement		9
	requireAchievement		10
	requireAchievement		11
	requireAchievement		12
	requireAchievement		62
	requireAchievement		63
	requireAchievement		64
}

Achievement 66
{
	name 					"[SM IX] Jack in a box II"
	category 				"Exploration" 
	subcategory				"Saint Morning"
	descriptionTID			TID_DESC_ACHIEVEMENT_66
	shortDescriptionTID 	TID_SHORT_DESC_ACHIEVEMENT_66
	imageFile				SM_IX_Jack_in_a_box_II.png
	reward					II_SYS_ACH_POINT
	rewardNum				5	
	rewardTradeable			1
	maxProgress				1
	achievementType			AEGACH_VISITREGION
	szRegionName			IDS_WDMADRIGAL_WLD_000116
	requireAchievement		9
	requireAchievement		10
	requireAchievement		11
	requireAchievement		12
	requireAchievement		62
	requireAchievement		63
	requireAchievement		64
	requireAchievement		65
}

Achievement 67
{
	name 					"[SM X] Priest of Confession II"
	category 				"Exploration" 
	subcategory				"Saint Morning"
	descriptionTID			TID_DESC_ACHIEVEMENT_67
	shortDescriptionTID 	TID_SHORT_DESC_ACHIEVEMENT_67
	imageFile				Image_Soon.png
	reward					II_SYS_ACH_POINT
	rewardNum				5	
	rewardTradeable			1
	maxProgress				1
	achievementType			AEGACH_VISITREGION
	szRegionName			IDS_WDMADRIGAL_WLD_000118
	requireAchievement		9
	requireAchievement		10
	requireAchievement		11
	requireAchievement		12
	requireAchievement		62
	requireAchievement		63
	requireAchievement		64
	requireAchievement		65
	requireAchievement		66
}

Achievement 68
{
	name 					"[Darkon I] The Gang II"
	category 				"Exploration" 
	subcategory				"Darkon"
	descriptionTID			TID_DESC_ACHIEVEMENT_68
	shortDescriptionTID 	TID_SHORT_DESC_ACHIEVEMENT_68
	imageFile				Darkon_I_The_Gang_II.png
	reward					II_SYS_ACH_POINT
	rewardNum				1	
	rewardTradeable			1
	maxProgress				1
	achievementType			AEGACH_VISITREGION
	szRegionName			IDS_WDMADRIGAL_WLD_000121
	requireAchievement		2
}

Achievement 69
{
	name 					"[Darkon II] The Gang III"
	category 				"Exploration" 
	subcategory				"Darkon"
	descriptionTID			TID_DESC_ACHIEVEMENT_69
	shortDescriptionTID 	TID_SHORT_DESC_ACHIEVEMENT_69
	imageFile				Darkon_II_The_Gang_III.png
	reward					II_SYS_ACH_POINT
	rewardNum				1	
	rewardTradeable			1
	maxProgress				1
	achievementType			AEGACH_VISITREGION
	szRegionName			IDS_WDMADRIGAL_WLD_000119
	requireAchievement		2
	requireAchievement		68
}

Achievement 70
{
	name 					"[Darkon III] Someone in need"
	category 				"Exploration" 
	subcategory				"Darkon"
	descriptionTID			TID_DESC_ACHIEVEMENT_70
	shortDescriptionTID 	TID_SHORT_DESC_ACHIEVEMENT_70
	imageFile				Darkon_III_Someone_in_need.png
	reward					II_SYS_ACH_POINT
	rewardNum				1	
	rewardTradeable			1
	maxProgress				1
	achievementType			AEGACH_VISITREGION
	szRegionName			IDS_WDMADRIGAL_WLD_000120
	requireAchievement		2
	requireAchievement		68
	requireAchievement		69
}

Achievement 71
{
	name 					"[Darkon IV] Priest of Confession III"
	category 				"Exploration" 
	subcategory				"Darkon"
	descriptionTID			TID_DESC_ACHIEVEMENT_71
	shortDescriptionTID 	TID_SHORT_DESC_ACHIEVEMENT_71
	imageFile				Priest_of_Confession_III.png
	reward					II_SYS_ACH_POINT
	rewardNum				1	
	rewardTradeable			1
	maxProgress				1
	achievementType			AEGACH_VISITREGION
	szRegionName			IDS_WDMADRIGAL_WLD_000122
	requireAchievement		2
	requireAchievement		68
	requireAchievement		69
	requireAchievement		70
}

Achievement 72
{
	name 					"[Darkon V] Jack in a box III"
	category 				"Exploration" 
	subcategory				"Darkon"
	descriptionTID			TID_DESC_ACHIEVEMENT_72
	shortDescriptionTID 	TID_SHORT_DESC_ACHIEVEMENT_72
	imageFile				Darkon_V_Jack_in_a_box_III.png
	reward					II_SYS_ACH_POINT
	rewardNum				5	
	rewardTradeable			1
	maxProgress				1
	achievementType			AEGACH_VISITREGION
	szRegionName			IDS_WDMADRIGAL_WLD_000123
	requireAchievement		2
	requireAchievement		68
	requireAchievement		69
	requireAchievement		70
	requireAchievement		71
}

Achievement 73
{
	name 					"[Darkon VI] Baba Yaga"
	category 				"Exploration" 
	subcategory				"Darkon"
	descriptionTID			TID_DESC_ACHIEVEMENT_73
	shortDescriptionTID 	TID_SHORT_DESC_ACHIEVEMENT_73
	imageFile				Darkon_VI_Baba_Yaga.png
	reward					II_SYS_ACH_POINT
	rewardNum				5	
	rewardTradeable			1
	maxProgress				1
	achievementType			AEGACH_VISITREGION
	szRegionName			IDS_WDMADRIGAL_WLD_000055
	requireAchievement		2
	requireAchievement		68
	requireAchievement		69
	requireAchievement		70
	requireAchievement		71
	requireAchievement		72
}

Achievement 74
{
	name 					"[Darkon VII] Shroom Biome"
	category 				"Exploration" 
	subcategory				"Darkon"
	descriptionTID			TID_DESC_ACHIEVEMENT_74
	shortDescriptionTID 	TID_SHORT_DESC_ACHIEVEMENT_74
	imageFile				Darkon_VII_Shroom_Biome.png
	reward					II_SYS_ACH_POINT
	rewardNum				5	
	rewardTradeable			1
	maxProgress				1
	achievementType			AEGACH_VISITREGION
	szRegionName			IDS_WDMADRIGAL_WLD_000061
	requireAchievement		2
	requireAchievement		68
	requireAchievement		69
	requireAchievement		70
	requireAchievement		71
	requireAchievement		72
	requireAchievement		73
}

Achievement 75
{
	name 					"[Darkon VIII] Yggdrasil's Seed"
	category 				"Exploration" 
	subcategory				"Darkon"
	descriptionTID			TID_DESC_ACHIEVEMENT_75
	shortDescriptionTID 	TID_SHORT_DESC_ACHIEVEMENT_75
	imageFile				Darkon_VIII_Yggdrasils_Seed.png
	reward					II_SYS_ACH_POINT
	rewardNum				5	
	rewardTradeable			1
	maxProgress				1
	achievementType			AEGACH_VISITREGION
	szRegionName			IDS_WDMADRIGAL_WLD_000070
	requireAchievement		2
	requireAchievement		68
	requireAchievement		69
	requireAchievement		70
	requireAchievement		71
	requireAchievement		72
	requireAchievement		73
	requireAchievement		74
}

Achievement 76
{
	name 					"[Darkon IX] Underground Pond"
	category 				"Exploration" 
	subcategory				"Darkon"
	descriptionTID			TID_DESC_ACHIEVEMENT_76
	shortDescriptionTID 	TID_SHORT_DESC_ACHIEVEMENT_76
	imageFile				Darkon_IX_Underground_pond.png
	reward					II_SYS_ACH_POINT
	rewardNum				5	
	rewardTradeable			1
	maxProgress				1
	achievementType			AEGACH_VISITREGION
	szRegionName			IDS_WDMADRIGAL_WLD_000124
	requireAchievement		2
	requireAchievement		68
	requireAchievement		69
	requireAchievement		70
	requireAchievement		71
	requireAchievement		72
	requireAchievement		73
	requireAchievement		74
	requireAchievement		75
}

Achievement 77
{
	name 					"[Darkon X] Long gone future"
	category 				"Exploration" 
	subcategory				"Darkon"
	descriptionTID			TID_DESC_ACHIEVEMENT_77
	shortDescriptionTID 	TID_SHORT_DESC_ACHIEVEMENT_77
	imageFile				Darkon_X_long_gone_future.png
	reward					II_SYS_ACH_POINT
	rewardNum				5	
	rewardTradeable			1
	maxProgress				1
	achievementType			AEGACH_VISITREGION
	szRegionName			IDS_WDMADRIGAL_WLD_000125
	requireAchievement		2
	requireAchievement		68
	requireAchievement		69
	requireAchievement		70
	requireAchievement		71
	requireAchievement		72
	requireAchievement		73
	requireAchievement		74
	requireAchievement		75
	requireAchievement		76
}

Achievement 78
{
	name 					"Bahara Village"
	category 				"Exploration" 
	subcategory				"Bahara Desert"
	descriptionTID			TID_DESC_ACHIEVEMENT_78
	shortDescriptionTID 	TID_SHORT_DESC_ACHIEVEMENT_78
	imageFile				Bahara_Desert.png
	reward					II_SYS_ACH_POINT
	rewardNum				1	
	rewardTradeable			1
	maxProgress				1
	achievementType			AEGACH_VISITREGION
	szRegionName			IDS_WDMADRIGAL_WLD_000126
}

Achievement 79
{
	name 					"Discover Kaillun"
	category 				"Exploration" 
	subcategory				"Kaillun Grassland"
	descriptionTID			TID_DESC_ACHIEVEMENT_79
	shortDescriptionTID 	TID_SHORT_DESC_ACHIEVEMENT_79
	imageFile				Kaillun_Grassland.png
	reward					II_SYS_ACH_POINT
	rewardNum				1	
	rewardTradeable			1
	maxProgress				1
	achievementType			AEGACH_VISITREGION
	szRegionName			IDS_WDMADRIGAL_WLD_000073

}

Achievement 80
{
	name 					"[Shaduwar I] Discover Shaduwar"
	category 				"Exploration" 
	subcategory				"Shaduwar"
	descriptionTID			TID_DESC_ACHIEVEMENT_81
	shortDescriptionTID 	TID_SHORT_DESC_ACHIEVEMENT_81
	imageFile				Shaduwar_I.png
	reward					II_SYS_ACH_POINT
	rewardNum				1	
	rewardTradeable			1
	maxProgress				1
	achievementType			AEGACH_VISITREGION
	szRegionName			IDS_WDMADRIGAL_WLD_000082
}

Achievement 81
{
	name 					"[Shaduwar II] Northern marshes"
	category 				"Exploration" 
	subcategory				"Shaduwar"
	descriptionTID			TID_DESC_ACHIEVEMENT_82
	shortDescriptionTID 	TID_SHORT_DESC_ACHIEVEMENT_82
	imageFile				Northern_marshes.png
	reward					II_SYS_ACH_POINT
	rewardNum				1	
	rewardTradeable			1
	maxProgress				1
	achievementType			AEGACH_VISITREGION
	szRegionName			IDS_WDMADRIGAL_WLD_000127
	requireAchievement		80
}

Achievement 82
{
	name 					"[Shaduwar III] Central lake"
	category 				"Exploration" 
	subcategory				"Shaduwar"
	descriptionTID			TID_DESC_ACHIEVEMENT_83
	shortDescriptionTID 	TID_SHORT_DESC_ACHIEVEMENT_83
	imageFile				Central_lake.png
	reward					II_SYS_ACH_POINT
	rewardNum				1	
	rewardTradeable			1
	maxProgress				1
	achievementType			AEGACH_VISITREGION
	szRegionName			IDS_WDMADRIGAL_WLD_000129
	requireAchievement		80
	requireAchievement		81
}

Achievement 83
{
	name 					"[Shaduwar IV] Southern marshes"
	category 				"Exploration" 
	subcategory				"Shaduwar"
	descriptionTID			TID_DESC_ACHIEVEMENT_84
	shortDescriptionTID 	TID_SHORT_DESC_ACHIEVEMENT_84
	imageFile				Southern_marshes.png
	reward					II_SYS_ACH_POINT
	rewardNum				1	
	rewardTradeable			1
	maxProgress				1
	achievementType			AEGACH_VISITREGION
	szRegionName			IDS_WDMADRIGAL_WLD_000128
	requireAchievement		80
	requireAchievement		81
	requireAchievement		82
}

Achievement 84
{
	name 					"[Shaduwar V] Big spider"
	category 				"Exploration" 
	subcategory				"Shaduwar"
	descriptionTID			TID_DESC_ACHIEVEMENT_85
	shortDescriptionTID 	TID_SHORT_DESC_ACHIEVEMENT_85
	imageFile				Big_spider.png
	reward					II_SYS_ACH_POINT
	rewardNum				1	
	rewardTradeable			1
	maxProgress				1
	achievementType			AEGACH_VISITREGION
	szRegionName			IDS_WDMADRIGAL_WLD_000130
	requireAchievement		80
	requireAchievement		81
	requireAchievement		82
	requireAchievement		83
}

Achievement 85
{
	name 					"[VotR I] Village"
	category 				"Exploration" 
	subcategory				"Valley of the Risen"
	descriptionTID			TID_DESC_ACHIEVEMENT_86
	shortDescriptionTID 	TID_SHORT_DESC_ACHIEVEMENT_86
	imageFile				Village.png
	reward					II_SYS_ACH_POINT
	rewardNum				1	
	rewardTradeable			1
	maxProgress				1
	achievementType			AEGACH_VISITREGION
	szRegionName			IDS_WDMADRIGAL_WLD_000131
}

Achievement 86
{
	name 					"[VotR II] Skull"
	category 				"Exploration" 
	subcategory				"Valley of the Risen"
	descriptionTID			TID_DESC_ACHIEVEMENT_87
	shortDescriptionTID 	TID_SHORT_DESC_ACHIEVEMENT_87
	imageFile				Skull.png
	reward					II_SYS_ACH_POINT
	rewardNum				1	
	rewardTradeable			1
	maxProgress				1
	achievementType			AEGACH_VISITREGION
	szRegionName			IDS_WDMADRIGAL_WLD_000132
	requireAchievement		85
}

Achievement 87
{
	name 					"[VotR III] Deserted place"
	category 				"Exploration" 
	subcategory				"Valley of the Risen"
	descriptionTID			TID_DESC_ACHIEVEMENT_88
	shortDescriptionTID 	TID_SHORT_DESC_ACHIEVEMENT_88
	imageFile				Deserted_place.png
	reward					II_SYS_ACH_POINT
	rewardNum				1	
	rewardTradeable			1
	maxProgress				1
	achievementType			AEGACH_VISITREGION
	szRegionName			IDS_WDMADRIGAL_WLD_000133
	requireAchievement		85
	requireAchievement		86
}

Achievement 88
{
	name 					"[VotR IV] The pit"
	category 				"Exploration" 
	subcategory				"Valley of the Risen"
	descriptionTID			TID_DESC_ACHIEVEMENT_89
	shortDescriptionTID 	TID_SHORT_DESC_ACHIEVEMENT_89
	imageFile				The_pit.png
	reward					II_SYS_ACH_POINT
	rewardNum				1	
	rewardTradeable			1
	maxProgress				1
	achievementType			AEGACH_VISITREGION
	szRegionName			IDS_WDMADRIGAL_WLD_000134
	requireAchievement		85
	requireAchievement		86
	requireAchievement		87
}

Achievement 89
{
	name 					"[VotR V] Assassin camp"
	category 				"Exploration" 
	subcategory				"Valley of the Risen"
	descriptionTID			TID_DESC_ACHIEVEMENT_90
	shortDescriptionTID 	TID_SHORT_DESC_ACHIEVEMENT_90
	imageFile				Assassin_camp.png
	reward					II_SYS_ACH_POINT
	rewardNum				1	
	rewardTradeable			1
	maxProgress				1
	achievementType			AEGACH_VISITREGION
	szRegionName			IDS_WDMADRIGAL_WLD_000135
	requireAchievement		85
	requireAchievement		86
	requireAchievement		87
	requireAchievement		88
}

Achievement 90
{
	name 					"[Kaillun I] Lycan Sentry"
	category 				"Exploration" 
	subcategory				"Kaillun Grassland"
	descriptionTID			TID_DESC_ACHIEVEMENT_91
	shortDescriptionTID 	TID_SHORT_DESC_ACHIEVEMENT_91
	imageFile				Lycan_Sentry.png
	reward					II_SYS_ACH_POINT
	rewardNum				1	
	rewardTradeable			1
	maxProgress				1
	achievementType			AEGACH_VISITREGION
	szRegionName			IDS_WDMADRIGAL_WLD_000136
	requireAchievement		79
}

Achievement 91
{
	name 					"[Kaillun II] Lycan Archer"
	category 				"Exploration" 
	subcategory				"Kaillun Grassland"
	descriptionTID			TID_DESC_ACHIEVEMENT_92
	shortDescriptionTID 	TID_SHORT_DESC_ACHIEVEMENT_92
	imageFile				Lycan_Archer.png
	reward					II_SYS_ACH_POINT
	rewardNum				1	
	rewardTradeable			1
	maxProgress				1
	achievementType			AEGACH_VISITREGION
	szRegionName			IDS_WDMADRIGAL_WLD_000137
	requireAchievement		79
	requireAchievement		90
}

Achievement 92
{
	name 					"[Kaillun III] Lycan Magician"
	category 				"Exploration" 
	subcategory				"Kaillun Grassland"
	descriptionTID			TID_DESC_ACHIEVEMENT_93
	shortDescriptionTID 	TID_SHORT_DESC_ACHIEVEMENT_93
	imageFile				Lycan_Magician.png
	reward					II_SYS_ACH_POINT
	rewardNum				1	
	rewardTradeable			1
	maxProgress				1
	achievementType			AEGACH_VISITREGION
	szRegionName			IDS_WDMADRIGAL_WLD_000138
	requireAchievement		79
	requireAchievement		90
	requireAchievement		91
}

Achievement 93
{
	name 					"[Kaillun IV] Lycan Warrior"
	category 				"Exploration" 
	subcategory				"Kaillun Grassland"
	descriptionTID			TID_DESC_ACHIEVEMENT_94
	shortDescriptionTID 	TID_SHORT_DESC_ACHIEVEMENT_94
	imageFile				Lycan_Warrior.png
	reward					II_SYS_ACH_POINT
	rewardNum				1	
	rewardTradeable			1
	maxProgress				1
	achievementType			AEGACH_VISITREGION
	szRegionName			IDS_WDMADRIGAL_WLD_000139
	requireAchievement		79
	requireAchievement		90
	requireAchievement		91
	requireAchievement		92
}

Achievement 94
{
	name 					"[Kaillun V] Shrine of Barga"
	category 				"Exploration" 
	subcategory				"Kaillun Grassland"
	descriptionTID			TID_DESC_ACHIEVEMENT_95
	shortDescriptionTID 	TID_SHORT_DESC_ACHIEVEMENT_95
	imageFile				Shrine_of_Barga.png
	reward					II_SYS_ACH_POINT
	rewardNum				1	
	rewardTradeable			1
	maxProgress				1
	achievementType			AEGACH_VISITREGION
	szRegionName			IDS_WDMADRIGAL_WLD_000140
	requireAchievement		79
	requireAchievement		90
	requireAchievement		91
	requireAchievement		92
	requireAchievement		93
}

Achievement 95
{
	name 					"[Bahara I] Mars Mine"
	category 				"Exploration" 
	subcategory				"Bahara Desert"
	descriptionTID			TID_DESC_ACHIEVEMENT_96
	shortDescriptionTID 	TID_SHORT_DESC_ACHIEVEMENT_96
	imageFile				Mars_Mine.png
	reward					II_SYS_ACH_POINT
	rewardNum				1	
	rewardTradeable			1
	maxProgress				1
	achievementType			AEGACH_VISITREGION
	szRegionName			IDS_WDMADRIGAL_WLD_000102
	requireAchievement		78
}

Achievement 96
{
	name 					"[Bahara II] Wind Rock"
	category 				"Exploration" 
	subcategory				"Bahara Desert"
	descriptionTID			TID_DESC_ACHIEVEMENT_97
	shortDescriptionTID 	TID_SHORT_DESC_ACHIEVEMENT_97
	imageFile				Wind_Rock.png
	reward					II_SYS_ACH_POINT
	rewardNum				1	
	rewardTradeable			1
	maxProgress				1
	achievementType			AEGACH_VISITREGION
	szRegionName			IDS_WDMADRIGAL_WLD_000141
	requireAchievement		78
	requireAchievement		95
}

Achievement 97
{
	name 					"[Bahara III] Desert of death"
	category 				"Exploration" 
	subcategory				"Bahara Desert"
	descriptionTID			TID_DESC_ACHIEVEMENT_98
	shortDescriptionTID 	TID_SHORT_DESC_ACHIEVEMENT_98
	imageFile				Desert_of_death.png
	reward					II_SYS_ACH_POINT
	rewardNum				1	
	rewardTradeable			1
	maxProgress				1
	achievementType			AEGACH_VISITREGION
	szRegionName			IDS_WDMADRIGAL_WLD_000142
	requireAchievement		78
	requireAchievement		95
	requireAchievement		96
}

Achievement 98
{
	name 					"[Bahara IV] The nest"
	category 				"Exploration" 
	subcategory				"Bahara Desert"
	descriptionTID			TID_DESC_ACHIEVEMENT_99
	shortDescriptionTID 	TID_SHORT_DESC_ACHIEVEMENT_99
	imageFile				The_nest.png
	reward					II_SYS_ACH_POINT
	rewardNum				1	
	rewardTradeable			1
	maxProgress				1
	achievementType			AEGACH_VISITREGION
	szRegionName			IDS_WDMADRIGAL_WLD_000143
	requireAchievement		78
	requireAchievement		95
	requireAchievement		96
	requireAchievement		97
}

///////////////////////////////////////////////////////////////////////////////////////////////


///////////////////////////-------DUNGEON COMPLETION-------/////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////

Achievement 13
{
	name 					"Ophidian: Completion"
	category 				"Dungeon" 
	subcategory				"Completion"
	descriptionTID			TID_DESC_ACHIEVEMENT_14
	shortDescriptionTID 	TID_SHORT_DESC_ACHIEVEMENT_14
	imageFile				Ophidian_Completion.png
	reward					II_SYS_ACH_POINT
	rewardNum				5	
	rewardTradeable			1
	maxProgress				1
	nTypeExtension			WI_INSTANCE_OPHIDIAN
	achievementType			AEGACH_DUNGEONRUN
}

Achievement 14
{
	name 					"The Wilds: Completion"
	category 				"Dungeon" 
	subcategory				"Completion"
	descriptionTID			TID_DESC_ACHIEVEMENT_15
	shortDescriptionTID 	TID_SHORT_DESC_ACHIEVEMENT_15
	imageFile				The_Wilds_Completion.png
	reward					II_SYS_ACH_POINT
	rewardNum				20	
	rewardTradeable			1
	maxProgress				20
	nTypeExtension			WI_INSTANCE_RUSTIA
	achievementType			AEGACH_DUNGEONRUN
}

Achievement 15
{
	name 					"The Savage Wilds: Completion"
	category 				"Dungeon" 
	subcategory				"Completion"
	descriptionTID			TID_DESC_ACHIEVEMENT_16
	shortDescriptionTID 	TID_SHORT_DESC_ACHIEVEMENT_16
	imageFile				The_Wilds_Completion.png
	reward					II_SYS_ACH_POINT
	rewardNum				30	
	rewardTradeable			1
	maxProgress				20
	nTypeExtension			WI_INSTANCE_RUSTIA_1
	achievementType			AEGACH_DUNGEONRUN
}

Achievement 16
{
	name 					"Eupresia: Completion"
	category 				"Dungeon" 
	subcategory				"Completion"
	descriptionTID			TID_DESC_ACHIEVEMENT_17
	shortDescriptionTID 	TID_SHORT_DESC_ACHIEVEMENT_17
	imageFile				Eupresia_Completion.png
	reward					II_SYS_ACH_POINT
	rewardNum				30	
	rewardTradeable			1
	maxProgress				20
	nTypeExtension			WI_INSTANCE_UPRESIA
	achievementType			AEGACH_DUNGEONRUN
}

Achievement 17
{
	name 					"Eupresia Master: Completion"
	category 				"Dungeon" 
	subcategory				"Completion"
	descriptionTID			TID_DESC_ACHIEVEMENT_18
	shortDescriptionTID 	TID_SHORT_DESC_ACHIEVEMENT_18
	imageFile				Eupresia_Completion.png
	reward					II_SYS_ACH_POINT
	rewardNum				35	
	rewardTradeable			1
	maxProgress				20
	nTypeExtension			WI_INSTANCE_UPRESIA_1
	achievementType			AEGACH_DUNGEONRUN
}

Achievement 18
{
	name 					"Herneos: Completion"
	category 				"Dungeon" 
	subcategory				"Completion"
	descriptionTID			TID_DESC_ACHIEVEMENT_80
	shortDescriptionTID 	TID_SHORT_DESC_ACHIEVEMENT_80
	imageFile				Herneos_Completion.png
	reward					II_SYS_ACH_POINT
	rewardNum				30	
	rewardTradeable			1
	maxProgress				20
	nTypeExtension			WI_INSTANCE_HERNEOS
	achievementType			AEGACH_DUNGEONRUN
}

Achievement 19
{
	name 					"Herneos Master: Completion"
	category 				"Dungeon" 
	subcategory				"Completion"
	descriptionTID			TID_DESC_ACHIEVEMENT_19
	shortDescriptionTID 	TID_SHORT_DESC_ACHIEVEMENT_19
	imageFile				Herneos_Completion.png
	reward					II_SYS_ACH_POINT
	rewardNum				35	
	rewardTradeable			1
	maxProgress				20
	nTypeExtension			WI_INSTANCE_HERNEOS_1
	achievementType			AEGACH_DUNGEONRUN
}

Achievement 20
{
	name 					"Sanpres: Completion"
	category 				"Dungeon" 
	subcategory				"Completion"
	descriptionTID			TID_DESC_ACHIEVEMENT_20
	shortDescriptionTID 	TID_SHORT_DESC_ACHIEVEMENT_20
	imageFile				Sanpres_Completion.png
	reward					II_SYS_ACH_POINT
	rewardNum				30	
	rewardTradeable			1
	maxProgress				20
	nTypeExtension			WI_INSTANCE_SANPRES
	achievementType			AEGACH_DUNGEONRUN
}

Achievement 21
{
	name 					"Sanpres Master: Completion"
	category 				"Dungeon" 
	subcategory				"Completion"
	descriptionTID			TID_DESC_ACHIEVEMENT_21
	shortDescriptionTID 	TID_SHORT_DESC_ACHIEVEMENT_21
	imageFile				Sanpres_Completion.png
	reward					II_SYS_ACH_POINT
	rewardNum				35	
	rewardTradeable			1
	maxProgress				20
	nTypeExtension			WI_INSTANCE_SANPRES_1
	achievementType			AEGACH_DUNGEONRUN
}

Achievement 22
{
	name 					"Aminus: Completion"
	category 				"Dungeon" 
	subcategory				"Completion"
	descriptionTID			TID_DESC_ACHIEVEMENT_22
	shortDescriptionTID 	TID_SHORT_DESC_ACHIEVEMENT_22
	imageFile				Aminus_Completion.png
	reward					II_SYS_ACH_POINT
	rewardNum				35	
	rewardTradeable			1
	maxProgress				20
	nTypeExtension			WI_INSTANCE_OMINOUS
	achievementType			AEGACH_DUNGEONRUN
}

Achievement 23
{
	name 					"Crused Aminus: Completion"
	category 				"Dungeon" 
	subcategory				"Completion"
	descriptionTID			TID_DESC_ACHIEVEMENT_23
	shortDescriptionTID 	TID_SHORT_DESC_ACHIEVEMENT_23
	imageFile				Crused_Aminus_Completion.png
	reward					II_SYS_ACH_POINT
	rewardNum				40	
	rewardTradeable			1
	maxProgress				20
	nTypeExtension			WI_INSTANCE_OMINOUS_1
	achievementType			AEGACH_DUNGEONRUN
}

Achievement 24
{
	name 					"Catacombs: Completion"
	category 				"Dungeon" 
	subcategory				"Completion"
	descriptionTID			TID_DESC_ACHIEVEMENT_24
	shortDescriptionTID 	TID_SHORT_DESC_ACHIEVEMENT_24
	imageFile				Catacombs_Completion.png
	reward					II_SYS_ACH_POINT
	rewardNum				40	
	rewardTradeable			1
	maxProgress				20
	nTypeExtension			WI_INSTANCE_DREADFULCAVE
	achievementType			AEGACH_DUNGEONRUN
}

Achievement 25
{
	name 					"Clockworks: Completion"
	category 				"Dungeon" 
	subcategory				"Completion"
	descriptionTID			TID_DESC_ACHIEVEMENT_25
	shortDescriptionTID 	TID_SHORT_DESC_ACHIEVEMENT_25
	imageFile				Clockworks_Completion.png
	reward					II_SYS_ACH_POINT
	rewardNum				40	
	rewardTradeable			1
	maxProgress				20
	nTypeExtension			WI_DUNGEON_CLOCKWORK
	achievementType			AEGACH_DUNGEONRUN
}

Achievement 26
{
	name 					"Ankou's Asylum: Completion"
	category 				"Dungeon" 
	subcategory				"Completion"
	descriptionTID			TID_DESC_ACHIEVEMENT_26
	shortDescriptionTID 	TID_SHORT_DESC_ACHIEVEMENT_26
	imageFile				Ankou_Completion.png
	reward					II_SYS_ACH_POINT
	rewardNum				50	
	rewardTradeable			1
	maxProgress				20
	nTypeExtension			WI_INSTANCE_BEHAMAH
	achievementType			AEGACH_DUNGEONRUN
}

Achievement 27
{
	name 					"Kalgas Cave: Completion"
	category 				"Dungeon" 
	subcategory				"Completion"
	descriptionTID			TID_DESC_ACHIEVEMENT_27
	shortDescriptionTID 	TID_SHORT_DESC_ACHIEVEMENT_27
	imageFile				Kalgas_Completion.png
	reward					II_SYS_ACH_POINT
	rewardNum				55	
	rewardTradeable			1
	maxProgress				20
	nTypeExtension			WI_INSTANCE_KALGAS
	achievementType			AEGACH_DUNGEONRUN
}

Achievement 28 //TODO: Ist das überhaupt möglich ??
{
	name 					"Volkane: Completion"
	category 				"Dungeon" 
	subcategory				"Completion"
	descriptionTID			TID_DESC_ACHIEVEMENT_28
	shortDescriptionTID 	TID_SHORT_DESC_ACHIEVEMENT_28
	imageFile				Volkane_Completion.png
	reward					II_SYS_ACH_POINT
	rewardNum				30	
	rewardTradeable			1
	maxProgress				20
	nTypeExtension			WI_DUNGEON_VOLCANE
	achievementType			AEGACH_DUNGEONRUN
}

Achievement 29
{
	name 					"Forteress: Completion"
	category 				"Dungeon" 
	subcategory				"Completion"
	descriptionTID			TID_DESC_ACHIEVEMENT_29
	shortDescriptionTID 	TID_SHORT_DESC_ACHIEVEMENT_29
	imageFile				SM_IV_Meterorite.png
	reward					II_SYS_ACH_POINT
	rewardNum				70	
	rewardTradeable			1
	maxProgress				20
	nTypeExtension			WI_INSTANCE_FORTERESS
	achievementType			AEGACH_DUNGEONRUN
}
///////////////////////////////////////////////////////////////////////////////////////////////

//////////////////////////////////-------GUILD-------///////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////

Achievement 30
{
	name 					"The first time in a guild"
	category 				"Guild" 
	subcategory				""
	descriptionTID			TID_DESC_ACHIEVEMENT_30
	shortDescriptionTID 	TID_SHORT_DESC_ACHIEVEMENT_30
	imageFile				Guild_Join.png
	reward					II_SYS_ACH_POINT
	rewardNum				1	
	rewardTradeable			1
	maxProgress				1
	achievementType			AEGACH_JOINGUILD
}


Achievement 31
{
	name 					"Support the guild I"
	category 				"Guild" 
	subcategory				""
	descriptionTID			TID_DESC_ACHIEVEMENT_31
	shortDescriptionTID 	TID_SHORT_DESC_ACHIEVEMENT_31
	imageFile				Image_Soon.png
	reward					II_SYS_ACH_POINT
	rewardNum				5	
	rewardTradeable			1
	maxProgress				500000
	achievementType			AEGACH_GUILDPENYA
}

Achievement 32
{
	name 					"Support the guild II"
	category 				"Guild" 
	subcategory				""
	descriptionTID			TID_DESC_ACHIEVEMENT_32
	shortDescriptionTID 	TID_SHORT_DESC_ACHIEVEMENT_32
	imageFile				Image_Soon.png
	reward					II_SYS_ACH_POINT
	rewardNum				15	
	rewardTradeable			1
	maxProgress				15000000
	achievementType			AEGACH_GUILDPENYA
}

Achievement 33
{
	name 					"Support the guild III"
	category 				"Guild" 
	subcategory				""
	descriptionTID			TID_DESC_ACHIEVEMENT_33
	shortDescriptionTID 	TID_SHORT_DESC_ACHIEVEMENT_33
	imageFile				Image_Soon.png
	reward					II_SYS_ACH_POINT
	rewardNum				25	
	rewardTradeable			1
	maxProgress				234500000
	achievementType			AEGACH_GUILDPENYA
}

Achievement 34
{
	name 					"Support the guild IV"
	category 				"Guild" 
	subcategory				""
	descriptionTID			TID_DESC_ACHIEVEMENT_34
	shortDescriptionTID 	TID_SHORT_DESC_ACHIEVEMENT_34
	imageFile				Image_Soon.png
	reward					II_SYS_ACH_POINT
	rewardNum				35	
	rewardTradeable			1
	maxProgress				750000000
	achievementType			AEGACH_GUILDPENYA
}

Achievement 35
{
	name 					"Support the guild V"
	category 				"Guild" 
	subcategory				""
	descriptionTID			TID_DESC_ACHIEVEMENT_35
	shortDescriptionTID 	TID_SHORT_DESC_ACHIEVEMENT_35
	imageFile				Image_Soon.png
	reward					II_SYS_ACH_POINT
	rewardNum				45	
	rewardTradeable			1
	maxProgress				1000000000
	achievementType			AEGACH_GUILDPENYA
}

Achievement 36
{
	name 					"Spend monster achievements I"
	category 				"Guild" 
	subcategory				""
	descriptionTID			TID_DESC_ACHIEVEMENT_36
	shortDescriptionTID 	TID_SHORT_DESC_ACHIEVEMENT_36
	imageFile				Image_Soon.png
	reward					II_SYS_ACH_POINT
	rewardNum				55	
	rewardTradeable			1
	maxProgress				6000
	achievementType			AEGACH_GUILDEXP
}

Achievement 37
{
	name 					"Spend monster achievements II"
	category 				"Guild" 
	subcategory				""
	descriptionTID			TID_DESC_ACHIEVEMENT_37
	shortDescriptionTID 	TID_SHORT_DESC_ACHIEVEMENT_37
	imageFile				Image_Soon.png
	reward					II_SYS_ACH_POINT
	rewardNum				65	
	rewardTradeable			1
	maxProgress				60000
	achievementType			AEGACH_GUILDEXP
}

Achievement 38
{
	name 					"Spend monster achievements III"
	category 				"Guild" 
	subcategory				""
	descriptionTID			TID_DESC_ACHIEVEMENT_38
	shortDescriptionTID 	TID_SHORT_DESC_ACHIEVEMENT_38
	imageFile				Image_Soon.png
	reward					II_SYS_ACH_POINT
	rewardNum				75	
	rewardTradeable			1
	maxProgress				144000
	achievementType			AEGACH_GUILDEXP
}

Achievement 45
{
	name 					"Spend monster achievements IV"
	category 				"Guild" 
	subcategory				""
	descriptionTID			TID_DESC_ACHIEVEMENT_45
	shortDescriptionTID 	TID_SHORT_DESC_ACHIEVEMENT_45
	imageFile				Image_Soon.png
	reward					II_SYS_ACH_POINT
	rewardNum				85	
	rewardTradeable			1
	maxProgress				120000
	achievementType			AEGACH_GUILDEXP
}

Achievement 39
{
	name 					"Spend monster achievements V"
	category 				"Guild" 
	subcategory				""
	descriptionTID			TID_DESC_ACHIEVEMENT_39
	shortDescriptionTID 	TID_SHORT_DESC_ACHIEVEMENT_39
	imageFile				Image_Soon.png
	reward					II_SYS_ACH_POINT
	rewardNum				100	
	rewardTradeable			1
	maxProgress				240000
	achievementType			AEGACH_GUILDEXP
}
///////////////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////-------COLLECTING-------//////////////////7//////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////

Achievement 40
{
	name 					"Collect item with the collector I"
	category 				"Collecting" 
	subcategory				"Time"
	descriptionTID			TID_DESC_ACHIEVEMENT_40
	shortDescriptionTID 	TID_SHORT_DESC_ACHIEVEMENT_40
	imageFile				Image_Soon.png
	reward					II_SYS_ACH_POINT
	rewardNum				10	
	rewardTradeable			1
	maxProgress				1
	achievementType			AEGACH_COLLECTXTIME
}


Achievement 41
{
	name 					"Collect item with the collector II"
	category 				"Collecting" 
	subcategory				"Time"
	descriptionTID			TID_DESC_ACHIEVEMENT_41
	shortDescriptionTID 	TID_SHORT_DESC_ACHIEVEMENT_41
	imageFile				Image_Soon.png
	reward					II_SYS_ACH_POINT
	rewardNum				15	
	rewardTradeable			1
	maxProgress				3
	achievementType			AEGACH_COLLECTXTIME
}


Achievement 42
{
	name 					"Collect item with the collector III"
	category 				"Collecting" 
	subcategory				"Time"
	descriptionTID			TID_DESC_ACHIEVEMENT_42
	shortDescriptionTID 	TID_SHORT_DESC_ACHIEVEMENT_42
	imageFile				Image_Soon.png
	reward					II_SYS_ACH_POINT
	rewardNum				20	
	rewardTradeable			1
	maxProgress				10
	achievementType			AEGACH_COLLECTXTIME
}

Achievement 43
{
	name 					"Collect item with the collector IV"
	category 				"Collecting" 
	subcategory				"Time"
	descriptionTID			TID_DESC_ACHIEVEMENT_43
	shortDescriptionTID 	TID_SHORT_DESC_ACHIEVEMENT_43
	imageFile				Image_Soon.png
	reward					II_SYS_ACH_POINT
	rewardNum				35	
	rewardTradeable			1
	maxProgress				24
	achievementType			AEGACH_COLLECTXTIME
}


Achievement 44
{
	name 					"Collect item with the collector V"
	category 				"Collecting" 
	subcategory				"Time"
	descriptionTID			TID_DESC_ACHIEVEMENT_44
	shortDescriptionTID 	TID_SHORT_DESC_ACHIEVEMENT_44
	imageFile				Image_Soon.png
	reward					II_SYS_ACH_POINT
	rewardNum				50	
	rewardTradeable			1
	maxProgress				48
	achievementType			AEGACH_COLLECTXTIME
}

///////////////////////////////////////////////////////////////////////////////////////////////

//////////////////////////////////-------PARTY-------///////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////

Achievement 46
{
	name 					"Party Time"
	category 				"Party" 
	subcategory				"General"
	descriptionTID			TID_DESC_ACHIEVEMENT_46
	shortDescriptionTID 	TID_SHORT_DESC_ACHIEVEMENT_46
	imageFile				Party_Time.png
	reward					II_SYS_ACH_POINT
	rewardNum				1	
	rewardTradeable			1
	maxProgress				1
	achievementType			AEGACH_JOINPARTY
}


Achievement 47
{
	name 					"Party Level I"
	category 				"Party" 
	subcategory				"Level"
	descriptionTID			TID_DESC_ACHIEVEMENT_47
	shortDescriptionTID 	TID_SHORT_DESC_ACHIEVEMENT_47
	imageFile				Image_Soon.png
	reward					II_SYS_ACH_POINT
	rewardNum				10	
	rewardTradeable			1
	maxProgress				1
	achievementType			AEGACH_PARTYLEVEL
	nTypeVar 				10
}

Achievement 48
{
	name 					"Party Level II"
	category 				"Party" 
	subcategory				"Level"
	descriptionTID			TID_DESC_ACHIEVEMENT_48
	shortDescriptionTID 	TID_SHORT_DESC_ACHIEVEMENT_48
	imageFile				Image_Soon.png
	reward					II_SYS_ACH_POINT
	rewardNum				15	
	rewardTradeable			1
	maxProgress				1
	achievementType			AEGACH_PARTYLEVEL
	nTypeVar 				20
	requireAchievement		47
}

Achievement 49
{
	name 					"Party Level III"
	category 				"Party" 
	subcategory				"Level"
	descriptionTID			TID_DESC_ACHIEVEMENT_49
	shortDescriptionTID 	TID_SHORT_DESC_ACHIEVEMENT_49
	imageFile				Image_Soon.png
	reward					II_SYS_ACH_POINT
	rewardNum				25	
	rewardTradeable			1
	maxProgress				1
	achievementType			AEGACH_PARTYLEVEL
	nTypeVar 				30
	requireAchievement		47
	requireAchievement		48
}

Achievement 50
{
	name 					"Party Level IV"
	category 				"Party" 
	subcategory				"Level"
	descriptionTID			TID_DESC_ACHIEVEMENT_50
	shortDescriptionTID 	TID_SHORT_DESC_ACHIEVEMENT_50
	imageFile				Image_Soon.png
	reward					II_SYS_ACH_POINT
	rewardNum				35	
	rewardTradeable			1
	maxProgress				1
	achievementType			AEGACH_PARTYLEVEL
	nTypeVar 				40
	requireAchievement		47
	requireAchievement		48
	requireAchievement		49
}

Achievement 51
{
	name 					"Party Level V"
	category 				"Party" 
	subcategory				"Level"
	descriptionTID			TID_DESC_ACHIEVEMENT_51
	shortDescriptionTID 	TID_SHORT_DESC_ACHIEVEMENT_51
	imageFile				Image_Soon.png
	reward					II_SYS_ACH_POINT
	rewardNum				45	
	rewardTradeable			1
	maxProgress				1
	nTypeVar 				50
	achievementType			AEGACH_PARTYLEVEL
	requireAchievement		47
	requireAchievement		48
	requireAchievement		49
	requireAchievement		50
}

Achievement 52  
{
	name 					"Party Level VI"
	category 				"Party" 
	subcategory				"Level"
	descriptionTID			TID_DESC_ACHIEVEMENT_52
	shortDescriptionTID 	TID_SHORT_DESC_ACHIEVEMENT_52
	imageFile				Image_Soon.png
	reward					II_SYS_ACH_POINT
	rewardNum				55	
	rewardTradeable			1
	maxProgress				1
	nTypeVar 				75
	achievementType			AEGACH_PARTYLEVEL
	requireAchievement		47
	requireAchievement		48
	requireAchievement		49
	requireAchievement		50
	requireAchievement		51
}

Achievement 53
{
	name 					"Party Level VII"
	category 				"Party" 
	subcategory				"Level"
	descriptionTID			TID_DESC_ACHIEVEMENT_53
	shortDescriptionTID 	TID_SHORT_DESC_ACHIEVEMENT_53
	imageFile				Image_Soon.png
	reward					II_SYS_ACH_POINT
	rewardNum				65	
	rewardTradeable			1
	maxProgress				1
	nTypeVar 				100
	achievementType			AEGACH_PARTYLEVEL
	requireAchievement		47
	requireAchievement		48
	requireAchievement		49
	requireAchievement		50
	requireAchievement		51
}

Achievement 54
{
	name 					"Party Level VIII"
	category 				"Party" 
	subcategory				"Level"
	descriptionTID			TID_DESC_ACHIEVEMENT_54
	shortDescriptionTID 	TID_SHORT_DESC_ACHIEVEMENT_54
	imageFile				Image_Soon.png
	reward					II_SYS_ACH_POINT
	rewardNum				75	
	rewardTradeable			1
	maxProgress				1
	nTypeVar 				200
	achievementType			AEGACH_PARTYLEVEL
	requireAchievement		47
	requireAchievement		48
	requireAchievement		49
	requireAchievement		50
	requireAchievement		51
	requireAchievement		52
}

Achievement 55
{
	name 					"Party Level IX"
	category 				"Party" 
	subcategory				"Level"
	descriptionTID			TID_DESC_ACHIEVEMENT_55
	shortDescriptionTID 	TID_SHORT_DESC_ACHIEVEMENT_55
	imageFile				Image_Soon.png
	reward					II_SYS_ACH_POINT
	rewardNum				85	
	rewardTradeable			1
	maxProgress				1
	nTypeVar 				350
	achievementType			AEGACH_PARTYLEVEL
	requireAchievement		47
	requireAchievement		48
	requireAchievement		49
	requireAchievement		50
	requireAchievement		51
	requireAchievement		52
	requireAchievement		53
}

Achievement 56
{
	name 					"Party Level IX"
	category 				"Party" 
	subcategory				"Level"
	descriptionTID			TID_DESC_ACHIEVEMENT_56
	shortDescriptionTID 	TID_SHORT_DESC_ACHIEVEMENT_56
	imageFile				Image_Soon.png
	reward					II_SYS_ACH_POINT
	rewardNum				100	
	rewardTradeable			1
	maxProgress				1
	nTypeVar 				500
	achievementType			AEGACH_PARTYLEVEL
	requireAchievement		47
	requireAchievement		48
	requireAchievement		49
	requireAchievement		50
	requireAchievement		51
	requireAchievement		52
	requireAchievement		53
	requireAchievement		54
}

///////////////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////-------NEW PLAYER-------/////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////
/*
// Soon: Müssen noch in der Source Programmiert werden. #Kiyo
Achievement 99 // Erreiche Level 120
{
	name 					"Tutorial: Level 120!"
	category 				"New Player" 
	subcategory				"Tutorial"
	descriptionTID			TID_DESC_ACHIEVEMENT_100
	shortDescriptionTID 	TID_SHORT_DESC_ACHIEVEMENT_100
	imageFile				Level120.png
	reward					II_SYS_SYS_SCR_AMPESA3 //Scroll of Amplification ES A3
	rewardNum				1	
	rewardTradeable			1
	maxProgress				1
	achievementType			AEGACH_PARTYLEVELUP

}

Achievement 100 //Töte 200 Monster (insgesamt)
{
	name 					"Tutorial: Monster Hunter"
	category 				"New Player" 
	subcategory				"Tutorial"
	descriptionTID			TID_DESC_ACHIEVEMENT_101
	shortDescriptionTID 	TID_SHORT_DESC_ACHIEVEMENT_101
	imageFile				Level120.png
	reward					II_BADGE134 //Animated Porn God Badge
	rewardNum				1	
	rewardTradeable			1
	maxProgress				200
	achievementType			AEGACH_PARTYLEVELUP
	requireAchievement		99
}

Achievement 101 //Verwende 1x Upcut Stone
{
	name 					"Tutorial: Monster Hunter"
	category 				"New Player" 
	subcategory				"Tutorial"
	descriptionTID			TID_DESC_ACHIEVEMENT_101
	shortDescriptionTID 	TID_SHORT_DESC_ACHIEVEMENT_101
	imageFile				Level120.png
	reward					II_CHR_SYS_SCR_UPCUTSTONE //Upcut Stone
	rewardNum				1	
	rewardTradeable			1
	maxProgress				1
	achievementType			AEGACH_PARTYLEVELUP
}

Achievement 102 //Bleib 3 Std. online
{
	name 					"Tutorial: Playing time"
	category 				"New Player" 
	subcategory				"Tutorial"
	descriptionTID			TID_DESC_ACHIEVEMENT_101
	shortDescriptionTID 	TID_SHORT_DESC_ACHIEVEMENT_101
	imageFile				Level120.png
	reward					II_CHR_SYS_SCR_UPCUTSTONE //Upcut Stone
	rewardNum				1	
	rewardTradeable			1
	maxProgress				1
	achievementType			AEGACH_ONLINETIME
	requireAchievement		101
}
*/
///////////////////////////////////////////////////////////////////////////////////////////////