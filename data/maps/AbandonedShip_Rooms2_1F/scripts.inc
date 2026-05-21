# 1 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 2 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_MapScripts::
# 3 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.byte 0
# 4 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 5 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_EventScript_Dan::
# 6 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	trainerbattle_double TRAINER_KIRA_AND_DAN_1, AbandonedShip_Rooms2_1F_Text_DanIntro, AbandonedShip_Rooms2_1F_Text_DanDefeat, AbandonedShip_Rooms2_1F_Text_DanNotEnoughMons
# 7 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	msgbox AbandonedShip_Rooms2_1F_Text_DanPostBattle, MSGBOX_AUTOCLOSE
# 8 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	release
# 9 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	end
# 10 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 11 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_EventScript_RegisterDan::
# 12 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	msgbox AbandonedShip_Rooms2_1F_Text_KiraRegister, MSGBOX_DEFAULT  @ Kira speaks for both when registering KiraAndDan
# 13 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	register_matchcall TRAINER_KIRA_AND_DAN_1
# 14 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	release
# 15 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	end
# 16 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 17 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_EventScript_DanRematch::
# 18 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	trainerbattle_rematch_double TRAINER_KIRA_AND_DAN_1, AbandonedShip_Rooms2_1F_Text_DanRematchIntro, AbandonedShip_Rooms2_1F_Text_DanRematchDefeat, AbandonedShip_Rooms2_1F_Text_DanRematchNotEnoughMons
# 19 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	msgbox AbandonedShip_Rooms2_1F_Text_DanPostRematch, MSGBOX_AUTOCLOSE
# 20 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	end
# 21 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 22 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_EventScript_Kira::
# 23 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	trainerbattle_double TRAINER_KIRA_AND_DAN_1, AbandonedShip_Rooms2_1F_Text_KiraIntro, AbandonedShip_Rooms2_1F_Text_KiraDefeat, AbandonedShip_Rooms2_1F_Text_KiraNotEnoughMons
# 24 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	msgbox AbandonedShip_Rooms2_1F_Text_KiraPostBattle, MSGBOX_AUTOCLOSE
# 25 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	release
# 26 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	end
# 27 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 28 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_EventScript_RegisterKira::
# 29 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	msgbox AbandonedShip_Rooms2_1F_Text_KiraRegister, MSGBOX_DEFAULT
# 30 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	register_matchcall TRAINER_KIRA_AND_DAN_1
# 31 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	release
# 32 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	end
# 33 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 34 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_EventScript_KiraRematch::
# 35 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	trainerbattle_rematch_double TRAINER_KIRA_AND_DAN_1, AbandonedShip_Rooms2_1F_Text_KiraRematchIntro, AbandonedShip_Rooms2_1F_Text_KiraRematchDefeat, AbandonedShip_Rooms2_1F_Text_KiraRematchNotEnoughMons
# 36 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	msgbox AbandonedShip_Rooms2_1F_Text_KiraPostRematch, MSGBOX_AUTOCLOSE
# 37 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	end
# 38 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 39 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_EventScript_Jani::
# 40 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	trainerbattle_single TRAINER_JANI, AbandonedShip_Rooms2_1F_Text_JaniIntro, AbandonedShip_Rooms2_1F_Text_JaniDefeat
# 41 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	msgbox AbandonedShip_Rooms2_1F_Text_JaniPostBattle, MSGBOX_AUTOCLOSE
# 42 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	end
# 43 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 44 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_EventScript_Garrison::
# 45 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	trainerbattle_single TRAINER_GARRISON, AbandonedShip_Rooms2_1F_Text_GarrisonIntro, AbandonedShip_Rooms2_1F_Text_GarrisonDefeat
# 46 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	msgbox AbandonedShip_Rooms2_1F_Text_GarrisonPostBattle, MSGBOX_AUTOCLOSE
# 47 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	end
# 48 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 49 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_DanIntro:
# 50 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "Dan: While searching for treasures,\n"
# 51 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "we discovered a Trainer!$"
# 52 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 53 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_DanDefeat:
# 54 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "Dan: We couldn't win even though\n"
# 55 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "we worked together…$"
# 56 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 57 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_DanPostBattle:
# 58 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "Dan: We can't find any treasures…\n"
# 59 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "I wonder if someone got them already?$"
# 60 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 61 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_DanNotEnoughMons:
# 62 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "Dan: You don't even have two Pokémon.\n"
# 63 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "You can't expect to beat us like that.$"
# 64 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 65 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_KiraIntro:
# 66 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "Kira: Oh?\n"
# 67 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "We were searching for treasures.\l"
# 68 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "But we discovered a Trainer instead!$"
# 69 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 70 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_KiraDefeat:
# 71 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "Kira: Ooh, so strong!$"
# 72 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 73 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_KiraPostBattle:
# 74 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "Kira: Where could the treasures be?\p"
# 75 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "I've already decided what I'm buying\n"
# 76 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "when we find the treasures!$"
# 77 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 78 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_KiraNotEnoughMons:
# 79 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "Kira: Oh, you don't have two Pokémon?\n"
# 80 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "We'll have to battle some other time!$"
# 81 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 82 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_KiraRegister:
# 83 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "Kira: Oh, you make me so angry!\n"
# 84 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "I'm going to register you for that!$"
# 85 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 86 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_DanRematchIntro:
# 87 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "Dan: We've been searching for\n"
# 88 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "treasures all this time.\p"
# 89 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "Our Pokémon have grown stronger, too.\n"
# 90 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "Let us show you, okay?$"
# 91 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 92 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_DanRematchDefeat:
# 93 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "Dan: You're strong, as usual!$"
# 94 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 95 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_DanPostRematch:
# 96 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "Dan: We can't find any treasures,\n"
# 97 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "we lose at Pokémon…\p"
# 98 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "I want to go home… But if I say that,\n"
# 99 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "she gets all angry with me…$"
# 100 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 101 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_DanRematchNotEnoughMons:
# 102 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "Dan: You don't even have two Pokémon.\n"
# 103 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "You can't expect to beat us like that.$"
# 104 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 105 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_KiraRematchIntro:
# 106 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "Kira: Oh? We meet again!\p"
# 107 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "Just like us, you still haven't given up\n"
# 108 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "searching for treasures, have you?\p"
# 109 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "Want to make it so the loser has\n"
# 110 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "to give up searching?$"
# 111 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 112 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_KiraRematchDefeat:
# 113 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "Kira: Oh, we lost again…$"
# 114 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 115 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_KiraPostRematch:
# 116 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "Kira: We're not leaving until we raise\n"
# 117 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "our Pokémon some more and we find\l"
# 118 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "the treasures here!$"
# 119 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 120 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_KiraRematchNotEnoughMons:
# 121 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "Kira: Oh, you don't have two Pokémon?\n"
# 122 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "We'll have to battle some other time!$"
# 123 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 124 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_JaniIntro:
# 125 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "I'm not good at swimming,\n"
# 126 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "but I am good at battles!$"
# 127 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 128 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_JaniDefeat:
# 129 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "Oops.\n"
# 130 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "That didn't go very well.$"
# 131 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 132 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_JaniPostBattle:
# 133 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "Walking around barefoot in this ship\n"
# 134 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "is kind of gross.$"
# 135 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 136 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_GarrisonIntro:
# 137 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "Strength and compassion…\n"
# 138 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "Those are a Trainer's treasures!$"
# 139 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 140 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_GarrisonDefeat:
# 141 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "Ah, there is something about you\n"
# 142 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "that sparkles.$"
# 143 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 144 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_GarrisonPostBattle:
# 145 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "In a cabin somewhere on board,\n"
# 146 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "I saw something sparkle.$"
