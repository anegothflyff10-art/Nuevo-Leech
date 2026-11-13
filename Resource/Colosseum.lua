-----------------------------------------------------
---------------Lade Colloseum Function---------------
-----------------------------------------------------
dofile( ".\\LuaFunc\\ColosseumFunc.lua" )

-----------------------------------------------------
---------Definiere Globale Informationen-------------
-----------------------------------------------------
StartWaitTime		=	MIN(3)
WaitAfterStage		=	SEC(5)
LowStages		=	6
HardStages		=	6

-----------------------------------------------------
--------------------Lade Monster---------------------
-----------------------------------------------------
AddMonster(MONSTER_LOW_BOSS, "MI_COLORACCOUN_1", MIN(40), 0)
AddMonster(MONSTER_LOW, "MI_COLODIEOPNIS_1", MIN(1), 1)
AddMonster(MONSTER_LOW, "MI_COLOMATEONIKER01_1", MIN(1), 2)
AddMonster(MONSTER_LOW, "MI_COLOBIGFOOT_1", MIN(1), 3)
AddMonster(MONSTER_LOW, "MI_COLOLYCANOS_1", MIN(1), 4)
AddMonster(MONSTER_LOW, "MI_COLOCLOCKWORK_1", MIN(1), 5)
AddMonster(MONSTER_LOW, "MI_COLOSOULVAMPAIN_1", MIN(1), 6)


AddMonster(MONSTER_HARD_BOSS, "MI_COLOSOULVAMPAIN_1", MIN(60), 0)
AddMonster(MONSTER_HARD, "MI_COLOLUCIFER_1", MIN(30), 1)
AddMonster(MONSTER_HARD, "MI_COLOTUTTLEKING_1", MIN(30), 2)
AddMonster(MONSTER_HARD, "MI_COLOBASILISK_1", MIN(30), 3)
AddMonster(MONSTER_HARD, "MI_COLOSKELDEVIL_1", MIN(30), 4)
AddMonster(MONSTER_HARD, "MI_COLOANGRYBEHEMOTH_1", MIN(30), 5)
AddMonster(MONSTER_HARD, "MI_COLOKALGAS_1", MIN(30), 6)
