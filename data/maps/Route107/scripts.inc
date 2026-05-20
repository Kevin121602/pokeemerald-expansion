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
	applymovement VAR_LAST_TALKED, Common_Movement_FaceDown
# 10 "data/maps/Route107/scripts.pory"
	release
	end


Route107_EventScript_SwimmerF::
# 15 "data/maps/Route107/scripts.pory"
	lock
# 16 "data/maps/Route107/scripts.pory"
	msgbox Route107_EventScript_SwimmerF_Text_0
# 17 "data/maps/Route107/scripts.pory"
	delay 10
# 18 "data/maps/Route107/scripts.pory"
	faceplayer
# 19 "data/maps/Route107/scripts.pory"
	msgbox Route107_EventScript_SwimmerF_Text_1
# 22 "data/maps/Route107/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceUp
# 23 "data/maps/Route107/scripts.pory"
	release
	end


# 27 "data/maps/Route107/scripts.pory"

# 28 "data/maps/Route107/scripts.pory"
Route107_MapScripts::
# 29 "data/maps/Route107/scripts.pory"
	.byte 0
# 30 "data/maps/Route107/scripts.pory"

# 31 "data/maps/Route107/scripts.pory"
Route107_EventScript_Darrin::
# 32 "data/maps/Route107/scripts.pory"
	trainerbattle_single TRAINER_DARRIN, Route107_Text_DarrinIntro, Route107_Text_DarrinDefeated
# 33 "data/maps/Route107/scripts.pory"
	msgbox Route107_Text_DarrinPostBattle, MSGBOX_AUTOCLOSE
# 34 "data/maps/Route107/scripts.pory"
	end
# 35 "data/maps/Route107/scripts.pory"

# 36 "data/maps/Route107/scripts.pory"
Route107_EventScript_Tony::
# 37 "data/maps/Route107/scripts.pory"
	trainerbattle_single TRAINER_TONY_1, Route107_Text_TonyIntro, Route107_Text_TonyDefeated, Route107_EventScript_TonyRegisterMatchCallAfterBattle
# 38 "data/maps/Route107/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 39 "data/maps/Route107/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route107_EventScript_TonyRematch
# 40 "data/maps/Route107/scripts.pory"
	msgbox Route107_Text_TonyPostBattle, MSGBOX_DEFAULT
# 41 "data/maps/Route107/scripts.pory"
	release
# 42 "data/maps/Route107/scripts.pory"
	end
# 43 "data/maps/Route107/scripts.pory"

# 44 "data/maps/Route107/scripts.pory"
Route107_EventScript_TonyRegisterMatchCallAfterBattle::
# 45 "data/maps/Route107/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 46 "data/maps/Route107/scripts.pory"
	waitmovement 0
# 47 "data/maps/Route107/scripts.pory"
	msgbox Route107_Text_TonyRegister, MSGBOX_DEFAULT
# 48 "data/maps/Route107/scripts.pory"
	register_matchcall TRAINER_TONY_1
# 49 "data/maps/Route107/scripts.pory"
	release
# 50 "data/maps/Route107/scripts.pory"
	end
# 51 "data/maps/Route107/scripts.pory"

# 52 "data/maps/Route107/scripts.pory"
Route107_EventScript_TonyRematch::
# 53 "data/maps/Route107/scripts.pory"
	trainerbattle_rematch TRAINER_TONY_1, Route107_Text_TonyRematchIntro, Route107_Text_TonyRematchDefeated
# 54 "data/maps/Route107/scripts.pory"
	msgbox Route107_Text_TonyRematchPostBattle, MSGBOX_AUTOCLOSE
# 55 "data/maps/Route107/scripts.pory"
	end
# 56 "data/maps/Route107/scripts.pory"

# 57 "data/maps/Route107/scripts.pory"
Route107_EventScript_Denise::
# 58 "data/maps/Route107/scripts.pory"
	trainerbattle_single TRAINER_DENISE, Route107_Text_DeniseIntro, Route107_Text_DeniseDefeated
# 59 "data/maps/Route107/scripts.pory"
	msgbox Route107_Text_DenisePostBattle, MSGBOX_AUTOCLOSE
# 60 "data/maps/Route107/scripts.pory"
	end
# 61 "data/maps/Route107/scripts.pory"

# 62 "data/maps/Route107/scripts.pory"
Route107_EventScript_Beth::
# 63 "data/maps/Route107/scripts.pory"
	trainerbattle_single TRAINER_BETH, Route107_Text_BethIntro, Route107_Text_BethDefeated
# 64 "data/maps/Route107/scripts.pory"
	msgbox Route107_Text_BethPostBattle, MSGBOX_AUTOCLOSE
# 65 "data/maps/Route107/scripts.pory"
	end
# 66 "data/maps/Route107/scripts.pory"

# 67 "data/maps/Route107/scripts.pory"
Route107_EventScript_Lisa::
# 68 "data/maps/Route107/scripts.pory"
	trainerbattle_double TRAINER_LISA_AND_RAY, Route107_Text_LisaIntro, Route107_Text_LisaDefeated, Route107_Text_LisaNotEnoughPokemon
# 69 "data/maps/Route107/scripts.pory"
	msgbox Route107_Text_LisaPostBattle, MSGBOX_AUTOCLOSE
# 70 "data/maps/Route107/scripts.pory"
	end
# 71 "data/maps/Route107/scripts.pory"

# 72 "data/maps/Route107/scripts.pory"
Route107_EventScript_Ray::
# 73 "data/maps/Route107/scripts.pory"
	trainerbattle_double TRAINER_LISA_AND_RAY, Route107_Text_RayIntro, Route107_Text_RayDefeated, Route107_Text_RayNotEnoughPokemon
# 74 "data/maps/Route107/scripts.pory"
	msgbox Route107_Text_RayPostBattle, MSGBOX_AUTOCLOSE
# 75 "data/maps/Route107/scripts.pory"
	end
# 76 "data/maps/Route107/scripts.pory"

# 77 "data/maps/Route107/scripts.pory"
Route107_EventScript_Camron::
# 78 "data/maps/Route107/scripts.pory"
	trainerbattle_single TRAINER_CAMRON, Route107_Text_CamronIntro, Route107_Text_CamronDefeated
# 79 "data/maps/Route107/scripts.pory"
	msgbox Route107_Text_CamronPostBattle, MSGBOX_AUTOCLOSE
# 80 "data/maps/Route107/scripts.pory"
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
# 16 "data/maps/Route107/scripts.pory"
	.string "Wobbuffet! Use Mirror Coat!$"

Route107_EventScript_SwimmerF_Text_1:
# 19 "data/maps/Route107/scripts.pory"
	.string "Sorry! I guess we're in your way.\p"
	.string "We'll be done battling soon, I\n"
	.string "promise!$"
