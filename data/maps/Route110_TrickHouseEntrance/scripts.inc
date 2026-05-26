Route110_TrickHouseEntrance_Apprentice::
# 2 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	lock
# 3 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	faceplayer
# 4 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Apprentice_Text_0
# 9 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmessage
# 10 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	closemessage
# 11 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	multichoice 21, 0, MULTI_TRICK_HOUSE_GIFTS, FALSE
# 12 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	compare VAR_RESULT, 8
	goto_if_eq Route110_TrickHouseEntrance_Apprentice_2
# 12 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq Route110_TrickHouseEntrance_Apprentice_2
# 16 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	compare VAR_RESULT, VAR_TRICK_HOUSE_LEVEL
	goto_if_gt Route110_TrickHouseEntrance_Apprentice_7
# 22 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	switch VAR_RESULT
# 23 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 0, Route110_TrickHouseEntrance_Apprentice_11
# 61 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 1, Route110_TrickHouseEntrance_Apprentice_12
# 98 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 2, Route110_TrickHouseEntrance_Apprentice_13
# 136 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 3, Route110_TrickHouseEntrance_Apprentice_14
# 181 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 4, Route110_TrickHouseEntrance_Apprentice_15
# 226 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 5, Route110_TrickHouseEntrance_Apprentice_16
# 264 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 6, Route110_TrickHouseEntrance_Apprentice_17
# 302 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 7, Route110_TrickHouseEntrance_Apprentice_18
Route110_TrickHouseEntrance_Apprentice_9:
# 348 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	release
	end

Route110_TrickHouseEntrance_Apprentice_2:
# 13 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	release
	end

Route110_TrickHouseEntrance_Apprentice_7:
# 17 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Apprentice_Text_1
# 19 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	release
	end

Route110_TrickHouseEntrance_Apprentice_11:
# 24 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_unset FLAG_BEAT_TRICK_HOUSE_PUZZLE_1, Route110_TrickHouseEntrance_Apprentice_20
# 30 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_set FLAG_RECIEVED_TRICK_HOUSE_GIFT_1, Route110_TrickHouseEntrance_Apprentice_43
# 35 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Apprentice_Text_4, MSGBOX_YESNO
# 39 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Route110_TrickHouseEntrance_Apprentice_67
# 43 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	random 2
# 44 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	switch VAR_RESULT
# 45 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 0, Route110_TrickHouseEntrance_Apprentice_93
# 51 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 1, Route110_TrickHouseEntrance_Apprentice_94
Route110_TrickHouseEntrance_Apprentice_91:
# 58 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setflag FLAG_RECIEVED_TRICK_HOUSE_GIFT_1
	goto Route110_TrickHouseEntrance_Apprentice_9

Route110_TrickHouseEntrance_Apprentice_12:
# 62 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_unset FLAG_BEAT_TRICK_HOUSE_PUZZLE_2, Route110_TrickHouseEntrance_Apprentice_23
# 68 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_set FLAG_RECIEVED_TRICK_HOUSE_GIFT_2, Route110_TrickHouseEntrance_Apprentice_46
# 73 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Apprentice_Text_6, MSGBOX_YESNO
# 76 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Route110_TrickHouseEntrance_Apprentice_70
# 80 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	random 2
# 81 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	switch VAR_RESULT
# 82 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 0, Route110_TrickHouseEntrance_Apprentice_97
# 88 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 1, Route110_TrickHouseEntrance_Apprentice_98
Route110_TrickHouseEntrance_Apprentice_95:
# 95 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setflag FLAG_RECIEVED_TRICK_HOUSE_GIFT_2
	goto Route110_TrickHouseEntrance_Apprentice_9

Route110_TrickHouseEntrance_Apprentice_13:
# 99 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_unset FLAG_BEAT_TRICK_HOUSE_PUZZLE_3, Route110_TrickHouseEntrance_Apprentice_26
# 105 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_set FLAG_RECIEVED_TRICK_HOUSE_GIFT_3, Route110_TrickHouseEntrance_Apprentice_49
# 110 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Apprentice_Text_9, MSGBOX_YESNO
# 114 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Route110_TrickHouseEntrance_Apprentice_73
# 118 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	random 2
# 119 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	switch VAR_RESULT
# 120 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 0, Route110_TrickHouseEntrance_Apprentice_101
# 126 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 1, Route110_TrickHouseEntrance_Apprentice_102
Route110_TrickHouseEntrance_Apprentice_99:
# 133 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setflag FLAG_RECIEVED_TRICK_HOUSE_GIFT_3
	goto Route110_TrickHouseEntrance_Apprentice_9

Route110_TrickHouseEntrance_Apprentice_14:
# 137 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_unset FLAG_BEAT_TRICK_HOUSE_PUZZLE_4, Route110_TrickHouseEntrance_Apprentice_29
# 143 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_set FLAG_RECIEVED_TRICK_HOUSE_GIFT_4, Route110_TrickHouseEntrance_Apprentice_52
# 148 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Apprentice_Text_12, MSGBOX_YESNO
# 153 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Route110_TrickHouseEntrance_Apprentice_76
# 157 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	random 3
# 158 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	switch VAR_RESULT
# 159 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 0, Route110_TrickHouseEntrance_Apprentice_105
# 165 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 1, Route110_TrickHouseEntrance_Apprentice_106
# 171 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 2, Route110_TrickHouseEntrance_Apprentice_107
Route110_TrickHouseEntrance_Apprentice_103:
# 178 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setflag FLAG_RECIEVED_TRICK_HOUSE_GIFT_4
	goto Route110_TrickHouseEntrance_Apprentice_9

Route110_TrickHouseEntrance_Apprentice_15:
# 182 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_unset FLAG_BEAT_TRICK_HOUSE_PUZZLE_5, Route110_TrickHouseEntrance_Apprentice_32
# 188 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_set FLAG_RECIEVED_TRICK_HOUSE_GIFT_5, Route110_TrickHouseEntrance_Apprentice_55
# 193 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Apprentice_Text_16, MSGBOX_YESNO
# 198 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Route110_TrickHouseEntrance_Apprentice_79
# 202 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	random 3
# 203 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	switch VAR_RESULT
# 204 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 0, Route110_TrickHouseEntrance_Apprentice_110
# 210 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 1, Route110_TrickHouseEntrance_Apprentice_111
# 216 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 2, Route110_TrickHouseEntrance_Apprentice_112
Route110_TrickHouseEntrance_Apprentice_108:
# 223 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setflag FLAG_RECIEVED_TRICK_HOUSE_GIFT_5
	goto Route110_TrickHouseEntrance_Apprentice_9

Route110_TrickHouseEntrance_Apprentice_16:
# 227 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_unset FLAG_BEAT_TRICK_HOUSE_PUZZLE_7, Route110_TrickHouseEntrance_Apprentice_35
# 233 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_set FLAG_RECIEVED_TRICK_HOUSE_GIFT_7, Route110_TrickHouseEntrance_Apprentice_58
# 238 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Apprentice_Text_20, MSGBOX_YESNO
# 242 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Route110_TrickHouseEntrance_Apprentice_82
# 246 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	random 2
# 247 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	switch VAR_RESULT
# 248 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 0, Route110_TrickHouseEntrance_Apprentice_115
# 254 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 1, Route110_TrickHouseEntrance_Apprentice_116
Route110_TrickHouseEntrance_Apprentice_113:
# 261 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setflag FLAG_RECIEVED_TRICK_HOUSE_GIFT_7
	goto Route110_TrickHouseEntrance_Apprentice_9

Route110_TrickHouseEntrance_Apprentice_17:
# 265 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_unset FLAG_BEAT_TRICK_HOUSE_PUZZLE_6, Route110_TrickHouseEntrance_Apprentice_38
# 271 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_set FLAG_RECIEVED_TRICK_HOUSE_GIFT_6, Route110_TrickHouseEntrance_Apprentice_61
# 276 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Apprentice_Text_23, MSGBOX_YESNO
# 280 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Route110_TrickHouseEntrance_Apprentice_85
# 284 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	random 2
# 285 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	switch VAR_RESULT
# 286 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 0, Route110_TrickHouseEntrance_Apprentice_119
# 292 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 1, Route110_TrickHouseEntrance_Apprentice_120
Route110_TrickHouseEntrance_Apprentice_117:
# 299 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setflag FLAG_RECIEVED_TRICK_HOUSE_GIFT_6
	goto Route110_TrickHouseEntrance_Apprentice_9

Route110_TrickHouseEntrance_Apprentice_18:
# 303 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_unset FLAG_BEAT_TRICK_HOUSE_PUZZLE_8, Route110_TrickHouseEntrance_Apprentice_41
# 309 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_set FLAG_RECIEVED_TRICK_HOUSE_GIFT_8, Route110_TrickHouseEntrance_Apprentice_64
# 314 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Apprentice_Text_26, MSGBOX_YESNO
# 319 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Route110_TrickHouseEntrance_Apprentice_88
# 323 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	random 3
# 324 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	switch VAR_RESULT
# 325 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 0, Route110_TrickHouseEntrance_Apprentice_123
# 331 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 1, Route110_TrickHouseEntrance_Apprentice_124
# 337 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 2, Route110_TrickHouseEntrance_Apprentice_125
Route110_TrickHouseEntrance_Apprentice_121:
# 344 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setflag FLAG_RECIEVED_TRICK_HOUSE_GIFT_8
	goto Route110_TrickHouseEntrance_Apprentice_9

Route110_TrickHouseEntrance_Apprentice_20:
# 25 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Apprentice_Text_2
# 27 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	release
	end

Route110_TrickHouseEntrance_Apprentice_23:
# 63 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Apprentice_Text_2
# 65 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	release
	end

Route110_TrickHouseEntrance_Apprentice_26:
# 100 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Apprentice_Text_2
# 102 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	release
	end

Route110_TrickHouseEntrance_Apprentice_29:
# 138 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Apprentice_Text_2
# 140 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	release
	end

Route110_TrickHouseEntrance_Apprentice_32:
# 183 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Apprentice_Text_2
# 185 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	release
	end

Route110_TrickHouseEntrance_Apprentice_35:
# 228 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Apprentice_Text_2
# 230 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	release
	end

Route110_TrickHouseEntrance_Apprentice_38:
# 266 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Apprentice_Text_2
# 268 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	release
	end

Route110_TrickHouseEntrance_Apprentice_41:
# 304 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Apprentice_Text_2
# 306 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	release
	end

Route110_TrickHouseEntrance_Apprentice_43:
# 31 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Apprentice_Text_3
# 32 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	release
	end

Route110_TrickHouseEntrance_Apprentice_46:
# 69 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Apprentice_Text_3
# 70 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	release
	end

Route110_TrickHouseEntrance_Apprentice_49:
# 106 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Apprentice_Text_3
# 107 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	release
	end

Route110_TrickHouseEntrance_Apprentice_52:
# 144 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Apprentice_Text_3
# 145 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	release
	end

Route110_TrickHouseEntrance_Apprentice_55:
# 189 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Apprentice_Text_3
# 190 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	release
	end

Route110_TrickHouseEntrance_Apprentice_58:
# 234 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Apprentice_Text_3
# 235 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	release
	end

Route110_TrickHouseEntrance_Apprentice_61:
# 272 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Apprentice_Text_3
# 273 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	release
	end

Route110_TrickHouseEntrance_Apprentice_64:
# 310 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Apprentice_Text_3
# 311 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	release
	end

Route110_TrickHouseEntrance_Apprentice_67:
# 40 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	release
	end

Route110_TrickHouseEntrance_Apprentice_70:
# 77 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	release
	end

Route110_TrickHouseEntrance_Apprentice_73:
# 115 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	release
	end

Route110_TrickHouseEntrance_Apprentice_76:
# 154 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	release
	end

Route110_TrickHouseEntrance_Apprentice_79:
# 199 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	release
	end

Route110_TrickHouseEntrance_Apprentice_82:
# 243 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	release
	end

Route110_TrickHouseEntrance_Apprentice_85:
# 281 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	release
	end

Route110_TrickHouseEntrance_Apprentice_88:
# 320 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	release
	end

Route110_TrickHouseEntrance_Apprentice_93:
# 46 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	givemon SPECIES_SANDSHREW, 5, , , , , , , , , , , , , , , , , , MOVE_SCRATCH, MOVE_POISON_STING, MOVE_SAND_ATTACK, MOVE_SPIKY_SHIELD
# 47 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	playfanfare MUS_DP_OBTAIN_ITEM
# 48 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Apprentice_Text_5
# 49 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmessage
# 50 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitfanfare
	goto Route110_TrickHouseEntrance_Apprentice_91

Route110_TrickHouseEntrance_Apprentice_94:
# 52 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	givemon SPECIES_SANDSHREW_ALOLA, 5, , , , , , , , , , , , , , , , , , MOVE_BIDE, MOVE_SCRATCH, MOVE_MIST, MOVE_SPIKY_SHIELD
# 53 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	playfanfare MUS_DP_OBTAIN_ITEM
# 54 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Apprentice_Text_5
# 55 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmessage
# 56 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitfanfare
	goto Route110_TrickHouseEntrance_Apprentice_91

Route110_TrickHouseEntrance_Apprentice_97:
# 83 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	givemon SPECIES_SOLROCK, 15, , , , , , , , , , , , , , , , , , MOVE_HYPNOSIS, MOVE_HEAL_BLOCK, MOVE_ROCK_TOMB, MOVE_PHOTON_GEYSER
# 84 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	playfanfare MUS_DP_OBTAIN_ITEM
# 85 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Apprentice_Text_7
# 86 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmessage
# 87 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitfanfare
	goto Route110_TrickHouseEntrance_Apprentice_95

Route110_TrickHouseEntrance_Apprentice_98:
# 89 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	givemon SPECIES_LUNATONE, 15, , , , , , , , , , , , , , , , , , MOVE_HYPNOSIS, MOVE_EMBARGO, MOVE_ANCIENT_POWER, MOVE_PHOTON_GEYSER
# 90 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	playfanfare MUS_DP_OBTAIN_ITEM
# 91 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Apprentice_Text_8
# 92 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmessage
# 93 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitfanfare
	goto Route110_TrickHouseEntrance_Apprentice_95

Route110_TrickHouseEntrance_Apprentice_101:
# 121 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	givemon SPECIES_MURKROW, 20, , , , , , , , , , , , , , , , , , MOVE_TORMENT, MOVE_ASSURANCE, MOVE_WING_ATTACK, MOVE_OBLIVION_WING
# 122 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	playfanfare MUS_DP_OBTAIN_ITEM
# 123 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Apprentice_Text_10
# 124 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmessage
# 125 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitfanfare
	goto Route110_TrickHouseEntrance_Apprentice_99

Route110_TrickHouseEntrance_Apprentice_102:
# 127 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	givemon SPECIES_MISDREAVUS, 20, , , , , , , , , , , , , , , , , , MOVE_ASTONISH, MOVE_CONFUSE_RAY, MOVE_PAIN_SPLIT, MOVE_MOONGEIST_BEAM
# 128 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	playfanfare MUS_DP_OBTAIN_ITEM
# 129 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Apprentice_Text_11
# 130 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmessage
# 131 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitfanfare
	goto Route110_TrickHouseEntrance_Apprentice_99

Route110_TrickHouseEntrance_Apprentice_105:
# 160 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	givemon SPECIES_JYNX, 30, , , , , , , , , , , , , , , , , , MOVE_AURORA_BEAM, MOVE_FAKE_OUT, MOVE_SWEET_KISS, MOVE_PSYCHO_BOOST
# 161 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	playfanfare MUS_DP_OBTAIN_ITEM
# 162 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Apprentice_Text_13
# 163 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmessage
# 164 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitfanfare
	goto Route110_TrickHouseEntrance_Apprentice_103

Route110_TrickHouseEntrance_Apprentice_106:
# 166 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	givemon SPECIES_ELECTIVIRE, 30, , , , , , , , , , , , , , , , , , MOVE_SCREECH, MOVE_THUNDER_PUNCH, MOVE_DISCHARGE, MOVE_PLASMA_FISTS
# 167 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	playfanfare MUS_DP_OBTAIN_ITEM
# 168 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Apprentice_Text_14
# 169 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmessage
# 170 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitfanfare
	goto Route110_TrickHouseEntrance_Apprentice_103

Route110_TrickHouseEntrance_Apprentice_107:
# 172 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	givemon SPECIES_MAGMORTAR, 30, , , , , , , , , , , , , , , , , , MOVE_MACH_PUNCH, MOVE_FIRE_PUNCH, MOVE_LAVA_PLUME, MOVE_ARMOR_CANNON
# 173 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	playfanfare MUS_DP_OBTAIN_ITEM
# 174 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Apprentice_Text_15
# 175 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmessage
# 176 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitfanfare
	goto Route110_TrickHouseEntrance_Apprentice_103

Route110_TrickHouseEntrance_Apprentice_110:
# 205 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	givemon SPECIES_HITMONLEE, 20
# 206 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	playfanfare MUS_DP_OBTAIN_ITEM
# 207 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Apprentice_Text_17
# 208 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmessage
# 209 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitfanfare
	goto Route110_TrickHouseEntrance_Apprentice_108

Route110_TrickHouseEntrance_Apprentice_111:
# 211 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	givemon SPECIES_HITMONCHAN, 20
# 212 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	playfanfare MUS_DP_OBTAIN_ITEM
# 213 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Apprentice_Text_18
# 214 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmessage
# 215 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitfanfare
	goto Route110_TrickHouseEntrance_Apprentice_108

Route110_TrickHouseEntrance_Apprentice_112:
# 217 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	givemon SPECIES_HITMONTOP, 30
# 218 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	playfanfare MUS_DP_OBTAIN_ITEM
# 219 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Apprentice_Text_19
# 220 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmessage
# 221 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitfanfare
	goto Route110_TrickHouseEntrance_Apprentice_108

Route110_TrickHouseEntrance_Apprentice_115:
# 249 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	givemon SPECIES_TOGETIC, 25
# 250 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	playfanfare MUS_DP_OBTAIN_ITEM
# 251 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Apprentice_Text_21
# 252 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmessage
# 253 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitfanfare
	goto Route110_TrickHouseEntrance_Apprentice_113

Route110_TrickHouseEntrance_Apprentice_116:
# 255 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	givemon SPECIES_CLEFAIRY, 25
# 256 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	playfanfare MUS_DP_OBTAIN_ITEM
# 257 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Apprentice_Text_22
# 258 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmessage
# 259 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitfanfare
	goto Route110_TrickHouseEntrance_Apprentice_113

Route110_TrickHouseEntrance_Apprentice_119:
# 287 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	givemon SPECIES_DREDNAW, 40
# 288 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	playfanfare MUS_DP_OBTAIN_ITEM
# 289 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Apprentice_Text_24
# 290 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmessage
# 291 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitfanfare
	goto Route110_TrickHouseEntrance_Apprentice_117

Route110_TrickHouseEntrance_Apprentice_120:
# 293 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	givemon SPECIES_AERODACTYL, 40
# 294 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	playfanfare MUS_DP_OBTAIN_ITEM
# 295 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Apprentice_Text_25
# 296 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmessage
# 297 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitfanfare
	goto Route110_TrickHouseEntrance_Apprentice_117

Route110_TrickHouseEntrance_Apprentice_123:
# 326 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	givemon SPECIES_PINSIR, 50
# 327 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	playfanfare MUS_DP_OBTAIN_ITEM
# 328 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Apprentice_Text_27
# 329 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmessage
# 330 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitfanfare
	goto Route110_TrickHouseEntrance_Apprentice_121

Route110_TrickHouseEntrance_Apprentice_124:
# 332 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	givemon SPECIES_KLEAVOR, 50
# 333 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	playfanfare MUS_DP_OBTAIN_ITEM
# 334 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Apprentice_Text_28
# 335 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmessage
# 336 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitfanfare
	goto Route110_TrickHouseEntrance_Apprentice_121

Route110_TrickHouseEntrance_Apprentice_125:
# 338 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	givemon SPECIES_SCIZOR, 50
# 339 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	playfanfare MUS_DP_OBTAIN_ITEM
# 340 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Apprentice_Text_29
# 341 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmessage
# 342 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitfanfare
	goto Route110_TrickHouseEntrance_Apprentice_121


# 352 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 353 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
@ .set LOCALID_TRICK_MASTER, 1
# 354 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 355 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_MapScripts::
# 356 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route110_TrickHouseEntrance_OnTransition
# 357 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route110_TrickHouseEntrance_OnFrame
# 358 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Route110_TrickHouseEntrance_OnWarp
# 359 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.byte 0
# 360 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 361 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	@ State descriptions for VAR_TRICK_HOUSE_ENTRANCE_STATE
# 362 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	@ 0: Trick Master is hiding
# 363 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	@ 1: Trick Master has left at start of challenge
# 364 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	@ 2: Trick Master ready to give normal reward from previous challenge (if bag was full)
# 365 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	@ 3: Trick Master still making next puzzle
# 366 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	@ 4: Finished final puzzle
# 367 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	@ 5: Completed previous challenge
# 368 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	@ 6: 'Trick Master' mechadoll ready to give Tent reward from final challenge (if bag was full)
# 369 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 370 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_OnTransition:
# 371 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setflag FLAG_LANDMARK_TRICK_HOUSE
# 372 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq VAR_TRICK_HOUSE_ENTER_FROM_CORRIDOR, 1, Route110_TrickHouseEntrance_EventScript_EnterFromCorridor
# 373 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq VAR_TRICK_HOUSE_PRIZE_PICKUP, 1, Route110_TrickHouseEntrance_EventScript_SetReadyToGiveReward
# 374 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq VAR_TRICK_HOUSE_FOUND_TRICK_MASTER, 1, Route110_TrickHouseEntrance_EventScript_MoveTrickMasterToDoor
# 375 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_eq VAR_TRICK_HOUSE_ENTRANCE_STATE, 5, Route110_TrickHouseEntrance_EventScript_CheckReadyForNextPuzzle
# 376 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_eq VAR_TRICK_HOUSE_ENTRANCE_STATE, 3, Route110_TrickHouseEntrance_EventScript_CheckReadyForNextPuzzle
# 377 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_eq VAR_TRICK_HOUSE_ENTRANCE_STATE, 0, Route110_TrickHouseEntrance_EventScript_CheckReadyForNextPuzzle
# 378 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	switch VAR_TRICK_HOUSE_ENTRANCE_STATE
# 379 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 0, Route110_TrickHouseEntrance_EventScript_ReadyBeingWatchedTrigger
# 380 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 1, Route110_TrickHouseEntrance_EventScript_SetNotBeingWatched1
# 381 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 3, Route110_TrickHouseEntrance_EventScript_SetNotBeingWatched2
# 382 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 4, Route110_TrickHouseEntrance_EventScript_SetNotBeingWatched3
# 383 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 384 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 385 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_SetReadyToGiveReward::
# 386 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_BEING_WATCHED_STATE, 1
# 387 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq VAR_TRICK_HOUSE_LEVEL, 8, Route110_TrickHouseEntrance_EventScript_ReadyToGiveTentReward
# 388 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_ENTRANCE_STATE, 2
# 389 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 390 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 391 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_ReadyToGiveTentReward::
# 392 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_ENTRANCE_STATE, 6
# 393 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 394 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 395 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_EnterFromCorridor::
# 396 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_ENTER_FROM_CORRIDOR, 0
# 397 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_ENTRANCE_STATE, 5
# 398 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_BEING_WATCHED_STATE, 1
# 399 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 400 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 401 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_CheckReadyForNextPuzzle::
# 402 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_ENTRANCE_STATE, 0
# 403 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_eq VAR_TRICK_HOUSE_LEVEL, 1, Route110_TrickHouseEntrance_EventScript_CheckReadyForPuzzle2
# 404 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_eq VAR_TRICK_HOUSE_LEVEL, 2, Route110_TrickHouseEntrance_EventScript_CheckReadyForPuzzle3
# 405 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_eq VAR_TRICK_HOUSE_LEVEL, 3, Route110_TrickHouseEntrance_EventScript_CheckReadyForPuzzle4
# 406 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_eq VAR_TRICK_HOUSE_LEVEL, 4, Route110_TrickHouseEntrance_EventScript_CheckReadyForPuzzle5
# 407 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_eq VAR_TRICK_HOUSE_LEVEL, 5, Route110_TrickHouseEntrance_EventScript_CheckReadyForPuzzle6
# 408 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_eq VAR_TRICK_HOUSE_LEVEL, 6, Route110_TrickHouseEntrance_EventScript_CheckReadyForPuzzle7
# 409 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_eq VAR_TRICK_HOUSE_LEVEL, 7, Route110_TrickHouseEntrance_EventScript_CheckReadyForPuzzle8
# 410 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_eq VAR_TRICK_HOUSE_LEVEL, 8, Route110_TrickHouseEntrance_EventScript_FinishedPuzzles
# 411 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	return
# 412 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 413 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_CheckReadyForPuzzle2::
# 414 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_unset FLAG_HEAT_BADGE_TRICK_HOUSE_OPEN, Route110_TrickHouseEntrance_EventScript_NotReadyForPuzzle
# 415 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	return
# 416 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 417 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_CheckReadyForPuzzle3::
# 418 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_unset FLAG_KNUCKLE_BADGE_TRICK_HOUSE_OPEN, Route110_TrickHouseEntrance_EventScript_NotReadyForPuzzle
# 419 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	return
# 420 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 421 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_CheckReadyForPuzzle4::
# 422 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_unset FLAG_BALANCE_BADGE_TRICK_HOUSE_OPEN, Route110_TrickHouseEntrance_EventScript_NotReadyForPuzzle
# 423 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	return
# 424 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 425 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_CheckReadyForPuzzle5::
# 426 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_unset FLAG_RAIN_BADGE_TRICK_HOUSE_OPEN, Route110_TrickHouseEntrance_EventScript_NotReadyForPuzzle
# 427 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	return
# 428 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 429 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_CheckReadyForPuzzle6::
# 430 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_unset FLAG_FEATHER_BADGE_TRICK_HOUSE_OPEN, Route110_TrickHouseEntrance_EventScript_NotReadyForPuzzle
# 431 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	return
# 432 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 433 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_CheckReadyForPuzzle7::
# 434 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_unset FLAG_MIND_BADGE_TRICK_HOUSE_OPEN, Route110_TrickHouseEntrance_EventScript_NotReadyForPuzzle
# 435 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	return
# 436 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 437 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_CheckReadyForPuzzle8::
# 438 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_unset FLAG_DYNAMO_BADGE_TRICK_HOUSE_OPEN, Route110_TrickHouseEntrance_EventScript_NotReadyForPuzzle
# 439 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	return
# 440 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 441 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_FinishedPuzzles::
# 442 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_ENTRANCE_STATE, 4
# 443 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	return
# 444 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 445 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_NotReadyForPuzzle::
# 446 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_ENTRANCE_STATE, 3
# 447 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	return
# 448 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 449 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_MoveTrickMasterToDoor::
# 450 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setobjectxyperm LOCALID_TRICK_MASTER, 5, 2
# 451 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 452 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 453 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_ReadyBeingWatchedTrigger::
# 454 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_BEING_WATCHED_STATE, 0
# 455 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 456 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 457 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_SetNotBeingWatched1::
# 458 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_BEING_WATCHED_STATE, 1
# 459 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 460 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 461 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_SetNotBeingWatched2::
# 462 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_BEING_WATCHED_STATE, 1
# 463 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 464 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 465 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_SetNotBeingWatched3::
# 466 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_BEING_WATCHED_STATE, 1
# 467 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 468 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 469 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_OnWarp:
# 470 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	map_script_2 VAR_TRICK_HOUSE_FOUND_TRICK_MASTER, 1, Route110_TrickHouseEntrance_EventScript_TrickMasterFound
# 471 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	map_script_2 VAR_TRICK_HOUSE_ENTRANCE_STATE, 0, Route110_TrickHouseEntrance_EventScript_SetTrickMasterHidingSpot
# 472 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	map_script_2 VAR_TRICK_HOUSE_ENTRANCE_STATE, 1, Route110_TrickHouseEntrance_EventScript_RemoveTrickMaster
# 473 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	map_script_2 VAR_TRICK_HOUSE_ENTRANCE_STATE, 2, Route110_TrickHouseEntrance_EventScript_SetTrickMasterFacingDoor
# 474 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	map_script_2 VAR_TRICK_HOUSE_ENTRANCE_STATE, 3, Route110_TrickHouseEntrance_EventScript_SetTrickMasterFacingDoor
# 475 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	map_script_2 VAR_TRICK_HOUSE_ENTRANCE_STATE, 4, Route110_TrickHouseEntrance_EventScript_RemoveTrickMaster
# 476 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	map_script_2 VAR_TRICK_HOUSE_ENTRANCE_STATE, 5, Route110_TrickHouseEntrance_EventScript_RemoveTrickMaster
# 477 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	map_script_2 VAR_TRICK_HOUSE_ENTRANCE_STATE, 6, Route110_TrickHouseEntrance_EventScript_SetTrickMasterInFrontOfDoor
# 478 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.2byte 0
# 479 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 480 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_TrickMasterFound::
# 481 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	addobject LOCALID_TRICK_MASTER
# 482 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	showobjectat LOCALID_TRICK_MASTER, MAP_ROUTE110_TRICK_HOUSE_ENTRANCE
# 483 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	turnobject LOCALID_TRICK_MASTER, DIR_EAST
# 484 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
# 485 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 486 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 487 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_SetTrickMasterHidingSpot::
# 488 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	addobject LOCALID_TRICK_MASTER
# 489 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	hideobjectat LOCALID_TRICK_MASTER, MAP_ROUTE110_TRICK_HOUSE_ENTRANCE
# 490 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	switch VAR_TRICK_HOUSE_LEVEL
# 491 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 0, Route110_TrickHouseEntrance_EventScript_SetHidingSpotPuzzle1
# 492 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 1, Route110_TrickHouseEntrance_EventScript_SetHidingSpotPuzzle2
# 493 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 2, Route110_TrickHouseEntrance_EventScript_SetHidingSpotPuzzle3
# 494 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 3, Route110_TrickHouseEntrance_EventScript_SetHidingSpotPuzzle4
# 495 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 4, Route110_TrickHouseEntrance_EventScript_SetHidingSpotPuzzle5
# 496 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 5, Route110_TrickHouseEntrance_EventScript_SetHidingSpotPuzzle6
# 497 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 6, Route110_TrickHouseEntrance_EventScript_SetHidingSpotPuzzle7
# 498 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 7, Route110_TrickHouseEntrance_EventScript_SetHidingSpotPuzzle8
# 499 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 500 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 501 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_SetHidingSpotPuzzle1::
# 502 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setobjectxy LOCALID_TRICK_MASTER, 6, 3
# 503 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 504 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 505 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_SetHidingSpotPuzzle2::
# 506 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setobjectxy LOCALID_TRICK_MASTER, 11, 5
# 507 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 508 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 509 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_SetHidingSpotPuzzle3::
# 510 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setobjectxy LOCALID_TRICK_MASTER, 9, 1
# 511 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 512 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 513 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_SetHidingSpotPuzzle4::
# 514 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setobjectxy LOCALID_TRICK_MASTER, 3, 1
# 515 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 516 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 517 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_SetHidingSpotPuzzle5::
# 518 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setobjectxy LOCALID_TRICK_MASTER, 0, 5
# 519 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 520 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 521 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_SetHidingSpotPuzzle6::
# 522 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setobjectxy LOCALID_TRICK_MASTER, 11, 1
# 523 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 524 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 525 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_SetHidingSpotPuzzle7::
# 526 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setobjectxy LOCALID_TRICK_MASTER, 8, 1
# 527 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 528 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 529 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_SetHidingSpotPuzzle8::
# 530 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setobjectxy LOCALID_TRICK_MASTER, 4, 4
# 531 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 532 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 533 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_RemoveTrickMaster::
# 534 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	removeobject LOCALID_TRICK_MASTER
# 535 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 536 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 537 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_SetTrickMasterFacingDoor::
# 538 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	addobject LOCALID_TRICK_MASTER
# 539 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setobjectxy LOCALID_TRICK_MASTER, 5, 2
# 540 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	turnobject LOCALID_TRICK_MASTER, DIR_NORTH
# 541 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 542 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 543 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_SetTrickMasterInFrontOfDoor::
# 544 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	addobject LOCALID_TRICK_MASTER
# 545 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setobjectxy LOCALID_TRICK_MASTER, 5, 2
# 546 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	turnobject LOCALID_TRICK_MASTER, DIR_SOUTH
# 547 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 548 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 549 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_OnFrame:
# 550 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	map_script_2 VAR_TRICK_HOUSE_FOUND_TRICK_MASTER, 1, Route110_TrickHouseEntrance_EventScript_BeginChallenge
# 551 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.2byte 0
# 552 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 553 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_BeginChallenge::
# 554 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	lockall
# 555 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	delay 20
# 556 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_eq VAR_TRICK_HOUSE_LEVEL, 0, Route110_TrickHouseEntrance_EventScript_MeetTrickMaster
# 557 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_ComeToChallengeTrickHouse, MSGBOX_DEFAULT
# 558 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	closemessage
# 559 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	delay 20
# 560 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	applymovement LOCALID_TRICK_MASTER, Route110_TrickHouse_Movement_TrickMasterSpin
# 561 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmovement 0
# 562 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	playse SE_M_EXPLOSION
# 563 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	applymovement LOCALID_TRICK_MASTER, Route110_TrickHouse_Movement_TrickMasterJumpAway
# 564 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmovement 0
# 565 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	removeobject LOCALID_TRICK_MASTER
# 566 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_ENTRANCE_STATE, 1
# 567 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_FOUND_TRICK_MASTER, 0
# 568 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 569 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 570 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 571 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_UnusedRelease::
# 572 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 573 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 574 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 575 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_TrickMaster::
# 576 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	lockall
# 577 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	switch VAR_TRICK_HOUSE_ENTRANCE_STATE
# 578 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 0, Route110_TrickHouseEntrance_EventScript_FoundTrickMaster
# 579 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 2, Route110_TrickHouseEntrance_EventScript_GiveReward
# 580 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 3, Route110_TrickHouseEntrance_EventScript_StillMakingPuzzle
# 581 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 6, Route110_TrickHouseEntrance_EventScript_MechadollReward
# 582 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 583 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 584 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_FoundTrickMaster::
# 585 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	playse SE_PIN
# 586 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 587 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmovement 0
# 588 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay48
# 589 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmovement 0
# 590 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_eq VAR_TRICK_HOUSE_LEVEL, 0, Route110_TrickHouseEntrance_EventScript_FoundBeneathDesk
# 591 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_eq VAR_TRICK_HOUSE_LEVEL, 1, Route110_TrickHouseEntrance_EventScript_FoundBehindTree
# 592 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_eq VAR_TRICK_HOUSE_LEVEL, 2, Route110_TrickHouseEntrance_EventScript_FoundInDresser
# 593 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_eq VAR_TRICK_HOUSE_LEVEL, 3, Route110_TrickHouseEntrance_EventScript_FoundBeyondWindow
# 594 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_eq VAR_TRICK_HOUSE_LEVEL, 4, Route110_TrickHouseEntrance_EventScript_FoundInPlanter
# 595 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_eq VAR_TRICK_HOUSE_LEVEL, 5, Route110_TrickHouseEntrance_EventScript_FoundInCupboard
# 596 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_eq VAR_TRICK_HOUSE_LEVEL, 6, Route110_TrickHouseEntrance_EventScript_FoundBehindWindow
# 597 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_eq VAR_TRICK_HOUSE_LEVEL, 7, Route110_TrickHouseEntrance_EventScript_FoundBeneathCushion
# 598 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	closemessage
# 599 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_FOUND_TRICK_MASTER, 1
# 600 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	warpsilent MAP_ROUTE110_TRICK_HOUSE_ENTRANCE, 6, 2
# 601 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitstate
# 602 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 603 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 604 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 605 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_FoundBeneathDesk::
# 606 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_ConcealedBeneathDesk, MSGBOX_DEFAULT
# 607 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	return
# 608 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 609 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_FoundBehindTree::
# 610 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_ConcealedBehindTree, MSGBOX_DEFAULT
# 611 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	return
# 612 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 613 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_FoundInDresser::
# 614 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_ConcealedInDresser, MSGBOX_DEFAULT
# 615 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	return
# 616 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 617 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_FoundBeyondWindow::
# 618 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_ConealedBeyondWindow, MSGBOX_DEFAULT
# 619 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	return
# 620 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 621 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_FoundInPlanter::
# 622 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_ConcealedInPlanter, MSGBOX_DEFAULT
# 623 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	return
# 624 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 625 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_FoundInCupboard::
# 626 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_ConcealedInCupboard, MSGBOX_DEFAULT
# 627 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	return
# 628 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 629 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_FoundBehindWindow::
# 630 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_ConcealedBehindWindow, MSGBOX_DEFAULT
# 631 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	return
# 632 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 633 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_FoundBeneathCushion::
# 634 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_ConcealedBeneathCushion, MSGBOX_DEFAULT
# 635 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	return
# 636 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 637 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouse_Movement_TrickMasterSpin:
# 638 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	face_up
# 639 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	delay_4
# 640 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	face_left
# 641 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	delay_4
# 642 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	face_down
# 643 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	delay_4
# 644 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	face_right
# 645 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	delay_4
# 646 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	step_end
# 647 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 648 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouse_Movement_TrickMasterJumpAway:
# 649 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	face_up
# 650 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	disable_anim
# 651 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	slide_up
# 652 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	slide_up
# 653 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	slide_up
# 654 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	slide_up
# 655 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	slide_up
# 656 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	slide_up
# 657 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	step_end
# 658 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 659 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_MeetTrickMaster::
# 660 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_TheyCallMeTrickMaster, MSGBOX_DEFAULT
# 661 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	return
# 662 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 663 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_StillMakingPuzzle::
# 664 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_NextTimeUseThisTrick, MSGBOX_DEFAULT
# 665 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	closemessage
# 666 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	applymovement LOCALID_TRICK_MASTER, Common_Movement_FacePlayer
# 667 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmovement 0
# 668 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	playse SE_PIN
# 669 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	applymovement LOCALID_TRICK_MASTER, Common_Movement_ExclamationMark
# 670 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmovement 0
# 671 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	applymovement LOCALID_TRICK_MASTER, Common_Movement_Delay48
# 672 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmovement 0
# 673 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_InMidstOfDevisingNewChallenges, MSGBOX_DEFAULT
# 674 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	applymovement LOCALID_TRICK_MASTER, Common_Movement_WalkInPlaceFasterUp
# 675 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmovement 0
# 676 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 677 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 678 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 679 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_GiveReward::
# 680 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	applymovement LOCALID_TRICK_MASTER, Common_Movement_FacePlayer
# 681 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmovement 0
# 682 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_YoureHereToAcceptReward, MSGBOX_DEFAULT
# 683 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq VAR_TRICK_HOUSE_LEVEL, 1, Route110_TrickHouseEntrance_EventScript_GivePuzzle1Reward
# 684 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq VAR_TRICK_HOUSE_LEVEL, 2, Route110_TrickHouseEntrance_EventScript_GivePuzzle2Reward
# 685 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq VAR_TRICK_HOUSE_LEVEL, 3, Route110_TrickHouseEntrance_EventScript_GivePuzzle3Reward
# 686 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq VAR_TRICK_HOUSE_LEVEL, 4, Route110_TrickHouseEntrance_EventScript_GivePuzzle4Reward
# 687 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq VAR_TRICK_HOUSE_LEVEL, 5, Route110_TrickHouseEntrance_EventScript_GivePuzzle5Reward
# 688 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq VAR_TRICK_HOUSE_LEVEL, 6, Route110_TrickHouseEntrance_EventScript_GivePuzzle6Reward
# 689 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq VAR_TRICK_HOUSE_LEVEL, 7, Route110_TrickHouseEntrance_EventScript_GivePuzzle7Reward
# 690 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 691 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 692 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_GivePuzzle1Reward::
# 693 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	giveitem ITEM_RARE_CANDY
# 694 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route110_TrickHouseEntrance_EventScript_GotReward
# 695 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
# 696 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_DidYouNotComeToClaimReward, MSGBOX_DEFAULT
# 697 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 698 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 699 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 700 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_GivePuzzle2Reward::
# 701 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	giveitem ITEM_TIMER_BALL
# 702 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route110_TrickHouseEntrance_EventScript_GotReward
# 703 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
# 704 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_DidYouNotComeToClaimReward, MSGBOX_DEFAULT
# 705 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 706 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 707 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 708 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_GivePuzzle3Reward::
# 709 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	giveitem ITEM_HARD_STONE
# 710 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route110_TrickHouseEntrance_EventScript_GotReward
# 711 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
# 712 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_DidYouNotComeToClaimReward, MSGBOX_DEFAULT
# 713 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 714 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 715 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 716 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_GivePuzzle4Reward::
# 717 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	giveitem ITEM_SMOKE_BALL
# 718 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route110_TrickHouseEntrance_EventScript_GotReward
# 719 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
# 720 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_DidYouNotComeToClaimReward, MSGBOX_DEFAULT
# 721 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 722 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 723 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 724 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_GivePuzzle5Reward::
# 725 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	giveitem ITEM_TM_ACROBATICS
# 726 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route110_TrickHouseEntrance_EventScript_GotReward
# 727 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
# 728 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_DidYouNotComeToClaimReward, MSGBOX_DEFAULT
# 729 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 730 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 731 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 732 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_GivePuzzle6Reward::
# 733 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	giveitem ITEM_MAGNET
# 734 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route110_TrickHouseEntrance_EventScript_GotReward
# 735 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
# 736 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_DidYouNotComeToClaimReward, MSGBOX_DEFAULT
# 737 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 738 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 739 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 740 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_GivePuzzle7Reward::
# 741 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	giveitem ITEM_PP_MAX
# 742 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route110_TrickHouseEntrance_EventScript_GotReward
# 743 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
# 744 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_DidYouNotComeToClaimReward, MSGBOX_DEFAULT
# 745 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 746 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 747 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 748 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_GotReward::
# 749 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_PRIZE_PICKUP, 0
# 750 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_ENTRANCE_STATE, 3
# 751 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	applymovement LOCALID_TRICK_MASTER, Common_Movement_WalkInPlaceFasterUp
# 752 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmovement 0
# 753 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 754 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 755 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 756 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_MechadollReward::
# 757 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	applymovement LOCALID_TRICK_MASTER, Common_Movement_FacePlayer
# 758 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmovement 0
# 759 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_MechadollWhichTent, MSGBOX_DEFAULT
# 760 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call Route110_TrickHouseEntrance_EventScript_ChooseTent
# 761 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route110_TrickHouseEntrance_EventScript_ReceivedTent
# 762 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, Common_EventScript_NoRoomForDecor
# 763 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_PCFullAgain, MSGBOX_DEFAULT
# 764 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 765 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 766 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 767 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_ChooseTent::
# 768 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	multichoice 0, 0, MULTI_TENT, TRUE
# 769 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	switch VAR_RESULT
# 770 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 0, Route110_TrickHouseEntrance_EventScript_GiveRedTent
# 771 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_EventScript_GiveBlueTent
# 772 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 773 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_GiveRedTent::
# 774 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	givedecoration DECOR_RED_TENT
# 775 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	return
# 776 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 777 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_GiveBlueTent::
# 778 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	givedecoration DECOR_BLUE_TENT
# 779 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	return
# 780 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 781 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_ReceivedTent::
# 782 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_ThenFarewell, MSGBOX_DEFAULT
# 783 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	closemessage
# 784 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	applymovement LOCALID_TRICK_MASTER, Route110_TrickHousePuzzle5_Movement_MechadollShake
# 785 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmovement 0
# 786 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	applymovement LOCALID_TRICK_MASTER, Route110_TrickHouse_Movement_TrickMasterSpin
# 787 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmovement 0
# 788 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	playse SE_M_EXPLOSION
# 789 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	applymovement LOCALID_TRICK_MASTER, Route110_TrickHouse_Movement_TrickMasterJumpAway
# 790 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmovement 0
# 791 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	removeobject LOCALID_TRICK_MASTER
# 792 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_PRIZE_PICKUP, 0
# 793 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_ENTRANCE_STATE, 5
# 794 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 795 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 796 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 797 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_Door::
# 798 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	lockall
# 799 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	switch VAR_TRICK_HOUSE_ENTRANCE_STATE
# 800 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 0, Route110_TrickHouseEntrance_EventScript_ItsAScroll
# 801 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 1, Route110_TrickHouseEntrance_EventScript_GoInHolePrompt
# 802 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 4, Route110_TrickHouseEntrance_EventScript_LeftOnJourneyNote
# 803 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 5, Route110_TrickHouseEntrance_EventScript_CheckLevelForMessage
# 804 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 805 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 806 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_ItsAScroll::
# 807 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_ItsAScroll, MSGBOX_DEFAULT
# 808 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 809 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 810 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 811 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_GoInHolePrompt::
# 812 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_GoInHoleBehindScroll, MSGBOX_YESNO
# 813 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	closemessage
# 814 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq VAR_RESULT, YES, Route110_TrickHouseEntrance_EventScript_EnterPuzzleRoom
# 815 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 816 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 817 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 818 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_EnterPuzzleRoom::
# 819 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setmetatile 5, 1, METATILE_GenericBuilding_TrickHouse_Stairs_Down, FALSE
# 820 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	special DrawWholeMapView
# 821 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	delay 20
# 822 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 823 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmovement 0
# 824 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route110_TrickHouseEntrance_Movement_EnterRoom
# 825 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmovement 0
# 826 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	switch VAR_TRICK_HOUSE_LEVEL
# 827 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 0, Route110_TrickHouseEntrance_EventScript_EnterPuzzleRoom2
# 828 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 1, Route110_TrickHouseEntrance_EventScript_EnterPuzzleRoom1
# 829 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 2, Route110_TrickHouseEntrance_EventScript_EnterPuzzleRoom6
# 830 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 3, Route110_TrickHouseEntrance_EventScript_EnterPuzzleRoom7
# 831 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 4, Route110_TrickHouseEntrance_EventScript_EnterPuzzleRoom3
# 832 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 5, Route110_TrickHouseEntrance_EventScript_EnterPuzzleRoom4
# 833 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 6, Route110_TrickHouseEntrance_EventScript_EnterPuzzleRoom5
# 834 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 7, Route110_TrickHouseEntrance_EventScript_EnterPuzzleRoom8
# 835 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 836 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 837 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_Movement_EnterRoom:
# 838 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	set_invisible
# 839 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	step_end
# 840 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 841 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_EnterPuzzleRoom1::
# 842 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	warp MAP_ROUTE110_TRICK_HOUSE_PUZZLE1, 0, 21
# 843 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitstate
# 844 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 845 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 846 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 847 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_EnterPuzzleRoom2::
# 848 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	warp MAP_ROUTE110_TRICK_HOUSE_PUZZLE2, 0, 21
# 849 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitstate
# 850 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 851 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 852 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 853 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_EnterPuzzleRoom3::
# 854 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	warp MAP_ROUTE110_TRICK_HOUSE_PUZZLE3, 0, 21
# 855 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitstate
# 856 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 857 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 858 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 859 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_EnterPuzzleRoom4::
# 860 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	warp MAP_ROUTE110_TRICK_HOUSE_PUZZLE4, 0, 21
# 861 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitstate
# 862 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 863 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 864 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 865 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_EnterPuzzleRoom5::
# 866 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	warp MAP_ROUTE110_TRICK_HOUSE_PUZZLE5, 0, 21
# 867 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitstate
# 868 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 869 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 870 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 871 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_EnterPuzzleRoom6::
# 872 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	warp MAP_ROUTE110_TRICK_HOUSE_PUZZLE6, 0, 21
# 873 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitstate
# 874 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 875 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 876 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 877 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_EnterPuzzleRoom7::
# 878 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	warp MAP_ROUTE110_TRICK_HOUSE_PUZZLE7, 0, 21
# 879 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitstate
# 880 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 881 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 882 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 883 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_EnterPuzzleRoom8::
# 884 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	warp MAP_ROUTE110_TRICK_HOUSE_PUZZLE8, 0, 21
# 885 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitstate
# 886 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 887 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 888 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 889 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_LeftOnJourneyNote::
# 890 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_LeavingOnJourneyNote, MSGBOX_DEFAULT
# 891 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 892 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 893 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 894 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_CheckLevelForMessage::
# 895 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq VAR_TRICK_HOUSE_LEVEL, 8, Route110_TrickHouseEntrance_EventScript_LeftOnJourneyNote2
# 896 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_ItsAScroll, MSGBOX_DEFAULT
# 897 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 898 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 899 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 900 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_LeftOnJourneyNote2::
# 901 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_LeavingOnJourneyNote, MSGBOX_DEFAULT
# 902 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 903 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 904 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 905 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHousePuzzle_EventScript_Door::
# 906 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	lockall
# 907 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	switch VAR_TRICK_HOUSE_LEVEL
# 908 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 0, Route110_TrickHousePuzzle2_EventScript_Door
# 909 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 1, Route110_TrickHousePuzzle1_EventScript_Door
# 910 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 2, Route110_TrickHousePuzzle6_EventScript_Door
# 911 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 3, Route110_TrickHousePuzzle7_EventScript_Door
# 912 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 4, Route110_TrickHousePuzzle3_EventScript_Door
# 913 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 5, Route110_TrickHousePuzzle4_EventScript_Door
# 914 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 6, Route110_TrickHousePuzzle5_EventScript_Door
# 915 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 7, Route110_TrickHousePuzzle8_EventScript_Door
# 916 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 917 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 918 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHousePuzzle1_EventScript_Door::
# 919 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq VAR_TRICK_HOUSE_PUZZLE_1_STATE, 0, Route110_TrickHousePuzzle_EventScript_DoorLocked
# 920 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHousePuzzle1_Text_WroteSecretCodeLockOpened, MSGBOX_DEFAULT
# 921 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	playse SE_PIN
# 922 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_PUZZLE_1_STATE, 2
# 923 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setmetatile 13, 1, METATILE_TrickHousePuzzle_Stairs_Down, FALSE
# 924 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	special DrawWholeMapView
# 925 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 926 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 927 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 928 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHousePuzzle2_EventScript_Door::
# 929 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq VAR_TRICK_HOUSE_PUZZLE_2_STATE, 0, Route110_TrickHousePuzzle_EventScript_DoorLocked
# 930 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHousePuzzle2_Text_WroteSecretCodeLockOpened, MSGBOX_DEFAULT
# 931 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	playse SE_PIN
# 932 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_PUZZLE_2_STATE, 2
# 933 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setmetatile 13, 1, METATILE_TrickHousePuzzle_Stairs_Down, FALSE
# 934 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	special DrawWholeMapView
# 935 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 936 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 937 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 938 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHousePuzzle3_EventScript_Door::
# 939 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq VAR_TRICK_HOUSE_PUZZLE_3_STATE, 0, Route110_TrickHousePuzzle_EventScript_DoorLocked
# 940 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHousePuzzle3_Text_WroteSecretCodeLockOpened, MSGBOX_DEFAULT
# 941 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	playse SE_PIN
# 942 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_PUZZLE_3_STATE, 2
# 943 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setmetatile 13, 1, METATILE_TrickHousePuzzle_Stairs_Down, FALSE
# 944 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	special DrawWholeMapView
# 945 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 946 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 947 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 948 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHousePuzzle4_EventScript_Door::
# 949 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq VAR_TRICK_HOUSE_PUZZLE_4_STATE, 0, Route110_TrickHousePuzzle_EventScript_DoorLocked
# 950 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHousePuzzle4_Text_WroteSecretCodeLockOpened, MSGBOX_DEFAULT
# 951 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	playse SE_PIN
# 952 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_PUZZLE_4_STATE, 2
# 953 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setmetatile 13, 1, METATILE_TrickHousePuzzle_Stairs_Down, FALSE
# 954 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	special DrawWholeMapView
# 955 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 956 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 957 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 958 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Door::
# 959 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq VAR_TRICK_HOUSE_PUZZLE_5_STATE, 0, Route110_TrickHousePuzzle_EventScript_DoorLocked
# 960 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHousePuzzle5_Text_WroteSecretCodeLockOpened, MSGBOX_DEFAULT
# 961 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	playse SE_PIN
# 962 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_PUZZLE_5_STATE, 2
# 963 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setmetatile 13, 1, METATILE_TrickHousePuzzle_Stairs_Down, FALSE
# 964 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	special DrawWholeMapView
# 965 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 966 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 967 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 968 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHousePuzzle6_EventScript_Door::
# 969 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq VAR_TRICK_HOUSE_PUZZLE_6_STATE, 0, Route110_TrickHousePuzzle_EventScript_DoorLocked
# 970 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHousePuzzle6_Text_WroteSecretCodeLockOpened, MSGBOX_DEFAULT
# 971 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	playse SE_PIN
# 972 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_PUZZLE_6_STATE, 2
# 973 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setmetatile 13, 1, METATILE_TrickHousePuzzle_Stairs_Down, FALSE
# 974 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	special DrawWholeMapView
# 975 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 976 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 977 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 978 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_Door::
# 979 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq VAR_TRICK_HOUSE_PUZZLE_7_STATE, 0, Route110_TrickHousePuzzle_EventScript_DoorLocked
# 980 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHousePuzzle7_Text_WroteSecretCodeLockOpened, MSGBOX_DEFAULT
# 981 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	playse SE_PIN
# 982 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_PUZZLE_7_STATE, 2
# 983 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setmetatile 13, 1, METATILE_TrickHousePuzzle_Stairs_Down, FALSE
# 984 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	special DrawWholeMapView
# 985 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 986 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 987 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 988 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHousePuzzle8_EventScript_Door::
# 989 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq VAR_TRICK_HOUSE_PUZZLE_8_STATE, 0, Route110_TrickHousePuzzle_EventScript_DoorLocked
# 990 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHousePuzzle8_Text_WroteSecretCodeLockOpened, MSGBOX_DEFAULT
# 991 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	playse SE_PIN
# 992 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_PUZZLE_8_STATE, 2
# 993 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setmetatile 13, 1, METATILE_TrickHousePuzzle_Stairs_Down, FALSE
# 994 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	special DrawWholeMapView
# 995 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 996 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 997 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 998 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHousePuzzle_EventScript_DoorLocked::
# 999 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_DoorLockedWriteSecretCodeHere, MSGBOX_DEFAULT
# 1000 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 1001 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 1002 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1003 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHousePuzzle_EventScript_ReadScrollAgain::
# 1004 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHousePuzzle_Text_SecretCodeWrittenOnIt, MSGBOX_DEFAULT
# 1005 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 1006 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 1007 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1008 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHousePuzzle_EventScript_FoundScroll::
# 1009 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1010 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	message Route110_TrickHousePuzzle_Text_FoundAScroll
# 1011 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitfanfare
# 1012 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHousePuzzle_Text_MemorizedSecretCode, MSGBOX_DEFAULT
# 1013 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 1014 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 1015 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1016 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_TrickMasterHiding::
# 1017 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	lockall
# 1018 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_YoureBeingWatched, MSGBOX_DEFAULT
# 1019 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 1020 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_eq VAR_TRICK_HOUSE_LEVEL, 0, Route110_TrickHouseEntrance_EventScript_DoHidingSpotSparkle1
# 1021 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_eq VAR_TRICK_HOUSE_LEVEL, 1, Route110_TrickHouseEntrance_EventScript_DoHidingSpotSparkle2
# 1022 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_eq VAR_TRICK_HOUSE_LEVEL, 2, Route110_TrickHouseEntrance_EventScript_DoHidingSpotSparkle3
# 1023 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_BEING_WATCHED_STATE, 1
# 1024 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 1025 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1026 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_DoHidingSpotSparkle1::
# 1027 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_0x8004, 6  @ x
# 1028 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_0x8005, 3  @ y
# 1029 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call Route110_TrickHouseEntrance_EventScript_DoHidingSpotSparkle
# 1030 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	return
# 1031 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1032 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_DoHidingSpotSparkle2::
# 1033 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_0x8004, 11  @ x
# 1034 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_0x8005, 5   @ y
# 1035 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call Route110_TrickHouseEntrance_EventScript_DoHidingSpotSparkle
# 1036 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	return
# 1037 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1038 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_DoHidingSpotSparkle3::
# 1039 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_0x8004, 9  @ x
# 1040 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_0x8005, 2  @ y
# 1041 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call Route110_TrickHouseEntrance_EventScript_DoHidingSpotSparkle
# 1042 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	return
# 1043 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1044 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_DoHidingSpotSparkle::
# 1045 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_0x8006, 0
# 1046 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	dofieldeffectsparkle VAR_0x8004, VAR_0x8005, VAR_0x8006
# 1047 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitfieldeffect FLDEFF_SPARKLE
# 1048 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	delay 10
# 1049 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	return
# 1050 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1051 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_Text_YoureBeingWatched:
# 1052 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "You're being watched…$"
# 1053 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1054 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_Text_ConcealedBeneathDesk:
# 1055 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "Hah? Grrr…\p"
# 1056 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "How did you know I concealed myself\n"
# 1057 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "beneath this desk? You're sharp!$"
# 1058 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1059 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_Text_ConcealedBehindTree:
# 1060 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "Hah? Grrr…\p"
# 1061 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "How did you know I concealed myself\n"
# 1062 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "behind this tree? You're sharp!$"
# 1063 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1064 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_Text_ConcealedInDresser:
# 1065 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "Hah? Grrr…\p"
# 1066 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "How did you know I concealed myself\n"
# 1067 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "in this dresser? You're sharp!$"
# 1068 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1069 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_Text_ConealedBeyondWindow:
# 1070 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "Hah? Grrr…\p"
# 1071 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "How did you know I concealed myself\n"
# 1072 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "beyond this window? You're sharp!$"
# 1073 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1074 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_Text_ConcealedInPlanter:
# 1075 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "Hah? Grrr…\p"
# 1076 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "How did you know I concealed myself\n"
# 1077 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "in this planter? You're sharp!$"
# 1078 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1079 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_Text_ConcealedInCupboard:
# 1080 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "Hah? Grrr…\p"
# 1081 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "How did you know I concealed myself\n"
# 1082 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "in this cupboard? You're sharp!$"
# 1083 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1084 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_Text_ConcealedBehindWindow:
# 1085 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "Hah? Grrr…\p"
# 1086 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "How did you know I concealed myself\n"
# 1087 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "behind this window? You're sharp!$"
# 1088 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1089 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_Text_ConcealedBeneathCushion:
# 1090 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "Hah? Grrr…\p"
# 1091 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "How did you know I concealed myself\n"
# 1092 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "beneath this cushion? You're sharp!$"
# 1093 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1094 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_Text_TheyCallMeTrickMaster:
# 1095 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "Behold!\p"
# 1096 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "For I am the greatest living mystery\n"
# 1097 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "of a man in all of Hoenn!\l"
# 1098 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "They call me…\p"
# 1099 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "The Trick Master!\n"
# 1100 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "Wahahaha! Glad to meet you!$"
# 1101 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1102 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_Text_ComeToChallengeTrickHouse:
# 1103 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "You, you've come to challenge\n"
# 1104 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "my Trick house, haven't you?\p"
# 1105 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "That's why you're here, isn't it?\n"
# 1106 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "Yes, it is!\p"
# 1107 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "Consider your challenge accepted!\p"
# 1108 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "Enter through the scroll there,\n"
# 1109 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "and let your challenge commence!\p"
# 1110 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "I shall be waiting in the back!$"
# 1111 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1112 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_Text_ItsAScroll:
# 1113 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "It's a scroll.$"
# 1114 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1115 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_Text_GoInHoleBehindScroll:
# 1116 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "There is a big hole behind the scroll!\p"
# 1117 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "Want to go in?$"
# 1118 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1119 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_Text_LeavingOnJourneyNote:
# 1120 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "There is a note affixed to the scroll…\p"
# 1121 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "“I am leaving on a journey.\n"
# 1122 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "Don't look for me. Trick Master”$"
# 1123 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1124 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_Text_NextTimeUseThisTrick:
# 1125 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "For the next time, I'll use this trick,\n"
# 1126 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "and that scheme, and those ruses…\p"
# 1127 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "Mufufufu… If I may say so, it's\n"
# 1128 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "brilliantly difficult, even for me!$"
# 1129 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1130 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_Text_InMidstOfDevisingNewChallenges:
# 1131 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "Hah? What?!\n"
# 1132 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "Oh, it's you!\p"
# 1133 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "I'm in the midst of devising new tricky\n"
# 1134 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "challenges!\p"
# 1135 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "It's not too much to ask for a bit more\n"
# 1136 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "time for me to think, is it now?\l"
# 1137 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "You wouldn't begrudge me that?\l"
# 1138 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "Come back in a little while!$"
# 1139 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1140 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_Text_YoureHereToAcceptReward:
# 1141 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "Ah, it's you! You're here to accept the\n"
# 1142 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "reward from before, isn't that right?\l"
# 1143 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "Yes, right I am!\p"
# 1144 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "Here!\n"
# 1145 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "I'll give it to you now!$"
# 1146 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1147 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_Text_DidYouNotComeToClaimReward:
# 1148 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "Hah?\n"
# 1149 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "Did you not come to claim your reward?$"
# 1150 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1151 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_Text_MechadollWhichTent:
# 1152 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "MECHADOLL 5 I AM!\n"
# 1153 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "IF REWARD IS NOT TAKEN BY YOU,\l"
# 1154 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "THEN Trick Master YOU CANNOT FOLLOW.\p"
# 1155 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "RED TENT OR BLUE TENT,\n"
# 1156 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "WHICH DO YOU PREFER?$"
# 1157 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1158 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_Text_ThenFarewell:
# 1159 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "THEN FAREWELL.$"
# 1160 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1161 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_Text_PCFullAgain:
# 1162 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "YOUR PC STATUS: FULL AGAIN.\n"
# 1163 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "MEAN, YOU ARE.$"
# 1164 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1165 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHousePuzzle_Text_FoundAScroll:
# 1166 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "{PLAYER} found a scroll.$"
# 1167 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1168 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHousePuzzle_Text_MemorizedSecretCode:
# 1169 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "{PLAYER} memorized the secret code\n"
# 1170 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "written on the scroll.$"
# 1171 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1172 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHousePuzzle_Text_SecretCodeWrittenOnIt:
# 1173 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "A secret code is written on it.$"
# 1174 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1175 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_Text_DoorLockedWriteSecretCodeHere:
# 1176 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "The door is locked.\p"
# 1177 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "…On closer inspection, this is written\n"
# 1178 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "on it: “Write the secret code here.”$"

Route110_TrickHouseEntrance_Apprentice_Text_0:
# 4 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "They call me the Trick Apprentice,\n"
	.string "loyal protégé to the one and only\l"
	.string "Trick Master!\p"
	.string "Would you like to pick up any of\n"
	.string "your puzzle rewards?$"

Route110_TrickHouseEntrance_Apprentice_Text_1:
# 17 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "The Trick Master hasn't even devised\n"
	.string "of that puzzle yet!$"

Route110_TrickHouseEntrance_Apprentice_Text_2:
# 25 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "It looks like you haven't completed\n"
	.string "that puzzle.$"

Route110_TrickHouseEntrance_Apprentice_Text_3:
# 31 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "You've already taken that reward.$"

Route110_TrickHouseEntrance_Apprentice_Text_4:
# 35 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "The first reward is either a Sandshrew\n"
	.string "or an Alolan Sandshrew, both with\l"
	.string "Spiky Shield.\p"
	.string "Do you want this reward?$"

Route110_TrickHouseEntrance_Apprentice_Text_5:
# 48 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "{PLAYER} recieved Sandshrew!$"

Route110_TrickHouseEntrance_Apprentice_Text_6:
# 73 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "The second reward is either a Solrock\n"
	.string "or Lunatone, both with Photon Geyser.\p"
	.string "Do you want this reward?$"

Route110_TrickHouseEntrance_Apprentice_Text_7:
# 85 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "{PLAYER} recieved Solrock!$"

Route110_TrickHouseEntrance_Apprentice_Text_8:
# 91 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "{PLAYER} recieved Lunatone!$"

Route110_TrickHouseEntrance_Apprentice_Text_9:
# 110 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "The third reward is either a Murkrow\n"
	.string "with Oblivion Wing, or a Misdreavus\l"
	.string "with Moongeist Beam.\p"
	.string "Do you want this reward?$"

Route110_TrickHouseEntrance_Apprentice_Text_10:
# 123 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "{PLAYER} recieved Murkrow!$"

Route110_TrickHouseEntrance_Apprentice_Text_11:
# 129 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "{PLAYER} recieved Misdreavus!$"

Route110_TrickHouseEntrance_Apprentice_Text_12:
# 148 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "The fourth reward is either a Jynx\n"
	.string "with Psycho Boost, an Electivire with\p"
	.string "Plasma Fists, or a Magmortar with\n"
	.string "Armor Cannon.\p"
	.string "Do you want this reward?$"

Route110_TrickHouseEntrance_Apprentice_Text_13:
# 162 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "{PLAYER} recieved Jynx!$"

Route110_TrickHouseEntrance_Apprentice_Text_14:
# 168 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "{PLAYER} recieved Electivire!$"

Route110_TrickHouseEntrance_Apprentice_Text_15:
# 174 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "{PLAYER} recieved Magmortar!$"

Route110_TrickHouseEntrance_Apprentice_Text_16:
# 193 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "The fifth reward is either a Hitmonlee\n"
	.string "with Thunderous Kick, a Hitmonchan\p"
	.string "with Wicked Blow, or a Hitmontop with\n"
	.string "Surging Strikes.\p"
	.string "Do you want this reward?$"

Route110_TrickHouseEntrance_Apprentice_Text_17:
# 207 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "{PLAYER} recieved Hitmonlee!$"

Route110_TrickHouseEntrance_Apprentice_Text_18:
# 213 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "{PLAYER} recieved Hitmonchan!$"

Route110_TrickHouseEntrance_Apprentice_Text_19:
# 219 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "{PLAYER} recieved Hitmontop!$"

Route110_TrickHouseEntrance_Apprentice_Text_20:
# 238 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "The seventh reward is either a Togetic\n"
	.string "with Aeroblast, or a Clefairy with\l"
	.string "Light of Ruin.\p"
	.string "Do you want this reward?$"

Route110_TrickHouseEntrance_Apprentice_Text_21:
# 251 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "{PLAYER} recieved Togetic!$"

Route110_TrickHouseEntrance_Apprentice_Text_22:
# 257 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "{PLAYER} recieved Clefairy!$"

Route110_TrickHouseEntrance_Apprentice_Text_23:
# 276 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "The sixth reward is either a Drednaw\n"
	.string "with Fishious Rend, or an Aerodactyl\l"
	.string "with Brave Bird.\p"
	.string "Do you want this reward?$"

Route110_TrickHouseEntrance_Apprentice_Text_24:
# 289 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "{PLAYER} recieved Drednaw!$"

Route110_TrickHouseEntrance_Apprentice_Text_25:
# 295 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "{PLAYER} recieved Aerodactyl!$"

Route110_TrickHouseEntrance_Apprentice_Text_26:
# 314 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "The final reward is either a Pinsir\n"
	.string "with Extreme Speed, a Kleavor with\p"
	.string "Mighty Cleave, or a Scizor with\n"
	.string "Gear Grind.\p"
	.string "Do you want this reward?$"

Route110_TrickHouseEntrance_Apprentice_Text_27:
# 328 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "{PLAYER} recieved Pinsir!$"

Route110_TrickHouseEntrance_Apprentice_Text_28:
# 334 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "{PLAYER} recieved Kleavor!$"

Route110_TrickHouseEntrance_Apprentice_Text_29:
# 340 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "{PLAYER} recieved Scizor!$"
