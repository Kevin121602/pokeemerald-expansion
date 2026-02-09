MtPyre_5F_EventScript_GauntletStart::
# 2 "data/maps/MtPyre_5F/scripts.pory"
	setflag FLAG_SYS_GAUNTLET
# 3 "data/maps/MtPyre_5F/scripts.pory"
	release
	end


# 7 "data/maps/MtPyre_5F/scripts.pory"

# 8 "data/maps/MtPyre_5F/scripts.pory"
MtPyre_5F_MapScripts::
# 9 "data/maps/MtPyre_5F/scripts.pory"
	.byte 0
# 10 "data/maps/MtPyre_5F/scripts.pory"

# 11 "data/maps/MtPyre_5F/scripts.pory"
@ Seems like the scripts for the 4F and 5F were swapped
# 12 "data/maps/MtPyre_5F/scripts.pory"

# 13 "data/maps/MtPyre_5F/scripts.pory"
MtPyre_4F_EventScript_Tasha::
# 14 "data/maps/MtPyre_5F/scripts.pory"
	trainerbattle_single TRAINER_TASHA, MtPyre_4F_Text_TashaIntro, MtPyre_4F_Text_TashaDefeat
# 15 "data/maps/MtPyre_5F/scripts.pory"
	msgbox MtPyre_4F_Text_TashaPostBattle, MSGBOX_AUTOCLOSE
# 16 "data/maps/MtPyre_5F/scripts.pory"
	end
# 17 "data/maps/MtPyre_5F/scripts.pory"

# 18 "data/maps/MtPyre_5F/scripts.pory"
MtPyre_4F_Text_TashaIntro:
# 19 "data/maps/MtPyre_5F/scripts.pory"
	.string "I love all things horrifying…\n"
# 20 "data/maps/MtPyre_5F/scripts.pory"
	.string "It's like a disease…\p"
# 21 "data/maps/MtPyre_5F/scripts.pory"
	.string "When I'm here…\n"
# 22 "data/maps/MtPyre_5F/scripts.pory"
	.string "I shiver with fear…$"
# 23 "data/maps/MtPyre_5F/scripts.pory"

# 24 "data/maps/MtPyre_5F/scripts.pory"
MtPyre_4F_Text_TashaDefeat:
# 25 "data/maps/MtPyre_5F/scripts.pory"
	.string "Losing, I dislike…$"
# 26 "data/maps/MtPyre_5F/scripts.pory"

# 27 "data/maps/MtPyre_5F/scripts.pory"
MtPyre_4F_Text_TashaPostBattle:
# 28 "data/maps/MtPyre_5F/scripts.pory"
	.string "I want to see dreadful things…\n"
# 29 "data/maps/MtPyre_5F/scripts.pory"
	.string "I can't leave…\p"
# 30 "data/maps/MtPyre_5F/scripts.pory"
	.string "Stay…\n"
# 31 "data/maps/MtPyre_5F/scripts.pory"
	.string "Won't you stay with me?$"
