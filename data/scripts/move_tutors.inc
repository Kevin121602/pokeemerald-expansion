SlateportCity_PokemonFanClub_EventScript_SwaggerTutor::
	release
	end

MoveTutor_EventScript_SwaggerDeclined::
	msgbox MoveTutor_Text_SwaggerDeclined, MSGBOX_DEFAULT
	release
	end

MoveTutor_EventScript_SwaggerTaught::
	msgbox MoveTutor_Text_SwaggerTaught, MSGBOX_DEFAULT
	release
	end

MauvilleCity_EventScript_RolloutTutor::
	release
	end

MoveTutor_EventScript_RolloutDeclined::
	msgbox MoveTutor_Text_RolloutDeclined, MSGBOX_DEFAULT
	release
	end

MoveTutor_EventScript_RolloutTaught::
	msgbox MoveTutor_Text_RolloutTaught, MSGBOX_DEFAULT
	release
	end

VerdanturfTown_PokemonCenter_1F_EventScript_FuryCutterTutor::
	release
	end

MoveTutor_EventScript_FuryCutterDeclined::
	msgbox MoveTutor_Text_FuryCutterDeclined, MSGBOX_DEFAULT
	release
	end

MoveTutor_EventScript_FuryCutterTaught::
	msgbox MoveTutor_Text_FuryCutterTaught, MSGBOX_DEFAULT
	release
	end

LavaridgeTown_House_EventScript_MimicTutor::
	release
	end

MoveTutor_EventScript_MimicDeclined::
	msgbox MoveTutor_MimicDeclined, MSGBOX_DEFAULT
	release
	end

MoveTutor_EventScript_MimicTaught::
	msgbox MoveTutor_Text_MimicTaught, MSGBOX_DEFAULT
	release
	end

FallarborTown_Mart_EventScript_MetronomeTutor::
	release
	end

MoveTutor_EventScript_MetronomeDeclined::
	msgbox MoveTutor_Text_MetronomeDeclined, MSGBOX_DEFAULT
	release
	end

MoveTutor_EventScript_MetronomeTaught::
	msgbox MoveTutor_Text_MetronomeTaught, MSGBOX_DEFAULT
	release
	end

FortreeCity_House2_EventScript_SleepTalkTutor::
	release
	end

MoveTutor_EventScript_SleepTalkDeclined::
	msgbox MoveTutor_Text_SleepTalkDeclined, MSGBOX_DEFAULT
	release
	end

MoveTutor_EventScript_SleepTalkTaught::
	msgbox MoveTutor_Text_SleepTalkTaught, MSGBOX_DEFAULT
	release
	end

LilycoveCity_DepartmentStoreRooftop_EventScript_SubstituteTutor::
	release
	end

MoveTutor_EventScript_SubstituteDeclined::
	msgbox MoveTutor_Text_SubstituteDeclined, MSGBOX_DEFAULT
	release
	end

MoveTutor_EventScript_SubstituteTaught::
	msgbox MoveTutor_Text_SubstituteTaught, MSGBOX_DEFAULT
	release
	end

MossdeepCity_EventScript_DynamicPunchTutor::
	release
	end

MoveTutor_EventScript_DynamicPunchDeclined::
	msgbox MoveTutor_Text_DynamicPunchDeclined, MSGBOX_DEFAULT
	release
	end

MoveTutor_EventScript_DynamicPunchTaught::
	msgbox MoveTutor_Text_DynamicPunchTaught, MSGBOX_DEFAULT
	release
	end

SootopolisCity_PokemonCenter_1F_EventScript_DoubleEdgeTutor::
	release
	end

MoveTutor_EventScript_DoubleEdgeDeclined::
	msgbox MoveTutor_Text_DoubleEdgeDeclined, MSGBOX_DEFAULT
	release
	end

MoveTutor_EventScript_DoubleEdgeTaught::
	msgbox MoveTutor_Text_DoubleEdgeTaught, MSGBOX_DEFAULT
	release
	end

PacifidlogTown_PokemonCenter_1F_EventScript_ExplosionTutor::
	release
	end

MoveTutor_EventScript_ExplosionDeclined::
	msgbox MoveTutor_Text_ExplosionDeclined, MSGBOX_DEFAULT
	release
	end

MoveTutor_EventScript_ExplosionTaught::
	msgbox MoveTutor_Text_ExplosionTaught, MSGBOX_DEFAULT
	release
	end

MoveTutor_EventScript_OpenPartyMenu::
	special ChooseMonForMoveTutor
	waitstate
	lock
	faceplayer
	return

MoveTutor_EventScript_CanOnlyBeLearnedOnce::
	msgbox MoveTutor_Text_ThisMoveCanOnlyBeLearnedOnce, MSGBOX_YESNO
	return

MoveTutor_EventScript_RockSmashDeclined::
	release
	end

MoveTutor_EventScript_RockSmashTaught::
	release
	end

Route104_PrettyPetalFlowerShop_EventScript_HelpingHandTutor::
	lock
	faceplayer
	msgbox Route104_PrettyPetalFlowerShop_Text_HelpingHand, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_HelpingHandDeclined
	setvar VAR_0x8005, MOVE_HELPING_HAND
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, MoveTutor_EventScript_HelpingHandDeclined
	release
	end

Route115_EventScript_FangsTutor::
	lock
	faceplayer
	msgbox MoveTutor_Text_FangsTeach
	multichoice 21, 0, MULTI_FANG_TUTOR, FALSE
	switch VAR_RESULT
	case 0, Route115_EventScript_FireFangTutor
	case 1, Route115_EventScript_ThunderFangTutor
	case 2, Route115_EventScript_IceFangTutor
	case 3, Route115_EventScript_PoisonFangTutor
	case 4, Route115_EventScript_BiteTutor
	case MULTI_B_PRESSED, MoveTutor_EventScript_HelpingHandDeclined
	release
	end

Route115_EventScript_FireFangTutor::
	setvar VAR_0x8005, MOVE_FIRE_FANG
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, MoveTutor_EventScript_HelpingHandDeclined
	release
	end

Route115_EventScript_ThunderFangTutor::
	setvar VAR_0x8005, MOVE_THUNDER_FANG
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, MoveTutor_EventScript_HelpingHandDeclined
	release
	end

Route115_EventScript_IceFangTutor::
	setvar VAR_0x8005, MOVE_ICE_FANG
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, MoveTutor_EventScript_HelpingHandDeclined
	release
	end

Route115_EventScript_PoisonFangTutor::
	setvar VAR_0x8005, MOVE_POISON_FANG
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, MoveTutor_EventScript_HelpingHandDeclined
	release
	end

Route115_EventScript_BiteTutor::
	setvar VAR_0x8005, MOVE_BITE
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, MoveTutor_EventScript_HelpingHandDeclined
	release
	end

OldaleMeadow_House1_EventScript_HiddenPowerTutor::
	lock
	faceplayer
	msgbox OldaleMeadow_House1_Text_HiddenPower, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_HiddenPowerDeclined
	setvar VAR_0x8005, MOVE_HIDDEN_POWER
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, MoveTutor_EventScript_HiddenPowerDeclined
	releaseall
	end

MoveTutor_EventScript_HiddenPowerDeclined:
	releaseall
	end

OldaleMeadow_House1_Text_HiddenPower:
	.string "The solitude of this house helps\n"
	.string "me to draw out my full potential!\p"
	.string "Would you like me to help draw\n"
	.string "out your Pokémon's potential?$"

LittlerootTown_EventScript_SportTutor::
	lock
	faceplayer
	msgbox MoveTutor_Text_SportTeach
	multichoice 21, 0, MULTI_SPORT_TUTOR, FALSE
	switch VAR_RESULT
	case 0, LittlerootTown_EventScript_WaterSportTutor
	case 1, LittlerootTown_EventScript_MudSportTutor
	case MULTI_B_PRESSED, MoveTutor_EventScript_HelpingHandDeclined
	release
	end

LittlerootTown_EventScript_WaterSportTutor::
	setvar VAR_0x8005, MOVE_WATER_SPORT
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, MoveTutor_EventScript_HelpingHandDeclined
	release
	end

LittlerootTown_EventScript_MudSportTutor::
	setvar VAR_0x8005, MOVE_MUD_SPORT
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, MoveTutor_EventScript_HelpingHandDeclined
	release
	end

Route114_EventScript_PhasingTutor::
	lock
	faceplayer
	msgbox MoveTutor_Text_PhasingTeach
	multichoice 21, 0, MULTI_PHASING_TUTOR, FALSE
	switch VAR_RESULT
	case 0, Route114_EventScript_RoarTutor
	case 1, Route114_EventScript_WhirlwindTutor
	case 2, Route114_EventScript_DragonTailTutor
	case 3, Route114_EventScript_CircleThrowTutor
	case MULTI_B_PRESSED, MoveTutor_EventScript_HelpingHandDeclined
	release
	end

Route114_EventScript_RoarTutor::
	setvar VAR_0x8005, MOVE_ROAR
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, MoveTutor_EventScript_HelpingHandDeclined
	release
	end

Route114_EventScript_WhirlwindTutor::
	setvar VAR_0x8005, MOVE_WHIRLWIND
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, MoveTutor_EventScript_HelpingHandDeclined
	release
	end

Route114_EventScript_DragonTailTutor::
	setvar VAR_0x8005, MOVE_DRAGON_TAIL
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, MoveTutor_EventScript_HelpingHandDeclined
	release
	end

Route114_EventScript_CircleThrowTutor::
	setvar VAR_0x8005, MOVE_CIRCLE_THROW
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, MoveTutor_EventScript_HelpingHandDeclined
	release
	end

MoveTutor_EventScript_HelpingHandDeclined:
	release
	end

Route112_EventScript_PunchTutor::
	lock
	faceplayer
	msgbox MoveTutor_Text_PunchTeach
	multichoice 21, 0, MULTI_PUNCH_TUTOR, FALSE
	switch VAR_RESULT
	case 0, Route112_EventScript_BrickBreakTutor
	case 1, Route112_EventScript_FirePunchTutor
	case 2, Route112_EventScript_IcePunchTutor
	case 3, Route112_EventScript_ThunderPunchTutor
	case MULTI_B_PRESSED, MoveTutor_EventScript_HelpingHandDeclined
	release
	end

Route112_EventScript_BrickBreakTutor::
	setvar VAR_0x8005, MOVE_BRICK_BREAK
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, MoveTutor_EventScript_HelpingHandDeclined
	release
	end

Route112_EventScript_FirePunchTutor::
	setvar VAR_0x8005, MOVE_FIRE_PUNCH
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, MoveTutor_EventScript_HelpingHandDeclined
	release
	end

Route112_EventScript_IcePunchTutor::
	setvar VAR_0x8005, MOVE_ICE_PUNCH
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, MoveTutor_EventScript_HelpingHandDeclined
	release
	end

Route112_EventScript_ThunderPunchTutor::
	setvar VAR_0x8005, MOVE_THUNDER_PUNCH
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, MoveTutor_EventScript_HelpingHandDeclined
	release
	end

Route123_EventScript_BerriesTutor::
	lock
	faceplayer
	msgbox MoveTutor_Text_PunchTeach
	multichoice 21, 0, MULTI_BERRIES_TUTOR, FALSE
	switch VAR_RESULT
	case 0, Route123_EventScript_BugBiteTutor
	case 1, Route123_EventScript_PluckTutor
	case 2, Route123_EventScript_IncinerateTutor
	case MULTI_B_PRESSED, MoveTutor_EventScript_HelpingHandDeclined
	release
	end

Route123_EventScript_BugBiteTutor::
	setvar VAR_0x8005, MOVE_BUG_BITE
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, MoveTutor_EventScript_HelpingHandDeclined
	release
	end

Route123_EventScript_PluckTutor::
	setvar VAR_0x8005, MOVE_PLUCK
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, MoveTutor_EventScript_HelpingHandDeclined
	release
	end

Route123_EventScript_IncinerateTutor::
	setvar VAR_0x8005, MOVE_INCINERATE
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, MoveTutor_EventScript_HelpingHandDeclined
	release
	end

