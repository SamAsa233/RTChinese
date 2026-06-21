// Level Entries Table
struct LevelData level_data_table[] = {
    /* KARATE_MAN */ {
        /* Entry Scene   */ &scene_karate_man,
        /* Level Name    */ "空手道家",
        /* Level Desc.   */ "按A键出拳来击\n"
                            "打飞来的东西！\n"
                            "是很典型的游戏\n"
                            "…没错吧？",
        /* Level Icon    */ 8,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_karate_man_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "总会有明天的。",
            /* OK        */ "总而言之，先吃饭吧！",
            /* SUPERB    */ "这些东西全都被打飞了！！"
        }
    },
    /* KARATE_MAN_2 */ {
        /* Entry Scene   */ &scene_karate_man_2,
        /* Level Name    */ "空手道家 2",
        /* Level Desc.   */ "按A键出拳来击\n"
                            "打飞来的东西！\n"
                            "但是，速度是\n"
                            "很奇怪的。",
        /* Level Icon    */ 0,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_karate_man_2_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "这节奏是什么鬼啊—！！",
            /* OK        */ "不管那些，先吃饭吧！",
            /* SUPERB    */ "大概就是这样！！"
        }
    },
    /* CLAPPY_TRIO */ {
        /* Entry Scene   */ &scene_clappy_trio,
        /* Level Name    */ "啪叽啪叽三人组",
        /* Level Desc.   */ "弴斣偵攺庤傪偡傞儓両\n"
                            "偁側偨偼俁斣栚丅\n"
                            "慜偺2恖傪傛偔尒偰僱両",
        /* Level Icon    */ 4,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_clappy_trio_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "拠娫偑婣偭偪傖偭偨両",
            /* OK        */ "枮懌偡傞偺偼 傑偩憗偄偐傕偹丅",
            /* SUPERB    */ "偙偺嶰恖廜丄 懅僺僢僞儕偩両両"
        }
    },
    /* SNAPPY_TRIO */ {
        /* Entry Scene   */ &scene_snappy_trio,
        /* Level Name    */ "帅气帅气三人组",
        /* Level Desc.   */ "儔僼偩偭偨斵傜偑\n"
                            "僶儕偭偲僗乕僣傪\n"
                            "拝偰偒偨儓両\n"
                            "僇僢僐僀僀両両",
        /* Level Icon    */ 10,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_snappy_trio_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "僉儍乕両 備傞偟偰乕両両",
            /* OK        */ "偁偲僠儑僢僩側傫偩偗偳偹乧",
            /* SUPERB    */ "懅僺僢僞儕偱乕偡両 僀僃乕僀両"
        }
    },
    /* POLYRHYTHM */ {
        /* Entry Scene   */ &scene_polyrhythm,
        /* Level Name    */ "多轨节奏",
        /* Level Desc.   */ "廫\帤儃僞儞偲俙儃僞儞偺摨帪墴偟傪儅僗僞乕偩両偗偭偙偆僇儞僞儞偩丅偨傇傫乧",
        /* Level Icon    */ 3,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_polyrhythm_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "愒偄儌僲丄検嶻偼 偨偄傊傫偩側偀乧",
            /* OK        */ "偳傫偳傫 愒偄儌僲傪 惗嶻偩両",
            /* SUPERB    */ "愒偄儌僲傪 惗嶻偟傑偔傝偩僱両両"
        }
    },
    /* POLYRHYTHM_2 */ {
        /* Entry Scene   */ &scene_polyrhythm_2,
        /* Level Name    */ "多轨节奏 2",
        /* Level Desc.   */ "偙傟偧嵍塃撈棫両\n"
                            "僥儞億傛偔 偙側偟偰\n"
                            "儗僢僣 億儕儕僘儉両\n"
                            "僀僃乕僀両",
        /* Level Icon    */ 51,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_polyrhythm_2_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "愒偄儌僲丄傕偭偲惗嶻偟側偒傖乧",
            /* OK        */ "傕偭偲傕偭偲 愒偄儌僲傪 惗嶻偩両",
            /* SUPERB    */ "愒偄儌僲傪 偠傖傫偠傖傫惗嶻偟偪傖偆儓両両"
        }
    },
    /* NIGHT_WALK */ {
        /* Entry Scene   */ &scene_night_walk,
        /* Level Name    */ "夜空漫步",
        /* Level Desc.   */ "壒妝偵偁傢偣偰\n"
                            "僕儍儞僾偟偰僱両\n"
                            "惎偨偪偑 偁偮傑偭偰\n"
                            "偁側偨傕栭嬻傊乧",
        /* Level Icon    */ 7,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_night_walk_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "偮偓偼 傕偭偲 偑傫偽偭偰僱乧",
            /* OK        */ "栭嬻偺 偍偝傫傐丄 偨偺偟偄側丅",
            /* SUPERB    */ "惎偨偪偑 偐傫偘偄偟偰傞儓両"
        }
    },
    /* NIGHT_WALK_2 */ {
        /* Entry Scene   */ &scene_night_walk_2,
        /* Level Name    */ "夜空漫步 2",
        /* Level Desc.   */ "壒妝偵偁傢偣偰\n"
                            "僕儍儞僾偟偰僱両\n"
                            "價儕價儕僂僆偵\n"
                            "婥傪偮偗傛偆丅",
        /* Level Icon    */ 41,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_night_walk_2_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "偆傂傖乕両 偟偭傁偄偟偪傖偭偨両両",
            /* OK        */ "栭晽偑 偲偭偰傕 偒傕偪偄偄側丅",
            /* SUPERB    */ "惎偨偪偲 偍偲傕偩偪偩儓両"
        }
    },
    /* RHYTHM_TWEEZERS */ {
        /* Entry Scene   */ &scene_rhythm_tweezers,
        /* Level Name    */ "节奏脱毛",
        /* Level Desc.   */ "偳傫偳傫惗偊偰偔傞\n"
                            "偆偭偲偆偟偄乽栄乿両\n"
                            "偸偄偪傖偊丄 \n"
                            "偸偄偪傖偊両",
        /* Level Icon    */ 14,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_rhythm_tweezers_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "偙傟偠傖 攧傝傕偺偵 側傜傫両",
            /* OK        */ "側傫偱 偆偪偺儎僒僀偼 栄偑偼偊傞傫偩丠",
            /* SUPERB    */ "僗僢僉儕偦偆偐偄両 嬻婥偑偆傑偄両両"
        }
    },
    /* RHYTHM_TWEEZERS_2 */ {
        /* Entry Scene   */ &scene_rhythm_tweezers_2,
        /* Level Name    */ "节奏脱毛 2",
        /* Level Desc.   */ "傑偨偟偰傕惗偊偰偔傞\n"
                            "偆偭偲偆偟偄乽栄乿両\n"
                            "偸偄偪傖偊丄 \n"
                            "偸偄偪傖偊両",
        /* Level Icon    */ 25,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_rhythm_tweezers_2_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "側傫偱 栄偑 偼偊傞傫偩乕両丠",
            /* OK        */ "偟偐偟側傫偱 偆偪偺儎僒僀偩偗偵 栄偑乧丠",
            /* SUPERB    */ "僗僢僉儕偦偆偐偄両 嬻婥偑偆傑偡偓両両"
        }
    },
    /* SICK_BEATS */ {
        /* Entry Scene   */ &scene_sick_beats,
        /* Level Name    */ "细菌博士",
        /* Level Desc.   */ "彆庤偐傜偺抦傜偣\n"
                            "乽戝曄偱偡両\n"
                            "僶僀僉儞敪惗偱偡両両\n"
                            "愭惗丄偨偡偗偰乣乿",
        /* Level Icon    */ 13,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_sick_beats_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "尋媶偼幐攕偩丅",
            /* OK        */ "幐攕偼惉岟偺傕偲僇儌両",
            /* SUPERB    */ "傕偺偡偛偄僋僗儕偑偱偒偨両両"
        }
    },
    /* BOUNCY_ROAD */ {
        /* Entry Scene   */ &scene_bouncy_road,
        /* Level Name    */ "弹跳之路",
        /* Level Desc.   */ "偲傫偱偔傞娵偄嬍丅\n"
                            "偁傟偼僀僀傗偮偱偡丅\n"
                            "棊偲偝側偄偱僱両",
        /* Level Icon    */ 12,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_bouncy_road_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "側偐側偐 儉僘僇僔乕両",
            /* OK        */ "偗偭偙偆側 僐儞價僱乕僔儑儞偩偭偨僱両",
            /* SUPERB    */ "偐傫偨傫 偐傫偨傫侓"
        }
    },
    /* BOUNCY_ROAD_2 */ {
        /* Entry Scene   */ &scene_bouncy_road_2,
        /* Level Name    */ "弹跳之路 2",
        /* Level Desc.   */ "偲傫偱偔傞娵偄嬍丅\n"
                            "傎傫偲偵僀僀傗偮\n"
                            "側傫偱偡儓乣丅\n"
                            "棊偲偝側偄偱僱両",
        /* Level Icon    */ 50,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_bouncy_road_2_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "僄乕儞両 偟偭傁偄両両",
            /* OK        */ "側偐側偐 偑傫偽偭偰偄偨僱両",
            /* SUPERB    */ "傜偔偪傫 傜偔偪傫侓"
        }
    },
    /* NINJA_BODYGUARD */ {
        /* Entry Scene   */ &scene_ninja_bodyguard,
        /* Level Name    */ "忍者",
        /* Level Desc.   */ "揋廝(偰偒偟傘偆)偩両\n"
                            "廫\帤儃僞儞偲A儃僞儞偱墳愴(偍偆偣傫)偩両\n"
                            "僼僕儎儅乮傆偠偝傫乯両両",
        /* Level Icon    */ 5,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_ninja_bodyguard_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "僎僢両 僩僲偑 偒偤偮偟偰傞両両",
            /* OK        */ "僩僲両 偛傔傫側偝乣偄丅",
            /* SUPERB    */ "傾僢僷儗偭偰 尵傢傟偪傖偭偨僛両両"
        }
    },
    /* NINJA_REINCARNATE */ {
        /* Entry Scene   */ &scene_ninja_reincarnate,
        /* Level Name    */ "忍者的后代",
        /* Level Desc.   */ "僆儗偺偠偄偪傖傫偺\n"
                            "偠偄偪傖傫偺\n"
                            "偠偄偪傖傫偼\n"
                            "擡幰側傫偩偤丅",
        /* Level Icon    */ 38,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_ninja_reincarnate_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "傑偗傞側両 偍傑偊偑棅傝側偺偩乕両両",
            /* OK        */ "偆傓丄僗僕偼椙偄側丅偑傫偽傟両",
            /* SUPERB    */ "僆僰僔偼嫮偄丅偍岾偣偵乧両"
        }
    },
    /* SNEAKY_SPIRITS */ {
        /* Entry Scene   */ &scene_sneaky_spirits,
        /* Level Name    */ "白色的鬼",
        /* Level Desc.   */ "敀偄儎僣偑 偙偪傜傪\n"
                            "僶僇偵偟偰偄傞両\n"
                            "儉僉乕僢両両\n"
                            "偙傜偟傔偪傖偍偆両",
        /* Level Icon    */ 1,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_sneaky_spirits_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "摝偘偨儎僣偵僀僞僘儔偝傟偨両",
            /* OK        */ "偟偲傔偨両",
            /* SUPERB    */ "偄偭傁偄 偟偲傔偨両両"
        }
    },
    /* SNEAKY_SPIRITS_2 */ {
        /* Entry Scene   */ &scene_sneaky_spirits_2,
        /* Level Name    */ "白色的鬼 2",
        /* Level Desc.   */ "敀偄儎僣偑 偙偪傜傪\n"
                            "僫儊偒偭偰偄傞両\n"
                            "儉僇儉僇乕僢両両\n"
                            "偙傜偟傔偪傖偍偆両",
        /* Level Icon    */ 53,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_sneaky_spirits_2_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "偆傢乕両 傗傜傟傎偆偩偄偩両",
            /* OK        */ "偍偽偗乽僫丄僫儞僟儓乣乿",
            /* SUPERB    */ "傒傫側丄斀徣偟偰僱両"
        }
    },
    /* SAMURAI_SLICE */ {
        /* Entry Scene   */ &scene_samurai_slice,
        /* Level Name    */ "居合斩",
        /* Level Desc.   */ "偦偙偺偗 偦偙偺偗\n"
                            "搝傜偑捠傞丅\n"
                            "偍偸偟偼 僒儉儔僀丄\n"
                            "巃傝幪偰 屼柶両",
        /* Level Icon    */ 18,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_samurai_slice_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "恘偙傏傟偟偪傑偭偨両",
            /* OK        */ "偝傜偵惛恑乮偟傚偆偠傫乯偡傋偟両",
            /* SUPERB    */ "愗傟偁偠丄 僒僀僐乕偩両両"
        }
    },
    /* SPACEBALL */ {
        /* Entry Scene   */ &scene_spaceball,
        /* Level Name    */ "空中击球手",
        /* Level Desc.   */ "僘乕儉傪偒偵偡傞側両\n"
                            "怱偱儃乕儖傪懪偰両\n"
                            "帇妎偵棅傞側両\n"
                            "偳傫偲峴偗乣両",
        /* Level Icon    */ 9,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_spaceball_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "偙傟偱 備傞偟偰偔偩偝偄丅",
            /* OK        */ "偝傜偵忋傪栚巜偟偰楙廗偩両",
            /* SUPERB    */ "偙傫側偺 傕傜偭偪傖偭偨乕両"
        }
    },
    /* SPACEBALL_2 */ {
        /* Entry Scene   */ &scene_spaceball_2,
        /* Level Name    */ "空中击球手 2",
        /* Level Desc.   */ "僘乕儉傪偒偵偡傞側両\n"
                            "怱偱儃乕儖傪懪偰両\n"
                            "帇妎偵棅傞側両\n"
                            "椳傕傆偔側乣両",
        /* Level Icon    */ 52,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_spaceball_2_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "僫僯僗儖僲僨僗僇乕両",
            /* OK        */ "偙傫側偲偙傠偱 廔傢傟側偄両",
            /* SUPERB    */ "傒傫側丄尒偰尒偰乕両"
        }
    },
    /* TAP_TRIAL */ {
        /* Entry Scene   */ &scene_tap_trial,
        /* Level Name    */ "踢踏舞",
        /* Level Desc.   */ "偁側偨偼彈偺巕丅\n"
                            "偲側傝偺僒儖偨偪偵\n"
                            "崌傢偣偰僞僢僾傪\n"
                            "偒偞傓僢僗両",
        /* Level Icon    */ 6,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_tap_trial_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "柍擮偩傢丅",
            /* OK        */ "偪傚偭偲丄 僿儞側僩僐偁偭偨偗偳僱両",
            /* SUPERB    */ "婥暘偼 傕偆丄僒僀僐乕両両"
        }
    },
    /* TAP_TRIAL_2 */ {
        /* Entry Scene   */ &scene_tap_trial_2,
        /* Level Name    */ "超级踢踏舞",
        /* Level Desc.   */ "僒儖偑僷儚乕傾僢僾両\n"
                            "偁側偨偼 偐傟傜偵\n"
                            "偮偄偰偄偗傞偐両丠\n"
                            "傑偗傞側乣両",
        /* Level Icon    */ 11,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_tap_trial_2_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "僈乕儞両",
            /* OK        */ "偆乣傫乧 偡偙偟 偪偑偆僇儞僕乧",
            /* SUPERB    */ "偙偺婥帩偪丄偲傑傜側乕偄両"
        }
    },
    /* MARCHING_ORDERS */ {
        /* Entry Scene   */ &scene_marching_orders,
        /* Level Name    */ "行军",
        /* Level Desc.   */ "峴恑傪偡傞偺偩丅\n"
                            "偐偭偰側峴摦偼僠乕儉傪僟儊偵偡傞両\n"
                            "偑傫偽傝偨傑偊丅",
        /* Level Icon    */ 21,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_marching_orders_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "傢偀偭両偍偄偰偗傏傝偝傟偨両",
            /* OK        */ "崱擔偺擟柋偼丄偍偦偆偠偱乕偡侓",
            /* SUPERB    */ "塅拡恖偺媬弌丄戝惉岟両両"
        }
    },
    /* MARCHING_ORDERS_2 */ {
        /* Entry Scene   */ &scene_marching_orders_2,
        /* Level Name    */ "行军 2",
        /* Level Desc.   */ "峴恑傪偡傞偺偩丅\n"
                            "偙傫偳偺偼 偪傚偭偲\n"
                            "僥僋僯僇儖偩両\n"
                            "偑傫偽傝偨傑偊丅",
        /* Level Icon    */ 20,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_marching_orders_2_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "偙丄偙傟偱偼丄僀僇儞両偆乣傓乧",
            /* OK        */ "偖偭両 傕偭偲僇僢僐傛偔偍偳傜側偗傟偽両",
            /* SUPERB    */ "偛傎偆傃偵丄偙傫側偺傕傜偭偰偟傑偭偨両両"
        }
    },
    /* WIZARDS_WALTZ */ {
        /* Entry Scene   */ &scene_wizards_waltz,
        /* Level Name    */ "魔法师",
        /* Level Desc.   */ "偁側偨偼傑傎偆巊偄丅\n"
                            "偝傒偟偑傝傗偺\n"
                            "偍偠傚偆偪傖傫偵壴傪\n"
                            "僾儗僛儞僩偟傛偆丅",
        /* Level Icon    */ 23,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_wizards_waltz_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "偙傫側偺儎僟乣丄 偙傢偄儓乣両",
            /* OK        */ "傕偭偲 壴偑偝偔偲 偆傟偟偄側乣丅",
            /* SUPERB    */ "傢乕偄丄 傢偨偟 傕偆 偝傒偟偔側偄儓両"
        }
    },
    /* BUNNY_HOP */ {
        /* Entry Scene   */ &scene_bunny_hop,
        /* Level Name    */ "跃兔",
        /* Level Desc.   */ "僕儍儞僾偑摼堄側\n"
                            "敀偄僂僒僊偝傫丅\n"
                            "價乕僩偵偺偭偰\n"
                            "奀傪傢偨傠偆両",
        /* Level Icon    */ 24,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_bunny_hop_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "寧偵婣傝偨乣偄両",
            /* OK        */ "拝抧偼幐攕偟偪傖偭偨乧",
            /* SUPERB    */ "傑傫揰両両"
        }
    },
    /* FIREWORKS */ {
        /* Entry Scene   */ &scene_fireworks,
        /* Level Name    */ "烟火",
        /* Level Desc.   */ "壞偲偄偊偽偝丄\n"
                            "傗偭傁壴壩偐側丠\n"
                            "怓偁偞傗偐偵\n"
                            "懪偪忋偘傛偆両",
        /* Level Icon    */ 26,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_fireworks_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "僎儂僎儂僢乧 幐攕丅",
            /* OK        */ "側偐側偐偺僨僉偩偤両",
            /* SUPERB    */ "壴壩偺偙偲側傜僆儗偵傑偐偣傠両両"
        }
    },
    /* POWER_CALLIGRAPHY */ {
        /* Entry Scene   */ &scene_power_calligraphy,
        /* Level Name    */ "节奏书法",
        /* Level Desc.   */ "昅傪巊偭偰擔杮岅傪\n"
                            "彂偒傑偡丅\n"
                            "偁側偨偑偡傞偺偼\n"
                            "僆僀僔僀偲偙偩偗丅",
        /* Level Icon    */ 28,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_power_power_calligraphy_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "傆乣乧  傾僇儞傢丅",
            /* OK        */ "偍廗帤傪 傕偭偲妝偟傕偆両",
            /* SUPERB    */ "偍廗帤偭偰 僲儕僲儕偩僱両両"
        }
    },
    /* POWER_CALLIGRAPHY_2 */ {
        /* Entry Scene   */ &scene_power_calligraphy,
        /* Level Name    */ "节奏书法 2",
        /* Level Desc.   */ "昅傪巊偭偰擔杮岅傪\n"
                            "彂偒傑偡丅\n"
                            "偁側偨偑偡傞偺偼\n"
                            "僆僀僔僀偲偙偩偗丅",
        /* Level Icon    */ 28,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_power_calligraphy_2_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "傆乣乧  傾僇儞傢丅",
            /* OK        */ "偍廗帤傪 傕偭偲妝偟傕偆両",
            /* SUPERB    */ "偍廗帤偭偰 僲儕僲儕偩僱両両"
        }
    },
    /* TOSS_BOYS */ {
        /* Entry Scene   */ &scene_toss_boys,
        /* Level Name    */ "传球少年",
        /* Level Desc.   */ "側偐傛偟俁恖慻丄\n"
                            "惡傪偐偗偁偄側偑傜\n"
                            "偄偮傕妝偟偔僩僗偺\n"
                            "楙廗偟偰傑偡丅",
        /* Level Icon    */ 30,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_toss_boys_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "僟儊僟儊偩傽乣両",
            /* OK        */ "傑偩傑偩傕偭偲忋庤偵偱偒傞偼偢両",
            /* SUPERB    */ "栚昗偼丄 僩僗悽奅慖庤尃 桪彑偩乕両両"
        }
    },
    /* TOSS_BOYS_2 */ {
        /* Entry Scene   */ &scene_toss_boys_2,
        /* Level Name    */ "传球少年 2",
        /* Level Desc.   */ "側偐傛偟俁恖慻丄\n"
                            "惡傪偐偗偁偄側偑傜\n"
                            "偄偮傕妝偟偔僩僗偺\n"
                            "楙廗偟偰傑偡丅",
        /* Level Icon    */ 29,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_toss_boys_2_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "儃儘儃儘偩傽乣両",
            /* OK        */ "偙傫側偲偙傠偱 廔傢傟側偄両",
            /* SUPERB    */ "嵟嫮儊儞僶乕偺偨傫偠傚偆偩乕両両"
        }
    },
    /* RAT_RACE */ {
        /* Entry Scene   */ &scene_rat_race,
        /* Level Name    */ "蹑鼠蹑脚",
        /* Level Desc.   */ "偁側偨偼僱僘儈丅\n"
                            "戝僗僉側僠乕僘傪\n"
                            "傔偞偟偰\n"
                            "僗僩僢僾仌僑乕両両",
        /* Level Icon    */ 31,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_rat_race_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "僠乕僘 怘傋偨偄傛乣乧",
            /* OK        */ "僠乕僘 偍偄偟偄偹丅",
            /* SUPERB    */ "傒傫側丄 傛偐偭偨僱両"
        }
    },
    /* TRAM_PAULINE */ {
        /* Entry Scene   */ &scene_tram_pauline,
        /* Level Name    */ "小蹦与小床",
        /* Level Desc.   */ "偙偓偮偹僩儔儞丄\n"
                            "偦偟偰億儕儞偺\n"
                            "傾僋儘僶僥傿僢僋僔儑乕偑偼偠傑傞儓両",
        /* Level Icon    */ 32,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_tram_pauline_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "戝偟偭傁偄偩乣両両",
            /* OK        */ "偪傘偆偲僴儞僷偱偟偨乧",
            /* SUPERB    */ "僐儞價僱乕僔儑儞 僶僢僠僔両両"
        }
    },
    /* SHOWTIME */ {
        /* Entry Scene   */ &scene_showtime,
        /* Level Name    */ "表演时间",
        /* Level Desc.   */ "儁儞僊儞孨偨偪偺\n"
                            "僔儑乕僞僀儉偑\n"
                            "偼偠傑傞儓両\n"
                            "傢乕偄傢乕偄両",
        /* Level Icon    */ 36,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_showtime_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "偍媞偝傫丄 偍偙偭偰偨僱乧",
            /* OK        */ "儃僋偨偪 偙傫側傕傫偠傖側偄偼偢乧",
            /* SUPERB    */ "傗偭偨両両 偍媞偝傫 妝偟傫偱偔傟偨乕両両"
        }
    },
    /* SPACE_DANCE */ {
        /* Entry Scene   */ &scene_space_dance,
        /* Level Name    */ "太空之舞",
        /* Level Desc.   */ "偙偙偼柍廳椡偺塅拡丅\n"
                            "偱傕丄 偍偳傠偆儓両\n"
                            "儗僢僣僗儁乕僗僟儞僗両",
        /* Level Icon    */ 40,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_space_dance_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "僽丄 僽儔僢僋儂乕儖偩乕両両",
            /* OK        */ "偁偺惎偺傛偆偵 偐偑傗偒偨偄側乧",
            /* SUPERB    */ "儃僋偨偪偼 僗儁乕僗僗乕僷乕僗僞乕両両"
        }
    },
    /* COSMIC_DANCE */ {
        /* Entry Scene   */ &scene_cosmic_dance,
        /* Level Name    */ "宇宙之舞",
        /* Level Desc.   */ "塅拡傪戙昞\偡傞\n"
                            "僟儞僒乕偨偪両\n"
                            "僉儗偨摦偒偵\n"
                            "偔偓偯偗偱偡両両",
        /* Level Icon    */ 16,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_cosmic_dance_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "偍丄偍傢傝偩乕両両",
            /* OK        */ "偁側偨偨偪偭偰 偙傫側傕偺側偺丠",
            /* SUPERB    */ "儃僋偨偪偼 僗乕僷乕僐僗儌僗僞乕偝両両"
        }
    },
    /* RAP_MEN */ {
        /* Entry Scene   */ &scene_rap_men,
        /* Level Name    */ "饶舌男",
        /* Level Desc.   */ "僋乕儖側傆偨傝慻偑\n"
                            "傗偭偰偒偨両\n"
                            "傾僣偄儔僢僾偱\n"
                            "戝僐乕僼儞偩偤両",
        /* Level Icon    */ 42,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_rap_men_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "僆儗偨偪丄 僟僒偄傗傫乧",
            /* OK        */ "僠僃僢丅 側傫偐 挷巕傢傞偄傢偀丅",
            /* SUPERB    */ "偙傟偐傜傕 傛傠偟偔 偨偺傫傑偭偣乕両両"
        }
    },
    /* RAP_WOMEN */ {
        /* Entry Scene   */ &scene_rap_women,
        /* Level Name    */ "饶舌女",
        /* Level Desc.   */ "偁偺儔僢僾儊儞偵\n"
                            "儔僀僶儖偑搊応偩両\n"
                            "僉儏乕僩側儃僀僗偵\n"
                            "傕偆 儊儘儊儘両",
        /* Level Icon    */ 15,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_rap_women_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "偙傫側傫 偪傖偆傢偀乧",
            /* OK        */ "側傫偐 偪傚偭偲 僀儅僀僠偐傕乧両",
            /* SUPERB    */ "偦偆偦偆 僐儗僐儗丄偙傟傗傢乕両両僀僃乕僀両"
        }
    },
    /* QUIZ_SHOW */ {
        /* Entry Scene   */ &scene_quiz_show,
        /* Level Name    */ "节奏问答",
        /* Level Desc.   */ "巌夛幰偺丄\n"
                            "乽偨偨偄偨夞悢乿傪\n"
                            "摉偰傞僇儞僞儞側\n"
                            "僋僀僘偱偡丅",
        /* Level Icon    */ 43,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_quiz_show_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "傑丄 偙傫側傕偺偝丅",
            /* OK        */ "師夞偵岦偗偰 曌嫮丄曌嫮乧Zzz",
            /* SUPERB    */ "悽奅椃峴 傕傜偭偪傖偭偨両"
        }
    },
    /* BON_ODORI */ {
        /* Entry Scene   */ &scene_bon_odori,
        /* Level Name    */ "The☆盂兰盆舞",
        /* Level Desc.   */ "一起配合\n"
                            "盂兰盆舞演唱\n"
                            "中的“邦”\n"
                            "来拍手吧。",
        /* Level Icon    */ 35,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_bon_odori_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "变冷了呢…",
            /* OK        */ "手持烟花令人苦乐参半",
            /* SUPERB    */ "啊，太有趣了！"
        }
    },
    /* BON_DANCE */ {
        /* Entry Scene   */ &scene_bon_dance,
        /* Level Name    */ "盂兰盆舞",
        /* Level Desc.   */ "这是现代版的\n"
                            "盂兰盆舞！\n"
                            "节奏感十足呢！\n"
                            "耶！",
        /* Level Icon    */ 17,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_bon_dance_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "别再跳了…",
            /* OK        */ "嗯，开始下雨了。",
            /* SUPERB    */ "盆舞真的太有意思了！"
        }
    },
    /* REMIX_1 */ {
        /* Entry Scene   */ &scene_remix_1,
        /* Level Name    */ "Remix 1",
        /* Level Desc.   */ "想检验一下\n"
                            "你的实力吗？\n"
                            "让之前的经验\n"
                            "发挥作用吧！",
        /* Level Icon    */ 22,
        /* Level Type    */ LEVEL_TYPE_REMIX,
        /* Epilogue GFX  */ epilogue_remix1_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "本次的餐点 ： 猫咪零食的级别",
            /* OK        */ "本次的餐点 ： 早餐的级别",
            /* SUPERB    */ "本次的餐点 ： 哇，晚宴的级别！！"
        }
    },
    /* REMIX_2 */ {
        /* Entry Scene   */ &scene_remix_2,
        /* Level Name    */ "Remix 2",
        /* Level Desc.   */ "想检验一下\n"
                            "你的实力吗？\n"
                            "让之前的经验\n"
                            "发挥作用吧！",
        /* Level Icon    */ 27,
        /* Level Type    */ LEVEL_TYPE_REMIX,
        /* Epilogue GFX  */ epilogue_remix2_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "本次的气氛 ： 一个人练习的水平",
            /* OK        */ "本次的气氛 ： 愉快接球的水平",
            /* SUPERB    */ "本次的气氛 ： 精彩比赛的水平！！"
        }
    },
    /* REMIX_3 */ {
        /* Entry Scene   */ &scene_remix_3,
        /* Level Name    */ "Remix 3",
        /* Level Desc.   */ "想检验一下\n"
                            "你的实力吗？\n"
                            "让之前的经验\n"
                            "发挥作用吧！",
        /* Level Icon    */ 33,
        /* Level Type    */ LEVEL_TYPE_REMIX,
        /* Epilogue GFX  */ epilogue_remix3_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "本次的爱意 ： 好像已经心碎了…",
            /* OK        */ "本次的爱意 ： 非常友好的感觉呢?",
            /* SUPERB    */ "本次的爱意 ： 甜甜蜜蜜—！！"
        }
    },
    /* REMIX_4 */ {
        /* Entry Scene   */ &scene_remix_4,
        /* Level Name    */ "Remix 4",
        /* Level Desc.   */ "想检验一下\n"
                            "你的实力吗？\n"
                            "让之前的经验\n"
                            "发挥作用吧！",
        /* Level Icon    */ 34,
        /* Level Type    */ LEVEL_TYPE_REMIX,
        /* Epilogue GFX  */ epilogue_remix4_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "本次的天气 ： 雨",
            /* OK        */ "本次的天气 ： 多云",
            /* SUPERB    */ "本次的天气 ： 开心的晴天！！"
        }
    },
    /* REMIX_5 */ {
        /* Entry Scene   */ &scene_remix_5,
        /* Level Name    */ "Remix 5",
        /* Level Desc.   */ "想检验一下\n"
                            "你的实力吗？\n"
                            "让之前的经验\n"
                            "发挥作用吧！",
        /* Level Icon    */ 39,
        /* Level Type    */ LEVEL_TYPE_REMIX,
        /* Epilogue GFX  */ epilogue_remix5_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "本次的二人 ： 被强行分开了！",
            /* OK        */ "本次的二人 ： 这种情况，有些不安啊…",
            /* SUPERB    */ "本次的二人 ： 无比的开心?"
        }
    },
    /* REMIX_6 */ {
        /* Entry Scene   */ &scene_remix_6,
        /* Level Name    */ "Remix 6",
        /* Level Desc.   */ "想检验一下\n"
                            "你的实力吗？\n"
                            "让之前的经验\n"
                            "发挥作用吧！",
        /* Level Icon    */ 2,
        /* Level Type    */ LEVEL_TYPE_REMIX,
        /* Epilogue GFX  */ epilogue_remix6_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "本次的内容 ： 有些孤单的感觉",
            /* OK        */ "本次的内容 ： 意外的感觉",
            /* SUPERB    */ "本次的内容 ： 难以置信的感觉！！"
        }
    },
    /* REMIX_7 */ {
        /* Entry Scene   */ &scene_remix_7,
        /* Level Name    */ "Remix 7",
        /* Level Desc.   */ "想检验一下\n"
                            "你的实力吗？\n"
                            "让之前的经验\n"
                            "发挥作用吧！",
        /* Level Icon    */ 19,
        /* Level Type    */ LEVEL_TYPE_REMIX,
        /* Epilogue GFX  */ epilogue_remix7_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "本次的恐龙 : 充满恶意",
            /* OK        */ "本次的恐龙 : 暖心的龙",
            /* SUPERB    */ "本次的恐龙 : 太好玩了~！！"
        }
    },
    /* REMIX_8 */ {
        /* Entry Scene   */ &scene_remix_8,
        /* Level Name    */ "Remix 8",
        /* Level Desc.   */ "想检验一下\n"
                            "你的实力吗？\n"
                            "让之前的经验\n"
                            "发挥作用吧！",
        /* Level Icon    */ 37,
        /* Level Type    */ LEVEL_TYPE_REMIX,
        /* Epilogue GFX  */ epilogue_remix8_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "本次的驾驶 ： 拜托…",
            /* OK        */ "本次的驾驶 ： 看来还要等很久啊",
            /* SUPERB    */ "本次的驾驶 ： 太爽快了！！"
        }
    },
    /* CAFE */ {
        /* Entry Scene   */ &scene_cafe,
        /* Level Name    */ "咖啡咨询",
        /* Level Desc.   */ "嵟嬤偺挷巕 偳偆丠\n"
                            "側偵偐婥偵側傟偽\n"
                            "偙偙偱憡択傪\n"
                            "偟偰傒傛偆丅",
        /* Level Icon    */ 45,
        /* Level Type    */ LEVEL_TYPE_BONUS,
        /* Epilogue GFX  */ epilogue_cafe_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ NULL,
            /* OK        */ NULL,
            /* SUPERB    */ NULL
        }
    },
    /* RHYTHM_TOYS */ {
        /* Entry Scene   */ &scene_toys_menu,
        /* Level Name    */ "节奏玩具",
        /* Level Desc.   */ "儊僟儖傪 偁偮傔偰\n"
                            "壒偺偱傞偍傕偪傖偱\n"
                            "偁偦傫偱傒偰僱両\n"
                            "偄偔偮偐偁傞儓丅",
        /* Level Icon    */ 46,
        /* Level Type    */ LEVEL_TYPE_BONUS,
        /* Epilogue GFX  */ epilogue_toys_menu_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ NULL,
            /* OK        */ NULL,
            /* SUPERB    */ NULL
        }
    },
    /* ENDLESS_GAMES */ {
        /* Entry Scene   */ &scene_endless_menu,
        /* Level Name    */ "无尽游戏",
        /* Level Desc.   */ "儊僟儖傪 偁偮傔偰\n"
                            "偲偔傋偮側僎乕儉偵\n"
                            "挧愴偟偰傒偰僱両\n"
                            "偄偔偮偐偁傞儓丅",
        /* Level Icon    */ 47,
        /* Level Type    */ LEVEL_TYPE_BONUS,
        /* Epilogue GFX  */ epilogue_endless_menu_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ NULL,
            /* OK        */ NULL,
            /* SUPERB    */ NULL
        }
    },
    /* DRUM_LESSONS */ {
        /* Entry Scene   */ &scene_lessons_menu,
        /* Level Name    */ "击鼓课程",
        /* Level Desc.   */ "儊僟儖傪 偁偮傔偰\n"
                            "僪儔儉偺儗僢僗儞傪\n"
                            "偆偗偰傒傛偆丅\n"
                            "忋庤偵側偭偰僱両",
        /* Level Icon    */ 48,
        /* Level Type    */ LEVEL_TYPE_BONUS,
        /* Epilogue GFX  */ epilogue_lessons_menu_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ NULL,
            /* OK        */ NULL,
            /* SUPERB    */ NULL
        }
    },
    /* STAFF_CREDIT */ {
        /* Entry Scene   */ &scene_staff_credit,
        /* Level Name    */ "制作人员",
        /* Level Desc.   */ "傕偟 傛偐偭偨傜\n"
                            "尒偰傒偰僱丅\n"
                            "偙偺僎乕儉偺\n"
                            "僗僞僢僼偨偪偱偡丅",
        /* Level Icon    */ 49,
        /* Level Type    */ LEVEL_TYPE_BONUS,
        /* Epilogue GFX  */ epilogue_staff_credit_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ NULL,
            /* OK        */ NULL,
            /* SUPERB    */ NULL
        }
    },
    /* LIVE_MENU */ {
        /* Entry Scene   */ &scene_drum_live,
        /* Level Name    */ "现场演出",
        /* Level Desc.   */ "儔僀僽偵弌墘偩両\n"
                            "僉儈偺儕僘儉姶偼\n"
                            "傛偄偲巚偆偐傜\n"
                            "偳偆偧偍婥妝偵乣",
        /* Level Icon    */ 44,
        /* Level Type    */ LEVEL_TYPE_BONUS,
        /* Epilogue GFX  */ epilogue_drum_live_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "偍偽偪傖傫乽傑偨偮偓丄偑傫偽傝側傛両乿",
            /* OK        */ "僆乕僫乕乽僉儈丄側偐側偐 僗僕偁傞儓乿",
            /* SUPERB    */ "僾儘僨儏乕僒乕乽偆偪偱丄僈儞僶偭偰傒側偄丠乿"
        }
    }
};
