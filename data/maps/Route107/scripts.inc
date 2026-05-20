Route107_EventScript_SwimmerM::
# 2 "data/maps/Route107/scripts.pory"
	lock
# 3 "data/maps/Route107/scripts.pory"
	msgbox Route107_EventScript_SwimmerM_Text_0
# 4 "data/maps/Route107/scripts.pory"
	delay 10
# 5 "data/maps/Route107/scripts.pory"
	faceplayer
# 6 "data/maps/Route107/scripts.pory"
	msgbox Route107_EventScript_SwimmerM_Text_1
# 9 "data/maps/Route107/scripts.pory"
	release
	end


Route107_EventScript_SwimmerF::
# 14 "data/maps/Route107/scripts.pory"
	lock
# 15 "data/maps/Route107/scripts.pory"
	msgbox Route107_EventScript_SwimmerF_Text_0
# 16 "data/maps/Route107/scripts.pory"
	delay 10
# 17 "data/maps/Route107/scripts.pory"
	faceplayer
# 18 "data/maps/Route107/scripts.pory"
	msgbox Route107_EventScript_SwimmerF_Text_1
# 21 "data/maps/Route107/scripts.pory"
	release
	end


# 25 "data/maps/Route107/scripts.pory"

# 26 "data/maps/Route107/scripts.pory"
Route107_MapScripts::
# 27 "data/maps/Route107/scripts.pory"
	.byte 0
# 28 "data/maps/Route107/scripts.pory"

# 29 "data/maps/Route107/scripts.pory"
Route107_EventScript_Darrin::
# 30 "data/maps/Route107/scripts.pory"
	trainerbattle_single TRAINER_DARRIN, Route107_Text_DarrinIntro, Route107_Text_DarrinDefeated
# 31 "data/maps/Route107/scripts.pory"
	msgbox Route107_Text_DarrinPostBattle, MSGBOX_AUTOCLOSE
# 32 "data/maps/Route107/scripts.pory"
	end
# 33 "data/maps/Route107/scripts.pory"

# 34 "data/maps/Route107/scripts.pory"
Route107_EventScript_Tony::
# 35 "data/maps/Route107/scripts.pory"
	trainerbattle_single TRAINER_TONY_1, Route107_Text_TonyIntro, Route107_Text_TonyDefeated, Route107_EventScript_TonyRegisterMatchCallAfterBattle
# 36 "data/maps/Route107/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 37 "data/maps/Route107/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route107_EventScript_TonyRematch
# 38 "data/maps/Route107/scripts.pory"
	msgbox Route107_Text_TonyPostBattle, MSGBOX_DEFAULT
# 39 "data/maps/Route107/scripts.pory"
	release
# 40 "data/maps/Route107/scripts.pory"
	end
# 41 "data/maps/Route107/scripts.pory"

# 42 "data/maps/Route107/scripts.pory"
Route107_EventScript_TonyRegisterMatchCallAfterBattle::
# 43 "data/maps/Route107/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 44 "data/maps/Route107/scripts.pory"
	waitmovement 0
# 45 "data/maps/Route107/scripts.pory"
	msgbox Route107_Text_TonyRegister, MSGBOX_DEFAULT
# 46 "data/maps/Route107/scripts.pory"
	register_matchcall TRAINER_TONY_1
# 47 "data/maps/Route107/scripts.pory"
	release
# 48 "data/maps/Route107/scripts.pory"
	end
# 49 "data/maps/Route107/scripts.pory"

# 50 "data/maps/Route107/scripts.pory"
Route107_EventScript_TonyRematch::
# 51 "data/maps/Route107/scripts.pory"
	trainerbattle_rematch TRAINER_TONY_1, Route107_Text_TonyRematchIntro, Route107_Text_TonyRematchDefeated
# 52 "data/maps/Route107/scripts.pory"
	msgbox Route107_Text_TonyRematchPostBattle, MSGBOX_AUTOCLOSE
# 53 "data/maps/Route107/scripts.pory"
	end
# 54 "data/maps/Route107/scripts.pory"

# 55 "data/maps/Route107/scripts.pory"
Route107_EventScript_Denise::
# 56 "data/maps/Route107/scripts.pory"
	trainerbattle_single TRAINER_DENISE, Route107_Text_DeniseIntro, Route107_Text_DeniseDefeated
# 57 "data/maps/Route107/scripts.pory"
	msgbox Route107_Text_DenisePostBattle, MSGBOX_AUTOCLOSE
# 58 "data/maps/Route107/scripts.pory"
	end
# 59 "data/maps/Route107/scripts.pory"

# 60 "data/maps/Route107/scripts.pory"
Route107_EventScript_Beth::
# 61 "data/maps/Route107/scripts.pory"
	trainerbattle_single TRAINER_BETH, Route107_Text_BethIntro, Route107_Text_BethDefeated
# 62 "data/maps/Route107/scripts.pory"
	msgbox Route107_Text_BethPostBattle, MSGBOX_AUTOCLOSE
# 63 "data/maps/Route107/scripts.pory"
	end
# 64 "data/maps/Route107/scripts.pory"

# 65 "data/maps/Route107/scripts.pory"
Route107_EventScript_Lisa::
# 66 "data/maps/Route107/scripts.pory"
	trainerbattle_double TRAINER_LISA_AND_RAY, Route107_Text_LisaIntro, Route107_Text_LisaDefeated, Route107_Text_LisaNotEnoughPokemon
# 67 "data/maps/Route107/scripts.pory"
	msgbox Route107_Text_LisaPostBattle, MSGBOX_AUTOCLOSE
# 68 "data/maps/Route107/scripts.pory"
	end
# 69 "data/maps/Route107/scripts.pory"

# 70 "data/maps/Route107/scripts.pory"
Route107_EventScript_Ray::
# 71 "data/maps/Route107/scripts.pory"
	trainerbattle_double TRAINER_LISA_AND_RAY, Route107_Text_RayIntro, Route107_Text_RayDefeated, Route107_Text_RayNotEnoughPokemon
# 72 "data/maps/Route107/scripts.pory"
	msgbox Route107_Text_RayPostBattle, MSGBOX_AUTOCLOSE
# 73 "data/maps/Route107/scripts.pory"
	end
# 74 "data/maps/Route107/scripts.pory"

# 75 "data/maps/Route107/scripts.pory"
Route107_EventScript_Camron::
# 76 "data/maps/Route107/scripts.pory"
	trainerbattle_single TRAINER_CAMRON, Route107_Text_CamronIntro, Route107_Text_CamronDefeated
# 77 "data/maps/Route107/scripts.pory"
	msgbox Route107_Text_CamronPostBattle, MSGBOX_AUTOCLOSE
# 78 "data/maps/Route107/scripts.pory"
	end

Route107_EventScript_SwimmerM_Text_0:
# 3 "data/maps/Route107/scripts.pory"
	.string "Wobbuffet! Use Counter!$"

Route107_EventScript_SwimmerM_Text_1:
# 6 "data/maps/Route107/scripts.pory"
	.string "We're having a battle and it might\n"
	.string "take a while.\p"
	.string "Could you come back later?$"

Route107_EventScript_SwimmerF_Text_0:
# 15 "data/maps/Route107/scripts.pory"
	.string "Wobbuffet! Use Mirror Coat!$"

Route107_EventScript_SwimmerF_Text_1:
# 18 "data/maps/Route107/scripts.pory"
	.string "Sorry! I guess we're in your way.\p"
	.string "We'll be done battling soon, I\n"
	.string "promise!$"
