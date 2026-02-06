# 1 "data/maps/Route123/scripts.pory"

# 2 "data/maps/Route123/scripts.pory"
Route123_MapScripts::
# 3 "data/maps/Route123/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route123_OnTransition
# 4 "data/maps/Route123/scripts.pory"
	.byte 0
# 5 "data/maps/Route123/scripts.pory"

# 6 "data/maps/Route123/scripts.pory"
Route123_OnTransition:
# 7 "data/maps/Route123/scripts.pory"
	end
# 8 "data/maps/Route123/scripts.pory"

# 9 "data/maps/Route123/scripts.pory"
Route123_EventScript_GigaDrainGirl::
# 10 "data/maps/Route123/scripts.pory"
	lock
# 11 "data/maps/Route123/scripts.pory"
	faceplayer
# 12 "data/maps/Route123/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_GIGA_DRAIN, Route123_EventScript_ReceivedGigaDrain
# 13 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_LoveGrassMonsHaveAny, MSGBOX_DEFAULT
# 14 "data/maps/Route123/scripts.pory"
	special IsGrassTypeInParty
# 15 "data/maps/Route123/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route123_EventScript_NoGrassMons
# 16 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_YouLikeGrassMonsTooHaveThis, MSGBOX_DEFAULT
# 17 "data/maps/Route123/scripts.pory"
	giveitem ITEM_BIG_ROOT
# 18 "data/maps/Route123/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 19 "data/maps/Route123/scripts.pory"
	setflag FLAG_RECEIVED_TM_GIGA_DRAIN
# 20 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_CheckTreesWithMyGrassMon, MSGBOX_DEFAULT
# 21 "data/maps/Route123/scripts.pory"
	release
# 22 "data/maps/Route123/scripts.pory"
	end
# 23 "data/maps/Route123/scripts.pory"

# 24 "data/maps/Route123/scripts.pory"
Route123_EventScript_NoGrassMons::
# 25 "data/maps/Route123/scripts.pory"
	release
# 26 "data/maps/Route123/scripts.pory"
	end
# 27 "data/maps/Route123/scripts.pory"

# 28 "data/maps/Route123/scripts.pory"
Route123_EventScript_ReceivedGigaDrain::
# 29 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_CheckTreesWithMyGrassMon, MSGBOX_DEFAULT
# 30 "data/maps/Route123/scripts.pory"
	release
# 31 "data/maps/Route123/scripts.pory"
	end
# 32 "data/maps/Route123/scripts.pory"

# 33 "data/maps/Route123/scripts.pory"
Route123_EventScript_RouteSign::
# 34 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_RouteSign, MSGBOX_SIGN
# 35 "data/maps/Route123/scripts.pory"
	end
# 36 "data/maps/Route123/scripts.pory"

# 37 "data/maps/Route123/scripts.pory"
Route123_EventScript_RouteSignMtPyre::
# 38 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_RouteSignMtPyre, MSGBOX_SIGN
# 39 "data/maps/Route123/scripts.pory"
	end
# 40 "data/maps/Route123/scripts.pory"

# 41 "data/maps/Route123/scripts.pory"
Route123_EventScript_BerryMastersHouseSign::
# 42 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_BerryMastersHouse, MSGBOX_SIGN
# 43 "data/maps/Route123/scripts.pory"
	end
# 44 "data/maps/Route123/scripts.pory"

# 45 "data/maps/Route123/scripts.pory"
Route123_EventScript_Wendy::
# 46 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_WENDY, Route123_Text_WendyIntro, Route123_Text_WendyDefeat
# 47 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_WendyPostBattle, MSGBOX_AUTOCLOSE
# 48 "data/maps/Route123/scripts.pory"
	end
# 49 "data/maps/Route123/scripts.pory"

# 50 "data/maps/Route123/scripts.pory"
Route123_EventScript_Braxton::
# 51 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_BRAXTON, Route123_Text_BraxtonIntro, Route123_Text_BraxtonDefeat
# 52 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_BraxtonPostBattle, MSGBOX_AUTOCLOSE
# 53 "data/maps/Route123/scripts.pory"
	end
# 54 "data/maps/Route123/scripts.pory"

# 55 "data/maps/Route123/scripts.pory"
Route123_EventScript_Violet::
# 56 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_VIOLET, Route123_Text_VioletIntro, Route123_Text_VioletDefeat
# 57 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_VioletPostBattle, MSGBOX_AUTOCLOSE
# 58 "data/maps/Route123/scripts.pory"
	end
# 59 "data/maps/Route123/scripts.pory"

# 60 "data/maps/Route123/scripts.pory"
Route123_EventScript_Cameron::
# 61 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_CAMERON_1, Route123_Text_CameronIntro, Route123_Text_CameronDefeat
# 62 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_CameronPostBattle, MSGBOX_AUTOCLOSE
# 63 "data/maps/Route123/scripts.pory"
	release
# 64 "data/maps/Route123/scripts.pory"
	end
# 65 "data/maps/Route123/scripts.pory"

# 66 "data/maps/Route123/scripts.pory"
Route123_EventScript_RegisterCameron::
# 67 "data/maps/Route123/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 68 "data/maps/Route123/scripts.pory"
	waitmovement 0
# 69 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_CameronRegister, MSGBOX_DEFAULT
# 70 "data/maps/Route123/scripts.pory"
	register_matchcall TRAINER_CAMERON_1
# 71 "data/maps/Route123/scripts.pory"
	release
# 72 "data/maps/Route123/scripts.pory"
	end
# 73 "data/maps/Route123/scripts.pory"

# 74 "data/maps/Route123/scripts.pory"
Route123_EventScript_RematchCameron::
# 75 "data/maps/Route123/scripts.pory"
	trainerbattle_rematch TRAINER_CAMERON_1, Route123_Text_CameronRematchIntro, Route123_Text_CameronRematchDefeat
# 76 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_CameronPostRematch, MSGBOX_AUTOCLOSE
# 77 "data/maps/Route123/scripts.pory"
	end
# 78 "data/maps/Route123/scripts.pory"

# 79 "data/maps/Route123/scripts.pory"
Route123_EventScript_Jacki::
# 80 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_JACKI_1, Route123_Text_JackiIntro, Route123_Text_JackiDefeat
# 81 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_JackiPostBattle, MSGBOX_AUTOCLOSE
# 82 "data/maps/Route123/scripts.pory"
	release
# 83 "data/maps/Route123/scripts.pory"
	end
# 84 "data/maps/Route123/scripts.pory"

# 85 "data/maps/Route123/scripts.pory"
Route123_EventScript_RegisterJacki::
# 86 "data/maps/Route123/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 87 "data/maps/Route123/scripts.pory"
	waitmovement 0
# 88 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_JackiRegister, MSGBOX_DEFAULT
# 89 "data/maps/Route123/scripts.pory"
	register_matchcall TRAINER_JACKI_1
# 90 "data/maps/Route123/scripts.pory"
	release
# 91 "data/maps/Route123/scripts.pory"
	end
# 92 "data/maps/Route123/scripts.pory"

# 93 "data/maps/Route123/scripts.pory"
Route123_EventScript_RematchJacki::
# 94 "data/maps/Route123/scripts.pory"
	trainerbattle_rematch TRAINER_JACKI_1, Route123_Text_JackiRematchIntro, Route123_Text_JackiRematchDefeat
# 95 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_JackiPostRematch, MSGBOX_AUTOCLOSE
# 96 "data/maps/Route123/scripts.pory"
	end
# 97 "data/maps/Route123/scripts.pory"

# 98 "data/maps/Route123/scripts.pory"
Route123_EventScript_Miu::
# 99 "data/maps/Route123/scripts.pory"
	trainerbattle_double TRAINER_MIU_AND_YUKI, Route123_Text_MiuIntro, Route123_Text_MiuDefeat, Route123_Text_MiuNotEnoughMons
# 100 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_MiuPostBattle, MSGBOX_AUTOCLOSE
# 101 "data/maps/Route123/scripts.pory"
	end
# 102 "data/maps/Route123/scripts.pory"

# 103 "data/maps/Route123/scripts.pory"
Route123_EventScript_Yuki::
# 104 "data/maps/Route123/scripts.pory"
	trainerbattle_double TRAINER_MIU_AND_YUKI, Route123_Text_YukiIntro, Route123_Text_YukiDefeat, Route123_Text_YukiNotEnoughMons
# 105 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_YukiPostBattle, MSGBOX_AUTOCLOSE
# 106 "data/maps/Route123/scripts.pory"
	end
# 107 "data/maps/Route123/scripts.pory"

# 108 "data/maps/Route123/scripts.pory"
Route123_EventScript_Kindra::
# 109 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_KINDRA, Route123_Text_KindraIntro, Route123_Text_KindraDefeat
# 110 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_KindraPostBattle, MSGBOX_AUTOCLOSE
# 111 "data/maps/Route123/scripts.pory"
	end
# 112 "data/maps/Route123/scripts.pory"

# 113 "data/maps/Route123/scripts.pory"
Route123_EventScript_Frederick::
# 114 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_FREDRICK, Route123_Text_FrederickIntro, Route123_Text_FrederickDefeat
# 115 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_FrederickPostBattle, MSGBOX_AUTOCLOSE
# 116 "data/maps/Route123/scripts.pory"
	end
# 117 "data/maps/Route123/scripts.pory"

# 118 "data/maps/Route123/scripts.pory"
Route123_EventScript_Alberto::
# 119 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_ALBERTO, Route123_Text_AlbertoIntro, Route123_Text_AlbertoDefeat
# 120 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_AlbertoPostBattle, MSGBOX_AUTOCLOSE
# 121 "data/maps/Route123/scripts.pory"
	end
# 122 "data/maps/Route123/scripts.pory"

# 123 "data/maps/Route123/scripts.pory"
Route123_EventScript_Ed::
# 124 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_ED, Route123_Text_EdIntro, Route123_Text_EdDefeat
# 125 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_EdPostBattle, MSGBOX_AUTOCLOSE
# 126 "data/maps/Route123/scripts.pory"
	end
# 127 "data/maps/Route123/scripts.pory"

# 128 "data/maps/Route123/scripts.pory"
Route123_EventScript_Kayley::
# 129 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_KAYLEY, Route123_Text_KayleyIntro, Route123_Text_KayleyDefeat
# 130 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_KayleyPostBattle, MSGBOX_AUTOCLOSE
# 131 "data/maps/Route123/scripts.pory"
	end
# 132 "data/maps/Route123/scripts.pory"

# 133 "data/maps/Route123/scripts.pory"
Route123_EventScript_Jonas::
# 134 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_JONAS, Route123_Text_JonasIntro, Route123_Text_JonasDefeat
# 135 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_JonasPostBattle, MSGBOX_AUTOCLOSE
# 136 "data/maps/Route123/scripts.pory"
	end
# 137 "data/maps/Route123/scripts.pory"

# 138 "data/maps/Route123/scripts.pory"
Route123_EventScript_Jazmyn::
# 139 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_JAZMYN, Route123_Text_JazmynIntro, Route123_Text_JazmynDefeat
# 140 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_JazmynPostBattle, MSGBOX_AUTOCLOSE
# 141 "data/maps/Route123/scripts.pory"
	end
# 142 "data/maps/Route123/scripts.pory"

# 143 "data/maps/Route123/scripts.pory"
Route123_EventScript_Davis::
# 144 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_DAVIS, Route123_Text_DavisIntro, Route123_Text_DavisDefeat
# 145 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_DavisPostBattle, MSGBOX_AUTOCLOSE
# 146 "data/maps/Route123/scripts.pory"
	end
# 147 "data/maps/Route123/scripts.pory"

# 148 "data/maps/Route123/scripts.pory"
Route123_EventScript_Fernando::
# 149 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_FERNANDO_1, Route123_Text_FernandoIntro, Route123_Text_FernandoDefeat
# 150 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_FernandoPostBattle, MSGBOX_AUTOCLOSE
# 151 "data/maps/Route123/scripts.pory"
	release
# 152 "data/maps/Route123/scripts.pory"
	end
# 153 "data/maps/Route123/scripts.pory"

# 154 "data/maps/Route123/scripts.pory"
Route123_EventScript_RegisterFernando::
# 155 "data/maps/Route123/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 156 "data/maps/Route123/scripts.pory"
	waitmovement 0
# 157 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_FernandoRegister, MSGBOX_DEFAULT
# 158 "data/maps/Route123/scripts.pory"
	register_matchcall TRAINER_FERNANDO_1
# 159 "data/maps/Route123/scripts.pory"
	release
# 160 "data/maps/Route123/scripts.pory"
	end
# 161 "data/maps/Route123/scripts.pory"

# 162 "data/maps/Route123/scripts.pory"
Route123_EventScript_RematchFernando::
# 163 "data/maps/Route123/scripts.pory"
	trainerbattle_rematch TRAINER_FERNANDO_1, Route123_Text_FernandoRematchIntro, Route123_Text_FernandoRematchDefeat
# 164 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_FernandoPostRematch, MSGBOX_AUTOCLOSE
# 165 "data/maps/Route123/scripts.pory"
	end
# 166 "data/maps/Route123/scripts.pory"

# 167 "data/maps/Route123/scripts.pory"
Route123_Text_LoveGrassMonsHaveAny:
# 168 "data/maps/Route123/scripts.pory"
	.string "I love Grass-type Pokémon!\p"
# 169 "data/maps/Route123/scripts.pory"
	.string "Do you have any Grass-type Pokémon?$"
# 170 "data/maps/Route123/scripts.pory"

# 171 "data/maps/Route123/scripts.pory"
Route123_Text_YouLikeGrassMonsTooHaveThis:
# 172 "data/maps/Route123/scripts.pory"
	.string "Oh?\p"
# 173 "data/maps/Route123/scripts.pory"
	.string "You like Grass-type Pokémon, too,\n"
# 174 "data/maps/Route123/scripts.pory"
	.string "don't you?\p"
# 175 "data/maps/Route123/scripts.pory"
	.string "I'm so happy, you can have this!\n"
# 176 "data/maps/Route123/scripts.pory"
	.string "It's a token of our friendship.$"
# 177 "data/maps/Route123/scripts.pory"

# 178 "data/maps/Route123/scripts.pory"
Route123_Text_CheckTreesWithMyGrassMon:
# 179 "data/maps/Route123/scripts.pory"
	.string "I like draining HP with my Grass\n"
# 180 "data/maps/Route123/scripts.pory"
	.string "type Pokémon.$"
# 181 "data/maps/Route123/scripts.pory"

# 182 "data/maps/Route123/scripts.pory"
Route123_Text_RouteSign:
# 183 "data/maps/Route123/scripts.pory"
	.string "{RIGHT_ARROW} Route 123\n"
# 184 "data/maps/Route123/scripts.pory"
	.string "{LEFT_ARROW} Route 118$"
# 185 "data/maps/Route123/scripts.pory"

# 186 "data/maps/Route123/scripts.pory"
Route123_Text_RouteSignMtPyre:
# 187 "data/maps/Route123/scripts.pory"
	.string "{UP_ARROW} Mt. Pyre\n"
# 188 "data/maps/Route123/scripts.pory"
	.string "“Forbidden to the faint of heart.”$"
# 189 "data/maps/Route123/scripts.pory"

# 190 "data/maps/Route123/scripts.pory"
Route123_Text_BerryMastersHouse:
# 191 "data/maps/Route123/scripts.pory"
	.string "Berry Master's House$"
