AbandonedShip_CaptainsOffice_EventScript_Sidney::
# 2 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	lock
# 3 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	faceplayer
# 4 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	goto_if_set FLAG_DEFEATED_SIDNEY, AbandonedShip_CaptainsOffice_EventScript_Sidney_1
# 7 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	msgbox AbandonedShip_CaptainsOffice_EventScript_Sidney_Text_0
# 18 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	setflag FLAG_DISABLE_EXP
# 19 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	trainerbattle_no_intro TRAINER_SIDNEY, AbandonedShip_CaptainsOffice_Text_Defeat
# 20 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	clearflag FLAG_DISABLE_EXP
# 21 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	setflag FLAG_DEFEATED_SIDNEY
# 22 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	clearflag FLAG_HIDE_PETALBURG_CITY_TRICK_MASTER
# 23 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 6
# 24 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	clearflag FLAG_HIDE_PETALBURG_GYM_GREETER
# 25 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	msgbox AbandonedShip_CaptainsOffice_EventScript_Sidney_Text_1
# 30 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	giveitem ITEM_HEART_SCALE
# 31 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	giveitem ITEM_SCOPE_LENS
# 32 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	msgbox AbandonedShip_CaptainsOffice_EventScript_Sidney_Text_2, MSGBOX_YESNO
# 41 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq AbandonedShip_CaptainsOffice_EventScript_Sidney_5
# 44 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	msgbox AbandonedShip_CaptainsOffice_EventScript_Sidney_Text_3
AbandonedShip_CaptainsOffice_EventScript_Sidney_4:
# 47 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	release
	end

AbandonedShip_CaptainsOffice_EventScript_Sidney_1:
# 5 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	goto AbandonedShip_CaptainsOffice_EventScript_CritMoveTutor
	return

AbandonedShip_CaptainsOffice_EventScript_Sidney_5:
# 42 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	goto AbandonedShip_CaptainsOffice_EventScript_CritMoveTutor
	goto AbandonedShip_CaptainsOffice_EventScript_Sidney_4


# 52 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"

# 53 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
AbandonedShip_CaptainsOffice_MapScripts::
# 54 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	.byte 0
# 55 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"

# 56 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
AbandonedShip_CaptainsOffice_EventScript_CaptSternAide::
# 57 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	lock
# 58 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	faceplayer
# 59 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	goto_if_set FLAG_EXCHANGED_SCANNER, AbandonedShip_CaptainsOffice_EventScript_ThisIsSSCactus
# 60 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	checkitem ITEM_SCANNER
# 61 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, AbandonedShip_CaptainsOffice_EventScript_CanYouDeliverScanner
# 62 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	goto_if_set FLAG_ITEM_ABANDONED_SHIP_HIDDEN_FLOOR_ROOM_2_SCANNER, AbandonedShip_CaptainsOffice_EventScript_ThisIsSSCactus
# 63 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	msgbox AbandonedShip_CaptainsOffice_Text_NoSuccessFindingScanner, MSGBOX_DEFAULT
# 64 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	release
# 65 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	end
# 66 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"

# 67 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
AbandonedShip_CaptainsOffice_EventScript_CanYouDeliverScanner::
# 68 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	msgbox AbandonedShip_CaptainsOffice_Text_OhCanYouDeliverScanner, MSGBOX_DEFAULT
# 69 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	release
# 70 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	end
# 71 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"

# 72 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
AbandonedShip_CaptainsOffice_EventScript_ThisIsSSCactus::
# 73 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	msgbox AbandonedShip_CaptainsOffice_Text_ThisIsSSCactus, MSGBOX_DEFAULT
# 74 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	release
# 75 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	end
# 76 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"

# 77 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
AbandonedShip_CaptainsOffice_Text_NoSuccessFindingScanner:
# 78 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	.string "I'm investigating this ship on behalf\n"
# 79 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	.string "of CAPT. STERN.\p"
# 80 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	.string "He also asked me to find a SCANNER,\n"
# 81 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	.string "but I haven't had any success…$"
# 82 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"

# 83 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
AbandonedShip_CaptainsOffice_Text_OhCanYouDeliverScanner:
# 84 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	.string "Oh! That's a SCANNER!\p"
# 85 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	.string "Listen, can I get you to deliver that\n"
# 86 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	.string "to CAPT. STERN?\p"
# 87 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	.string "I want to investigate this ship a\n"
# 88 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	.string "little more.$"
# 89 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"

# 90 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
AbandonedShip_CaptainsOffice_Text_ThisIsSSCactus:
# 91 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	.string "This ship is called S.S. CACTUS.\n"
# 92 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	.string "It seems to be from an earlier era.$"
# 93 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"

# 94 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
AbandonedShip_CaptainsOffice_Text_Defeat:
# 95 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	.string "Well, how do you like that? I lost!\n"
# 96 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	.string "Eh, it was fun, so it doesn't matter.$"

AbandonedShip_CaptainsOffice_EventScript_Sidney_Text_0:
# 7 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	.string "Hey, {PLAYER} right?\p"
	.string "I'm Sidney, and I used to be a member\n"
	.string "of the Elite Four!\p"
	.string "I've since retired, and spend most of\n"
	.string "my time here training.\p"
	.string "An eerie place like this really suits\n"
	.string "me.\p"
	.string "Anyway, your dad told me that you're\n"
	.string "stronger than you look, so I'm not\l"
	.string "going to pull any punches.\p"
	.string "Here I go!$"

AbandonedShip_CaptainsOffice_EventScript_Sidney_Text_1:
# 25 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	.string "You've got what it takes to go far!\p"
	.string "I think you're more than ready to\n"
	.string "challenge your father.\p"
	.string "A trainer like you should be able to\n"
	.string "make good use out of these items.$"

AbandonedShip_CaptainsOffice_EventScript_Sidney_Text_2:
# 32 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	.string "That's a Heart Scale, I'm sure you\n"
	.string "know what it does.\p"
	.string "That other thing is a Scope Lens.\p"
	.string "I'm sure by now you understand the\n"
	.string "devastating power of critical hits.\p"
	.string "That item makes them easier to land.\p"
	.string "If you want, I can teach your Pokémon\n"
	.string "some moves that go well with that\l"
	.string "Scope Lens.$"

AbandonedShip_CaptainsOffice_EventScript_Sidney_Text_3:
# 44 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	.string "No worries.\n"
	.string "Good luck, {PLAYER}!$"
