# 1 "data/maps/MtPyre_1F/scripts.pory"

# 2 "data/maps/MtPyre_1F/scripts.pory"
MtPyre_1F_MapScripts::
# 3 "data/maps/MtPyre_1F/scripts.pory"
	.byte 0
# 4 "data/maps/MtPyre_1F/scripts.pory"

# 5 "data/maps/MtPyre_1F/scripts.pory"
MtPyre_1F_EventScript_FakeTearsWoman::
# 6 "data/maps/MtPyre_1F/scripts.pory"
	lock
# 7 "data/maps/MtPyre_1F/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_FAKE_TEARS, MtPyre_1F_EventScript_ReceivedFakeTears
# 8 "data/maps/MtPyre_1F/scripts.pory"
	msgbox MtPyre_1F_Text_OhMyPokemon, MSGBOX_DEFAULT
# 9 "data/maps/MtPyre_1F/scripts.pory"
	faceplayer
# 10 "data/maps/MtPyre_1F/scripts.pory"
	msgbox MtPyre_1F_Text_WasThatAGood, MSGBOX_DEFAULT
# 11 "data/maps/MtPyre_1F/scripts.pory"
	giveitem ITEM_TM_FAKE_TEARS
# 12 "data/maps/MtPyre_1F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 13 "data/maps/MtPyre_1F/scripts.pory"
	setflag FLAG_RECEIVED_TM_FAKE_TEARS
# 14 "data/maps/MtPyre_1F/scripts.pory"
	release
# 15 "data/maps/MtPyre_1F/scripts.pory"
	end
# 16 "data/maps/MtPyre_1F/scripts.pory"

# 17 "data/maps/MtPyre_1F/scripts.pory"
MtPyre_1F_EventScript_ReceivedFakeTears::
# 18 "data/maps/MtPyre_1F/scripts.pory"
	faceplayer
# 19 "data/maps/MtPyre_1F/scripts.pory"
	msgbox MtPyre_1F_Text_ExplainFakeTears, MSGBOX_DEFAULT
# 20 "data/maps/MtPyre_1F/scripts.pory"
	release
# 21 "data/maps/MtPyre_1F/scripts.pory"
	end
# 22 "data/maps/MtPyre_1F/scripts.pory"

# 23 "data/maps/MtPyre_1F/scripts.pory"
MtPyre_1F_EventScript_PokefanF::
# 24 "data/maps/MtPyre_1F/scripts.pory"
	msgbox MtPyre_1F_Text_ComeToPayRespects, MSGBOX_NPC
# 25 "data/maps/MtPyre_1F/scripts.pory"
	end
# 26 "data/maps/MtPyre_1F/scripts.pory"

# 27 "data/maps/MtPyre_1F/scripts.pory"
MtPyre_1F_EventScript_Man::
# 28 "data/maps/MtPyre_1F/scripts.pory"
	msgbox MtPyre_1F_Text_RestingPlaceOfZigzagoon, MSGBOX_NPC
# 29 "data/maps/MtPyre_1F/scripts.pory"
	end
# 30 "data/maps/MtPyre_1F/scripts.pory"

# 31 "data/maps/MtPyre_1F/scripts.pory"
MtPyre_1F_Text_OhMyPokemon:
# 32 "data/maps/MtPyre_1F/scripts.pory"
	.string "Oh… sniff…\n"
# 33 "data/maps/MtPyre_1F/scripts.pory"
	.string "My poor Pokémon…$"
# 34 "data/maps/MtPyre_1F/scripts.pory"

# 35 "data/maps/MtPyre_1F/scripts.pory"
MtPyre_1F_Text_WasThatAGood:
# 36 "data/maps/MtPyre_1F/scripts.pory"
	.string "Was that a good performance?\p"
# 37 "data/maps/MtPyre_1F/scripts.pory"
	.string "You can join in too, with this\n"
# 38 "data/maps/MtPyre_1F/scripts.pory"
	.string "Technical Machine!$"
# 39 "data/maps/MtPyre_1F/scripts.pory"

# 40 "data/maps/MtPyre_1F/scripts.pory"
MtPyre_1F_Text_ExplainFakeTears:
# 41 "data/maps/MtPyre_1F/scripts.pory"
	.string "Fake Tears will sharply drop a\n"
# 42 "data/maps/MtPyre_1F/scripts.pory"
	.string "Pokémon's Special Defense!$"
# 43 "data/maps/MtPyre_1F/scripts.pory"

# 44 "data/maps/MtPyre_1F/scripts.pory"
MtPyre_1F_Text_ComeToPayRespects:
# 45 "data/maps/MtPyre_1F/scripts.pory"
	.string "Did you come to pay your respect\n"
# 46 "data/maps/MtPyre_1F/scripts.pory"
	.string "to the spirits of departed Pokémon?\p"
# 47 "data/maps/MtPyre_1F/scripts.pory"
	.string "You must care for your Pokémon a lot.$"
# 48 "data/maps/MtPyre_1F/scripts.pory"

# 49 "data/maps/MtPyre_1F/scripts.pory"
MtPyre_1F_Text_RestingPlaceOfZigzagoon:
# 50 "data/maps/MtPyre_1F/scripts.pory"
	.string "This is the final resting place of my\n"
# 51 "data/maps/MtPyre_1F/scripts.pory"
	.string "Zigzagoon. I cherished it…$"
