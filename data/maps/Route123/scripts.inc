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
	special SetRoute123Weather
# 8 "data/maps/Route123/scripts.pory"
	end
# 9 "data/maps/Route123/scripts.pory"

# 10 "data/maps/Route123/scripts.pory"
Route123_EventScript_GigaDrainGirl::
# 11 "data/maps/Route123/scripts.pory"
	lock
# 12 "data/maps/Route123/scripts.pory"
	faceplayer
# 13 "data/maps/Route123/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_GIGA_DRAIN, Route123_EventScript_ReceivedGigaDrain
# 14 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_LoveGrassMonsHaveAny, MSGBOX_DEFAULT
# 15 "data/maps/Route123/scripts.pory"
	special IsGrassTypeInParty
# 16 "data/maps/Route123/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route123_EventScript_NoGrassMons
# 17 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_YouLikeGrassMonsTooHaveThis, MSGBOX_DEFAULT
# 18 "data/maps/Route123/scripts.pory"
	giveitem ITEM_BIG_ROOT
# 19 "data/maps/Route123/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 20 "data/maps/Route123/scripts.pory"
	setflag FLAG_RECEIVED_TM_GIGA_DRAIN
# 21 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_CheckTreesWithMyGrassMon, MSGBOX_DEFAULT
# 22 "data/maps/Route123/scripts.pory"
	release
# 23 "data/maps/Route123/scripts.pory"
	end
# 24 "data/maps/Route123/scripts.pory"

# 25 "data/maps/Route123/scripts.pory"
Route123_EventScript_NoGrassMons::
# 26 "data/maps/Route123/scripts.pory"
	release
# 27 "data/maps/Route123/scripts.pory"
	end
# 28 "data/maps/Route123/scripts.pory"

# 29 "data/maps/Route123/scripts.pory"
Route123_EventScript_ReceivedGigaDrain::
# 30 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_CheckTreesWithMyGrassMon, MSGBOX_DEFAULT
# 31 "data/maps/Route123/scripts.pory"
	release
# 32 "data/maps/Route123/scripts.pory"
	end
# 33 "data/maps/Route123/scripts.pory"

# 34 "data/maps/Route123/scripts.pory"
Route123_EventScript_RouteSign::
# 35 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_RouteSign, MSGBOX_SIGN
# 36 "data/maps/Route123/scripts.pory"
	end
# 37 "data/maps/Route123/scripts.pory"

# 38 "data/maps/Route123/scripts.pory"
Route123_EventScript_RouteSignMtPyre::
# 39 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_RouteSignMtPyre, MSGBOX_SIGN
# 40 "data/maps/Route123/scripts.pory"
	end
# 41 "data/maps/Route123/scripts.pory"

# 42 "data/maps/Route123/scripts.pory"
Route123_EventScript_BerryMastersHouseSign::
# 43 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_BerryMastersHouse, MSGBOX_SIGN
# 44 "data/maps/Route123/scripts.pory"
	end
# 45 "data/maps/Route123/scripts.pory"

# 46 "data/maps/Route123/scripts.pory"
Route123_EventScript_Wendy::
# 47 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_WENDY, Route123_Text_WendyIntro, Route123_Text_WendyDefeat
# 48 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_WendyPostBattle, MSGBOX_AUTOCLOSE
# 49 "data/maps/Route123/scripts.pory"
	end
# 50 "data/maps/Route123/scripts.pory"

# 51 "data/maps/Route123/scripts.pory"
Route123_EventScript_Braxton::
# 52 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_BRAXTON, Route123_Text_BraxtonIntro, Route123_Text_BraxtonDefeat
# 53 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_BraxtonPostBattle, MSGBOX_AUTOCLOSE
# 54 "data/maps/Route123/scripts.pory"
	end
# 55 "data/maps/Route123/scripts.pory"

# 56 "data/maps/Route123/scripts.pory"
Route123_EventScript_Violet::
# 57 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_VIOLET, Route123_Text_VioletIntro, Route123_Text_VioletDefeat
# 58 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_VioletPostBattle, MSGBOX_AUTOCLOSE
# 59 "data/maps/Route123/scripts.pory"
	end
# 60 "data/maps/Route123/scripts.pory"

# 61 "data/maps/Route123/scripts.pory"
Route123_EventScript_Cameron::
# 62 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_CAMERON_1, Route123_Text_CameronIntro, Route123_Text_CameronDefeat
# 63 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_CameronPostBattle, MSGBOX_AUTOCLOSE
# 64 "data/maps/Route123/scripts.pory"
	release
# 65 "data/maps/Route123/scripts.pory"
	end
# 66 "data/maps/Route123/scripts.pory"

# 67 "data/maps/Route123/scripts.pory"
Route123_EventScript_RegisterCameron::
# 68 "data/maps/Route123/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 69 "data/maps/Route123/scripts.pory"
	waitmovement 0
# 70 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_CameronRegister, MSGBOX_DEFAULT
# 71 "data/maps/Route123/scripts.pory"
	register_matchcall TRAINER_CAMERON_1
# 72 "data/maps/Route123/scripts.pory"
	release
# 73 "data/maps/Route123/scripts.pory"
	end
# 74 "data/maps/Route123/scripts.pory"

# 75 "data/maps/Route123/scripts.pory"
Route123_EventScript_RematchCameron::
# 76 "data/maps/Route123/scripts.pory"
	trainerbattle_rematch TRAINER_CAMERON_1, Route123_Text_CameronRematchIntro, Route123_Text_CameronRematchDefeat
# 77 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_CameronPostRematch, MSGBOX_AUTOCLOSE
# 78 "data/maps/Route123/scripts.pory"
	end
# 79 "data/maps/Route123/scripts.pory"

# 80 "data/maps/Route123/scripts.pory"
Route123_EventScript_Jacki::
# 81 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_JACKI_1, Route123_Text_JackiIntro, Route123_Text_JackiDefeat
# 82 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_JackiPostBattle, MSGBOX_AUTOCLOSE
# 83 "data/maps/Route123/scripts.pory"
	release
# 84 "data/maps/Route123/scripts.pory"
	end
# 85 "data/maps/Route123/scripts.pory"

# 86 "data/maps/Route123/scripts.pory"
Route123_EventScript_RegisterJacki::
# 87 "data/maps/Route123/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 88 "data/maps/Route123/scripts.pory"
	waitmovement 0
# 89 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_JackiRegister, MSGBOX_DEFAULT
# 90 "data/maps/Route123/scripts.pory"
	register_matchcall TRAINER_JACKI_1
# 91 "data/maps/Route123/scripts.pory"
	release
# 92 "data/maps/Route123/scripts.pory"
	end
# 93 "data/maps/Route123/scripts.pory"

# 94 "data/maps/Route123/scripts.pory"
Route123_EventScript_RematchJacki::
# 95 "data/maps/Route123/scripts.pory"
	trainerbattle_rematch TRAINER_JACKI_1, Route123_Text_JackiRematchIntro, Route123_Text_JackiRematchDefeat
# 96 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_JackiPostRematch, MSGBOX_AUTOCLOSE
# 97 "data/maps/Route123/scripts.pory"
	end
# 98 "data/maps/Route123/scripts.pory"

# 99 "data/maps/Route123/scripts.pory"
Route123_EventScript_Miu::
# 100 "data/maps/Route123/scripts.pory"
	trainerbattle_double TRAINER_MIU_AND_YUKI, Route123_Text_MiuIntro, Route123_Text_MiuDefeat, Route123_Text_MiuNotEnoughMons
# 101 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_MiuPostBattle, MSGBOX_AUTOCLOSE
# 102 "data/maps/Route123/scripts.pory"
	end
# 103 "data/maps/Route123/scripts.pory"

# 104 "data/maps/Route123/scripts.pory"
Route123_EventScript_Yuki::
# 105 "data/maps/Route123/scripts.pory"
	trainerbattle_double TRAINER_MIU_AND_YUKI, Route123_Text_YukiIntro, Route123_Text_YukiDefeat, Route123_Text_YukiNotEnoughMons
# 106 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_YukiPostBattle, MSGBOX_AUTOCLOSE
# 107 "data/maps/Route123/scripts.pory"
	end
# 108 "data/maps/Route123/scripts.pory"

# 109 "data/maps/Route123/scripts.pory"
Route123_EventScript_Kindra::
# 110 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_KINDRA, Route123_Text_KindraIntro, Route123_Text_KindraDefeat
# 111 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_KindraPostBattle, MSGBOX_AUTOCLOSE
# 112 "data/maps/Route123/scripts.pory"
	end
# 113 "data/maps/Route123/scripts.pory"

# 114 "data/maps/Route123/scripts.pory"
Route123_EventScript_Frederick::
# 115 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_FREDRICK, Route123_Text_FrederickIntro, Route123_Text_FrederickDefeat
# 116 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_FrederickPostBattle, MSGBOX_AUTOCLOSE
# 117 "data/maps/Route123/scripts.pory"
	end
# 118 "data/maps/Route123/scripts.pory"

# 119 "data/maps/Route123/scripts.pory"
Route123_EventScript_Alberto::
# 120 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_ALBERTO, Route123_Text_AlbertoIntro, Route123_Text_AlbertoDefeat
# 121 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_AlbertoPostBattle, MSGBOX_AUTOCLOSE
# 122 "data/maps/Route123/scripts.pory"
	end
# 123 "data/maps/Route123/scripts.pory"

# 124 "data/maps/Route123/scripts.pory"
Route123_EventScript_Ed::
# 125 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_ED, Route123_Text_EdIntro, Route123_Text_EdDefeat
# 126 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_EdPostBattle, MSGBOX_AUTOCLOSE
# 127 "data/maps/Route123/scripts.pory"
	end
# 128 "data/maps/Route123/scripts.pory"

# 129 "data/maps/Route123/scripts.pory"
Route123_EventScript_Kayley::
# 130 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_KAYLEY, Route123_Text_KayleyIntro, Route123_Text_KayleyDefeat
# 131 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_KayleyPostBattle, MSGBOX_AUTOCLOSE
# 132 "data/maps/Route123/scripts.pory"
	end
# 133 "data/maps/Route123/scripts.pory"

# 134 "data/maps/Route123/scripts.pory"
Route123_EventScript_Jonas::
# 135 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_JONAS, Route123_Text_JonasIntro, Route123_Text_JonasDefeat
# 136 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_JonasPostBattle, MSGBOX_AUTOCLOSE
# 137 "data/maps/Route123/scripts.pory"
	end
# 138 "data/maps/Route123/scripts.pory"

# 139 "data/maps/Route123/scripts.pory"
Route123_EventScript_Jazmyn::
# 140 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_JAZMYN, Route123_Text_JazmynIntro, Route123_Text_JazmynDefeat
# 141 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_JazmynPostBattle, MSGBOX_AUTOCLOSE
# 142 "data/maps/Route123/scripts.pory"
	end
# 143 "data/maps/Route123/scripts.pory"

# 144 "data/maps/Route123/scripts.pory"
Route123_EventScript_Davis::
# 145 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_DAVIS, Route123_Text_DavisIntro, Route123_Text_DavisDefeat
# 146 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_DavisPostBattle, MSGBOX_AUTOCLOSE
# 147 "data/maps/Route123/scripts.pory"
	end
# 148 "data/maps/Route123/scripts.pory"

# 149 "data/maps/Route123/scripts.pory"
Route123_EventScript_Fernando::
# 150 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_FERNANDO_1, Route123_Text_FernandoIntro, Route123_Text_FernandoDefeat
# 151 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_FernandoPostBattle, MSGBOX_AUTOCLOSE
# 152 "data/maps/Route123/scripts.pory"
	release
# 153 "data/maps/Route123/scripts.pory"
	end
# 154 "data/maps/Route123/scripts.pory"

# 155 "data/maps/Route123/scripts.pory"
Route123_EventScript_RegisterFernando::
# 156 "data/maps/Route123/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 157 "data/maps/Route123/scripts.pory"
	waitmovement 0
# 158 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_FernandoRegister, MSGBOX_DEFAULT
# 159 "data/maps/Route123/scripts.pory"
	register_matchcall TRAINER_FERNANDO_1
# 160 "data/maps/Route123/scripts.pory"
	release
# 161 "data/maps/Route123/scripts.pory"
	end
# 162 "data/maps/Route123/scripts.pory"

# 163 "data/maps/Route123/scripts.pory"
Route123_EventScript_RematchFernando::
# 164 "data/maps/Route123/scripts.pory"
	trainerbattle_rematch TRAINER_FERNANDO_1, Route123_Text_FernandoRematchIntro, Route123_Text_FernandoRematchDefeat
# 165 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_FernandoPostRematch, MSGBOX_AUTOCLOSE
# 166 "data/maps/Route123/scripts.pory"
	end
# 167 "data/maps/Route123/scripts.pory"

# 168 "data/maps/Route123/scripts.pory"
Route123_Text_LoveGrassMonsHaveAny:
# 169 "data/maps/Route123/scripts.pory"
	.string "I love Grass-type Pokémon!\p"
# 170 "data/maps/Route123/scripts.pory"
	.string "Do you have any Grass-type Pokémon?$"
# 171 "data/maps/Route123/scripts.pory"

# 172 "data/maps/Route123/scripts.pory"
Route123_Text_YouLikeGrassMonsTooHaveThis:
# 173 "data/maps/Route123/scripts.pory"
	.string "Oh?\p"
# 174 "data/maps/Route123/scripts.pory"
	.string "You like Grass-type Pokémon, too,\n"
# 175 "data/maps/Route123/scripts.pory"
	.string "don't you?\p"
# 176 "data/maps/Route123/scripts.pory"
	.string "I'm so happy, you can have this!\n"
# 177 "data/maps/Route123/scripts.pory"
	.string "It's a token of our friendship.$"
# 178 "data/maps/Route123/scripts.pory"

# 179 "data/maps/Route123/scripts.pory"
Route123_Text_CheckTreesWithMyGrassMon:
# 180 "data/maps/Route123/scripts.pory"
	.string "I like draining HP with my Grass\n"
# 181 "data/maps/Route123/scripts.pory"
	.string "type Pokémon.$"
# 182 "data/maps/Route123/scripts.pory"

# 183 "data/maps/Route123/scripts.pory"
Route123_Text_RouteSign:
# 184 "data/maps/Route123/scripts.pory"
	.string "{RIGHT_ARROW} Route 123\n"
# 185 "data/maps/Route123/scripts.pory"
	.string "{LEFT_ARROW} Route 118$"
# 186 "data/maps/Route123/scripts.pory"

# 187 "data/maps/Route123/scripts.pory"
Route123_Text_RouteSignMtPyre:
# 188 "data/maps/Route123/scripts.pory"
	.string "{UP_ARROW} Mt. Pyre\n"
# 189 "data/maps/Route123/scripts.pory"
	.string "“Forbidden to the faint of heart.”$"
# 190 "data/maps/Route123/scripts.pory"

# 191 "data/maps/Route123/scripts.pory"
Route123_Text_BerryMastersHouse:
# 192 "data/maps/Route123/scripts.pory"
	.string "Berry Master's House$"
