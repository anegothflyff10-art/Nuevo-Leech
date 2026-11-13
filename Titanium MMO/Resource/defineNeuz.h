#ifndef __DEFINE_NEUZ
#define __DEFINE_NEUZ

#define AII_NONE				0
#define AII_MOVER				1
#define AII_MONSTER				2
#define AII_HUMAN				3
#define	AII_CLOCKWORKS			4
#define AII_PET					5
#define AII_BIGMUSCLE			6
#define AII_KRRR				7
#define AII_BEAR				8
#define	AII_EGG					9
#define	AII_METEONYKER			10
#define	AII_AGGRO_NORMAL		11
#define	AII_PARTY_AGGRO_LEADER	12
#define	AII_PARTY_AGGRO_SUB		13
#define AII_ARENA_REAPER		14
#define AII_VER2_TYPE0			100

#define GRP_ALL               0
#define GRP_SOLO              1
#define GRP_PARTY             2
#define GRP_GUILD             3

//////////////////////////////////////////////////////////////////////////
#define	PARTS_HEAD				0
#define	PARTS_HAIR				1
#define	PARTS_UPPER_BODY		2
#define	PARTS_LOWER_BODY		3
#define	PARTS_HAND				4
#define	PARTS_FOOT				5
#define	PARTS_CAP				6
#define	PARTS_ROBE				7
#define	PARTS_CLOAK				8
#define	PARTS_LWEAPON			9 
#define	PARTS_RWEAPON			10
#define	PARTS_SHIELD  			11
#define	PARTS_MASK              12
#define	PARTS_RIDE              13 
#define	PARTS_CAP2              14 
#define	PARTS_UPPER2            15 
#define	PARTS_LOWER2            16
#define	PARTS_HAND2             17
#define	PARTS_FOOT2             18
#define	PARTS_NECKLACE1         19 
#define	PARTS_RING1             20 
#define	PARTS_RING2             21
#define	PARTS_EARRING1          22 
#define	PARTS_EARRING2          23
#define	PARTS_PROPERTY          24 
#define	PARTS_BULLET            25 
#define	PARTS_HAT				26 
#define	PARTS_CLOTH				27
#define	PARTS_GLOVE				28
#define	PARTS_BOOTS				29
#define	PARTS_CLOAK2			30

// Structure Type
#define SRT_NONE                 0 
#define SRT_LODESTAR             1 
#define SRT_LODELOGHT            2 
#define SRT_STATION              3
#define SRT_WEAPON               4
#define SRT_SHIELD               5
#define SRT_FOOD                 6
#define SRT_MAGIC                7
#define SRT_GENERAL              8 
#define SRT_PUBLICOFFICE         9 
#define SRT_QUESTOFFICE         10 
#define SRT_BUCKLER				11
#define SRT_WARPZONE			12
#define SRT_KEY					13
#define SRT_VOTESHOP			14

// Custom NPC Structures
#define SRT_ANARCHY				15
#define SRT_MONSTERCLASH		16
#define SRT_LOOTBOX				17
#define SRT_MINIGAMES			18
#define SRT_FASHIONCOMP			19
#define SRT_TOURNAMENT			20
#define SRT_PETTAMER			21
#define SRT_GUILDHOUSE			22
#define SRT_SANDBOX				23

// New NPC Structures
#define SRT_EVENTSHOP			24
#define SRT_UPGRADESPECIALIST	25
#define SRT_JEWELER				26
#define SRT_HOUSING				27
#define SRT_MERC_MASTER			28
#define SRT_ASSIST_MASTER		29
#define SRT_ACRO_MASTER			30
#define SRT_MAGE_MASTER			31
#define SRT_TRANSMUTE			32
#define SRT_MAKEUP				33
#define SRT_REDCHIP				34
#define SRT_GS_MANAGER			35
#define SRT_GS_1V1_MANAGER		36
#define SRT_FORSAKEN			37
#define SRT_CASHSHOP			38
#define SRT_ARENA				39
#define SRT_FASHIONSHOP			40
#define SRT_MASKGLASS			41

// NPC Name Structures - Kiyo 
#define SRT_COLOMANAGER	        42
#define SRT_COLOSHOP	        43
#define SRT_ITMBOXEX	        44
#define SRT_MODELSHOP	        45
#define SRT_WEAPONMERGE			46
#define SRT_CRAFTSYSTEM			47
#define SRT_COLLECTOR			48
#define SRT_WORLDBOSS			49
#define SRT_ACHIEVEMENT			50
#define SRT_WEAPONRARITY		51
#define SRT_ROYALRUMBLE1		52
#define SRT_ROYALRUMBLE2		53

#define MAX_STRUCTURE           54
// ����Ʈ ������Ʈ
#define QS_BEGIN                0

#define MMI_DIALOG		0 // "��ȭ" ),
#define MMI_QUEST		1 // ����Ʈ 
#define MMI_TRADE		2 // "�ŷ�" ),
#define MMI_FIGHT		3 // "����" ),
#define MMI_MESSAGE		4 // "�޽���" ),
#define MMI_ADD_MESSENGER	5 // "�޽��� �߰�" ),
#define MMI_INVITE_PARTY	6 // "��Ƽ ����" )
#define MMI_INVITE_COMPANY	7 // "��Ƽ ����" )
#define MMI_MARKING		8 // "��� ����" )
#define MMI_BANKING		9 // "����
#define MMI_DUEL		10 // ����û
#define MMI_DUEL_PARTY		11 // ��Ƽ ���.
#define MMI_TRACE			12 // ���ΰŷ�
#define MMI_BEAUTYSHOP		13 // ��Ƽ��
#define MMI_REPAIR  		14 // ����â
#define MMI_GUILDBANKING	15 // ���â��
#define MMI_RANK_GUILD		16 // ��� ��ŷ
#define MMI_RANK_WAR		17 // ��������� ��ŷ
#define MMI_RANK_INFO		18 // ����Ÿ ��ŷ
#define MMI_UPGRADE			19 // ���â
#define MMI_CHANGEELEM		20 // �Ӽ� ����
#define MMI_INPUT_REWARD	21 // ����� �ɱ�
#define MMI_SHOW_REWARD		22 // ����� ����
#define MMI_PIERCING		23
#define MMI_QUERYEQUIP		24
#define MMI_POST			25
#define MMI_GUILDWAR_APP		26
#define MMI_GUILDWAR_STATE		27
#define MMI_GUILDWAR_CANCEL		28
#define MMI_GUILDWAR_JOIN		29
#define MMI_GUILDCOMBAT_RANKING		30 
#define MMI_CHEER			31 
#define MMI_PIERCING_REMOVE		32
#define MMI_GUILDCOMBAT_SELECTION	33
#define MMI_GUILDCOMBAT_JACKPOT		34
#define MMI_GUILDCOMBAT_JACKPOT2	35
#define MMI_GUILDCOMBAT_BESTPLAYER	36

#define MMI_GUILDCOMBAT_INFO_BOARD1	37
#define MMI_GUILDCOMBAT_INFO_BOARD2	38
#define MMI_GUILDCOMBAT_INFO_BOARD3	39
#define MMI_GUILDCOMBAT_INFO_TEX	40
#define MMI_GUILDCOMBAT_PENYA_RETURN 	41
#define MMI_BEAUTYSHOP_SKIN		42 // ��������
#define MMI_SUMMON_ANGEL		43 // ������ȯ
#define MMI_KAWIBAWIBO			44 //���������� ����
#define MMI_FINDWORD			45 //�ܾ���߱� ����
#define MMI_FIVESYSTEM 			46 //����(�ֻ���) ����
#define MMI_REASSEMBLE 			47 //���� ����

#define	MMI_PET_FEED			48 //�� ���� �ֱ�
#define	MMI_PET_STATUS			49 //�� ����
#define	MMI_PET_RELEASE			50 //�� ����

#define MMI_SMELT_MIXJEWEL		51 //���� : ����Į��, ������ �ռ�
#define MMI_SMELT_JEWEL			52 //���� : ���͸� ������ ���� ����
#define MMI_SMELT_EXTRACTION	53 //���� : ��������
#define MMI_SMELT_CHANGEGWEAPON	54 //���� : ���� ���� (�Ϲ� -> ����ũ)
#define MMI_SMELT_CHANGEUWEAPON	55 //���� : ���� ���� (����ũ -> ���͸�)

#define MMI_LEGEND_SKILLUP		56 //���� ��ų��

#define MMI_EVENT_MAY			57 //5�� �̺�Ʈ - �ູ�� ������ �� ����� �� ����
#define MMI_PET_FOODMILL		58
#define MMI_ATTRIBUTE			59

#define MMI_GUILDCOMBAT_1TO1_OFFER			60 // 1:1������ ��û�ϱ�
#define MMI_GUILDCOMBAT_1TO1_CANCEL			61 // 1:1������ ����ϱ�
#define MMI_GUILDCOMBAT_1TO1_OFFERSTATE		62 // 1:1������ ��û��Ȳ
#define MMI_GUILDCOMBAT_1TO1_SELECTION		63 // 1:1������ ������ ����
#define MMI_GUILDCOMBAT_1TO1_ENTRANCE		64 // 1:1������ ����
#define MMI_GUILDCOMBAT_1TO1_GUIDE_TEX		65 // 1:1������ ������ �ȳ�
#define MMI_GUILDCOMBAT_1TO1_GUIDE_PRIZE	66 // 1:1������ ���&��ǰ �ȳ�
#define MMI_GUILDCOMBAT_1TO1_GUIDE_ENTRY	67 // 1:1������ ���� �ȳ�
#define MMI_GUILDCOMBAT_1TO1_GUIDE_RULE		68 // 1:1������ ��Ģ �ȳ�
#define MMI_GUILDCOMBAT_1TO1_GUIDE_WIN		69 // 1:1������ �¸����� �ȳ�
#define MMI_GUILDCOMBAT_1TO1_REPAYMENT		70 // 1:1������ ��û�� ��ȯ

#define MMI_LVREQDOWN_CANCEL			71 // ���뷹�� �϶� ���� �޴�
#define MMI_SMELT_REMOVE_PIERCING		72 // ��Ʈ�� �Ǿ�� �ɼ� ����
#define MMI_ITEM_AWAKENING				73 // ������ ���� �޴�
#define MMI_NPC_BUFF					74 // NPC���� Buff�ޱ�
#define MMI_COLLECT01                  	75 // �Ϲ� ���� ��ȯ
#define MMI_GLYPH                  	    76 // Glyph Exchanger
#define MMI_PET_RES                   	77 // ���� ��Ȱ�� �������� ��ȯ 
#define MMI_PET_RES01					78 // ��Ȱ�� ������ �η縶���� ��ȯ

#define MMI_BLESSING_CANCEL				79 // ������ �ູ ���

#define	MMI_ARENA_ENTER					80
#define	MMI_ARENA_EXIT					81

#define MMI_EVENT_HAPPY_TWN				82
#define MMI_EVENT_HAPPY_USA				83

#define MMI_SECRET_OFFER				84 // ����� �� ��û
#define MMI_SECRET_OFFERSTATE			85 // ����� �� ��û��Ȳ
#define MMI_SECRET_SELECTION			86 // ����� �� ������ ����
#define MMI_SECRET_ENTRANCE				87 // ����� �� ����
#define MMI_SECRET_TAXRATES_CHANGE		88 // ���� ���� â
#define MMI_SECRET_TAXRATES_CHECK		89 // ���� Ȯ�� â
#define MMI_SECRET_BOARD				90 // ����� �� �ȳ�

#define MMI_LORD_STATE					91 // ���� �ĺ� ����â
#define MMI_LORD_TENDER					92 // ���� ���� â
#define MMI_LORD_VOTE					93 // ���� ��ǥ â
#define MMI_LORD_EVENT					94 // ���� �̺�Ʈ â

#define MMI_SMELT_REMOVE_JEWEL			95 // ���͸� ���� ���� ���� â
#define MMI_PET_EGG01					96 // �� ��ȯ â
#define MMI_HEAVEN_TOWER				97 // �ɿ��� ž
#define	MMI_EXCHANGE_WEAPONCARD			98 // ���� ī�� ��ȯ
#define	MMI_EXCHANGE_ARMORCARD			99 // �� ī�� ��ȯ


#define	MMI_SECRET_ENTRANCE_1			100 // ���� ����� ����

#define	MMI_LORD_INFO					101 // ���� ����â
#define	MMI_LORD_RPINFO					102 // ���� ��ȯ�� ����â

#define MMI_SECRET_CANCEL				103 // ����� �� ���

#define MMI_PET_AWAK_CANCEL				104 // �갢�� ���

#define	MMI_FASHION_PHP					105 // �м� ���� �̺�Ʈ

#define	MMI_EVENT_CARD_KOR				106 // ���� ī�� ��ȯ �̺�Ʈ

#define MMI_LORD_RAINBOWAPPLICATION		107 // ���κ��� ���̽� ���� ��û
#define MMI_LORD_RAINBOWWAIT			108 // ���κ��� ���̽� ��?
#define MMI_LORD_RAINBOWRULE			109 // ���κ��� ���̽��� ��Ģ
#define MMI_LORD_RAINBOWTOPTEN			110 // ���κ��� ���̽� ���� ����
#define MMI_LORD_RAINBOWWIN				111	// ���κ��� ���̽� ��� �Ұ�
#define MMI_LORD_RAINBOWEND				112 // ���κ��� ���̽� ���� Ȯ��
#define MMI_LORD_RAINBOW_KAWIBAWIBO		113 // ���κ��� ���̽� - ����,����,�� ����
#define MMI_LORD_RAINBOW_DICE			114 // ���κ��� ���̽� - �ֻ��� ����! ����!
#define MMI_LORD_RAINBOW_ARITHMETIC		115 // ���κ��� ���̽� - ��Ģ����
#define MMI_LORD_RAINBOW_STOPWATCH		116 // ���κ��� ���̽� - �����ġ ���߷� ����
#define MMI_LORD_RAINBOW_TYPING			117 // ���κ��� ���̽� - Ȳ�� Ÿ�� ġ��
#define MMI_LORD_RAINBOW_CARD			118 // ���κ��� ���̽� - �����! ī�� ���߱�
#define MMI_LORD_RAINBOW_LADDER			119 // ���κ��� ���̽� - �� �� ���� ��ٸ� Ÿ��

#define	MMI_RENAME_CANCEL			120 // �� �۸� ���

#define	MMI_EVENT_TRADE_KOR			121  //���� ���� �� ���� ��ȯ

#define	MMI_VISIT_MYROOM			122 // ���̷� ����
#define	MMI_VISIT_FRIEND			123 // ģ���� ����
#define	MMI_RETURNTO_WORLD			124 // ���̷뿡�� ����� ��ȯ

#define	MMI_EVENT_RESTATE01			125 // ������Ʈ ���� ��ȯ

#define MMI_ITEM_TRANSY				126 // ������ Ʈ����

#define MMI_EVENT_FIRSTTERM01			127 // ���б� �̺�Ʈ

#define	MMI_EVENT_ALICE01			128 // ���� Ȱ��ȭ �̺�Ʈ

#define	MMI_EVENT_OASIS01			129 // �޷��� �ȸ
#define	MMI_EVENT_FLOWER01			130 // ����� ī���̼�

#define	MMI_EVENT_ALICE02			131 // �Ϻ�, �븸, ȫ�� ���̺�Ʈ

#define MMI_EVENT_TRADE_USA			132 // �̱� ���������� ���� ��ȯ

#define MMI_EVENT_TRADE_ASIA			133 // ȫ��, �븸 ���������� ���� ��ȯ

#define	MMI_SMELT_SAFETY_GENERAL		134 // ��������(�Ϲ�)
#define	MMI_SMELT_SAFETY_ACCESSORY		135 // ��������(�׼�����)
#define	MMI_SMELT_SAFETY_PIERCING		136 // ��������(�Ǿ��)

#define	MMI_QUIZ_ENTRANCE			137 // �����̺�Ʈ ����
#define	MMI_QUIZ_TELE_QUIZZONE		138 // ��������� ���������� �̵�
#define	MMI_QUIZ_EXIT				139 // ��������� ������ �̵�
#define MMI_CHANGTICKET01			140 // �Ϻ� �λ�� �̺�Ʈ
#define MMI_BUFFPET_STATUS			141	// ������ ����
#define MMI_BUFFPET_RELEASE			142 // ������ ���� 
#define MMI_GHOUSE_INFO				143	// ���� ���� 
#define MMI_GHOUSE_REINSTALL		144	// ���� �缳ġ 
#define MMI_GHOUSE_RECALL			145	// ���� ȸ�� 

#define MMI_TELEPORTER				146 // �ڷ����� 

#define MMI_GUILDHOUSE_SALE			147 // ����Ͽ콺 �Ǹ� NPC
#define MMI_GUILDHOUSE_CHARGE		148 // ����Ͽ콺 ������
#define MMI_GUILDHOUSE_ENTER		149 // ����Ͽ콺 ����
#define MMI_GUILDHOUSE_OUT			150 // ����Ͽ콺 ����
#define MMI_INVITE_CAMPUS			151 // ���� �α�
#define MMI_REMOVE_CAMPUS			152 // ���� ����

#define	MMI_CHANGE_CHRISTMAS01		153

#define	MMI_GHOUSE_BED				154
#define	MMI_GHOUSE_TABLE			155
#define	MMI_GHOUSE_SOFA				156
#define	MMI_GHOUSE_DESK				157
#define	MMI_GHOUSE_CHAIR			158
#define	MMI_GHOUSE_CASE				159
#define	MMI_GHOUSE_CLOSET			160
#define	MMI_GHOUSE_WARDROBE			161
#define	MMI_GHOUSE_BATH				162
#define	MMI_GHOUSE_DRAWER			163
#define	MMI_GHOUSE_CARPET			164
#define	MMI_GHOUSE_WALLPAPER			165

#define MMI_EVENT_FITA				166

#define	MMI_SMELT_SAFETY_ELEMENT		167 // ��������(�Ӽ�)

#define	MMI_EVENT_LUCKYBOX			168

#define	MMI_CHANGEGG01				169

#define	MMI_EVENT_TRADE_KOR2010		170

#define	MMI_GUILDHOUSE_AUCTION01	171

#define	MMI_EVENT_HAPPY_USA2010		172

#define	MMI_EVENT_WORLDCUP10_KOR	173
#define	MMI_EVENT_WORLDCUP10_FOR	174
#define	MMI_EVENT_MATCHMAKER_FOR	175

#define	MMI_EVENT_ALICE_PHP_FOR	176

#define	MMI_EVENT_AROTTO_KOR	177 //����


#define MMI_SUMMON_SMELT				178
#define MMI_SUMMON_EXTRACTOPER			179
#define MMI_SUMMON_MAKEOPER				180
#define MMI_SUMMON_UPGRADECID			181
#define MMI_SUMMON_MAKECID				182
#define MMI_SUMMON_MAKEOPERCID			183

//16�� �߰�
#define MMI_GHOUSE_BARUNASMELPROT			184
#define MMI_GHOUSE_OPERPIECE				185
#define MMI_GHOUSE_OPERMIX					186
#define MMI_GHOUSE_OPERENCHANT				187
#define MMI_GHOUSE_UNSKILL					188
#define MMI_ERRORSENCHANT_BARUNA					189

#define MMI_EVENT_TRADE_TWN					190
//���� ����Ͽ콺 �� �Ŵ�
#define MMI_GUILDHOUSE_ENTER_DOOR			191
//���� ����Ͽ콺 ǥ����
#define MMI_GUILDHOUSE_NOTICE			192

//��ȯ�Ŵ� MMI
#define MMI_ZOMBIES_CHANGE1			193
#define MMI_ZOMBIES_CHANGE2			194
#define MMI_ZOMBIES_CHANGE3			195
#define MMI_ZOMBIES_CHANGE4			196

//��ȯ�Ŵ� MMI
#define MMI_JAP_CHANGE			197

//���� Ȧ�� �̺�Ʈ ��ȯ �޴�
#define MMI_HOLDEMEVENT01		198 // Aī�� 4�� ��ȯ
#define MMI_HOLDEMEVENT02		199 // Kī�� 4�� ��ȯ
#define MMI_HOLDEMEVENT03		200 // Qī�� 4�� ��ȯ
#define MMI_HOLDEMEVENT04		201 // Jī�� 4�� ��ȯ
#define MMI_HOLDEMEVENT05		202 // A/K/Q/J ī�� 1�徿 ��ȯ

#define MMI_SUMMON_PEARCING		203 //�ٷ糪 �Ǿ��

#define MMI_COOPERATIVE_CONTRIBUTIONS 204 // ���� ���

#define MMI_COLOSSEUM_COLOENTER01 205 // ���� ���
#define MMI_COLOSSEUM_COLOENTER02 206 // ���� ���

#define MMI_CHRISTMASFAIRY01	207 // ũ�������� ���� ��ū ��ȯ 1��
#define MMI_CHRISTMASFAIRY02	208 // ũ�������� ���� ��ū ��ȯ 25��
#define MMI_CHRISTMASFAIRY03	209 // ũ�������� ���� ��ū ��ȯ 50��
#define MMI_CHRISTMASFAIRY04	210 // ũ�������� ���� ��ū ��ȯ 75��
#define MMI_CHRISTMASFAIRY05	211 // ũ�������� ���� ��ū ��ȯ 100��

#define MMI_COSTUMEBUY01	212 // �ڽ�Ƭ ��� ����
#define MMI_COSTUMESELL01	213 // �ڽ�Ƭ ��� �Ǹ�
#define MMI_COSTUMEMIX01	214 // �ڽ�Ƭ �ռ�

#define MMI_DONATION		215 // ���� ��� �޴�
#define MMI_DONATION_RANK	216 // ���� ��� ��ŷ ����

#define MMI_WHITEDAY_EXCHANGE01		217 //ȭ��Ʈ ���� ��ȯ
#define MMI_WHITEDAY_EXCHANGE02		218 //ȭ��Ʈ ���� ��ȯ
#define MMI_WHITEDAY_EXCHANGE03		219 //ȭ��Ʈ ���� ��ȯ
#define MMI_WHITEDAY_EXCHANGE04		220 //ȭ��Ʈ ���� ��ȯ

#define MMI_GHOUSE_CABINET			221// ��� ī�װ��� �����
#define MMI_GHOUSE_CRYSTAL			222// ��� ī�װ��� ũ����Ż

#define MMI_FIRSEED2011					223//������ ��ȯ
#define	MMI_PEARSEED2011				224//�質�� ��ȯ
#define	MMI_PINESEED2011				225//�ҳ��� ��ȯ
#define	MMI_PERSIMSEED2011				226//������ ��ȯ

#define	MMI_RIVERCARD2011				227//����ī�� ��ȯ
#define	MMI_FLAMECARD2011				228//�÷���ī�� ��ȯ
#define	MMI_DESERTCARD2011				229//����Ʈī�� ��ȯ
#define	MMI_GENERATERCARD2011			230//���ʷ�����ī�� ��ȯ
#define	MMI_CYCLONECARD2011				231//����Ŭ�� ī��
#define	MMI_EXCHANGEBLOSSOM				232//���ɾ���-���������� ���� ��ȯ


#define	MMI_TELEPORTPOINTMENU01			233//����
#define	MMI_TELEPORTPOINTMENU02			234//��ü����
#define	MMI_TELEPORTPOINTMENU03			235//�̸�����
#define	MMI_TELEPORTPOINTMENU04			236//�ݱ�

#define MMI_BARUNA_ELEMENT_SMELT		237//�ٷ糪�Ӽ�����
#define MMI_BARUNA_WAKEUP				238//�ٷ糪����
#define MMI_BARUNA_WAKEUP_CANCEL		239//�ٷ糪�������

#define MMI_EVENTARENA_ENTER			241//���� ���� ����

#define MMI_TWBOXTRADE01			242//��� ��ȯ�ϱ�

#define MMI_HANGAWI_TRADE		244//�ܼ��� 10���� 50,000 ��ĸ� ���������� ���� 1������ ��ȯ

#define MMI_MARKETJOIN				245//���� ���� �޴�

#define MMI_TWBOXTRADE				246 // 5�ֳ� ��� ���� ��ȯ

#define	MMI_BEHEMOTHSMELTEVENT_TWOSWORD			247	// �Ӽ����õ� �������� ��� ���ڵ� �ҵ带 ������������� ��ȯ
#define	MMI_BEHEMOTHSMELTEVENT_TWOAXE			248	// �Ӽ����õ� �������� ��� ���ڵ� ������ ������������� ��ȯ
#define	MMI_BEHEMOTHSMELTEVENT_ONESWORD			249	// �Ӽ����õ� �������� ���ҵ带 ������������� ��ȯ
#define	MMI_BEHEMOTHSMELTEVENT_ONEAXE			250	// �Ӽ����õ� �������� ��� ������ ������������� ��ȯ
#define	MMI_BEHEMOTHSMELTEVENT_BOW				251	// �Ӽ����õ� �������� ��� ���츦 ������������� ��ȯ
#define	MMI_BEHEMOTHSMELTEVENT_YOYO				252	// �Ӽ����õ� �������� ��� ��並 ������������� ��ȯ
#define	MMI_BEHEMOTHSMELTEVENT_KNUCKLE			253	// �Ӽ����õ� �������� ��� ��Ŭ�� ������������� ��ȯ
#define	MMI_BEHEMOTHSMELTEVENT_STICK			254	// �Ӽ����õ� �������� ��� ��ƽ�� ������������� ��ȯ
#define	MMI_BEHEMOTHSMELTEVENT_WAND				255	// �Ӽ����õ� �������� ��� �ϵ带 ������������� ��ȯ
#define	MMI_BEHEMOTHSMELTEVENT_STAFF			256	// �Ӽ����õ� �������� ��� �������� ������������� ��ȯ

#define	MMI_MAPLE_TRADE					257	// ���� ��ȯ�ϱ�
#define	MMI_MARKET_TRADE				258	// �ŷ� �߰� �޴�

#define	MMI_USAKAWIBAWIBOCOUPON2011			259	// ȣ�� 10���� 100,000 ��ĸ� ���������� �������� ��ȯ

#define	MMI_TWOHANDEDWEAPONMERGE			260	// ��� ���� �ռ�
#define	MMI_TWOHANDEDWEAPONMERGE_CANCEL		261	// ��� ���� �ռ� ���

#define	MMI_ELLDINPOTION			262	// �׾Ƹ� ���� UI


#define	MMI_COLOSSEUM_REWARD_MIX		263	//��ǥ�� ��Ÿ ���� ������ ��ȯ
#define	MMI_COLOSSEUM_REWARD_WEAPON_1	264	// ��ǥ�� �ʱ� ������ ���� ��ȯ
#define	MMI_COLOSSEUM_REWARD_WEAPON_2	265	// ��ǥ�� �߱� ������ ���� ��ȯ
#define	MMI_COLOSSEUM_REWARD_WEAPON_3	266	// ��ǥ�� ���� ������ ���� ��ȯ

#define	MMI_CRISTMASRUBETRADEMENU		267 //ũ���� ���� ��ū���� ������ ��ȯ

#define	MMI_LOOKCHANGE					268

#define	MMI_CHRISTMASENCHANTEVENTMENU		269	//ũ�������� ���� �̺�Ʈ ��ȯ �޴�

#define	MMI_MARKETEXIT				270	//���忡�� ������ �̵� �޴�

#define	MMI_EVENT_2012HAPPYMONEYMENU		271	//2012���ǸӴ� �̺�Ʈ �޴�

#define	MMI_POR_2012KAWIBAWIBOCUPONMENU		272	//2012���������� �̺�Ʈ_���� ��ȯ �޴�

#define	MMI_SEAKINGLOOKCHANGEMENU		273	//����ǻ� ���� ��ȯ �޴�

#define	MMI_SEAKINGMASKCHANGEMENU		274	//��հ���(��) �ɼ� ��ȯ �޴�
#define	MMI_SEAKINGMASKCHANGEMENU_1		275	//��հ���(��) �ɼ� ��ȯ �޴�

#define	MMI_FLYFFCOUPONSHOP			276	//������ ���� ��ȯ UI

#define	MMI_FLYFFPIECE_CHANGE		277

#define	MMI_MUSICFESTIVALETC		278	//�����佺Ƽ�� ��ǥ
#define	MMI_MUSICFESTIVALGUITAR		279	//�����佺Ƽ�� ��Ÿ

//�̱� ����� �̺�Ʈ(12.07.25 ~ 12.08.28)
#define MMI_ENGGUILDEVENTARMOR     280  //�� �����ڽ� ��ȯ
#define MMI_ENGGUILDEVENTWEA     281  //���� �����ڽ� ��ȯ
#define MMI_ENGGUILDEVENTGCHIP     282 //��Ÿ ������ ��ȯ

#define MMI_SUMMERENCHANTEVENTMENU     283  //�ؿ� ���� �̺�Ʈ(12.07.31 ~ 12.09.25)

//ũ�������� ������
#define MMI_CHRISTMAS_BEARDOLL		284 // ũ�������� ������ ��ȯ

#define MMI_CHRISTMAS_SNOW_GOLD		285 // ũ�������� Ȳ�� ���ǰ��� ��ȯ

//ũ�������� ���� �̺�Ʈ

#define MMI_CHRISTMASENCHANTEVENT		286 // Ȳ���� ��ȯ

//�߷�Ÿ�� �̺�Ʈ
#define MMI_VALENTAINEVENT		287 // �߷�Ÿ�� �̺�Ʈ
#define MMI_VALENTAIN_QUPID		288 // �߷�Ÿ�� �̺�Ʈ(���������� ť�ǵ�)

//ȭ��Ʈ���� ���� ��ȯ�޴� �߰�
#define MMI_WHITEDAY_EXCHANGE05		289 //ȭ��Ʈ ���� ��ȯ
#define MMI_WHITEDAY_EXCHANGE06		290 //ȭ��Ʈ ���� ��ȯ
#define MMI_WHITEDAY_EXCHANGE07		291 //ȭ��Ʈ ���� ��ȯ
#define MMI_WHITEDAY_EXCHANGE08		292 //ȭ��Ʈ ���� ��ȯ

// 2014 �ҷ��� �̺�Ʈ
#define	MMI_HALLOWEEN_EVENT_2014	293

// 2014 ���� �̺�Ʈ
#define	MMI_WINE_EVENT_FLARIS_2014		294
#define	MMI_WINE_EVENT_SAINT_2014		295
#define	MMI_WINE_EVENT_DARKON_2014		296

// 2014 ũ�������� �̺�Ʈ
#define	MMI_CHRISTMAS_EVENT_02_2014		297
#define	MMI_CHRISTMAS_EVENT_04_2014		298
#define	MMI_CHRISTMAS_EVENT_05_2014		299
#define	MMI_CHRISTMAS_EVENT_07_2014		300
#define	MMI_CHRISTMAS_EVENT_08_2014		301

// 2015 Ŭ�ι� �̺�Ʈ
#define	MMI_CLOVER_EVENT_2015			302

// 2015 ����.com 6�ֳ� �̺�Ʈ
#define	MMI_6TH_ANNIVERSARY_WEBZEN_WEAPON_EXCHANGE_2015			303
#define	MMI_6TH_ANNIVERSARY_WEBZEN_MALE_ARMOR_EXCHANGE_2015		304
#define	MMI_6TH_ANNIVERSARY_WEBZEN_FEMALE_ARMOR_EXCHANGE_2015	305

#define	MMI_JP_11TH_ANNIVERSARY_PIGGY_EXCHANGE_2015				306

#define 	MMI_MADRIGAL_TOUR_EXCHANGE					307

#define 	MMI_BARUNA_ULTIMATETRANS	308

#define		MMI_CARD_UPGRADE			309

#define 	MMI_COLLECT03                  	310 	// ī�� ���� ��ȯ

#define 	MMI_12TH_ANNIVERSARY_EXCHANGE01          	311
#define 	MMI_12TH_ANNIVERSARY_EXCHANGE02          	312


#define		MMI_COSTUME_EXCHANGE01		313		// �ڽ�Ƭ ��ȯ
#define		MMI_COSTUME_EXCHANGE02		314
#define		MMI_COSTUME_EXCHANGE03		315
#define		MMI_COSTUME_EXCHANGE04		316
#define		MMI_COSTUME_EXCHANGE05		317
#define		MMI_COSTUME_EXCHANGE06		318
#define		MMI_COSTUME_EXCHANGE07		319

#define		MMI_WEAPONBOX_EXCHANGE01		320		// 2017 �߼� ������ ��ȯ
#define		MMI_ARMORBOX_EXCHANGE01		321		
#define		MMI_ARMORBOX_EXCHANGE02		322	

#define		MMI_SMELT_SAFETY_COSTUME	323

#define		MMI_SMELT_JEWEL_COSTUME		324 //���� : �ڽ�Ƭ ������ ���� ����	

#define 	MMI_NPC_BUFF2					325 // �����̾� ����

#define		MMI_SMELT_REMOVE_JEWEL_COSTUME		326 	//���� : �ڽ�Ƭ ������ ���� ����	

#define		MMI_SMELT_MIXCOSTUME			327 //���� : �ڽ�Ƭ �ռ�

#define		MMI_SMELT_MIXMATERIAL			328	//���� : ��� �ռ�

#define		MMI_155_LORDK_F_CHANGE		329	//������ �ε� ���÷� �� ������ ��ȯ
#define		MMI_155_LORDK_M_CHANGE		330	//������ �ε� ���÷� �� ������ ��ȯ
#define		MMI_155_STORMB_F_CHANGE		331	//������ ���� �����̵� ���÷� �� ������ ��ȯ
#define		MMI_155_STORMB_M_CHANGE		332	//������ ���� �����̵� ���÷� �� ������ ��ȯ
#define		MMI_155_CRACKS_F_CHANGE		333	//������ ũ������ �� ������ ��ȯ
#define		MMI_155_CRACKS_M_CHANGE		334	//������ ũ������ �� ������ ��ȯ
#define		MMI_155_WINDL_F_CHANGE		335	//������ ���巯Ŀ �� ������ ��ȯ
#define		MMI_155_WINDL_M_CHANGE		336	//������ ���巯Ŀ �� ������ ��ȯ
#define		MMI_155_FLOR_F_CHANGE		337	//������ �÷θ���Ʈ �� ������ ��ȯ
#define		MMI_155_FLOR_M_CHANGE		338	//������ �÷θ���Ʈ �� ������ ��ȯ
#define		MMI_155_FORCEM_F_CHANGE		339	//������ ���������� �� ������ ��ȯ
#define		MMI_155_FORCEM_M_CHANGE		340	//������ ���������� �� ������ ��ȯ
#define		MMI_155_MENT_F_CHANGE		341	//������ ��Ż����Ʈ �� ������ ��ȯ
#define		MMI_155_MENT_M_CHANGE		342	//������ ��Ż����Ʈ �� ������ ��ȯ
#define		MMI_155_ELEL_F_CHANGE		343	//������ ������Ż �ε� �� ������ ��ȯ
#define		MMI_155_ELEL_M_CHANGE		344	//������ ������Ż �ε� �� ������ ��ȯ
#define		MMI_155_LORDK_WEA_CHANGE	345	//�ε� ���÷� ���� ���� ��ȯ
#define		MMI_155_STORMB_WEA_CHANGE	346	//���� �����̵� ���� ���� ��ȯ
#define		MMI_155_CRACKS_WEA_CHANGE	347	//ũ������ ���� ���� ��ȯ
#define		MMI_155_WINDL_WEA_CHANGE	348	//���巯Ŀ ���� ���� ��ȯ
#define		MMI_155_FLOR_WEA_CHANGE		349	//�÷θ���Ʈ ���� ���� ��ȯ
#define		MMI_155_FORCEM_WEA_CHANGE	350	//���������� ���� ���� ��ȯ
#define		MMI_155_MENT_WEA_CHANGE		351	//��Ż����Ʈ ���� ���� ��ȯ
#define		MMI_155_ELEL_WEA_CHANGE		352	//������Ż �ε� ���� ���� ��ȯ
#define		MMI_155_SHEILD_BOOK_CHANGE		353	//���� �� å ��ȯ
#define		MMI_GUILD_COIN		354	//��� ���� ����

#define		MMI_SMELT_SAFETY_GENERAL_BARUNA	355
#define		MMI_SMELT_SAFETY_PIERCING_BARUNA	356
#define		MMI_SMELT_JEWEL_BARUNA				357

#define MMI_SMELT_REMOVE_PIERCING_BARUNA		358 // ��Ʈ�� �Ǿ�� �ɼ� ����

#define MMI_SMELT_REMOVE_JEWEL_BARUNA			359

#define MMI_CARD_EXCHANGE			360
#define MMI_BARUNA_CARD_EXCHANGE			361

#define	MMI_FLYCOIN_CASH_COSTUME	362
#define	MMI_FLYCOIN_CASH_PET	363
#define	MMI_FLYCOIN_CASH_CONVENIENCE	364
#define	MMI_FLYCOIN_CASH_PARTY	365
#define	MMI_FLYCOIN_CASH_BUFF	366
#define	MMI_FLYCOIN_CASH_UPGRADE	367
#define	MMI_FLYCOIN_CASH_PRIMIUM	368
#define	MMI_FLYCOIN_CASH_RIDE	369
#define	MMI_FLYCOIN_CASH_FECOSTUME	370
#define	MMI_FLYCOIN_CASH_BARUNA	371

#define	MMI_DRAGONQUEEN_M	372	// �ʸ��� ����� �佺Ƽ��
#define	MMI_DRAGONQUEEN_F	373

#define	MMI_HALLOWEENQUEEN	374	// 2019�� �ҷ��� �̺�Ʈ

#define	MMI_OCTORBERPH_1	375	// �ʸ��� 10�� �⼮
#define	MMI_OCTORBERPH_2	376	// �ʸ��� 10�� �⼮
#define	MMI_HALLOWEENQUEEN_PH	377	// 2019�� �ʸ��� �ҷ��� �̺�Ʈ

#define	MMI_CHIRSTMASPH_1	378	// 2019 �ʸ��� ũ�������� ��ȯ
#define	MMI_CHIRSTMASPH_2	379	// 2019 �ʸ��� ũ�������� ��ȯ
#define	MMI_CHIRSTMASPH_3	380	// 2019 �ʸ��� ũ�������� ��ȯ

#define	MMI_NEWYEAR2020	381	// �ʸ��� 2020 �ų� �̺�Ʈ

#define	MMI_TWNEWSERVER1	382	// �븸 �ű� ���� �̺�Ʈ
#define	MMI_TWNEWSERVER2	383	// �븸 �ű� ���� �̺�Ʈ

#define	MMI_VALENTINE2020	384

#define	MMI_SAINT2020	385

#define MMI_RETURN_AWAKE	386
#define MMI_WEAPON_RARITY	387
#define MMI_MINIGAMES		388
#define MMI_ANARCHY			389
#define	MMI_AEGON_TOURNAMENT		390
#define	MMI_AEGON_TOURNAMENT_LOG	391
#define	MMI_AEGON_TOURNAMENT_TELE	392
#define	MMI_VIEW_INV				393
#define MMI_MONSER_CLASH_REGISTER                394
#define MMI_MONSTER_CLASH_REGISTER_MEMBER        395
#define MMI_LOOTBOX		396

#define MMI_SANDBOX_ENTER	397
#define MMI_SANDBOX_LEAVE	398
#define MMI_SANDBOX			399
#define MMI_SANDBOX_CLEAR	400

#define MMI_EXCHANGER_ITEMBOX	401

#define MMI_CRAFTING		402
#define MMI_NPC_BUFF_CLASS	403
#define MMI_BUYBACK			404
#define MMI_PET_GLOW		405
#define MMI_CRYSTAL			406

#define MMI_WARPLAYERSJOIN		407
#define MMI_WARPLAYERRANKING	408
#define MMI_WARPLAY_JOIN		409

#define MMI_CHANGORI            410

#define MMI_PVP_MINIGAMES		411
#define MMI_PVP_MINIGAMES_FIND	412

#define	MMI_VIEW_BAG				413
#define	MMI_VIEW_BANK				414

#define MAX_MOVER_MENU				450	// MMI�� �߰���ų ���� �ִٸ� �� ��ġ�� ��½��Ѿ� �Ѵ�.

/*
====================================================================================================
MMI �޴� ����
====================================================================================================
*/

#define MGI_APPELL_UP		0	// ȣĪ ��
#define MGI_APPELL_DOWN		1
#define MGI_CLASS_UP		2	// ��� ��
#define MGI_CLASS_DOWN		3
#define MGI_GUILD_LEAVE		4	// Ż��
#define MGI_NICKNAME		5	// ��Ī �ο�.
#define MGI_CHG_MASTER		6	// ��帶���� ����

#define MGI_GUILD_MENU		7

// ��ǰ� �׼�
#define MOT_BASE_NONE            0
#define MOT_BASE_BATTLE          1
#define MOT_BASE_SIT             2
#define MOT_BASE_PICKUP          3
#define MOT_BASE_HANDSHAKE       4
#define MOT_BASE_AMBIGUOUS       5
#define MOT_BASE_YES             6
#define MOT_BASE_NO              7
#define MOT_BASE_SPRINT          8
#define MOT_BASE_PARADEREST      9
#define MOT_BASE_ATTENTION      10
#define MOT_BASE_SCISSORS       11
#define MOT_BASE_ROCK           12
#define MOT_BASE_PAPER          13
#define MOT_BASE_POINTWAYNORTH  14
#define MOT_BASE_POINTWAYSOUTH  15
#define MOT_BASE_POINTWAYEAST   16
#define MOT_BASE_POINTWAYWEST   17
#define MOT_BASE_KNEEDOWN       18
#define MOT_BASE_PUSHUP         19
#define MOT_BASE_HIPKIDDING     20
#define MOT_BASE_JAB            21
#define MOT_BASE_HEAD           22
#define MOT_BASE_RISESWORD      23
#define MOT_BASE_COLLECT        24
#define MOT_BASE_ESCAPE         25
#define MOT_BASE_CHEER          26
#define MOT_BASE_AUTOATTACK		27
#define MOT_BASE_COUPLE			28

#define MOT_BASE_DANCE01		29
#define MOT_BASE_FACEP01		30
#define MOT_BASE_KISS01			31
#define MOT_BASE_KISS02			32
#define MOT_BASE_MED01			33
#define MOT_BASE_MOON			34
#define MOT_BASE_DABB			35
#define MOT_BASE_SUIC			36
#define MOT_BASE_HAPJ			37
#define MOT_BASE_SLEE			38
#define MOT_BASE_CSQU			39
#define MOT_BASE_GDA1			40
#define MOT_BASE_GDA2			41
#define MOT_BASE_SSQU			42
#define MOT_BASE_TWER			43
#define MOT_BASE_CRYIN			44
#define MOT_BASE_LOSER			45
#define MOT_BASE_RUMBA			46
#define MOT_BASE_SHRUG			47
#define MOT_BASE_SITLA			48
#define MOT_BASE_VIOLI			49
#define MOT_BASE_BELLY			50
#define MOT_BASE_HIPHO			51
#define MOT_BASE_SAMBA			52
#define MOT_BASE_BESTM			53
#define MOT_BASE_SKIBI			54
#define MOT_BASE_BREAK			55
#define MOT_BASE_FSEXY			56
#define MOT_BASE_FLOSS			57
#define MOT_BASE_FHYPE			58
#define MOT_BASE_INDAB			59
#define MOT_BASE_FMIME			60
#define MOT_BASE_SQUAK			61
#define	MOT_BASE_TAKEL			62
#define MOT_BASE_TROBO			63
#define MOT_BASE_FTIDY			64
#define MOT_BASE_ACCOL			65
#define MOT_BASE_AEROB			66
#define MOT_BASE_COWMO			67
#define MOT_BASE_CRAFE			68
#define MOT_BASE_CCROS			69
#define MOT_BASE_DTHER			70
#define MOT_BASE_DISCO			71
#define MOT_BASE_EAGLE			72
#define MOT_BASE_GUITA			73
#define MOT_BASE_KITTY			74
#define MOT_BASE_LOOOL			75
#define MOT_BASE_LUCHA			76
#define MOT_BASE_NEEDP			77
#define MOT_BASE_TAICH			78
#define MOT_BASE_TREXM			79
#define MOT_BASE_YAAWE			80
#define MOT_BASE_BILLI			81

// �Ϲ� ���� 
#define	MTI_STAND               0
#define	MTI_IDLE1               1
#define	MTI_IDLE2               2 
#define	MTI_WALK                3
#define MTI_BACK                4
#define	MTI_RUN                 5
#define	MTI_DMG1                6
#define	MTI_DMG2                7
#define	MTI_DIE1                8  
#define	MTI_DMGLIVE             9 
#define	MTI_DMGDIE              10 
#define	MTI_DMGFLY              11
#define	MTI_GROGGY              12
#define	MTI_JUMP1               13
#define	MTI_JUMP2               14
#define	MTI_JUMP3               15
#define	MTI_JUMP4               16
#define	MTI_IN				    17
#define	MTI_OUT				    18
#define	MTI_SWIM                19
#define	MTI_SIT                 20
#define	MTI_SITSTAND            21
#define	MTI_GETUP               22
#define	MTI_ATK1                23
#define	MTI_ATK2                24
#define	MTI_ATK3                25
#define	MTI_ATK4                26
#define	MTI_ATK5                27
#define	MTI_ATK6                28
#define	MTI_ATK7                29
#define	MTI_ATK8                30

#define	MTI_FSTAND1_A           31 
#define	MTI_FIDLE1_A            32 //
#define	MTI_FIDLE2_A            33 //
#define	MTI_FLTURN1_A           34
#define	MTI_FLTURN2_A           35 //
#define	MTI_FRTURN1_A           36 
#define	MTI_FRTURN2_A           37 // 
#define	MTI_FRUNNING1_A         38 //  
#define	MTI_FRUNNING2_A         39 /// 
#define MTI_FDMG1_A             40
#define MTI_FATK1_A             41
#define MTI_FATK2_A             42
#define MTI_FATK3_A             43

#define	MTI_FSTAND1_B           61 
#define	MTI_FIDLE1_B            62 //
#define	MTI_FIDLE2_B            63 //
#define	MTI_FLTURN1_B           64
#define	MTI_FLTURN2_B           65 //
#define	MTI_FRTURN1_B           66 
#define	MTI_FRTURN2_B           67 // 
#define	MTI_FRUNNING1_B         68 //  
#define	MTI_FRUNNING2_B         69 /// 
#define MTI_FDMG1_B             70
#define MTI_FATK1_B             71
#define MTI_FATK2_B             72
#define MTI_FATK3_B             73

#define	MTI_FSTAND1_C           91 
#define	MTI_FIDLE1_C            92 //
#define	MTI_FIDLE2_C            93 //
#define	MTI_FLTURN1_C           94
#define	MTI_FLTURN2_C           95 //
#define	MTI_FRTURN1_C           96 
#define	MTI_FRTURN2_C           97 // 
#define	MTI_FRUNNING1_C         98 //  
#define	MTI_FRUNNING2_C         99 /// 
#define MTI_FDMG1_C            100
#define MTI_FATK1_C            101
#define MTI_FATK2_C            102
#define MTI_FATK3_C            103

#define MTI_PICKUP             121 // ����ε����� ���� �����ϹǷ� ��ȣ�� �ٲܼ��� ����. ���� ������������ ����. -xuzhu-
#define MTI_HANDSHAKE          122
#define MTI_AMBIGUOUS          123
#define MTI_YES                124
#define MTI_NO                 125
#define MTI_SPRINT             126
#define MTI_PARADEREST         127
#define MTI_ATTENTION          128
#define MTI_SCISSORS           129
#define MTI_ROCK               130
#define MTI_PAPER              131
#define MTI_POINTWAYNORTH      132
#define MTI_POINTWAYSOUTH      133
#define MTI_POINTWAYEAST       134
#define MTI_POINTWAYWEST       135
#define MTI_KNEEDOWN           136
#define MTI_PUSHUP             137
#define MTI_HIPKIDDING         138
#define MTI_JAB                139
#define MTI_HEAD               140
#define MTI_RISESWORD          141
#define MTI_COLLECT			   142 // ä�� ���
#define MTI_APPEAR			   143 // ���� ���
#define MTI_APPEAR2			   144 // ���� ���2
#define MTI_CHEERSAME		   145 //���� ���� ���
#define MTI_CHEEROTHER		   146 //�̼� ���� ���
#define MTI_FALL			   147 



#define	MTI_LOGOUT             194
#define	MTI_ACCLAIM            195
#define	MTI_CLAPDOWN           196
#define	MTI_CLAPUP             197
#define	MTI_LEVELUP            198
#define	MTI_STAND2             199 // ĳ���� ����ȭ�鿡�� ���������� ĳ���� �ڷ� ������ �ϱ� ���� ������ �Է�
#define MTI_FLYWALK	       231 // ����Ű�� �������� �̵�
#define MTI_FLYBACK	       232 // ����Ű�� �������� �̵�
#define MTI_FLYRUN	       233 // ����Ű�� �������� �̵�

// Sworld ���� ��� ���� 
#define	MTI_STAND_01           200
#define	MTI_IDLE1_01           201
#define	MTI_IDLE2_01           202
#define	MTI_WALK_01            203
#define MTI_BACK_01            204
#define	MTI_RUN_01             205
#define	MTI_DMG1_01            206
#define	MTI_DMG2_01            207
#define	MTI_DIE1_01            208
#define	MTI_DMGLIVE_01         209
#define	MTI_DMGDIE_01          210 
#define	MTI_DMGFLY_01          211
#define	MTI_GROGGY_01          212
#define	MTI_JUMP1_01           213
#define	MTI_JUMP2_01           214
#define	MTI_JUMP3_01           215
#define	MTI_JUMP4_01           216
#define	MTI_IN_01              217
#define	MTI_OUT_01             218
#define	MTI_SWIM_01            219
#define	MTI_SIT_01             220
#define	MTI_SITSTAND_01        221
#define	MTI_GETUP_01           222
#define	MTI_ATK1_01            223
#define	MTI_ATK2_01            224
#define	MTI_ATK3_01            225
#define	MTI_ATK4_01            226
#define	MTI_ATK5_01            227
#define	MTI_ATK6_01            228
#define	MTI_ATK7_01            229
#define	MTI_ATK8_01            230 

// �ϵ� ���� ��� ���� 
#define	MTI_STAND_02           300
#define	MTI_IDLE1_02           301
#define	MTI_IDLE2_02           302
#define	MTI_WALK_02            303
#define	MTI_BACK_02            304
#define	MTI_RUN_02             305
#define	MTI_DMG1_02            306
#define	MTI_DMG2_02            307
#define	MTI_DIE1_02            308
#define	MTI_DMGLIVE_02         309
#define	MTI_DMGDIE_02          310
#define	MTI_DMGFLY_02          311
#define	MTI_GROGGY_02          312
#define	MTI_JUMP1_02           313
#define	MTI_JUMP2_02           314
#define	MTI_JUMP3_02           315
#define	MTI_JUMP4_02           316
#define	MTI_IN_02              317
#define	MTI_OUT_02             318
#define	MTI_SWIM_02            319
#define	MTI_SIT_02             320
#define	MTI_SITSTAND_02        321
#define	MTI_GETUP_02           322
#define	MTI_ATK1_02            323
#define	MTI_ATK2_02            324
#define	MTI_ATK3_02            325
#define	MTI_ATK4_02            326
#define	MTI_ATK5_02            327
#define	MTI_ATK6_02            328
#define	MTI_ATK7_02            329
#define	MTI_ATK8_02            330

// ġ��� ���� ��� ���� 
#define	MTI_STAND_03           400
#define	MTI_IDLE1_03           401
#define	MTI_IDLE2_03           402
#define	MTI_WALK_03            403
#define	MTI_BACK_03            404
#define	MTI_RUN_03             405
#define	MTI_DMG1_03            406
#define	MTI_DMG2_03            407
#define	MTI_DIE1_03            408
#define	MTI_DMGLIVE_03         409
#define	MTI_DMGDIE_03          410
#define	MTI_DMGFLY_03          411
#define	MTI_GROGGY_03          412
#define	MTI_JUMP1_03           413
#define	MTI_JUMP2_03           414
#define	MTI_JUMP3_03           415
#define	MTI_JUMP4_03           416
#define	MTI_IN_03			   417
#define	MTI_OUT_03			   418
#define	MTI_SWIM_03            419
#define	MTI_SIT_03             420
#define	MTI_SITSTAND_03        421
#define	MTI_GETUP_03           422
#define	MTI_ATK1_03            423
#define	MTI_ATK2_03            424
#define	MTI_ATK3_03            425
#define	MTI_ATK4_03            426
#define	MTI_ATK5_03            427
#define	MTI_ATK6_03            428
#define	MTI_ATK7_03            429
#define	MTI_ATK8_03            430

// ���� ���� ��� ���� 
#define	MTI_STAND_04           500
#define	MTI_IDLE1_04           501
#define	MTI_IDLE2_04           502
#define	MTI_WALK_04            503
#define	MTI_BACK_04            504
#define	MTI_RUN_04             505
#define	MTI_DMG1_04            506
#define	MTI_DMG2_04            507
#define	MTI_DIE1_04            508
#define	MTI_DMGLIVE_04         509
#define	MTI_DMGDIE_04          510
#define	MTI_DMGFLY_04          511
#define	MTI_GROGGY_04          512
#define	MTI_JUMP1_04           513
#define	MTI_JUMP2_04           514
#define	MTI_JUMP3_04           515
#define	MTI_JUMP4_04           516
#define	MTI_IN_04			   517
#define	MTI_OUT_04			   518
#define	MTI_SWIM_04            519
#define	MTI_SIT_04             520
#define	MTI_SITSTAND_04        521
#define	MTI_GETUP_04           522
#define	MTI_ATK1_04            523
#define	MTI_ATK2_04            524
#define	MTI_ATK3_04            525
#define	MTI_ATK4_04            526
#define	MTI_ATK5_04            527
#define	MTI_ATK6_04            528
#define	MTI_ATK7_04            529
#define	MTI_ATK8_04            530

// ������ ���� ��� ���� 
#define	MTI_STAND_05           600
#define	MTI_IDLE1_05           601
#define	MTI_IDLE2_05           602
#define	MTI_WALK_05            603
#define	MTI_BACK_05            604
#define	MTI_RUN_05             605
#define	MTI_DMG1_05            606
#define	MTI_DMG2_05            607
#define	MTI_DIE1_05            608
#define	MTI_DMGLIVE_05         609
#define	MTI_DMGDIE_05          610
#define	MTI_DMGFLY_05          611
#define	MTI_GROGGY_05          612
#define	MTI_JUMP1_05           613
#define	MTI_JUMP2_05           614
#define	MTI_JUMP3_05           615
#define	MTI_JUMP4_05           616
#define	MTI_IN_05			   617
#define	MTI_OUT_05			   618
#define	MTI_SWIM_05            619
#define	MTI_SIT_05             620
#define	MTI_SITSTAND_05        621
#define	MTI_GETUP_05           622
#define	MTI_ATK1_05            623
#define	MTI_ATK2_05            624
#define	MTI_ATK3_05            625
#define	MTI_ATK4_05            626
#define	MTI_ATK5_05            627
#define	MTI_ATK6_05            628
#define	MTI_ATK7_05            629
#define	MTI_ATK8_05            630

// ��Ŭ�ظ� ���� ��� ���� 
#define	MTI_STAND_06           700
#define	MTI_IDLE1_06           701
#define	MTI_IDLE2_06           702
#define	MTI_WALK_06            703
#define	MTI_BACK_06            704
#define	MTI_RUN_06             705
#define	MTI_DMG1_06            706
#define	MTI_DMG2_06            707
#define	MTI_DIE1_06            708
#define	MTI_DMGLIVE_06         709
#define	MTI_DMGDIE_06          710
#define	MTI_DMGFLY_06          711
#define	MTI_GROGGY_06          712
#define	MTI_JUMP1_06           713
#define	MTI_JUMP2_06           714
#define	MTI_JUMP3_06           715
#define	MTI_JUMP4_06           716
#define	MTI_IN_06			   717
#define	MTI_OUT_06			   718
#define	MTI_SWIM_06            719
#define	MTI_SIT_06             720
#define	MTI_SITSTAND_06        721
#define	MTI_GETUP_06           722
#define	MTI_ATK1_06            723
#define	MTI_ATK2_06            724
#define	MTI_ATK3_06            725
#define	MTI_ATK4_06            726
#define	MTI_ATK5_06            727
#define	MTI_ATK6_06            728
#define	MTI_ATK7_06            729
#define	MTI_ATK8_06            730

// ���  ��յ��� ���� ����
#define	MTI_STAND_07           800
#define	MTI_IDLE1_07           801
#define	MTI_IDLE2_07           802
#define	MTI_WALK_07            803
#define	MTI_BACK_07            804
#define	MTI_RUN_07             805
#define	MTI_DMG1_07            806
#define	MTI_DMG2_07            807
#define	MTI_DIE1_07            808
#define	MTI_DMGLIVE_07         809
#define	MTI_DMGDIE_07          810
#define	MTI_DMGFLY_07          811
#define	MTI_GROGGY_07          812
#define	MTI_JUMP1_07           813
#define	MTI_JUMP2_07           814
#define	MTI_JUMP3_07           815
#define	MTI_JUMP4_07           816
#define	MTI_IN_07			   817
#define	MTI_OUT_07			   818
#define	MTI_SWIM_07            819
#define	MTI_SIT_07             820
#define	MTI_SITSTAND_07        821
#define	MTI_GETUP_07           822
#define	MTI_ATK1_07            823
#define	MTI_ATK2_07            824
#define	MTI_ATK3_07            825
#define	MTI_ATK4_07            826
#define	MTI_ATK5_07            827
#define	MTI_ATK6_07            828
#define	MTI_ATK7_07            829
#define	MTI_ATK8_07            830

// �̵��� ��������
#define	MTI_STAND_08           900
#define	MTI_IDLE1_08           901
#define	MTI_IDLE2_08           902
#define	MTI_WALK_08            903
#define	MTI_BACK_08            904
#define	MTI_RUN_08             905
#define	MTI_DMG1_08            906
#define	MTI_DMG2_08            907
#define	MTI_DIE1_08            908
#define	MTI_DMGLIVE_08         909
#define	MTI_DMGDIE_08          910
#define	MTI_DMGFLY_08          911
#define	MTI_GROGGY_08          912
#define	MTI_JUMP1_08           913
#define	MTI_JUMP2_08           914
#define	MTI_JUMP3_08           915
#define	MTI_JUMP4_08           916
#define	MTI_IN_08			   917
#define	MTI_OUT_08			   918
#define	MTI_SWIM_08            919
#define	MTI_SIT_08             920
#define	MTI_SITSTAND_08        921
#define	MTI_GETUP_08           922
#define	MTI_ATK1_08            923
#define	MTI_ATK2_08            924
#define	MTI_ATK3_08            925
#define	MTI_ATK4_08            926
#define	MTI_ATK5_08            927
#define	MTI_ATK6_08            928
#define	MTI_ATK7_08            929
#define	MTI_ATK8_08            930

// �������� ��ƽ ��������
#define	MTI_STAND_09           2000
#define	MTI_IDLE1_09           2001
#define	MTI_IDLE2_09           2002
#define	MTI_WALK_09            2003
#define	MTI_BACK_09            2004
#define	MTI_RUN_09             2005
#define	MTI_DMG1_09            2006
#define	MTI_DMG2_09            2007
#define	MTI_DIE1_09            2008
#define	MTI_DMGLIVE_09         2009
#define	MTI_DMGDIE_09          2010
#define	MTI_DMGFLY_09          2011
#define	MTI_GROGGY_09          2012
#define	MTI_JUMP1_09           2013
#define	MTI_JUMP2_09           2014
#define	MTI_JUMP3_09           2015
#define	MTI_JUMP4_09           2016
#define	MTI_IN_09	       2017
#define	MTI_OUT_09	       2018
#define	MTI_SWIM_09            2019
#define	MTI_SIT_09             2020
#define	MTI_SITSTAND_09        2021
#define	MTI_GETUP_09           2022
#define	MTI_ATK1_09            2023
#define	MTI_ATK2_09            2024
#define	MTI_ATK3_09            2025
#define	MTI_ATK5_09            2026
#define	MTI_ATK6_09            2027
#define	MTI_ATK7_09            2028
#define	MTI_ATK8_09            2029

// �� ������ ��Ŭ ��������
#define	MTI_STAND_10           2100
#define	MTI_IDLE1_10           2101
#define	MTI_IDLE2_10           2102
#define	MTI_WALK_10            2103
#define	MTI_BACK_10            2104
#define	MTI_RUN_10             2105
#define	MTI_DMG1_10            2106
#define	MTI_DMG2_10            2107
#define	MTI_DIE1_10            2108
#define	MTI_DMGLIVE_10         2109
#define	MTI_DMGDIE_10          2110
#define	MTI_DMGFLY_10          2111
#define	MTI_GROGGY_10          2112
#define	MTI_JUMP1_10           2113
#define	MTI_JUMP2_10           2114
#define	MTI_JUMP3_10           2115
#define	MTI_JUMP4_10           2116
#define	MTI_IN_10	       2117
#define	MTI_OUT_10	       2118
#define	MTI_SWIM_10            2119
#define	MTI_SIT_10             2120
#define	MTI_SITSTAND_10        2121
#define	MTI_GETUP_10           2122
#define	MTI_ATK1_10            2123
#define	MTI_ATK2_10            2124
#define	MTI_ATK3_10            2125
#define	MTI_ATK4_10            2126
#define	MTI_ATK5_10            2127
#define	MTI_ATK6_10            2128
#define	MTI_ATK7_10            2129
#define	MTI_ATK8_10            2130

// ����Ű�� �ϵ� ��������
#define	MTI_STAND_11           2200
#define	MTI_IDLE1_11           2201
#define	MTI_IDLE2_11           2202
#define	MTI_WALK_11            2203
#define	MTI_BACK_11            2204
#define	MTI_RUN_11             2205
#define	MTI_DMG1_11            2206
#define	MTI_DMG2_11            2207
#define	MTI_DIE1_11            2208
#define	MTI_DMGLIVE_11         2209
#define	MTI_DMGDIE_11          2210
#define	MTI_DMGFLY_11          2211
#define	MTI_GROGGY_11          2212
#define	MTI_JUMP1_11           2213
#define	MTI_JUMP2_11           2214
#define	MTI_JUMP3_11           2215
#define	MTI_JUMP4_11           2216
#define	MTI_IN_11	       2217
#define	MTI_OUT_11	       2218
#define	MTI_SWIM_11            2219
#define	MTI_SIT_11             2220
#define	MTI_SITSTAND_11        2221
#define	MTI_GETUP_11           2222
#define	MTI_ATK_11             2223
#define	MTI_ATK5_11            2224
#define	MTI_ATK6_11            2225
#define	MTI_ATK7_11            2226
#define	MTI_ATK8_11            2227

// �������� ������ ��������
#define	MTI_STAND_12           2300
#define	MTI_IDLE1_12           2301
#define	MTI_IDLE2_12           2302
#define	MTI_WALK_12            2303
#define	MTI_BACK_12            2304
#define	MTI_RUN_12             2305
#define	MTI_DMG1_12            2306
#define	MTI_DMG2_12            2307
#define	MTI_DIE1_12            2308
#define	MTI_DMGLIVE_12         2309
#define	MTI_DMGDIE_12          2310
#define	MTI_DMGFLY_12          2311
#define	MTI_GROGGY_12          2312
#define	MTI_JUMP1_12           2313
#define	MTI_JUMP2_12           2314
#define	MTI_JUMP3_12           2315
#define	MTI_JUMP4_12           2316
#define	MTI_IN_12	       2317
#define	MTI_OUT_12	       2318
#define	MTI_SWIM_12            2319
#define	MTI_SIT_12             2320
#define	MTI_SITSTAND_12        2321
#define	MTI_GETUP_12           2322
#define	MTI_ATK_12             2323
#define	MTI_ATK5_12            2324
#define	MTI_ATK6_12            2325
#define	MTI_ATK7_12            2326
#define	MTI_ATK8_12            2327

// ��ũ�ι� Ȱ ��������
#define	MTI_STAND_13	       2328
#define	MTI_IDLE1_13	       2329
#define	MTI_IDLE2_13	       2330
#define	MTI_WALK_13	       2331
#define	MTI_BACK_13	       2332
#define	MTI_RUN_13	       2333
#define	MTI_DMG1_13	       2334
#define	MTI_DMG2_13	       2335
#define	MTI_DIE1_13	       2336
#define	MTI_DMGLIVE_13	       2337
#define	MTI_DMGDIE_13	       2338
#define	MTI_DMGFLY_13	       2339
#define	MTI_GROGGY_13	       2340
#define	MTI_JUMP1_13	       2341
#define	MTI_JUMP2_13	       2342
#define	MTI_JUMP3_13	       2343
#define	MTI_JUMP4_13	       2344
#define	MTI_IN_13	       2345
#define	MTI_OUT_13	       2346
#define	MTI_SWIM_13 	       2347
#define	MTI_SIT_13	       2348
#define	MTI_SITSTAND_13	       2349
#define	MTI_GETUP_13	       2350
#define	MTI_ATK_13	       2351
#define	MTI_ATK5_13	       2352
#define	MTI_ATK6_13	       2353
#define	MTI_ATK7_13	       2354
#define	MTI_ATK8_13	       2355

//��ũ�ι� ��� ��������
#define	MTI_STAND_14	       2356
#define	MTI_IDLE1_14	       2357
#define	MTI_IDLE2_14	       2358
#define	MTI_WALK_14	       2359
#define	MTI_BACK_14	       2360
#define	MTI_RUN_14	       2361
#define	MTI_DMG1_14	       2362
#define	MTI_DMG2_14	       2363
#define	MTI_DIE1_14	       2364
#define	MTI_DMGLIVE_14	       2365
#define	MTI_DMGDIE_14	       2366
#define	MTI_DMGFLY_14	       2367
#define	MTI_GROGGY_14	       2368
#define	MTI_JUMP1_14	       2369
#define	MTI_JUMP2_14	       2370
#define	MTI_JUMP3_14	       2371
#define	MTI_JUMP4_14	       2372
#define	MTI_IN_14	       2373
#define	MTI_OUT_14	       2374
#define	MTI_SWIM_14 	       2375
#define	MTI_SIT_14	       2376
#define	MTI_SITSTAND_14	       2377
#define	MTI_GETUP_14	       2378
#define	MTI_ATK1_14	       2379
#define	MTI_ATK2_14	       2380
#define	MTI_ATK5_14	       2381
#define	MTI_ATK6_14	       2382
#define	MTI_ATK7_14	       2383
#define	MTI_ATK8_14	       2384

//ũ������ ���� ��������
#define	MTI_STAND_15	2385
#define	MTI_IDLE1_15	2386
#define	MTI_IDLE2_15	2387
#define	MTI_WALK_15		2388
#define	MTI_BACK_15		2389
#define	MTI_RUN_15		2390
#define	MTI_DMG1_15		2391
#define	MTI_DMG2_15		2392
#define	MTI_DIE1_15		2393
#define	MTI_DMGLIVE_15	2394
#define	MTI_DMGDIE_15	2395
#define	MTI_DMGFLY_15	2396
#define	MTI_GROGGY_15	2397
#define	MTI_JUMP1_15	2398
#define	MTI_JUMP2_15	2399
#define	MTI_JUMP3_15	2400
#define	MTI_JUMP4_15	2401
#define	MTI_IN_15		2402
#define	MTI_OUT_15		2403
#define	MTI_SWIM_15 	2404
#define	MTI_SIT_15		2405
#define	MTI_SITSTAND_15	2406
#define	MTI_GETUP_15	2407
#define	MTI_ATK1_15		2408
#define	MTI_ATK2_15		2409
#define	MTI_ATK5_15		2410
#define	MTI_ATK6_15		2411
#define	MTI_ATK7_15		2412
#define	MTI_ATK8_15		2413


// Ư�� ���ۿ� �߰������� �������� �ϼ��� ��� �ε����� �����.
// MTI_FDOWN1 = MTI_FSTAND1 + MTA_FDOWN
#define	MTA_FSTAND1         0 
#define	MTA_FIDLE1          1
#define	MTA_FIDLE2          2
#define	MTA_FLTURN1         3
#define	MTA_FLTURN2         4
#define	MTA_FRTURN1         5
#define	MTA_FRTURN2         6 
#define	MTA_FRUNNING1       7  
#define	MTA_FRUNNING2       8 
#define MTA_FDMG1			9
#define MTA_FATK1			10
#define MTA_FATK2			11
#define MTA_FATK3			12

// ������� ��ų ���� �߰�
// ����� �迭 
#define MTI_VAG_ONE_CLEANHIT                1000
#define MTI_VAG_ONE_BRANDISH                1001
#define MTI_VAG_ONE_OVERCUTTER              1002

// �Ӽ��ʸ� �迭 
#define MTI_MER_ONE_SPLMASH                 1003
#define MTI_MER_ONE_KEENWHEEL               1004
#define MTI_MER_ONE_BLINDSIDE               1005
#define MTI_MER_ONE_SPECIAL     	1006
#define MTI_MER_ONE_SNAKE	        1007
#define MTI_MER_SHIELD_PROTECTION           1008
#define MTI_MER_SHIELD_PANBARRIER           1009
#define MTI_MER_ONE_BLOODYSTRIKE            1010 


// ��ý�Ʈ �迭 
#define MTI_ASS_HEAL_CASTING01              1043
#define MTI_ASS_HEAL_CASTING02              1044
#define MTI_ASS_HEAL_CASTING03              1045
#define MTI_ASS_CHEER_CASTING01             1046
#define MTI_ASS_CHEER_CASTING02             1047
#define MTI_ASS_CHEER_CASTING03             1048
#define MTI_ASS_RESURRECTION		    1049
#define MTI_ASS_RES_CASTING01		    1050
#define MTI_ASS_RES_CASTING02		    1051
#define MTI_ASS_RES_CASTING03		    1052
#define MTI_ASS_KNU_POWERFIST		    1053

//  ������ �迭 
#define MTI_MAG_FIRE_CASTING01		1063
#define MTI_MAG_FIRE_CASTING02		1064
#define MTI_MAG_FIRE_CASTING03		1065
#define MTI_MAG_WIND_CASTING01		1066
#define MTI_MAG_WIND_CASTING02		1067
#define MTI_MAG_WIND_CASTING03		1068




#define MTI_ASS_KNU_BURSTCRACK              1103 // �߰� ��ý�Ʈ ��Ŭ��ų
#define MTI_ASS_KNU_TAMPINGHOLE             1104 // �߰� ��ý�Ʈ ��Ŭ��ų


//����Ʈ
#define	MTI_KNT_SUP_CASTING01			1105
#define	MTI_KNT_TWO_POWERSWING01		1106
#define	MTI_KNT_TWOSW_EARTHDIVIDER01	1107
#define	MTI_KNT_TWOSW_CHARGE01			1108
#define	MTI_KNT_TWOAX_PAINDEALER01		1109
#define	MTI_KNT_TWOAX_POWERSTUMP01		1110

//�����̵�
#define	MTI_BLD_DOUBLE_CROSSSTRIKE01		1111
#define	MTI_BLD_DOUBLE_ARMORPENETRATE01		1112
#define	MTI_BLD_DOUBLESW_SILENTSTRIKE01		1113
#define	MTI_BLD_DOUBLESW_BLADEDANCE01		1114
#define	MTI_BLD_DOUBLEAX_SPRINGATTAKE01		1115
#define	MTI_BLD_DOUBLEAX_HAWKATTAKE01		1116
#define	MTI_BLD_DOUBLE_SONICBLADE01		1117
#define	MTI_BLD_SUP_CASTING01			1118

//��������
#define	MTI_RIN_HEAL_CASTING01			1119
#define	MTI_RIN_HEAL_CASTING02			1120
#define	MTI_RIN_HEAL_CASTING03			1121
#define	MTI_RIN_SUP_CASTING01			1122
#define	MTI_RIN_SUP_CASTING02			1123
#define	MTI_RIN_SUP_CASTING03			1124
#define	MTI_RIN_HEAL_CURE01			1125
#define	MTI_RIN_HEAL_CURE02			1126
#define	MTI_RIN_HEAL_CURE03			1127
#define	MTI_RIN_SQU_CASTING01			1128
#define	MTI_RIN_SQU_CASTING02			1129
#define	MTI_RIN_SQU_CASTING03			1130
				
//��������				
#define	MTI_BIL_KNU_BELIALSMESHING01			1131
#define	MTI_BIL_KNU_PIERCINGSERPENT01			1132
#define	MTI_BIL_KNU_BLOODFIST01			1133
#define	MTI_BIL_KNU_SONICHAND01			1134
#define	MTI_BIL_PST_CASTING01			1135
#define	MTI_BIL_PST_CASTING02			1136
#define	MTI_BIL_PST_CASTING03			1137
#define	MTI_BIL_PST_SQUARE01			1138
#define	MTI_BIL_PST_SQUARE02			1139
#define	MTI_BIL_PST_SQUARE03			1140

//����Ű��				
#define	MTI_PSY_NLG_CASTING01			1145
#define	MTI_PSY_NLG_CASTING02			1146
#define	MTI_PSY_NLG_CASTING03			1147
#define	MTI_PSY_PSY_PSYCHI01			1148
#define	MTI_PSY_PSY_PSYCHI02			1149
#define	MTI_PSY_PSY_PSYCHI03			1150
#define	MTI_PSY_PSY_SQUARE01			1151
#define	MTI_PSY_PSY_SQUARE02			1152
#define	MTI_PSY_PSY_SQUARE03			1153
				
//��������				
#define	MTI_ELE_FIRE_CASTING01			1160
#define	MTI_ELE_FIRE_CASTING02			1161
#define	MTI_ELE_FIRE_CASTING03			1162
#define	MTI_ELE_ELECTRICITY_CASTING01			1163
#define	MTI_ELE_ELECTRICITY_CASTING02			1164
#define	MTI_ELE_ELECTRICITY_CASTING03			1165
#define	MTI_ELE_EARTH_CASTING01			1166
#define	MTI_ELE_EARTH_CASTING02			1167
#define	MTI_ELE_EARTH_CASTING03			1168
#define	MTI_ELE_WATER_CASTING01			1169
#define	MTI_ELE_WATER_CASTING02			1170
#define	MTI_ELE_WATER_CASTING03			1171
#define	MTI_ELE_WIND_CASTING01			1172
#define	MTI_ELE_WIND_CASTING02			1173
#define	MTI_ELE_WIND_CASTING03			1174
#define	MTI_ELE_MULTI_CASTING01			1175
#define	MTI_ELE_MULTI_CASTING02			1176
#define	MTI_ELE_MULTI_CASTING03			1177

//��ũ�ι�
#define	MTI_ACR_SUP_CASTING01			1178
#define	MTI_ACR_BOW_JUNKBOW01			1179
#define	MTI_ACR_BOW_AIMEDSHOT01			1180
#define	MTI_ACR_YOYO_SLOWSTEP01			1181
#define	MTI_ACR_BOW_SILENTSHOT01		1182
#define	MTI_ACR_DEF_SUPPORT01			1183
#define	MTI_ACR_BOW_ARROWRAIN01			1184
#define	MTI_ACR_YOYO_CROSSLINE01		1185
#define	MTI_ACR_BOW_AUTOSHOT01			1186
#define	MTI_ACR_YOYO_SNITCH01			1187
#define	MTI_ACR_YOYO_COUNTER01			1188
#define	MTI_ACR_YOYO_DEADLYSWING01		1189
#define	MTI_ACR_YOYO_PULLING01			1190
#define MTI_ACR_YOYO_COUNTER02			1205

//������
#define	MTI_JST_SUP_CRITICALSWING01		1191
#define	MTI_JST_SUP_ENCHANT				1192
#define	MTI_JST_YOYO_BACKSTAB01			1193
#define	MTI_JST_YOYO_HITOFPENYA01		1194
#define	MTI_JST_YOYO_ESCAPE01			1195
#define	MTI_JST_YOYO_VATALSTAB01		1196

//������
#define	MTI_RAG_SUP_FASTATTACK01		1197
#define	MTI_RAG_BOW_ICEARROW01			1198
#define	MTI_RAG_BOW_FLAMEARROW01		1199
#define	MTI_RAG_BOW_PIRCINGARROW01		1200
#define	MTI_RAG_BOW_POISONARROW01		1201
#define	MTI_RAG_BOW_SILENTARROW01		1202
#define	MTI_RAG_SUP_NATURE01			1203
#define	MTI_RAG_BOW_TRIPLESHOT01		1204

//3�� ���� Ŭ���� ��ų

//�ε����÷�
#define	MTI_LORDK_SUP_TEMPLARPULLING01	1235
#define	MTI_LORDK_ONE_GRANDRAGE01		1236
#define	MTI_LORDK_ONE_SHILDSTRIKE01		1237
#define	MTI_LORDK_SUP_ANGRYINCREASE01	1238
#define	MTI_LORDK_SUP_HOLYARMOR01		1239
#define	MTI_LORDK_TWO_SCOPESTRIKE01		1240

//��������̵�
#define	MTI_STORMB_DOUBLE_CROSSOFBLOOD01	1241
#define	MTI_STORMB_DOUBLE_CROSSOFBLOOD02	1242
#define	MTI_STORMB_DOUBLE_STORMBLASTE01		1243
#define	MTI_STORMB_DOUBLE_HOLDINGSTORM01	1244
#define	MTI_STORMB_DOUBLE_POWERINCREASE01	1245

//ũ������
#define	MTI_CRA_BOW_RANGESTRIKE01			1246
#define	MTI_CRA_SUP_POWERINCREASE01			1247
#define	MTI_CRA_SUP_CONTROLINCREASE01		1248
#define	MTI_CRA_SUP_HAWKEYE01				1249

//���巯Ŀ
#define	MTI_WINDL_YOYO_MADHURRICANE01		1250
#define	MTI_WINDL_YOYO_EVASIONINCREASE01	1251
#define	MTI_WINDL_YOYO_CONTROLINCREASE01	1252
#define	MTI_WINDL_YOYO_BACKSTEP01			1253

//�÷θ���Ʈ
#define	MTI_FLO_HEAL_PLAYEROFTHEREVIVAL01		1254
#define	MTI_FLO_HEAL_PLAYEROFTHEREVIVAL02		1255
#define	MTI_FLO_HEAL_PLAYEROFTHEREVIVAL03		1256
#define	MTI_FLO_SUP_BLESSEDSTEP01				1257
#define	MTI_FLO_SUP_BLESSEDSTEP02				1258
#define	MTI_FLO_SUP_BLESSEDSTEP03				1259
#define	MTI_FLO_SUP_BLESSEDBODY01				1260
#define	MTI_FLO_SUP_BLESSEDBODY02				1261
#define	MTI_FLO_SUP_BLESSEDBODY03				1262
#define	MTI_FLO_SUP_BLESSEDARMOR01				1263
#define	MTI_FLO_SUP_BLESSEDARMOR02				1264
#define	MTI_FLO_SUP_BLESSEDARMOR03				1265
#define	MTI_FLO_SUP_ABSOLUTEBARRIER01			1266
#define	MTI_FLO_SUP_ABSOLUTEBARRIER02			1267
#define	MTI_FLO_SUP_ABSOLUTEBARRIER03			1268
#define	MTI_FLO_SUP_FETTERS01					1269
#define	MTI_FLO_SUP_FETTERS02					1270
#define	MTI_FLO_SUP_FETTERS03					1271

//����������
#define	MTI_FORCEM_SUP_AURORAOFTHERAGE01		1272
#define	MTI_FORCEM_SUP_AURORAOFTHERAGE02		1273
#define	MTI_FORCEM_SUP_AURORAOFTHERAGE03		1274
#define	MTI_FORCEM_SUP_AURORAOFTHETENACITY01	1275
#define	MTI_FORCEM_SUP_AURORAOFTHETENACITY02	1276
#define	MTI_FORCEM_SUP_AURORAOFTHETENACITY03	1277
#define	MTI_FORCEM_SUP_AURORAOFTHESPEED01		1278
#define	MTI_FORCEM_SUP_AURORAOFTHESPEED02		1279
#define	MTI_FORCEM_SUP_AURORAOFTHESPEED03		1280
#define	MTI_FORCEM_SUP_AURORAOFTHEMAD01			1281
#define	MTI_FORCEM_SUP_AURORAOFTHEMAD02			1282
#define	MTI_FORCEM_SUP_AURORAOFTHEMAD03			1283

//��Ż����Ʈ
#define	MTI_MENT_PSY_DARKNESSSCREAM01		1284
#define	MTI_MENT_PSY_DARKNESSSCREAM02		1285
#define	MTI_MENT_PSY_DARKNESSSCREAM03		1286
#define	MTI_MENT_PSY_DARKNESSRAKE01			1287
#define	MTI_MENT_PSY_DARKNESSRAKE02			1288
#define	MTI_MENT_PSY_DARKNESSRAKE03			1289
#define	MTI_MENT_PSY_ATTACKDECREASE01		1290
#define	MTI_MENT_PSY_ATTACKDECREASE02		1291
#define	MTI_MENT_PSY_ATTACKDECREASE03		1292
#define	MTI_MENT_PSY_DEFENDERDECREASE01		1293
#define	MTI_MENT_PSY_DEFENDERDECREASE02		1294
#define	MTI_MENT_PSY_DEFENDERDECREASE03		1295
#define	MTI_MENT_PSY_SPEEDDECREASE01		1296
#define	MTI_MENT_PSY_SPEEDDECREASE02		1297
#define	MTI_MENT_PSY_SPEEDDECREASE03		1298

//������Ż�ε�
#define	MTI_ELE_MULTI_THUNDERBOLTS01		1299
#define	MTI_ELE_MULTI_THUNDERBOLTS02		1300
#define	MTI_ELE_MULTI_THUNDERBOLTS03		1301
#define	MTI_ELE_MULTI_FINALSPEAR01			1302
#define	MTI_ELE_MULTI_FINALSPEAR02			1303
#define	MTI_ELE_MULTI_FINALSPEAR03			1304
#define	MTI_ELE_MULTI_COSMICELEMENT01		1305
#define	MTI_ELE_MULTI_COSMICELEMENT02		1306
#define	MTI_ELE_MULTI_COSMICELEMENT03		1307
#define	MTI_ELE_MULTI_SLEEPING01			1308
#define	MTI_ELE_MULTI_SLEEPING02			1309
#define	MTI_ELE_MULTI_SLEEPING03			1310


//ũ������ ũ�ν����� 

#define	MTI_ACR_SUP_BOWMASTER_CRA			1378
#define	MTI_ACR_BOW_JUNKBOW01_CRA			1379
#define	MTI_ACR_BOW_AIMEDSHOT01_CRA			1380
#define	MTI_ACR_BOW_SILENTSHOT01_CRA		1382
#define	MTI_ACR_DEF_SUPPORT01_CRA			1383
#define	MTI_ACR_BOW_ARROWRAIN01_CRA			1384
#define	MTI_ACR_BOW_AUTOSHOT01_CRA			1386

#define	MTI_RAG_SUP_FASTATTACK01_CRA		1397
#define	MTI_RAG_BOW_ICEARROW01_CRA			1398
#define	MTI_RAG_BOW_FLAMEARROW01_CRA		1399
#define	MTI_RAG_BOW_PIRCINGARROW01_CRA		1400
#define	MTI_RAG_BOW_POISONARROW01_CRA		1401
#define	MTI_RAG_BOW_SILENTARROW01_CRA		1402
#define	MTI_RAG_SUP_NATURE01_CRA			1403
#define	MTI_RAG_BOW_TRIPLESHOT01_CRA		1404

#define	MTI_CRA_BOW_RANGESTRIKE01_CRA			1446
#define	MTI_CRA_SUP_POWERINCREASE01_CRA			1447
#define	MTI_CRA_SUP_CONTROLINCREASE01_CRA		1448
#define	MTI_CRA_SUP_HAWKEYE01_CRA				1449



//�������
#define	MTI_FSTAND1_D				1206
#define	MTI_FIDLE1_D				1207
#define	MTI_FIDLE2_D				1208
#define	MTI_FLTURN1_D				1209
#define	MTI_FLTURN2_D				1210
#define	MTI_FRTURN1_D				1211
#define	MTI_FRTURN2_D				1212
#define	MTI_FRUNNING1_D				1213
#define	MTI_FRUNNING2_D				1214
#define MTI_FDMG1_D				1215
#define MTI_FATK1_D				1216
#define MTI_FATK2_D				1217
#define MTI_FATK3_D				1218

//���� �ű� �ڵ��� 

#define	MTI_GENFSTAND1_D				1223
#define	MTI_GENFLTURN1_D				1226
#define	MTI_GENFRTURN1_D				1228
#define	MTI_GENFRUNNING1_D				1230
#define	MTI_GENFDMG1_D					1232
#define	MTI_GENFATK1_D					1233
#define	MTI_GENFATK2_D					1234

//���� Ż ��
#define	MTI_FSTAND1_F						1457
#define	MTI_GENFLTURN1_F					1460
#define	MTI_GENFRTURN1_F					1462
#define	MTI_GENFRUNNING1_F					1464
#define	MTI_GENFDMG1_F						1466
#define	MTI_GENFATK1_F						1467
#define	MTI_GENFATK2_F						1468

//Mount
#define MTI_FLY_STAND						1469
#define MTI_FLY_GROUND						1470
#define MTI_FLY_IDLE1						1471
#define MTI_FLY_IDLE2						1472
#define MTI_FLY_WALK						1473
#define MTI_GROUND_FLY						1474

//Mount Player
#define MTI_SCHNEIDERSITZ		1475
#define	MTI_SOFASITZ			1476
#define	MTI_MOUNT				1477
#define	MTI_MOUNT01				1478
#define	MTI_MOUNT02				1479

//viewinventory
#define MTI_VIEWINV_COPY					1480
#define MTI_VIEWINV_DELETE					1481
#define MTI_VIEWINV_MOVE					1482

// Motions
#define	MTI_DANCE01				1483
#define	MTI_FACEP01				1484
#define	MTI_KISS01				1485
#define	MTI_KISS02				1486
#define	MTI_MED01				1487
#define	MTI_MOON    			1488
#define	MTI_DABB    			1489
#define	MTI_SUIC    			1490
#define	MTI_HAPJ    			1491
#define	MTI_SLEE    			1492
#define	MTI_CSQU    			1493
#define	MTI_GDA1    			1494
#define	MTI_GDA2    			1495
#define	MTI_SSQU    			1496
#define	MTI_TWER    			1497
#define	MTI_BELLY   			1498
#define	MTI_CRYIN   			1499
#define	MTI_LOSER   			1500
#define	MTI_RUMBA   			1501
#define	MTI_SHRUG   			1502
#define	MTI_SITLA   			1503
#define	MTI_VIOLI   			1504
#define	MTI_HIPHO   			1505
#define	MTI_SAMBA   			1506
#define	MTI_BESTM   			1507
#define	MTI_SKIBI				1508
#define	MTI_BREAK				1509
#define	MTI_FSEXY				1510
#define	MTI_FLOSS				1511
#define	MTI_FHYPE				1512
#define	MTI_INDAB				1513
#define	MTI_FMIME				1514
#define	MTI_SQUAK				1515
#define	MTI_TAKEL				1516
#define	MTI_TROBO				1517
#define	MTI_FTIDY				1518
#define	MTI_ACCOL				1519
#define	MTI_AEROB				1520
#define	MTI_COWMO				1521
#define	MTI_CRAFE				1522
#define	MTI_CCROS				1523
#define	MTI_DTHER				1524
#define	MTI_DISCO				1525
#define	MTI_EAGLE				1526
#define	MTI_GUITA				1527
#define	MTI_KITTY				1528
#define	MTI_LOOOL				1529
#define	MTI_LUCHA				1530
#define	MTI_NEEDP				1531
#define	MTI_TAICH				1532
#define	MTI_TREXM				1533
#define	MTI_YAAWE				1534
#define	MTI_BILLI				1535

// parts
#define HAIRMESH_01                            0
#define HAIRMESH_02                            1
#define HAIRMESH_03                            2
#define HAIRMESH_04                            3
#define HAIRMESH_05                            4
#define HAIRMESH_06                            5
#define HAIRMESH_07                            6
#define HAIRMESH_08                            7
#define HAIRMESH_09                            8
#define HAIRMESH_10                            9

#define SKINSET_01                             0
#define SKINSET_02                             1
#define SKINSET_03                             2
#define SKINSET_04                             3
#define SKINSET_05                             4

#define HEADTEXTURE_NORMAL                     0
#define HEADTEXTURE_SMILE                      1
#define HEADTEXTURE_RAGE                       2

#define MAX_DEFAULT_HEAD						5
#define MAX_HEAD								24 // 11 Default
#define MAX_HAIR								10
#define MAX_BASE_HAIR							5
#define MAX_SKIN								2

#define HAIR_COST		2000000
#define HAIRCOLOR_COST		4000000
#define CHANGE_FACE_COST	1000000

//mount options
#define __MOUNT_WALK 			0		
#define __MOUNT_FLY 			1					
#define __MOUNT_WALK_FLY 		2	

//Achievement Types
#define AEGACH_KILLXMOBS	0
#define AEGACH_VISITWORLD	1
#define AEGACH_VISITTOWN	2
#define AEGACH_VISITCONT	3
#define AEGACH_COLLECTXTIME	4
#define AEGACH_JOINGUILD	5
#define AEGACH_GUILDEXP		6
#define AEGACH_GUILDPENYA	7
#define AEGACH_COLLSTART	8
#define AEGACH_ONLINETIME	9
#define AEGACH_USEANARCHY	10
#define AEGACH_JOINPARTY	11
#define AEGACH_PARTYLEVELUP	12
#define AEGACH_PARTYLEVEL	13
#define AEGACH_PARTYSKILL	14
#define AEGACH_VENDOPEN		15
#define AEGACH_NPCVENDOPEN	16
#define AEGACH_VENDSELLS	17
#define AEGACH_VENDBUYS		18
#define AEGACH_PERINNUM		19
#define AEGACH_RPNUM		20
#define AEGACH_PTLEADER		21
#define AEGACH_PTASSIST		22
#define AEGACH_DUNGEONRUN	23
#define AEGACH_XACHIEVES	24
#define AEGACH_GWWIN		25
#define AEGACH_GWMVP		26
#define AEGACH_GWKILLS		27
#define AEGACH_MINIGWIN		28
#define AEGACH_VISITREGION	29
#define AEGACH_PETLEVEL		30
#define AEGACH_LEVEL		31
#define AEGACH_BADGE		32
#define AEGACH_INVSRT		33
#define AEGACH_FRNDSHP		34

#endif  
  

