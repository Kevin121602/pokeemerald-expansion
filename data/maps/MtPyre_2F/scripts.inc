MtPyre_2F_EventScript_GauntletEnd::
# 2 "data/maps/MtPyre_2F/scripts.pory"
	clearflag FLAG_SYS_GAUNTLET
# 3 "data/maps/MtPyre_2F/scripts.pory"
	setvar VAR_GAUNTLET_STATE, 3
# 4 "data/maps/MtPyre_2F/scripts.pory"
	setflag FLAG_HIDE_MT_PYRE_1F_MAN
# 5 "data/maps/MtPyre_2F/scripts.pory"
	release
	end


# 9 "data/maps/MtPyre_2F/scripts.pory"

# 10 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_MapScripts::
# 11 "data/maps/MtPyre_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CaveHole_CheckFallDownHole
# 12 "data/maps/MtPyre_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CaveHole_FixCrackedGround
# 13 "data/maps/MtPyre_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, MtPyre_2F_SetHoleWarp
# 14 "data/maps/MtPyre_2F/scripts.pory"
	.byte 0
# 15 "data/maps/MtPyre_2F/scripts.pory"

# 16 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_SetHoleWarp:
# 17 "data/maps/MtPyre_2F/scripts.pory"
	setstepcallback STEP_CB_CRACKED_FLOOR
# 18 "data/maps/MtPyre_2F/scripts.pory"
	setholewarp MAP_MT_PYRE_1F
# 19 "data/maps/MtPyre_2F/scripts.pory"
	end
# 20 "data/maps/MtPyre_2F/scripts.pory"

# 21 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_EventScript_Woman::
# 22 "data/maps/MtPyre_2F/scripts.pory"
	msgbox MtPyre_2F_Text_MemoriesOfSkitty, MSGBOX_NPC
# 23 "data/maps/MtPyre_2F/scripts.pory"
	end
# 24 "data/maps/MtPyre_2F/scripts.pory"

# 25 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_EventScript_PokefanM::
# 26 "data/maps/MtPyre_2F/scripts.pory"
	msgbox MtPyre_2F_Text_TumbledFromFloorAbove, MSGBOX_NPC
# 27 "data/maps/MtPyre_2F/scripts.pory"
	end
# 28 "data/maps/MtPyre_2F/scripts.pory"

# 29 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_EventScript_Mark::
# 30 "data/maps/MtPyre_2F/scripts.pory"
	trainerbattle_single TRAINER_MARK, MtPyre_2F_Text_MarkIntro, MtPyre_2F_Text_MarkDefeat
# 31 "data/maps/MtPyre_2F/scripts.pory"
	msgbox MtPyre_2F_Text_MarkPostBattle, MSGBOX_AUTOCLOSE
# 32 "data/maps/MtPyre_2F/scripts.pory"
	end
# 33 "data/maps/MtPyre_2F/scripts.pory"

# 34 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_EventScript_Luke::
# 35 "data/maps/MtPyre_2F/scripts.pory"
	trainerbattle_double TRAINER_DEZ_AND_LUKE, MtPyre_2F_Text_LukeIntro, MtPyre_2F_Text_LukeDefeat, MtPyre_2F_Text_LukeNotEnoughMons
# 36 "data/maps/MtPyre_2F/scripts.pory"
	msgbox MtPyre_2F_Text_LukePostBattle, MSGBOX_AUTOCLOSE
# 37 "data/maps/MtPyre_2F/scripts.pory"
	end
# 38 "data/maps/MtPyre_2F/scripts.pory"

# 39 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_EventScript_Dez::
# 40 "data/maps/MtPyre_2F/scripts.pory"
	trainerbattle_double TRAINER_DEZ_AND_LUKE, MtPyre_2F_Text_DezIntro, MtPyre_2F_Text_DezDefeat, MtPyre_2F_Text_DezNotEnoughMons
# 41 "data/maps/MtPyre_2F/scripts.pory"
	msgbox MtPyre_2F_Text_DezPostBattle, MSGBOX_AUTOCLOSE
# 42 "data/maps/MtPyre_2F/scripts.pory"
	end
# 43 "data/maps/MtPyre_2F/scripts.pory"

# 44 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_EventScript_Leah::
# 45 "data/maps/MtPyre_2F/scripts.pory"
	trainerbattle_single TRAINER_LEAH, MtPyre_2F_Text_LeahIntro, MtPyre_2F_Text_LeahDefeat
# 46 "data/maps/MtPyre_2F/scripts.pory"
	msgbox MtPyre_2F_Text_LeahPostBattle, MSGBOX_AUTOCLOSE
# 47 "data/maps/MtPyre_2F/scripts.pory"
	end
# 48 "data/maps/MtPyre_2F/scripts.pory"

# 49 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_EventScript_Zander::
# 50 "data/maps/MtPyre_2F/scripts.pory"
	trainerbattle_single TRAINER_ZANDER, MtPyre_2F_Text_ZanderIntro, MtPyre_2F_Text_ZanderDefeat
# 51 "data/maps/MtPyre_2F/scripts.pory"
	msgbox MtPyre_2F_Text_ZanderPostBattle, MSGBOX_AUTOCLOSE
# 52 "data/maps/MtPyre_2F/scripts.pory"
	end
# 53 "data/maps/MtPyre_2F/scripts.pory"

# 54 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_Text_MemoriesOfSkitty:
# 55 "data/maps/MtPyre_2F/scripts.pory"
	.string "Memories of my darling Skitty…\n"
# 56 "data/maps/MtPyre_2F/scripts.pory"
	.string "My eyes overflow thinking about it.$"
# 57 "data/maps/MtPyre_2F/scripts.pory"

# 58 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_Text_TumbledFromFloorAbove:
# 59 "data/maps/MtPyre_2F/scripts.pory"
	.string "Ooch, ouch… There are holes in the\n"
# 60 "data/maps/MtPyre_2F/scripts.pory"
	.string "ground here and there.\p"
# 61 "data/maps/MtPyre_2F/scripts.pory"
	.string "I didn't notice and took a tumble from\n"
# 62 "data/maps/MtPyre_2F/scripts.pory"
	.string "the floor above.$"
# 63 "data/maps/MtPyre_2F/scripts.pory"

# 64 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_Text_MarkIntro:
# 65 "data/maps/MtPyre_2F/scripts.pory"
	.string "Hey! Are you searching for Pokémon?\n"
# 66 "data/maps/MtPyre_2F/scripts.pory"
	.string "You came along after me! You're rude!$"
# 67 "data/maps/MtPyre_2F/scripts.pory"

# 68 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_Text_MarkDefeat:
# 69 "data/maps/MtPyre_2F/scripts.pory"
	.string "Ayieeeeh!\n"
# 70 "data/maps/MtPyre_2F/scripts.pory"
	.string "I'm sorry, forgive me, please!$"
# 71 "data/maps/MtPyre_2F/scripts.pory"

# 72 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_Text_MarkPostBattle:
# 73 "data/maps/MtPyre_2F/scripts.pory"
	.string "People don't come here often, so\n"
# 74 "data/maps/MtPyre_2F/scripts.pory"
	.string "I thought there'd be rare Pokémon.$"
# 75 "data/maps/MtPyre_2F/scripts.pory"

# 76 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_Text_LukeIntro:
# 77 "data/maps/MtPyre_2F/scripts.pory"
	.string "Luke: We're here on a dare.\p"
# 78 "data/maps/MtPyre_2F/scripts.pory"
	.string "Heheh, if I show her how cool I am,\n"
# 79 "data/maps/MtPyre_2F/scripts.pory"
	.string "she'll fall for me. I know it!\p"
# 80 "data/maps/MtPyre_2F/scripts.pory"
	.string "I know! I'll cream you and show her\n"
# 81 "data/maps/MtPyre_2F/scripts.pory"
	.string "how cool I am!$"
# 82 "data/maps/MtPyre_2F/scripts.pory"

# 83 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_Text_LukeDefeat:
# 84 "data/maps/MtPyre_2F/scripts.pory"
	.string "Luke: Whoopsie!$"
# 85 "data/maps/MtPyre_2F/scripts.pory"

# 86 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_Text_LukePostBattle:
# 87 "data/maps/MtPyre_2F/scripts.pory"
	.string "Luke: Well, we lost but that's okay!\n"
# 88 "data/maps/MtPyre_2F/scripts.pory"
	.string "I'm right here by your side.\l"
# 89 "data/maps/MtPyre_2F/scripts.pory"
	.string "We'll make it through this dare!$"
# 90 "data/maps/MtPyre_2F/scripts.pory"

# 91 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_Text_LukeNotEnoughMons:
# 92 "data/maps/MtPyre_2F/scripts.pory"
	.string "Luke: If you want to take me on,\n"
# 93 "data/maps/MtPyre_2F/scripts.pory"
	.string "bring some more Pokémon.\p"
# 94 "data/maps/MtPyre_2F/scripts.pory"
	.string "If you don't, I won't be able to show\n"
# 95 "data/maps/MtPyre_2F/scripts.pory"
	.string "off to my girl how cool I am!$"
# 96 "data/maps/MtPyre_2F/scripts.pory"

# 97 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_Text_DezIntro:
# 98 "data/maps/MtPyre_2F/scripts.pory"
	.string "Dez: I came here on a dare with my\n"
# 99 "data/maps/MtPyre_2F/scripts.pory"
	.string "boyfriend.\p"
# 100 "data/maps/MtPyre_2F/scripts.pory"
	.string "It's really scary, but I'm with my\n"
# 101 "data/maps/MtPyre_2F/scripts.pory"
	.string "boyfriend. It's okay.\p"
# 102 "data/maps/MtPyre_2F/scripts.pory"
	.string "I know! I'll get my boyfriend to look\n"
# 103 "data/maps/MtPyre_2F/scripts.pory"
	.string "cool by beating you!$"
# 104 "data/maps/MtPyre_2F/scripts.pory"

# 105 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_Text_DezDefeat:
# 106 "data/maps/MtPyre_2F/scripts.pory"
	.string "Dez: Waaaah! I'm scared!$"
# 107 "data/maps/MtPyre_2F/scripts.pory"

# 108 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_Text_DezPostBattle:
# 109 "data/maps/MtPyre_2F/scripts.pory"
	.string "Dez: We're lovey-dovey, so we don't\n"
# 110 "data/maps/MtPyre_2F/scripts.pory"
	.string "care if we lose!$"
# 111 "data/maps/MtPyre_2F/scripts.pory"

# 112 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_Text_DezNotEnoughMons:
# 113 "data/maps/MtPyre_2F/scripts.pory"
	.string "Dez: If you want to challenge us, you\n"
# 114 "data/maps/MtPyre_2F/scripts.pory"
	.string "should bring at least two Pokémon.\p"
# 115 "data/maps/MtPyre_2F/scripts.pory"
	.string "My boyfriend's strong.\n"
# 116 "data/maps/MtPyre_2F/scripts.pory"
	.string "Just one Pokémon won't do at all.$"
# 117 "data/maps/MtPyre_2F/scripts.pory"

# 118 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_Text_LeahIntro:
# 119 "data/maps/MtPyre_2F/scripts.pory"
	.string "You are an unfamiliar sight…\n"
# 120 "data/maps/MtPyre_2F/scripts.pory"
	.string "Depart before anything befalls you!$"
# 121 "data/maps/MtPyre_2F/scripts.pory"

# 122 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_Text_LeahDefeat:
# 123 "data/maps/MtPyre_2F/scripts.pory"
	.string "Hmm…\n"
# 124 "data/maps/MtPyre_2F/scripts.pory"
	.string "You're durable.$"
# 125 "data/maps/MtPyre_2F/scripts.pory"

# 126 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_Text_LeahPostBattle:
# 127 "data/maps/MtPyre_2F/scripts.pory"
	.string "Our family has been Trainers here\n"
# 128 "data/maps/MtPyre_2F/scripts.pory"
	.string "since my great-grandmother's time…\p"
# 129 "data/maps/MtPyre_2F/scripts.pory"
	.string "It is my duty to protect this\n"
# 130 "data/maps/MtPyre_2F/scripts.pory"
	.string "mountain…$"
# 131 "data/maps/MtPyre_2F/scripts.pory"

# 132 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_Text_ZanderIntro:
# 133 "data/maps/MtPyre_2F/scripts.pory"
	.string "Kiyaaaaah!\n"
# 134 "data/maps/MtPyre_2F/scripts.pory"
	.string "I'm terrified!$"
# 135 "data/maps/MtPyre_2F/scripts.pory"

# 136 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_Text_ZanderDefeat:
# 137 "data/maps/MtPyre_2F/scripts.pory"
	.string "Nooooooo!\n"
# 138 "data/maps/MtPyre_2F/scripts.pory"
	.string "I lost my wits!$"
# 139 "data/maps/MtPyre_2F/scripts.pory"

# 140 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_Text_ZanderPostBattle:
# 141 "data/maps/MtPyre_2F/scripts.pory"
	.string "I get freaked out every time I see\n"
# 142 "data/maps/MtPyre_2F/scripts.pory"
	.string "anything move…\p"
# 143 "data/maps/MtPyre_2F/scripts.pory"
	.string "I shouldn't have come here to train…$"
