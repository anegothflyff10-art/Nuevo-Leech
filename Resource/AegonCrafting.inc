//name				""name 123""	<- subcategory with the same name must exist
//category 			"General" 	<- main category 
//descriptionTID	description of the recipe
//craftTime			time in seconds it takes to craft the item
//resultItem		ITEMID	ITEMNUM	<- item that gets crafted
//componentItem		ITEMID	ITEMNUM	<- item needed to craft 1-6 of these
//craftingExp		EXPNUM			<- exp amount rewarded each craft
//levelRequirement	1				<- level requirement to craft

//name ""name 123"" <- Unterkategorie mit dem gleichen Namen muss vorhanden sein
//kategorie ""General"" <- Hauptkategorie 
//descriptionTID Beschreibung des Rezepts
//craftTime Zeit in Sekunden, die für die Herstellung des Gegenstands benötigt wird
//resultItem ITEMID ITEMNUM <- Gegenstand, der hergestellt wird
//componentItem ITEMID ITEMNUM <- Gegenstand, der benötigt wird, um 1-6 dieser Gegenstände herzustellen
//craftingExp EXPNUM <- Exp-Betrag, der für jedes Handwerk belohnt wird
//levelRequirement 1 <- Level-Anforderung zum Herstellen


CraftingLevels
{
	Level	0	0
	Level	1	300
	Level	2	750
	Level	3	1350
	Level	4	2100
	Level	5	3000
	Level	6	4050
	Level	7	5350
	Level	8	6800
	Level	9	8400
	Level	10	10150
	Level	11	12050
	Level	12	14150
	Level	13	16450
	Level	14	18950
	Level	15	21650
	Level	16	24550
	Level	17	27650
	Level	18	30950
	Level	19	34650
	Level	20	38550
	Level	21	42050
	Level	22	46250
	Level	23	50850
	Level	24	55850
}

// Pets Category
Recipe	0
{	
	name				"Gold Bead of Gladiator"
	category 			"Pets" 
	descriptionTID		TID_DESC_CRAFTING_PETS1
	craftTime			1
	resultItem			II_SYS_VIS_LV4_ATTACK			1
	componentItem		II_SYS_VIS_LV3_WARRIOR		    10
	componentItem		II_GEN_GEM_CRAFTMATERIAL069		10
	componentItem		II_GEN_GEM_CRAFTMATERIAL008		10
    componentItem		II_GEN_GEM_CRAFTMATERIAL098		10
	craftingExp			500
	levelRequirement	5
}

Recipe	1
{	
	name				"Gold Bead of Guardian"
	category 			"Pets" 
	descriptionTID		TID_DESC_CRAFTING_PETS2
	craftTime			1
	resultItem			II_SYS_VIS_LV4_HP			    1
	componentItem		II_SYS_VIS_LV3_KNIGHT		    10
	componentItem		II_GEN_GEM_CRAFTMATERIAL069		10
	componentItem		II_GEN_GEM_CRAFTMATERIAL008		10
	componentItem		II_GEN_GEM_CRAFTMATERIAL098		10
	craftingExp			500
	levelRequirement	5
}

Recipe	2
{	
	name				"Gold Bead of Bubble"
	category 			"Pets" 
	descriptionTID		TID_DESC_CRAFTING_PETS3
	craftTime			1
	resultItem			II_SYS_VIS_LV4_BLOCK			1
	componentItem		II_SYS_VIS_LV3_BUBBLE		    10
	componentItem		II_GEN_GEM_CRAFTMATERIAL069		10
	componentItem		II_GEN_GEM_CRAFTMATERIAL008		10
	componentItem		II_GEN_GEM_CRAFTMATERIAL098		10
	craftingExp			500
	levelRequirement	5
}

Recipe	3
{	
	name				"Gold Bead of Shades"
	category 			"Pets" 
	descriptionTID		TID_DESC_CRAFTING_PETS4
	craftTime			1
	resultItem			II_SYS_VIS_LV4_HIT			    1
	componentItem		II_SYS_VIS_LV3_IBLIS		    10
	componentItem		II_GEN_GEM_CRAFTMATERIAL069		10
	componentItem		II_GEN_GEM_CRAFTMATERIAL008		10
	componentItem		II_GEN_GEM_CRAFTMATERIAL098		10
	craftingExp			500
	levelRequirement	5
}

Recipe	4
{	
	name				"Gold Bead of Experience"
	category 			"Pets" 
	descriptionTID		TID_DESC_CRAFTING_PETS5
	craftTime			1
	resultItem			II_SYS_VIS_LV4_EXP			    1
	componentItem		II_SYS_VIS_LV3_SHADE		    10
	componentItem		II_GEN_GEM_CRAFTMATERIAL069		10
	componentItem		II_GEN_GEM_CRAFTMATERIAL008		10
	componentItem		II_GEN_GEM_CRAFTMATERIAL098		10
	craftingExp			500
	levelRequirement	5
}

Recipe	5
{	
	name				"Bead Slot Key"
	category 			"Pets" 
	descriptionTID		TID_DESC_CRAFTING_PETS7
	craftTime			1
	resultItem			II_SYS_SYS_VIS_KEY01			 1
	componentItem		II_GEN_GEM_CRAFTMATERIAL058		 10
	componentItem		II_GEN_GEM_CRAFTMATERIAL063		 10
	craftingExp			50
	levelRequirement	1
}

Recipe	6
{	
	name				"Pick Up Pet Upgrade"
	category 			"Pets" 
	descriptionTID		TID_DESC_CRAFTING_PETS6
	craftTime			1
	resultItem			II_SYS_SYS_SCR_PET_MAGIC		   1
	componentItem		II_GEN_GEM_CRAFTMATERIAL024		   20
	componentItem		II_GEN_GEM_CRAFTMATERIAL082		   10
	componentItem		II_GEN_GEM_CRAFTMATERIAL070		   5
	craftingExp			50
	levelRequirement	1
}

// Functional

Recipe	7
{	
	name				"Extra Bag"
	category 			"Functional" 
	descriptionTID		TID_DESC_CRAFTING_FUNC1
	craftTime			1
	resultItem			II_SYS_SYS_SCR_BAGBAG			1
	componentItem		II_SYS_SYS_SCR_BAGBAG15			1
	componentItem		II_GEN_GEM_CRAFTMATERIAL068		1
	componentItem		II_GEN_GEM_CRAFTMATERIAL093		5
	craftingExp			150
	levelRequirement	1
}

Recipe	8
{	
	name				"Enhanced Party Skill Range"
	category 			"Functional" 
	descriptionTID		TID_DESC_CRAFTING_FUNC2
	craftTime			1
	resultItem			II_CHR_SYS_SCR_PSKILLFULL30		3
	componentItem		II_CHR_SYS_SCR_PSKILLFULL15		2
	componentItem		II_GEN_GEM_CRAFTMATERIAL041		5
	craftingExp			150
	levelRequirement	1
}


Recipe	9
{	
	name				"Common Bank"
	category 			"Functional" 
	descriptionTID		TID_DESC_CRAFTING_FUNC3
	craftTime			1
	resultItem			II_CHR_SYS_SCR_COMMBANK30		3
	componentItem		II_CHR_SYS_SCR_COMMBANK15		2
	componentItem		II_GEN_GEM_CRAFTMATERIAL014		5
	craftingExp			150
	levelRequirement	1
}


//Recipe	10
//{	
//	name				"Full Shout"
//	category 			"Functional" 
//	descriptionTID		TID_DESC_CRAFTING_FUNC4
//	craftTime			1
//	resultItem			II_CHR_SYS_SCR_SHOUTFULL30		3
//	componentItem		II_CHR_SYS_SCR_SHOUTFULL15		2
//	componentItem		II_GEN_GEM_CRAFTMATERIAL010		5
//	craftingExp			150
//	levelRequirement	1
//}

Recipe	11
{	
	name				"Scroll of Party Skill"
	category 			"Functional" 
	descriptionTID		TID_DESC_CRAFTING_FUNC5
	craftTime			1
	resultItem			II_SYS_SYS_SCR_PARTYSKILLUP02	3
	componentItem		II_SYS_SYS_SCR_PARTYSKILLUP01	2
	componentItem		II_GEN_GEM_CRAFTMATERIAL074		5
	craftingExp			150
	levelRequirement	1
}

Recipe	12
{	
	name				"Scroll of Party EXP"
	category 			"Functional" 
	descriptionTID		TID_DESC_CRAFTING_FUNC6
	craftTime			1
	resultItem			II_SYS_SYS_SCR_PARTYEXPUP02		3
	componentItem		II_SYS_SYS_SCR_PARTYEXPUP01		2
	componentItem		II_GEN_GEM_CRAFTMATERIAL080		5
	craftingExp			150
	levelRequirement	1
}

Recipe	13
{	
	name				"Scroll of Party Amplification"
	category 			"Functional" 
	descriptionTID		TID_DESC_CRAFTING_FUNC7
	craftTime			1
	resultItem			II_SYS_SYS_SCR_PARTYPOINTFREE03	  1
	componentItem		II_GEN_GEM_CRAFTMATERIAL016		  10
	craftingExp			150
	levelRequirement	1
}

Recipe	14
{	
	name				"Font Editor"
	category 			"Functional" 
	descriptionTID		TID_DESC_CRAFTING_FUNC8
	craftTime			1
	resultItem			II_SYS_SYS_SCR_FONTEDIT			1
	componentItem		II_GEN_GEM_CRAFTMATERIAL076		5
	componentItem		II_GEN_GEM_CRAFTMATERIAL102		1
	componentItem		II_GEN_GEM_CRAFTMATERIAL103		1
	componentItem		II_GEN_GEM_CRAFTMATERIAL104		1
	componentItem		II_GEN_GEM_CRAFTMATERIAL105		1
	componentItem		II_GEN_GEM_CRAFTMATERIAL106		1
	craftingExp			50
	levelRequirement	1
}

// More Food 
Recipe	115
{	
	name				"Pink Donut"
	category 			"Food" 
	descriptionTID		TID_DESC_CRAFTING_FOOD2
	craftTime			3
	resultItem			II_GEN_FOO_INS_DONUT             10
	componentItem		II_GEN_FOO_INS_PANCAKE           25
	componentItem		II_GEN_GEM_CRAFTMATERIAL096      25
	craftingExp			75
	levelRequirement	7
}

Recipe	16
{	
	name				"Scroll of Rprotect"
	category 			"Scrolls" 
	descriptionTID		TID_DESC_CRAFTING_SCROLL2
	craftTime			1
	resultItem			II_SYS_SCR_RPROTECT		        10
	componentItem		II_SYS_SYS_SCR_SMELPROT		    30
	componentItem		II_SYS_SYS_SCR_PIEPROT		    30
	componentItem		II_SYS_SYS_SCR_SMELPROT4		30
	componentItem		II_GEN_GEM_CRAFTMATERIAL015		5

	craftingExp			300
	levelRequirement	3
}

Recipe	17
{	
	name				"Scroll of Acquisition"
	category 			"Scrolls" 
	descriptionTID		TID_DESC_CRAFTING_SCROLL3
	craftTime			1
	resultItem			II_SYS_SYS_SCR_GET02		    1
	componentItem		II_SYS_SYS_SCR_GET01		    2
	componentItem		II_GEN_GEM_CRAFTMATERIAL062		10
	componentItem		II_GEN_GEM_CRAFTMATERIAL042		10

	craftingExp			350
	levelRequirement	3
}


// Cards

Recipe	18
{	
	name				"Fire Card R"
	category 			"Cards" 
	descriptionTID		TID_DESC_CRAFTING_CARDS1
	craftTime			3
	resultItem			II_GEN_MAT_ELE_PIERCECARD_R_FIRE	1
	componentItem		II_GEN_MAT_ELE_PIERCECARD_S_FIRE	10
	componentItem		II_GEN_GEM_CRAFTMATERIAL060		    10

	craftingExp			700
	levelRequirement	10
}

Recipe	19
{	
	name				"Water Card R"
	category 			"Cards" 
	descriptionTID		TID_DESC_CRAFTING_CARDS2
	craftTime			3
	resultItem			II_GEN_MAT_ELE_PIERCECARD_R_WATER	1
	componentItem		II_GEN_MAT_ELE_PIERCECARD_S_WATER	10
	componentItem		II_GEN_GEM_CRAFTMATERIAL011		    10

	craftingExp			700
	levelRequirement	10
}

Recipe	20
{	
	name				"Electric Card R"
	category 			"Cards" 
	descriptionTID		TID_DESC_CRAFTING_CARDS3
	craftTime			3
	resultItem			II_GEN_MAT_ELE_PIERCECARD_R_ELECTRIC   1
	componentItem		II_GEN_MAT_ELE_PIERCECARD_S_ELECTRIC   10
	componentItem		II_GEN_GEM_CRAFTMATERIAL052		       10

	craftingExp			700
	levelRequirement	10
}

Recipe	21
{	
	name				"Land Card R"
	category 			"Cards" 
	descriptionTID		TID_DESC_CRAFTING_CARDS4
	craftTime			3
	resultItem			II_GEN_MAT_ELE_PIERCECARD_R_LAND   1
	componentItem		II_GEN_MAT_ELE_PIERCECARD_S_LAND   10
	componentItem		II_GEN_GEM_CRAFTMATERIAL017		   10

	craftingExp			700
	levelRequirement	10
}

Recipe	22
{	
	name				"Vacuum Card R"
	category 			"Cards" 
	descriptionTID		TID_DESC_CRAFTING_CARDS5
	craftTime			3
	resultItem			II_GEN_MAT_ELE_PIERCECARD_12_VACCUM   1
	componentItem		II_GEN_MAT_ELE_PIERCECARD_10_VACCUM   10
	componentItem		II_GEN_GEM_CRAFTMATERIAL043		      10

	craftingExp			700
	levelRequirement	10
}

Recipe	23
{	
	name				"Volcano Card 12"
	category 			"Cards" 
	descriptionTID		TID_DESC_CRAFTING_CARDS6
	craftTime			3
	resultItem			II_GEN_MAT_ELE_PIERCECARD_12_VOLCANO   1
	componentItem		II_GEN_MAT_ELE_PIERCECARD_10_VOLCANO   10
	componentItem		II_GEN_GEM_CRAFTMATERIAL066		       10

	craftingExp			700
	levelRequirement	10
}

Recipe	24
{	
	name				"Ocean Card 12"
	category 			"Cards" 
	descriptionTID		TID_DESC_CRAFTING_CARDS7
	craftTime			3
	resultItem			II_GEN_MAT_ELE_PIERCECARD_12_OCEAN   1
	componentItem		II_GEN_MAT_ELE_PIERCECARD_10_OCEAN   10
	componentItem		II_GEN_GEM_CRAFTMATERIAL040		     10

	craftingExp			700
	levelRequirement	10
}

Recipe	25
{	
	name				"Lightning Card 12"
	category 			"Cards" 
	descriptionTID		TID_DESC_CRAFTING_CARDS8
	craftTime			3
	resultItem			II_GEN_MAT_ELE_PIERCECARD_12_LIGHTING   1
	componentItem		II_GEN_MAT_ELE_PIERCECARD_10_LIGHTING   10
	componentItem		II_GEN_GEM_CRAFTMATERIAL028		        10

	craftingExp			700
	levelRequirement	10
}

Recipe	26
{	
	name				"Earthquake Card 12"
	category 			"Cards" 
	descriptionTID		TID_DESC_CRAFTING_CARDS9
	craftTime			3
	resultItem			II_GEN_MAT_ELE_PIERCECARD_12_EARTHQUAKE   1
	componentItem		II_GEN_MAT_ELE_PIERCECARD_10_EARTHQUAKE   10
	componentItem		II_GEN_GEM_CRAFTMATERIAL048		          10

	craftingExp			700
	levelRequirement	10
}

// Tickets

Recipe	27
{	
	name				"Azria Ticket"
	category 			"Tickets" 
	descriptionTID		TID_DESC_CRAFTING_TICKET1
	craftTime			1
	resultItem			II_SYS_TICKET_KEBARAS02          1
	componentItem		II_SYS_TICKET_KEBARAS001         1
	componentItem		II_SYS_TICKET_KEBARAS01          1
	componentItem		II_CHP_COLLECTOR                 50

	craftingExp			50
	levelRequirement	1
}

Recipe	28
{	
	name				"Traseia Ticket"
	category 			"Tickets" 
	descriptionTID		TID_DESC_CRAFTING_TICKET2
	craftTime			1
	resultItem			II_SYS_TICKET_RARTESIA02      1
	componentItem		II_SYS_TICKET_RARTESIA03      1
	componentItem		II_SYS_TICKET_RARTESIA01      1
	componentItem		II_CHP_COLLECTOR              100

	craftingExp			50
	levelRequirement	1
}

Recipe	29
{	
	name				"Dark Traseia Ticket"
	category 			"Tickets" 
	descriptionTID		TID_DESC_CRAFTING_TICKET3
	craftTime			1
	resultItem			II_SYS_TICKET_DARKRARTESIA_15     1
	componentItem		II_SYS_TICKET_DARKRARTESIA01      1
	componentItem		II_SYS_TICKET_DARKRARTESIA        1
	componentItem		II_CHP_COLLECTOR                  150

	craftingExp			50
	levelRequirement	1
}

// Food

Recipe	30
{	
	name				"Powerful Star Candy"
	category 			"Food" 
	descriptionTID		TID_DESC_CRAFTING_FOOD1
	craftTime			1
	resultItem			II_GEN_FOO_INS_SUPERSTARCANDY      10
	componentItem		II_GEN_FOO_INS_STARCANDY           999
	componentItem		II_GEN_GEM_CRAFTMATERIAL096        5
	craftingExp			75
	levelRequirement	1
}

Recipe	31
{	
	name				"Delicious Pancakes"
	category 			"Food" 
	descriptionTID		TID_DESC_CRAFTING_FOOD2
	craftTime			1
	resultItem			II_GEN_FOO_INS_PANCAKE             10
	componentItem		II_GEN_FOO_INS_SUPERSTARCANDY      5
	componentItem		II_GEN_GEM_CRAFTMATERIAL096        10
	craftingExp			75
	levelRequirement	1
}


// Power - Ups

Recipe	32
{	
	name				"Elixir of The Arrow"
	category 			"Power-Ups" 
	descriptionTID		TID_DESC_CRAFTING_POWERUP1
	craftTime			3
	resultItem			II_SYS_SYS_SCR_STR               1
	componentItem		II_GEN_GEM_CRAFTMATERIAL053      10
	componentItem		II_GEN_GEM_CRAFTMATERIAL089      10	
	craftingExp			75
	levelRequirement	5
}

Recipe	33
{	
	name				"Elixir of The War"
	category 			"Power-Ups" 
	descriptionTID		TID_DESC_CRAFTING_POWERUP2
	craftTime			3
	resultItem			II_SYS_SYS_SCR_DEX               1
	componentItem		II_GEN_GEM_CRAFTMATERIAL053      10
	componentItem		II_GEN_GEM_CRAFTMATERIAL089      10
	craftingExp			75
	levelRequirement	5
}

Recipe	34
{	
	name				"Elixir of The Knights"
	category 			"Power-Ups" 
	descriptionTID		TID_DESC_CRAFTING_POWERUP3
	craftTime			3
	resultItem			II_SYS_SYS_SCR_INT               1
	componentItem		II_GEN_GEM_CRAFTMATERIAL053      10
	componentItem		II_GEN_GEM_CRAFTMATERIAL089      10
	craftingExp			75
	levelRequirement	5
}

Recipe	35
{	
	name				"Elixir of The Solider"
	category 			"Power-Ups" 
	descriptionTID		TID_DESC_CRAFTING_POWERUP4
	craftTime			3
	resultItem			II_SYS_SYS_SCR_STA               1
	componentItem		II_GEN_GEM_CRAFTMATERIAL053      10
	componentItem		II_GEN_GEM_CRAFTMATERIAL059      10
	craftingExp			75
	levelRequirement	5
}

Recipe	36
{	
	name				"Elixir of The Stone"
	category 			"Power-Ups" 
	descriptionTID		TID_DESC_CRAFTING_POWERUP5
	craftTime			3
	resultItem			II_SYS_SYS_SCR_ADJDEF            1
	componentItem		II_GEN_GEM_CRAFTMATERIAL053      10
	componentItem		II_GEN_GEM_CRAFTMATERIAL059      10
	craftingExp			75
	levelRequirement	5
}

Recipe	37
{	
	name				"Ice flakes Strawberry Coconut"
	category 			"Power-Ups" 
	descriptionTID		TID_DESC_CRAFTING_POWERUP6
	craftTime			3
	resultItem			II_SYS_SYS_SCR_ICECOCO           1
	componentItem		II_GEN_GEM_CRAFTMATERIAL107      10
	componentItem	    II_SYS_SYS_SCR_ICEATKSPEED       10
	craftingExp			75
	levelRequirement	5
}

Recipe	38
{	
	name				"Upgraded Fury Potion"
	category 			"Power-Ups" 
	descriptionTID		TID_DESC_CRAFTING_POWERUP7
	craftTime			3
	resultItem			II_SYS_SYS_SCR_POWERFURYPOTION   1
	componentItem		II_SYS_SYS_SCR_FURYPOTION        5
	componentItem		II_GEN_GEM_CRAFTMATERIAL056      10

	craftingExp			75
	levelRequirement	5
}


// Shields

Recipe	39
{	
	name				"Suan Shield"
	category 			"Shields" 
	descriptionTID		TID_DESC_CRAFTING_SHIELDS1
	craftTime			1
	resultItem			II_ARM_ARM_SHI_SUAN              1
	componentItem		II_GEN_GEM_CRAFTMATERIAL083      10
	componentItem		II_GEN_GEM_CRAFTMATERIAL038      10
	componentItem		II_CHP_FASHION                   250

	craftingExp			50
	levelRequirement	3
}

Recipe	40
{	
	name				"Suan Book"
	category 			"Shields" 
	descriptionTID		TID_DESC_CRAFTING_SHIELDS2
	craftTime			1
	resultItem			II_ARM_ARM_BOK_SUAN              1
	componentItem		II_GEN_GEM_CRAFTMATERIAL083      10
	componentItem		II_GEN_GEM_CRAFTMATERIAL038      10
	componentItem		II_CHP_FASHION                   250

	craftingExp			50
	levelRequirement	3
}

Recipe	41
{	
	name				"Suan Zem"
	category 			"Shields" 
	descriptionTID		TID_DESC_CRAFTING_SHIELDS3
	craftTime			1
	resultItem			II_ARM_ARM_ZEM_SUAN              1
	componentItem		II_GEN_GEM_CRAFTMATERIAL083      10
	componentItem		II_GEN_GEM_CRAFTMATERIAL038      10
	componentItem		II_CHP_FASHION                   250

	craftingExp			50
	levelRequirement	3
}

Recipe	42
{	
	name				"Racing Shield"
	category 			"Shields" 
	descriptionTID		TID_DESC_CRAFTING_SHIELDS1
	craftTime			1
	resultItem			II_ARM_ARM_SHI_RACING            1
	componentItem		II_GEN_GEM_CRAFTMATERIAL083      10
	componentItem		II_GEN_GEM_CRAFTMATERIAL038      10
	componentItem		II_CHP_FASHION                   250

	craftingExp			50
	levelRequirement	3
}

Recipe	43
{	
	name				"Racing Book"
	category 			"Shields" 
	descriptionTID		TID_DESC_CRAFTING_SHIELDS2
	craftTime			1
	resultItem			II_ARM_ARM_BOK_RACING            1
	componentItem		II_GEN_GEM_CRAFTMATERIAL083      10
	componentItem		II_GEN_GEM_CRAFTMATERIAL038      10
	componentItem		II_CHP_FASHION                   250

	craftingExp			50
	levelRequirement	3
}

Recipe	44
{	
	name				"Racing Zem"
	category 			"Shields" 
	descriptionTID		TID_DESC_CRAFTING_SHIELDS3
	craftTime			1
	resultItem			II_ARM_ARM_ZEM_RACING            1
	componentItem		II_GEN_GEM_CRAFTMATERIAL083      10
	componentItem		II_GEN_GEM_CRAFTMATERIAL038      10
	componentItem		II_CHP_FASHION                   250

	craftingExp			50
	levelRequirement	3
}

Recipe	45
{	
	name				"Medic Shield"
	category 			"Shields" 
	descriptionTID		TID_DESC_CRAFTING_SHIELDS1
	craftTime			1
	resultItem			II_ARM_ARM_SHI_MEDIC             1
	componentItem		II_GEN_GEM_CRAFTMATERIAL083      10
	componentItem		II_GEN_GEM_CRAFTMATERIAL038      10
	componentItem		II_CHP_FASHION                   250

	craftingExp			50
	levelRequirement	3
}

Recipe	46
{	
	name				"Medic Book"
	category 			"Shields" 
	descriptionTID		TID_DESC_CRAFTING_SHIELDS2
	craftTime			1
	resultItem			II_ARM_ARM_BOK_MEDIC             1
	componentItem		II_GEN_GEM_CRAFTMATERIAL083      10
	componentItem		II_GEN_GEM_CRAFTMATERIAL038      10
	componentItem		II_CHP_FASHION                   250

	craftingExp			50
	levelRequirement	3
}

Recipe	47
{	
	name				"Medic Zem"
	category 			"Shields" 
	descriptionTID		TID_DESC_CRAFTING_SHIELDS3
	craftTime			1
	resultItem			II_ARM_ARM_ZEM_MEDIC             1
	componentItem		II_GEN_GEM_CRAFTMATERIAL083      10
	componentItem		II_GEN_GEM_CRAFTMATERIAL038      10
	componentItem		II_CHP_FASHION                   250

	craftingExp			50
	levelRequirement	3
}

// Weapons

Recipe	48
{	
	name				"Suan Sword"
	category 			"Weapons" 
	descriptionTID		TID_DESC_CRAFTING_WEAPONS1
	craftTime			1
	resultItem			II_WEA_SWO_SUAN                  1
	componentItem		II_GEN_GEM_CRAFTMATERIAL031      10
	componentItem		II_GEN_GEM_CRAFTMATERIAL021      10
	componentItem		II_CHP_FASHION                   500

	craftingExp			150
	levelRequirement	3
}

Recipe	49
{	
	name				"Suan Slayer"
	category 			"Weapons" 
	descriptionTID		TID_DESC_CRAFTING_WEAPONS2
	craftTime			1
	resultItem			II_WEA_SWT_SUAN                  1
	componentItem		II_GEN_GEM_CRAFTMATERIAL031      10
	componentItem		II_GEN_GEM_CRAFTMATERIAL021      10
	componentItem		II_CHP_FASHION                   500

	craftingExp			150
	levelRequirement	3
}

Recipe	50
{	
	name				"Suan Axe"
	category 			"Weapons" 
	descriptionTID		TID_DESC_CRAFTING_WEAPONS3
	craftTime			1
	resultItem			II_WEA_AXE_SUAN                  1
	componentItem		II_GEN_GEM_CRAFTMATERIAL031      10
	componentItem		II_GEN_GEM_CRAFTMATERIAL021      10
	componentItem		II_CHP_FASHION                   500

	craftingExp			150
	levelRequirement	3
}

Recipe	51
{	
	name				"Suan Destroyer"
	category 			"Weapons" 
	descriptionTID		TID_DESC_CRAFTING_WEAPONS4
	craftTime			1
	resultItem			II_WEA_AXT_SUAN                  1
	componentItem		II_GEN_GEM_CRAFTMATERIAL031      10
	componentItem		II_GEN_GEM_CRAFTMATERIAL021      10
	componentItem		II_CHP_FASHION                   500

	craftingExp			150
	levelRequirement	3
}

Recipe	52
{	
	name				"Suan Knuckle"
	category 			"Weapons" 
	descriptionTID		TID_DESC_CRAFTING_WEAPONS5
	craftTime			1
	resultItem			II_WEA_KNU_SUAN                  1
	componentItem		II_GEN_GEM_CRAFTMATERIAL031      10
	componentItem		II_GEN_GEM_CRAFTMATERIAL021      10
	componentItem		II_CHP_FASHION                   500

	craftingExp			150
	levelRequirement	3
}

Recipe	53
{	
	name				"Suan Stick"
	category 			"Weapons" 
	descriptionTID		TID_DESC_CRAFTING_WEAPONS6
	craftTime			1
	resultItem			II_WEA_CHE_SUAN                  1
	componentItem		II_GEN_GEM_CRAFTMATERIAL031      10
	componentItem		II_GEN_GEM_CRAFTMATERIAL021      10
	componentItem		II_CHP_FASHION                   500

	craftingExp			150
	levelRequirement	3
}

Recipe	54
{	
	name				"Suan Wand"
	category 			"Weapons" 
	descriptionTID		TID_DESC_CRAFTING_WEAPONS7
	craftTime			1
	resultItem			II_WEA_WAN_SUAN                  1
	componentItem		II_GEN_GEM_CRAFTMATERIAL031      10
	componentItem		II_GEN_GEM_CRAFTMATERIAL021      10
	componentItem		II_CHP_FASHION                   500

	craftingExp			150
	levelRequirement	3
}

Recipe	55
{	
	name				"Suan Staff"
	category 			"Weapons" 
	descriptionTID		TID_DESC_CRAFTING_WEAPONS8
	craftTime			1
	resultItem			II_WEA_STA_SUAN                  1
	componentItem		II_GEN_GEM_CRAFTMATERIAL031      10
	componentItem		II_GEN_GEM_CRAFTMATERIAL021      10
	componentItem		II_CHP_FASHION                   500

	craftingExp			150
	levelRequirement	3
}

Recipe	56
{	
	name				"Suan Bow"
	category 			"Weapons" 
	descriptionTID		TID_DESC_CRAFTING_WEAPONS9
	craftTime			1
	resultItem			II_WEA_BOW_SUAN                  1
	componentItem		II_GEN_GEM_CRAFTMATERIAL031      10
	componentItem		II_GEN_GEM_CRAFTMATERIAL021      10
	componentItem		II_CHP_FASHION                   500
	

	craftingExp			150
	levelRequirement	3
}

Recipe	57
{	
	name				"Suan Yoyo"
	category 			"Weapons" 
	descriptionTID		TID_DESC_CRAFTING_WEAPONS10
	craftTime			1
	resultItem			II_WEA_YOY_SUAN                  1
	componentItem		II_GEN_GEM_CRAFTMATERIAL031      10
	componentItem		II_GEN_GEM_CRAFTMATERIAL021      10
	componentItem		II_CHP_FASHION                   500

	craftingExp			150
	levelRequirement	3
}


Recipe	58
{	
	name				"Racing Sword"
	category 			"Weapons" 
	descriptionTID		TID_DESC_CRAFTING_WEAPONS1
	craftTime			1
	resultItem			II_WEA_SWO_RACING                1
	componentItem		II_GEN_GEM_CRAFTMATERIAL031      10
	componentItem		II_GEN_GEM_CRAFTMATERIAL021      10
	componentItem		II_CHP_FASHION                   500

	craftingExp			150
	levelRequirement	3
}

Recipe	59
{	
	name				"Racing Slayer"
	category 			"Weapons" 
	descriptionTID		TID_DESC_CRAFTING_WEAPONS2
	craftTime			1
	resultItem			II_WEA_SWT_RACING                1
	componentItem		II_GEN_GEM_CRAFTMATERIAL031      10
	componentItem		II_GEN_GEM_CRAFTMATERIAL021      10
	componentItem		II_CHP_FASHION                   500

	craftingExp			150
	levelRequirement	3
}

Recipe	60
{	
	name				"Racing Axe"
	category 			"Weapons" 
	descriptionTID		TID_DESC_CRAFTING_WEAPONS3
	craftTime			1
	resultItem			II_WEA_AXE_RACING                1
	componentItem		II_GEN_GEM_CRAFTMATERIAL031      10
	componentItem		II_GEN_GEM_CRAFTMATERIAL021      10
	componentItem		II_CHP_FASHION                   500

	craftingExp			150
	levelRequirement	3
}

Recipe	61
{	
	name				"Racing Destroyer"
	category 			"Weapons" 
	descriptionTID		TID_DESC_CRAFTING_WEAPONS4
	craftTime			1
	resultItem			II_WEA_AXT_RACING                1
	componentItem		II_GEN_GEM_CRAFTMATERIAL031      10
	componentItem		II_GEN_GEM_CRAFTMATERIAL021      10
	componentItem		II_CHP_FASHION                   500

	craftingExp			150
	levelRequirement	3
}

Recipe	62
{	
	name				"Racing Knuckle"
	category 			"Weapons" 
	descriptionTID		TID_DESC_CRAFTING_WEAPONS5
	craftTime			1
	resultItem			II_WEA_KNU_RACING                1
	componentItem		II_GEN_GEM_CRAFTMATERIAL031      10
	componentItem		II_GEN_GEM_CRAFTMATERIAL021      10
	componentItem		II_CHP_FASHION                   500

	craftingExp			150
	levelRequirement	3
}

Recipe	63
{	
	name				"Racing Stick"
	category 			"Weapons" 
	descriptionTID		TID_DESC_CRAFTING_WEAPONS6
	craftTime			1
	resultItem			II_WEA_CHE_RACING                1
	componentItem		II_GEN_GEM_CRAFTMATERIAL031      10
	componentItem		II_GEN_GEM_CRAFTMATERIAL021      10
	componentItem		II_CHP_FASHION                   500

	craftingExp			150
	levelRequirement	3
}

Recipe	64
{	
	name				"Racing Wand"
	category 			"Weapons" 
	descriptionTID		TID_DESC_CRAFTING_WEAPONS7
	craftTime			1
	resultItem			II_WEA_WAN_RACING                1
	componentItem		II_GEN_GEM_CRAFTMATERIAL031      10
	componentItem		II_GEN_GEM_CRAFTMATERIAL021      10
	componentItem		II_CHP_FASHION                   500

	craftingExp			150
	levelRequirement	3
}

Recipe	65
{	
	name				"Racing Staff"
	category 			"Weapons" 
	descriptionTID		TID_DESC_CRAFTING_WEAPONS8
	craftTime			1
	resultItem			II_WEA_STA_RACING                1
	componentItem		II_GEN_GEM_CRAFTMATERIAL031      10
	componentItem		II_GEN_GEM_CRAFTMATERIAL021      10
	componentItem		II_CHP_FASHION                   500

	craftingExp			150
	levelRequirement	3
}

Recipe	66
{	
	name				"Racing Bow"
	category 			"Weapons" 
	descriptionTID		TID_DESC_CRAFTING_WEAPONS9
	craftTime			1
	resultItem			II_WEA_BOW_RACING                1
	componentItem		II_GEN_GEM_CRAFTMATERIAL031      10
	componentItem		II_GEN_GEM_CRAFTMATERIAL021      10
	componentItem		II_CHP_FASHION                   500

	craftingExp			150
	levelRequirement	3
}

Recipe	67
{	
	name				"Racing Yoyo"
	category 			"Weapons" 
	descriptionTID		TID_DESC_CRAFTING_WEAPONS10
	craftTime			1
	resultItem			II_WEA_YOY_RACING                1
	componentItem		II_GEN_GEM_CRAFTMATERIAL031      10
	componentItem		II_GEN_GEM_CRAFTMATERIAL021      10
	componentItem		II_CHP_FASHION                   500

	craftingExp			150
	levelRequirement	3
}

Recipe	68
{	
	name				"Medic Sword"
	category 			"Weapons" 
	descriptionTID		TID_DESC_CRAFTING_WEAPONS1
	craftTime			1
	resultItem			II_WEA_SWO_MEDIC                 1
	componentItem		II_GEN_GEM_CRAFTMATERIAL031      10
	componentItem		II_GEN_GEM_CRAFTMATERIAL021      10
	componentItem		II_CHP_FASHION                   500

	craftingExp			150
	levelRequirement	3
}

Recipe	69
{	
	name				"Medic Slayer"
	category 			"Weapons" 
	descriptionTID		TID_DESC_CRAFTING_WEAPONS2
	craftTime			1
	resultItem			II_WEA_SWT_MEDIC                 1
	componentItem		II_GEN_GEM_CRAFTMATERIAL031      10
	componentItem		II_GEN_GEM_CRAFTMATERIAL021      10
	componentItem		II_CHP_FASHION                   500

	craftingExp			150
	levelRequirement	3
}

Recipe	70
{	
	name				"Medic Axe"
	category 			"Weapons" 
	descriptionTID		TID_DESC_CRAFTING_WEAPONS3
	craftTime			1
	resultItem			II_WEA_AXE_MEDIC                 1
	componentItem		II_GEN_GEM_CRAFTMATERIAL031      10
	componentItem		II_GEN_GEM_CRAFTMATERIAL021      10
	componentItem		II_CHP_FASHION                   500

	craftingExp			150
	levelRequirement	3
}

Recipe	71
{	
	name				"Medic Destroyer"
	category 			"Weapons" 
	descriptionTID		TID_DESC_CRAFTING_WEAPONS4
	craftTime			1
	resultItem			II_WEA_AXT_MEDIC                 1
	componentItem		II_GEN_GEM_CRAFTMATERIAL031      10
	componentItem		II_GEN_GEM_CRAFTMATERIAL021      10
	componentItem		II_CHP_FASHION                   500

	craftingExp			150
	levelRequirement	3
}

Recipe	72
{	
	name				"Medic Knuckle"
	category 			"Weapons" 
	descriptionTID		TID_DESC_CRAFTING_WEAPONS5
	craftTime			1
	resultItem			II_WEA_KNU_MEDIC                 1
	componentItem		II_GEN_GEM_CRAFTMATERIAL031      10
	componentItem		II_GEN_GEM_CRAFTMATERIAL021      10
	componentItem		II_CHP_FASHION                   500

	craftingExp			150
	levelRequirement	3
}

Recipe	73
{	
	name				"Medic Stick"
	category 			"Weapons" 
	descriptionTID		TID_DESC_CRAFTING_WEAPONS6
	craftTime			1
	resultItem			II_WEA_CHE_MEDIC                 1
	componentItem		II_GEN_GEM_CRAFTMATERIAL031      10
	componentItem		II_GEN_GEM_CRAFTMATERIAL021      10
	componentItem		II_CHP_FASHION                   500

	craftingExp			150
	levelRequirement	3
}

Recipe	74
{	
	name				"Medic Wand"
	category 			"Weapons" 
	descriptionTID		TID_DESC_CRAFTING_WEAPONS7
	craftTime			1
	resultItem			II_WEA_WAN_MEDIC                 1
	componentItem		II_GEN_GEM_CRAFTMATERIAL031      10
	componentItem		II_GEN_GEM_CRAFTMATERIAL021      10
	componentItem		II_CHP_FASHION                   500

	craftingExp			150
	levelRequirement	3
}

Recipe	75
{	
	name				"Medic Staff"
	category 			"Weapons" 
	descriptionTID		TID_DESC_CRAFTING_WEAPONS8
	craftTime			1
	resultItem			II_WEA_STA_MEDIC                 1
	componentItem		II_GEN_GEM_CRAFTMATERIAL031      10
	componentItem		II_GEN_GEM_CRAFTMATERIAL021      10
	componentItem		II_CHP_FASHION                   500

	craftingExp			150
	levelRequirement	3
}

Recipe	76
{	
	name				"Medic Bow"
	category 			"Weapons" 
	descriptionTID		TID_DESC_CRAFTING_WEAPONS9
	craftTime			1
	resultItem			II_WEA_BOW_MEDIC                 1
	componentItem		II_GEN_GEM_CRAFTMATERIAL031      10
	componentItem		II_GEN_GEM_CRAFTMATERIAL021      10
	componentItem		II_CHP_FASHION                   500

	craftingExp			150
	levelRequirement	3
}

Recipe	77
{	
	name				"Medic Yoyo"
	category 			"Weapons" 
	descriptionTID		TID_DESC_CRAFTING_WEAPONS10
	craftTime			1
	resultItem			II_WEA_YOY_MEDIC                 1
	componentItem		II_GEN_GEM_CRAFTMATERIAL031      10
	componentItem		II_GEN_GEM_CRAFTMATERIAL021      10
	componentItem		II_CHP_FASHION                   500

	craftingExp			150
	levelRequirement	3
}

// Gems

Recipe	78
{	
	name				"Black Diamonds"
	category 			"Gems" 
	descriptionTID		TID_DESC_CRAFTING_GEMS1
	craftTime			1
	resultItem			II_GEN_MAT_BLACK_DIAMOND    1
	componentItem		II_GEN_MAT_DIAMOND          5
	componentItem		II_GEN_MAT_EMERALD          10
	componentItem		II_GEN_MAT_SAPPHIRE         10
	componentItem		II_GEN_MAT_RUBY             10
	componentItem		II_GEN_MAT_TOPAZ            10
	componentItem		II_GEN_GEM_CRAFTMATERIAL081 2

	craftingExp			700
	levelRequirement	13
}

// Awakening

Recipe	79
{	
	name				"Awakening Protection"
	category 			"Awakening" 
	descriptionTID		TID_DESC_CRAFTING_AWAKE1
	craftTime			1
	resultItem			II_SYS_SYS_SCR_AWAKESAFE    10
	componentItem		II_SYS_SYS_SCR_AWAKE        99
	componentItem		II_SYS_SYS_SCR_AWAKECANCEL  99
	componentItem		II_GEN_GEM_CRAFTMATERIAL072 5

	craftingExp			75
	levelRequirement	3
}

Recipe	80
{	
	name				"Revert Awake Scroll"
	category 			"Awakening" 
	descriptionTID		TID_DESC_CRAFTING_AWAKE2
	craftTime			1
	resultItem			II_SYS_SYS_SCR_AEGONREVERT  10
	componentItem		II_SYS_SYS_SCR_AWAKE        99
	componentItem		II_SYS_SYS_SCR_AWAKECANCEL  99
	componentItem		II_GEN_GEM_CRAFTMATERIAL086 5

	craftingExp			75
	levelRequirement	3
}

// Collecting

Recipe	81
{	
	name				"Battery 3 Days"
	category 			"Collecting" 
	descriptionTID		TID_DESC_CRAFTING_COLLECT1
	craftTime			1
	resultItem			II_GEN_TOO_COL_BATTERY001_P  1
	componentItem		II_CHP_COLLECTOR             300

	craftingExp			50
	levelRequirement	1
}

Recipe	82
{	
	name				"Battery 7 Days"
	category 			"Collecting" 
	descriptionTID		TID_DESC_CRAFTING_COLLECT2
	craftTime			1
	resultItem			II_GEN_TOO_COL_GOLDBATTERY_P   1
	componentItem		II_GEN_TOO_COL_BATTERY001_P    2
	componentItem		II_CHP_COLLECTOR               100
	
	craftingExp			50
	levelRequirement	1
}

Recipe	83
{	
	name				"Battery 15 Days"
	category 			"Collecting" 
	descriptionTID		TID_DESC_CRAFTING_COLLECT3
	craftTime			1
	resultItem			II_GEN_TOO_COL_SILVERBATTERY  1
	componentItem		II_GEN_TOO_COL_GOLDBATTERY_P  2
	componentItem		II_CHP_COLLECTOR  100
	
	craftingExp			50
	levelRequirement	1
}

Recipe	84
{	
	name				"Battery 30 Days"
	category 			"Collecting" 
	descriptionTID		TID_DESC_CRAFTING_COLLECT4
	craftTime			1
	resultItem			II_GEN_TOO_COL_GOLDBATTERY   1
	componentItem		II_GEN_TOO_COL_SILVERBATTERY 2
	componentItem		II_CHP_COLLECTOR  100
	
	craftingExp			50
	levelRequirement	1
}

// Masks

Recipe	85
{	
	name				"Bloody Mask"
	category 			"Masks" 
	descriptionTID		TID_DESC_CRAFTING_MASK1
	craftTime			3
	resultItem			II_ARM_S_CLO_MAS_BLOODY         1
	componentItem		II_ARM_S_CLO_MAS_SEAKINGCROWN_1 1
	componentItem		II_GEN_GEM_CRAFTMATERIAL044     25
	
	craftingExp			250
	levelRequirement	15
}

Recipe	86
{	
	name				"Golden Mask"
	category 			"Masks" 
	descriptionTID		TID_DESC_CRAFTING_MASK2
	craftTime			3
	resultItem			II_ARM_S_CLO_MAS_GOLDEN         1
	componentItem		II_ARM_S_CLO_MAS_SEAKINGCROWN   1
	componentItem		II_GEN_GEM_CRAFTMATERIAL044     25
	
	craftingExp			250
	levelRequirement	15
}

Recipe	87
{	
	name				"Black Mask"
	category 			"Masks" 
	descriptionTID		TID_DESC_CRAFTING_MASK3
	craftTime			3
	resultItem			II_ARM_S_CLO_MAS_BLACK          1
	componentItem		II_ARM_S_CLO_MAS_SEAKINGCROWN_2 1
	componentItem		II_GEN_GEM_CRAFTMATERIAL044     25
	
	craftingExp			250
	levelRequirement	15
}

// Cloaks

Recipe	88
{	
	name				"Bloody Cloak"
	category 			"Cloaks" 
	descriptionTID		TID_DESC_CRAFTING_CLOAK1
	craftTime			3
	resultItem			II_ARM_S_CLO_CLO_BLOODY       1
	componentItem		II_ARM_S_CLO_CLO_SEAKING02    1
	componentItem		II_GEN_GEM_CRAFTMATERIAL049   25
	
	craftingExp			250
	levelRequirement	15
}

Recipe	89
{	
	name				"Golden Cloak"
	category 			"Cloaks" 
	descriptionTID		TID_DESC_CRAFTING_CLOAK2
	craftTime			3
	resultItem			II_ARM_S_CLO_CLO_GOLDEN       1
	componentItem		II_ARM_S_CLO_CLO_SEAKING01    1
	componentItem		II_GEN_GEM_CRAFTMATERIAL049   25
	
	craftingExp			250
	levelRequirement	15
}

Recipe	90
{	
	name				"Black Cloak"
	category 			"Cloaks" 
	descriptionTID		TID_DESC_CRAFTING_CLOAK3
	craftTime			3
	resultItem			II_ARM_S_CLO_CLO_BLACK       1
	componentItem		II_ARM_S_CLO_CLO_SEAKING03   1
	componentItem		II_GEN_GEM_CRAFTMATERIAL049  25
	
	craftingExp			250
	levelRequirement	15
}

// More Tickets

Recipe	91
{	
	name				"1 Day Emerald Ticket"
	category 			"Ticket" 
	descriptionTID		TID_DESC_CRAFTING_TICKET4
	craftTime			3
	resultItem			II_SYS_TICKET_FARMINGP_01 1
	componentItem		II_CHP_COLLECTOR          1500
	componentItem		II_GEN_GEM_CRAFTMATERIAL004 5
	
	craftingExp			50
	levelRequirement	3
}

Recipe	92
{	
	name				"7 Days Emerald Ticket"
	category 			"Ticket" 
	descriptionTID		TID_DESC_CRAFTING_TICKET5
	craftTime			3
	resultItem			II_SYS_TICKET_FARMINGP_02 1
	componentItem		II_CHP_COLLECTOR          3000
	componentItem		II_GEN_GEM_CRAFTMATERIAL004 15

	craftingExp			50
	levelRequirement	3
}


Recipe	93
{	
	name				"15 Days Emerald Ticket"
	category 			"Ticket" 
	descriptionTID		TID_DESC_CRAFTING_TICKET6
	craftTime			3
	resultItem			II_SYS_TICKET_FARMINGP_03  1
	componentItem		II_CHP_COLLECTOR           5500
	componentItem		II_GEN_GEM_CRAFTMATERIAL004 25
	
	craftingExp			50
	levelRequirement	3
}


// Recycling example
Recipe	94
{	
	recycling			1
	craftTime			2
	resultItem			II_GEN_GEM_CRAFTMATERIAL096		1
	componentItem		II_GEN_GEM_RECYCLEMATERIAL1     100
	craftingExp			50
	levelRequirement	1
}

Recipe	95
{	
	recycling			2
	craftTime			2
	resultItem			II_CHP_COLLECTOR		15
	componentItem		II_GEN_GEM_RECYCLEMATERIAL2     35
	craftingExp			50
	levelRequirement	1
}

Recipe	96
{	
	recycling			3
	craftTime			2
	resultItem			II_GEN_GEM_CRAFTMATERIAL069		1
	componentItem		II_GEN_GEM_RECYCLEMATERIAL3     150
	craftingExp			50
	levelRequirement	1
}

Recipe	97
{	
	recycling			3
	craftTime			2
	resultItem			II_GEN_GEM_CRAFTMATERIAL008		1
	componentItem		II_GEN_GEM_RECYCLEMATERIAL4     150
	craftingExp			50
	levelRequirement	1
}

Recipe	98
{	
	recycling			3
	craftTime			2
	resultItem			II_GEN_GEM_CRAFTMATERIAL098		1
	componentItem		II_GEN_GEM_RECYCLEMATERIAL5     150
	craftingExp			50
	levelRequirement	1
}

Recipe	99
{	
	recycling			3
	craftTime			2
	resultItem			II_GEN_GEM_CRAFTMATERIAL024		2
	componentItem		II_GEN_GEM_RECYCLEMATERIAL6     150
	craftingExp			50
	levelRequirement	1
}

Recipe	100
{	
	recycling			3
	craftTime			2
	resultItem			II_GEN_GEM_CRAFTMATERIAL082		1
	componentItem		II_GEN_GEM_RECYCLEMATERIAL7     150
	craftingExp			50
	levelRequirement	1
}

Recipe	101
{	
	recycling			3
	craftTime			2
	resultItem			II_GEN_GEM_CRAFTMATERIAL070		1
	componentItem		II_GEN_GEM_RECYCLEMATERIAL8     170
	craftingExp			50
	levelRequirement	1
}

Recipe	102
{	
	recycling			3
	craftTime			2
	resultItem			II_GEN_GEM_CRAFTMATERIAL072		1
	componentItem		II_GEN_GEM_RECYCLEMATERIAL21    200
	craftingExp			50
	levelRequirement	1
}

Recipe	103
{	
	recycling			3
	craftTime			2
	resultItem			II_GEN_GEM_CRAFTMATERIAL060		1
	componentItem		II_GEN_GEM_RECYCLEMATERIAL9     300
	craftingExp			50
	levelRequirement	1
}

Recipe	104
{	
	recycling			3
	craftTime			2
	resultItem			II_GEN_GEM_CRAFTMATERIAL011		 1
	componentItem		II_GEN_GEM_RECYCLEMATERIAL10     300
	craftingExp			50
	levelRequirement	1
}

Recipe	105
{	
	recycling			3
	craftTime			2
	resultItem			II_GEN_GEM_CRAFTMATERIAL052		 1
	componentItem		II_GEN_GEM_RECYCLEMATERIAL11     300
	craftingExp			50
	levelRequirement	1
}

Recipe	106
{	
	recycling			3
	craftTime			2
	resultItem			II_GEN_GEM_CRAFTMATERIAL017		 1
	componentItem		II_GEN_GEM_RECYCLEMATERIAL12     300
	craftingExp			50
	levelRequirement	1
}

Recipe	107
{	
	recycling			3
	craftTime			2
	resultItem			II_GEN_GEM_CRAFTMATERIAL043		 1
	componentItem		II_GEN_GEM_RECYCLEMATERIAL13     300
	craftingExp			50
	levelRequirement	1
}

Recipe	108
{	
	recycling			3
	craftTime			2
	resultItem			II_GEN_GEM_CRAFTMATERIAL066		 1
	componentItem		II_GEN_GEM_RECYCLEMATERIAL14     300
	craftingExp			50
	levelRequirement	1
}

Recipe	109
{	
	recycling			3
	craftTime			2
	resultItem			II_GEN_GEM_CRAFTMATERIAL040		 1
	componentItem		II_GEN_GEM_RECYCLEMATERIAL15     300
	craftingExp			50
	levelRequirement	1
}

Recipe	110
{	
	recycling			3
	craftTime			2
	resultItem			II_GEN_GEM_CRAFTMATERIAL028		 1
	componentItem		II_GEN_GEM_RECYCLEMATERIAL16     300
	craftingExp			50
	levelRequirement	1
}

Recipe	111
{	
	recycling			3
	craftTime			2
	resultItem			II_GEN_GEM_CRAFTMATERIAL048		 1
	componentItem		II_GEN_GEM_RECYCLEMATERIAL17     300
	craftingExp			50
	levelRequirement	1
}

Recipe	112
{	
	recycling			3
	craftTime			2
	resultItem			II_GEN_GEM_CRAFTMATERIAL081		 1
	componentItem		II_GEN_GEM_RECYCLEMATERIAL18     200
	craftingExp			50
	levelRequirement	1
}

Recipe	113
{	
	recycling			3
	craftTime			2
	resultItem			II_GEN_GEM_CRAFTMATERIAL049		 1
	componentItem		II_GEN_GEM_RECYCLEMATERIAL19     500
	craftingExp			50
	levelRequirement	1
}

Recipe	114
{	
	recycling			3
	craftTime			2
	resultItem			II_GEN_GEM_CRAFTMATERIAL044		 1
	componentItem		II_GEN_GEM_RECYCLEMATERIAL20     500
	craftingExp			50
	levelRequirement	1
}

Recipe	115
{	
	recycling			3
	craftTime			2
	resultItem			II_GEN_GEM_CRAFTMATERIAL049		 1
	componentItem		II_GEN_GEM_RECYCLEMATERIAL19     500
	craftingExp			50
	levelRequirement	1
}