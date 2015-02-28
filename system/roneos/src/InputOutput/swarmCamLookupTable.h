
#ifndef SWARMCAMLOOKUPTABLE_H_
#define SWARMCAMLOOKUPTABLE_H_

#include "../../src/System/typedefs.h"

const uint32 ircodes[1024] = { /* ECC 14->10 code table */
0x00000000, 0x00000197, 0x000002B9, 0x0000032E, 0x000004E5, /* 0-4 */
0x00000572, 0x0000065C, 0x000007CB, 0x00000874, 0x000009E3, /* 5-9 */
0x00000ACD, 0x00000B5A, 0x00000C91, 0x00000D06, 0x00000E28, /* 10-14 */
0x00000FBF, 0x000010E8, 0x0000117F, 0x00001251, 0x000013C6, /* 15-19 */
0x0000140D, 0x0000159A, 0x000016B4, 0x00001723, 0x0000189C, /* 20-24 */
0x0000190B, 0x00001A25, 0x00001BB2, 0x00001C79, 0x00001DEE, /* 25-29 */
0x00001EC0, 0x00001F57, 0x00002047, 0x000021D0, 0x000022FE, /* 30-34 */
0x00002369, 0x000024A2, 0x00002535, 0x0000261B, 0x0000278C, /* 35-39 */
0x00002833, 0x000029A4, 0x00002A8A, 0x00002B1D, 0x00002CD6, /* 40-44 */
0x00002D41, 0x00002E6F, 0x00002FF8, 0x000030AF, 0x00003138, /* 45-49 */
0x00003216, 0x00003381, 0x0000344A, 0x000035DD, 0x000036F3, /* 50-54 */
0x00003764, 0x000038DB, 0x0000394C, 0x00003A62, 0x00003BF5, /* 55-59 */
0x00003C3E, 0x00003DA9, 0x00003E87, 0x00003F10, 0x000040A7, /* 60-64 */
0x00004130, 0x0000421E, 0x00004389, 0x00004442, 0x000045D5, /* 65-69 */
0x000046FB, 0x0000476C, 0x000048D3, 0x00004944, 0x00004A6A, /* 70-74 */
0x00004BFD, 0x00004C36, 0x00004DA1, 0x00004E8F, 0x00004F18, /* 75-79 */
0x0000504F, 0x000051D8, 0x000052F6, 0x00005361, 0x000054AA, /* 80-84 */
0x0000553D, 0x00005613, 0x00005784, 0x0000583B, 0x000059AC, /* 85-89 */
0x00005A82, 0x00005B15, 0x00005CDE, 0x00005D49, 0x00005E67, /* 90-94 */
0x00005FF0, 0x000060E0, 0x00006177, 0x00006259, 0x000063CE, /* 95-99 */
0x00006405, 0x00006592, 0x000066BC, 0x0000672B, 0x00006894, /* 100-104 */
0x00006903, 0x00006A2D, 0x00006BBA, 0x00006C71, 0x00006DE6, /* 105-109 */
0x00006EC8, 0x00006F5F, 0x00007008, 0x0000719F, 0x000072B1, /* 110-114 */
0x00007326, 0x000074ED, 0x0000757A, 0x00007654, 0x000077C3, /* 115-119 */
0x0000787C, 0x000079EB, 0x00007AC5, 0x00007B52, 0x00007C99, /* 120-124 */
0x00007D0E, 0x00007E20, 0x00007FB7, 0x000080D9, 0x0000814E, /* 125-129 */
0x00008260, 0x000083F7, 0x0000843C, 0x000085AB, 0x00008685, /* 130-134 */
0x00008712, 0x000088AD, 0x0000893A, 0x00008A14, 0x00008B83, /* 135-139 */
0x00008C48, 0x00008DDF, 0x00008EF1, 0x00008F66, 0x00009031, /* 140-144 */
0x000091A6, 0x00009288, 0x0000931F, 0x000094D4, 0x00009543, /* 145-149 */
0x0000966D, 0x000097FA, 0x00009845, 0x000099D2, 0x00009AFC, /* 150-154 */
0x00009B6B, 0x00009CA0, 0x00009D37, 0x00009E19, 0x00009F8E, /* 155-159 */
0x0000A09E, 0x0000A109, 0x0000A227, 0x0000A3B0, 0x0000A47B, /* 160-164 */
0x0000A5EC, 0x0000A6C2, 0x0000A755, 0x0000A8EA, 0x0000A97D, /* 165-169 */
0x0000AA53, 0x0000ABC4, 0x0000AC0F, 0x0000AD98, 0x0000AEB6, /* 170-174 */
0x0000AF21, 0x0000B076, 0x0000B1E1, 0x0000B2CF, 0x0000B358, /* 175-179 */
0x0000B493, 0x0000B504, 0x0000B62A, 0x0000B7BD, 0x0000B802, /* 180-184 */
0x0000B995, 0x0000BABB, 0x0000BB2C, 0x0000BCE7, 0x0000BD70, /* 185-189 */
0x0000BE5E, 0x0000BFC9, 0x0000C07E, 0x0000C1E9, 0x0000C2C7, /* 190-194 */
0x0000C350, 0x0000C49B, 0x0000C50C, 0x0000C622, 0x0000C7B5, /* 195-199 */
0x0000C80A, 0x0000C99D, 0x0000CAB3, 0x0000CB24, 0x0000CCEF, /* 200-204 */
0x0000CD78, 0x0000CE56, 0x0000CFC1, 0x0000D096, 0x0000D101, /* 205-209 */
0x0000D22F, 0x0000D3B8, 0x0000D473, 0x0000D5E4, 0x0000D6CA, /* 210-214 */
0x0000D75D, 0x0000D8E2, 0x0000D975, 0x0000DA5B, 0x0000DBCC, /* 215-219 */
0x0000DC07, 0x0000DD90, 0x0000DEBE, 0x0000DF29, 0x0000E039, /* 220-224 */
0x0000E1AE, 0x0000E280, 0x0000E317, 0x0000E4DC, 0x0000E54B, /* 225-229 */
0x0000E665, 0x0000E7F2, 0x0000E84D, 0x0000E9DA, 0x0000EAF4, /* 230-234 */
0x0000EB63, 0x0000ECA8, 0x0000ED3F, 0x0000EE11, 0x0000EF86, /* 235-239 */
0x0000F0D1, 0x0000F146, 0x0000F268, 0x0000F3FF, 0x0000F434, /* 240-244 */
0x0000F5A3, 0x0000F68D, 0x0000F71A, 0x0000F8A5, 0x0000F932, /* 245-249 */
0x0000FA1C, 0x0000FB8B, 0x0000FC40, 0x0000FDD7, 0x0000FEF9, /* 250-254 */
0x0000FF6E, 0x00010025, 0x000101B2, 0x0001029C, 0x0001030B, /* 255-259 */
0x000104C0, 0x00010557, 0x00010679, 0x000107EE, 0x00010851, /* 260-264 */
0x000109C6, 0x00010AE8, 0x00010B7F, 0x00010CB4, 0x00010D23, /* 265-269 */
0x00010E0D, 0x00010F9A, 0x000110CD, 0x0001115A, 0x00011274, /* 270-274 */
0x000113E3, 0x00011428, 0x000115BF, 0x00011691, 0x00011706, /* 275-279 */
0x000118B9, 0x0001192E, 0x00011A00, 0x00011B97, 0x00011C5C, /* 280-284 */
0x00011DCB, 0x00011EE5, 0x00011F72, 0x00012062, 0x000121F5, /* 285-289 */
0x000122DB, 0x0001234C, 0x00012487, 0x00012510, 0x0001263E, /* 290-294 */
0x000127A9, 0x00012816, 0x00012981, 0x00012AAF, 0x00012B38, /* 295-299 */
0x00012CF3, 0x00012D64, 0x00012E4A, 0x00012FDD, 0x0001308A, /* 300-304 */
0x0001311D, 0x00013233, 0x000133A4, 0x0001346F, 0x000135F8, /* 305-309 */
0x000136D6, 0x00013741, 0x000138FE, 0x00013969, 0x00013A47, /* 310-314 */
0x00013BD0, 0x00013C1B, 0x00013D8C, 0x00013EA2, 0x00013F35, /* 315-319 */
0x00014082, 0x00014115, 0x0001423B, 0x000143AC, 0x00014467, /* 320-324 */
0x000145F0, 0x000146DE, 0x00014749, 0x000148F6, 0x00014961, /* 325-329 */
0x00014A4F, 0x00014BD8, 0x00014C13, 0x00014D84, 0x00014EAA, /* 330-334 */
0x00014F3D, 0x0001506A, 0x000151FD, 0x000152D3, 0x00015344, /* 335-339 */
0x0001548F, 0x00015518, 0x00015636, 0x000157A1, 0x0001581E, /* 340-344 */
0x00015989, 0x00015AA7, 0x00015B30, 0x00015CFB, 0x00015D6C, /* 345-349 */
0x00015E42, 0x00015FD5, 0x000160C5, 0x00016152, 0x0001627C, /* 350-354 */
0x000163EB, 0x00016420, 0x000165B7, 0x00016699, 0x0001670E, /* 355-359 */
0x000168B1, 0x00016926, 0x00016A08, 0x00016B9F, 0x00016C54, /* 360-364 */
0x00016DC3, 0x00016EED, 0x00016F7A, 0x0001702D, 0x000171BA, /* 365-369 */
0x00017294, 0x00017303, 0x000174C8, 0x0001755F, 0x00017671, /* 370-374 */
0x000177E6, 0x00017859, 0x000179CE, 0x00017AE0, 0x00017B77, /* 375-379 */
0x00017CBC, 0x00017D2B, 0x00017E05, 0x00017F92, 0x000180FC, /* 380-384 */
0x0001816B, 0x00018245, 0x000183D2, 0x00018419, 0x0001858E, /* 385-389 */
0x000186A0, 0x00018737, 0x00018888, 0x0001891F, 0x00018A31, /* 390-394 */
0x00018BA6, 0x00018C6D, 0x00018DFA, 0x00018ED4, 0x00018F43, /* 395-399 */
0x00019014, 0x00019183, 0x000192AD, 0x0001933A, 0x000194F1, /* 400-404 */
0x00019566, 0x00019648, 0x000197DF, 0x00019860, 0x000199F7, /* 405-409 */
0x00019AD9, 0x00019B4E, 0x00019C85, 0x00019D12, 0x00019E3C, /* 410-414 */
0x00019FAB, 0x0001A0BB, 0x0001A12C, 0x0001A202, 0x0001A395, /* 415-419 */
0x0001A45E, 0x0001A5C9, 0x0001A6E7, 0x0001A770, 0x0001A8CF, /* 420-424 */
0x0001A958, 0x0001AA76, 0x0001ABE1, 0x0001AC2A, 0x0001ADBD, /* 425-429 */
0x0001AE93, 0x0001AF04, 0x0001B053, 0x0001B1C4, 0x0001B2EA, /* 430-434 */
0x0001B37D, 0x0001B4B6, 0x0001B521, 0x0001B60F, 0x0001B798, /* 435-439 */
0x0001B827, 0x0001B9B0, 0x0001BA9E, 0x0001BB09, 0x0001BCC2, /* 440-444 */
0x0001BD55, 0x0001BE7B, 0x0001BFEC, 0x0001C05B, 0x0001C1CC, /* 445-449 */
0x0001C2E2, 0x0001C375, 0x0001C4BE, 0x0001C529, 0x0001C607, /* 450-454 */
0x0001C790, 0x0001C82F, 0x0001C9B8, 0x0001CA96, 0x0001CB01, /* 455-459 */
0x0001CCCA, 0x0001CD5D, 0x0001CE73, 0x0001CFE4, 0x0001D0B3, /* 460-464 */
0x0001D124, 0x0001D20A, 0x0001D39D, 0x0001D456, 0x0001D5C1, /* 465-469 */
0x0001D6EF, 0x0001D778, 0x0001D8C7, 0x0001D950, 0x0001DA7E, /* 470-474 */
0x0001DBE9, 0x0001DC22, 0x0001DDB5, 0x0001DE9B, 0x0001DF0C, /* 475-479 */
0x0001E01C, 0x0001E18B, 0x0001E2A5, 0x0001E332, 0x0001E4F9, /* 480-484 */
0x0001E56E, 0x0001E640, 0x0001E7D7, 0x0001E868, 0x0001E9FF, /* 485-489 */
0x0001EAD1, 0x0001EB46, 0x0001EC8D, 0x0001ED1A, 0x0001EE34, /* 490-494 */
0x0001EFA3, 0x0001F0F4, 0x0001F163, 0x0001F24D, 0x0001F3DA, /* 495-499 */
0x0001F411, 0x0001F586, 0x0001F6A8, 0x0001F73F, 0x0001F880, /* 500-504 */
0x0001F917, 0x0001FA39, 0x0001FBAE, 0x0001FC65, 0x0001FDF2, /* 505-509 */
0x0001FEDC, 0x0001FF4B, 0x00020063, 0x000201F4, 0x000202DA, /* 510-514 */
0x0002034D, 0x00020486, 0x00020511, 0x0002063F, 0x000207A8, /* 515-519 */
0x00020817, 0x00020980, 0x00020AAE, 0x00020B39, 0x00020CF2, /* 520-524 */
0x00020D65, 0x00020E4B, 0x00020FDC, 0x0002108B, 0x0002111C, /* 525-529 */
0x00021232, 0x000213A5, 0x0002146E, 0x000215F9, 0x000216D7, /* 530-534 */
0x00021740, 0x000218FF, 0x00021968, 0x00021A46, 0x00021BD1, /* 535-539 */
0x00021C1A, 0x00021D8D, 0x00021EA3, 0x00021F34, 0x00022024, /* 540-544 */
0x000221B3, 0x0002229D, 0x0002230A, 0x000224C1, 0x00022556, /* 545-549 */
0x00022678, 0x000227EF, 0x00022850, 0x000229C7, 0x00022AE9, /* 550-554 */
0x00022B7E, 0x00022CB5, 0x00022D22, 0x00022E0C, 0x00022F9B, /* 555-559 */
0x000230CC, 0x0002315B, 0x00023275, 0x000233E2, 0x00023429, /* 560-564 */
0x000235BE, 0x00023690, 0x00023707, 0x000238B8, 0x0002392F, /* 565-569 */
0x00023A01, 0x00023B96, 0x00023C5D, 0x00023DCA, 0x00023EE4, /* 570-574 */
0x00023F73, 0x000240C4, 0x00024153, 0x0002427D, 0x000243EA, /* 575-579 */
0x00024421, 0x000245B6, 0x00024698, 0x0002470F, 0x000248B0, /* 580-584 */
0x00024927, 0x00024A09, 0x00024B9E, 0x00024C55, 0x00024DC2, /* 585-589 */
0x00024EEC, 0x00024F7B, 0x0002502C, 0x000251BB, 0x00025295, /* 590-594 */
0x00025302, 0x000254C9, 0x0002555E, 0x00025670, 0x000257E7, /* 595-599 */
0x00025858, 0x000259CF, 0x00025AE1, 0x00025B76, 0x00025CBD, /* 600-604 */
0x00025D2A, 0x00025E04, 0x00025F93, 0x00026083, 0x00026114, /* 605-609 */
0x0002623A, 0x000263AD, 0x00026466, 0x000265F1, 0x000266DF, /* 610-614 */
0x00026748, 0x000268F7, 0x00026960, 0x00026A4E, 0x00026BD9, /* 615-619 */
0x00026C12, 0x00026D85, 0x00026EAB, 0x00026F3C, 0x0002706B, /* 620-624 */
0x000271FC, 0x000272D2, 0x00027345, 0x0002748E, 0x00027519, /* 625-629 */
0x00027637, 0x000277A0, 0x0002781F, 0x00027988, 0x00027AA6, /* 630-634 */
0x00027B31, 0x00027CFA, 0x00027D6D, 0x00027E43, 0x00027FD4, /* 635-639 */
0x000280BA, 0x0002812D, 0x00028203, 0x00028394, 0x0002845F, /* 640-644 */
0x000285C8, 0x000286E6, 0x00028771, 0x000288CE, 0x00028959, /* 645-649 */
0x00028A77, 0x00028BE0, 0x00028C2B, 0x00028DBC, 0x00028E92, /* 650-654 */
0x00028F05, 0x00029052, 0x000291C5, 0x000292EB, 0x0002937C, /* 655-659 */
0x000294B7, 0x00029520, 0x0002960E, 0x00029799, 0x00029826, /* 660-664 */
0x000299B1, 0x00029A9F, 0x00029B08, 0x00029CC3, 0x00029D54, /* 665-669 */
0x00029E7A, 0x00029FED, 0x0002A0FD, 0x0002A16A, 0x0002A244, /* 670-674 */
0x0002A3D3, 0x0002A418, 0x0002A58F, 0x0002A6A1, 0x0002A736, /* 675-679 */
0x0002A889, 0x0002A91E, 0x0002AA30, 0x0002ABA7, 0x0002AC6C, /* 680-684 */
0x0002ADFB, 0x0002AED5, 0x0002AF42, 0x0002B015, 0x0002B182, /* 685-689 */
0x0002B2AC, 0x0002B33B, 0x0002B4F0, 0x0002B567, 0x0002B649, /* 690-694 */
0x0002B7DE, 0x0002B861, 0x0002B9F6, 0x0002BAD8, 0x0002BB4F, /* 695-699 */
0x0002BC84, 0x0002BD13, 0x0002BE3D, 0x0002BFAA, 0x0002C01D, /* 700-704 */
0x0002C18A, 0x0002C2A4, 0x0002C333, 0x0002C4F8, 0x0002C56F, /* 705-709 */
0x0002C641, 0x0002C7D6, 0x0002C869, 0x0002C9FE, 0x0002CAD0, /* 710-714 */
0x0002CB47, 0x0002CC8C, 0x0002CD1B, 0x0002CE35, 0x0002CFA2, /* 715-719 */
0x0002D0F5, 0x0002D162, 0x0002D24C, 0x0002D3DB, 0x0002D410, /* 720-724 */
0x0002D587, 0x0002D6A9, 0x0002D73E, 0x0002D881, 0x0002D916, /* 725-729 */
0x0002DA38, 0x0002DBAF, 0x0002DC64, 0x0002DDF3, 0x0002DEDD, /* 730-734 */
0x0002DF4A, 0x0002E05A, 0x0002E1CD, 0x0002E2E3, 0x0002E374, /* 735-739 */
0x0002E4BF, 0x0002E528, 0x0002E606, 0x0002E791, 0x0002E82E, /* 740-744 */
0x0002E9B9, 0x0002EA97, 0x0002EB00, 0x0002ECCB, 0x0002ED5C, /* 745-749 */
0x0002EE72, 0x0002EFE5, 0x0002F0B2, 0x0002F125, 0x0002F20B, /* 750-754 */
0x0002F39C, 0x0002F457, 0x0002F5C0, 0x0002F6EE, 0x0002F779, /* 755-759 */
0x0002F8C6, 0x0002F951, 0x0002FA7F, 0x0002FBE8, 0x0002FC23, /* 760-764 */
0x0002FDB4, 0x0002FE9A, 0x0002FF0D, 0x00030046, 0x000301D1, /* 765-769 */
0x000302FF, 0x00030368, 0x000304A3, 0x00030534, 0x0003061A, /* 770-774 */
0x0003078D, 0x00030832, 0x000309A5, 0x00030A8B, 0x00030B1C, /* 775-779 */
0x00030CD7, 0x00030D40, 0x00030E6E, 0x00030FF9, 0x000310AE, /* 780-784 */
0x00031139, 0x00031217, 0x00031380, 0x0003144B, 0x000315DC, /* 785-789 */
0x000316F2, 0x00031765, 0x000318DA, 0x0003194D, 0x00031A63, /* 790-794 */
0x00031BF4, 0x00031C3F, 0x00031DA8, 0x00031E86, 0x00031F11, /* 795-799 */
0x00032001, 0x00032196, 0x000322B8, 0x0003232F, 0x000324E4, /* 800-804 */
0x00032573, 0x0003265D, 0x000327CA, 0x00032875, 0x000329E2, /* 805-809 */
0x00032ACC, 0x00032B5B, 0x00032C90, 0x00032D07, 0x00032E29, /* 810-814 */
0x00032FBE, 0x000330E9, 0x0003317E, 0x00033250, 0x000333C7, /* 815-819 */
0x0003340C, 0x0003359B, 0x000336B5, 0x00033722, 0x0003389D, /* 820-824 */
0x0003390A, 0x00033A24, 0x00033BB3, 0x00033C78, 0x00033DEF, /* 825-829 */
0x00033EC1, 0x00033F56, 0x000340E1, 0x00034176, 0x00034258, /* 830-834 */
0x000343CF, 0x00034404, 0x00034593, 0x000346BD, 0x0003472A, /* 835-839 */
0x00034895, 0x00034902, 0x00034A2C, 0x00034BBB, 0x00034C70, /* 840-844 */
0x00034DE7, 0x00034EC9, 0x00034F5E, 0x00035009, 0x0003519E, /* 845-849 */
0x000352B0, 0x00035327, 0x000354EC, 0x0003557B, 0x00035655, /* 850-854 */
0x000357C2, 0x0003587D, 0x000359EA, 0x00035AC4, 0x00035B53, /* 855-859 */
0x00035C98, 0x00035D0F, 0x00035E21, 0x00035FB6, 0x000360A6, /* 860-864 */
0x00036131, 0x0003621F, 0x00036388, 0x00036443, 0x000365D4, /* 865-869 */
0x000366FA, 0x0003676D, 0x000368D2, 0x00036945, 0x00036A6B, /* 870-874 */
0x00036BFC, 0x00036C37, 0x00036DA0, 0x00036E8E, 0x00036F19, /* 875-879 */
0x0003704E, 0x000371D9, 0x000372F7, 0x00037360, 0x000374AB, /* 880-884 */
0x0003753C, 0x00037612, 0x00037785, 0x0003783A, 0x000379AD, /* 885-889 */
0x00037A83, 0x00037B14, 0x00037CDF, 0x00037D48, 0x00037E66, /* 890-894 */
0x00037FF1, 0x0003809F, 0x00038108, 0x00038226, 0x000383B1, /* 895-899 */
0x0003847A, 0x000385ED, 0x000386C3, 0x00038754, 0x000388EB, /* 900-904 */
0x0003897C, 0x00038A52, 0x00038BC5, 0x00038C0E, 0x00038D99, /* 905-909 */
0x00038EB7, 0x00038F20, 0x00039077, 0x000391E0, 0x000392CE, /* 910-914 */
0x00039359, 0x00039492, 0x00039505, 0x0003962B, 0x000397BC, /* 915-919 */
0x00039803, 0x00039994, 0x00039ABA, 0x00039B2D, 0x00039CE6, /* 920-924 */
0x00039D71, 0x00039E5F, 0x00039FC8, 0x0003A0D8, 0x0003A14F, /* 925-929 */
0x0003A261, 0x0003A3F6, 0x0003A43D, 0x0003A5AA, 0x0003A684, /* 930-934 */
0x0003A713, 0x0003A8AC, 0x0003A93B, 0x0003AA15, 0x0003AB82, /* 935-939 */
0x0003AC49, 0x0003ADDE, 0x0003AEF0, 0x0003AF67, 0x0003B030, /* 940-944 */
0x0003B1A7, 0x0003B289, 0x0003B31E, 0x0003B4D5, 0x0003B542, /* 945-949 */
0x0003B66C, 0x0003B7FB, 0x0003B844, 0x0003B9D3, 0x0003BAFD, /* 950-954 */
0x0003BB6A, 0x0003BCA1, 0x0003BD36, 0x0003BE18, 0x0003BF8F, /* 955-959 */
0x0003C038, 0x0003C1AF, 0x0003C281, 0x0003C316, 0x0003C4DD, /* 960-964 */
0x0003C54A, 0x0003C664, 0x0003C7F3, 0x0003C84C, 0x0003C9DB, /* 965-969 */
0x0003CAF5, 0x0003CB62, 0x0003CCA9, 0x0003CD3E, 0x0003CE10, /* 970-974 */
0x0003CF87, 0x0003D0D0, 0x0003D147, 0x0003D269, 0x0003D3FE, /* 975-979 */
0x0003D435, 0x0003D5A2, 0x0003D68C, 0x0003D71B, 0x0003D8A4, /* 980-984 */
0x0003D933, 0x0003DA1D, 0x0003DB8A, 0x0003DC41, 0x0003DDD6, /* 985-989 */
0x0003DEF8, 0x0003DF6F, 0x0003E07F, 0x0003E1E8, 0x0003E2C6, /* 990-994 */
0x0003E351, 0x0003E49A, 0x0003E50D, 0x0003E623, 0x0003E7B4, /* 995-999 */
0x0003E80B, 0x0003E99C, 0x0003EAB2, 0x0003EB25, 0x0003ECEE, /* 1000-1004 */
0x0003ED79, 0x0003EE57, 0x0003EFC0, 0x0003F097, 0x0003F100, /* 1005-1009 */
0x0003F22E, 0x0003F3B9, 0x0003F472, 0x0003F5E5, 0x0003F6CB, /* 1010-1014 */
0x0003F75C, 0x0003F8E3, 0x0003F974, 0x0003FA5A, 0x0003FBCD, /* 1015-1019 */
0x0003FC06, 0x0003FD91, 0x0003FEBF, 0x0003FF28 /* 1020-1023 */
};

#endif /* SWARMCAMLOOKUPTABLE_H_ */
