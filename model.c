#include <gb/gb.h>
#include <gb/drawing.h>
#include <rand.h>
#include <stdio.h>

UINT8 img[784];
UINT8 c;
UINT16 x = 80, y = 72+4, i=3;
UINT8 debug = 0;
UINT8 draw = 1;

UINT8 inference() {
    UINT8 c;
    if (img[461]==0){
        if (img[378]==0){
            if (img[597]==0){
                if (img[514]==0){
                    if (img[623]==0){
                        if (img[405]==0){
                            if (img[153]==0){
                                if (img[569]==0){
                                    if (img[487]==0){
                                        if (img[377]==0){
                                            c = 7;}
                                        else {
                                            c = 7;}}
                                    else {
                                        if (img[465]==0){
                                            c = 5;}
                                        else {
                                            c = 9;}}}
                                else {
                                    if (img[436]==0){
                                        if (img[539]==0){
                                            c = 5;}
                                        else {
                                            c = 0;}}
                                    else {
                                        if (img[599]==0){
                                            c = 4;}
                                        else {
                                            c = 6;}}}}
                            else {
                                if (img[347]==0){
                                    if (img[203]==0){
                                        if (img[293]==0){
                                            c = 2;}
                                        else {
                                            c = 3;}}
                                    else {
                                        if (img[681]==0){
                                            c = 2;}
                                        else {
                                            c = 3;}}}
                                else {
                                    if (img[322]==0){
                                        if (img[269]==0){
                                            c = 6;}
                                        else {
                                            c = 9;}}
                                    else {
                                        if (img[239]==0){
                                            c = 5;}
                                        else {
                                            c = 9;}}}}}
                        else {
                            if (img[211]==0){
                                if (img[409]==0){
                                    if (img[356]==0){
                                        if (img[460]==0){
                                            c = 5;}
                                        else {
                                            c = 6;}}
                                    else {
                                        c = 4;}}
                                else {
                                    if (img[239]==0){
                                        if (img[97]==0){
                                            c = 4;}
                                        else {
                                            c = 6;}}
                                    else {
                                        if (img[372]==0){
                                            c = 7;}
                                        else {
                                            c = 9;}}}}
                            else {
                                if (img[353]==0){
                                    if (img[294]==0){
                                        if (img[519]==0){
                                            c = 5;}
                                        else {
                                            c = 9;}}
                                    else {
                                        if (img[518]==0){
                                            c = 3;}
                                        else {
                                            c = 4;}}}
                                else {
                                    if (img[427]==0){
                                        if (img[407]==0){
                                            c = 7;}
                                        else {
                                            c = 9;}}
                                    else {
                                        if (img[214]==0){
                                            c = 4;}
                                        else {
                                            c = 9;}}}}}}
                    else {
                        if (img[510]==0){
                            if (img[484]==0){
                                if (img[317]==0){
                                    if (img[154]==0){
                                        if (img[677]==0){
                                            c = 5;}
                                        else {
                                            c = 7;}}
                                    else {
                                        if (img[571]==0){
                                            c = 3;}
                                        else {
                                            c = 2;}}}
                                else {
                                    if (img[373]==0){
                                        if (img[316]==0){
                                            c = 3;}
                                        else {
                                            c = 5;}}
                                    else {
                                        c = 5;}}}
                            else {
                                if (img[499]==0){
                                    c = 0;}
                                else {
                                    c = 2;}}}
                        else {
                            if (img[409]==0){
                                if (img[745]==0){
                                    if (img[490]==0){
                                        if (img[174]==0){
                                            c = 0;}
                                        else {
                                            c = 3;}}
                                    else {
                                        c = 5;}}
                                else {
                                    c = 7;}}
                            else {
                                if (img[273]==0){
                                    if (img[291]==0){
                                        if (img[352]==0){
                                            c = 2;}
                                        else {
                                            c = 3;}}
                                    else {
                                        c = 5;}}
                                else {
                                    c = 0;}}}}}
                else {
                    if (img[270]==0){
                        if (img[244]==0){
                            if (img[296]==0){
                                if (img[659]==0){
                                    if (img[246]==0){
                                        if (img[446]==0){
                                            c = 6;}
                                        else {
                                            c = 2;}}
                                    else {
                                        if (img[490]==0){
                                            c = 0;}
                                        else {
                                            c = 4;}}}
                                else {
                                    if (img[355]==0){
                                        if (img[685]==0){
                                            c = 6;}
                                        else {
                                            c = 5;}}
                                    else {
                                        if (img[438]==0){
                                            c = 5;}
                                        else {
                                            c = 4;}}}}
                            else {
                                if (img[571]==0){
                                    if (img[157]==0){
                                        if (img[376]==0){
                                            c = 9;}
                                        else {
                                            c = 2;}}
                                    else {
                                        if (img[566]==0){
                                            c = 4;}
                                        else {
                                            c = 2;}}}
                                else {
                                    if (img[268]==0){
                                        if (img[429]==0){
                                            c = 5;}
                                        else {
                                            c = 6;}}
                                    else {
                                        if (img[490]==0){
                                            c = 0;}
                                        else {
                                            c = 2;}}}}}
                        else {
                            if (img[214]==0){
                                if (img[129]==0){
                                    if (img[487]==0){
                                        if (img[414]==0){
                                            c = 4;}
                                        else {
                                            c = 0;}}
                                    else {
                                        if (img[157]==0){
                                            c = 4;}
                                        else {
                                            c = 9;}}}
                                else {
                                    if (img[320]==0){
                                        c = 2;}
                                    else {
                                        if (img[466]==0){
                                            c = 6;}
                                        else {
                                            c = 0;}}}}
                            else {
                                if (img[437]==0){
                                    if (img[569]==0){
                                        if (img[271]==0){
                                            c = 5;}
                                        else {
                                            c = 0;}}
                                    else {
                                        c = 0;}}
                                else {
                                    if (img[600]==0){
                                        if (img[472]==0){
                                            c = 9;}
                                        else {
                                            c = 7;}}
                                    else {
                                        if (img[541]==0){
                                            c = 8;}
                                        else {
                                            c = 2;}}}}}}
                    else {
                        if (img[491]==0){
                            if (img[219]==0){
                                if (img[571]==0){
                                    if (img[716]==0){
                                        if (img[387]==0){
                                            c = 9;}
                                        else {
                                            c = 0;}}
                                    else {
                                        if (img[348]==0){
                                            c = 7;}
                                        else {
                                            c = 5;}}}
                                else {
                                    if (img[720]==0){
                                        if (img[435]==0){
                                            c = 0;}
                                        else {
                                            c = 8;}}
                                    else {
                                        c = 9;}}}
                            else {
                                c = 5;}}
                        else {
                            if (img[211]==0){
                                if (img[358]==0){
                                    if (img[294]==0){
                                        if (img[155]==0){
                                            c = 4;}
                                        else {
                                            c = 2;}}
                                    else {
                                        if (img[275]==0){
                                            c = 7;}
                                        else {
                                            c = 5;}}}
                                else {
                                    if (img[435]==0){
                                        c = 0;}
                                    else {
                                        if (img[319]==0){
                                            c = 6;}
                                        else {
                                            c = 4;}}}}
                            else {
                                if (img[456]==0){
                                    if (img[233]==0){
                                        if (img[348]==0){
                                            c = 2;}
                                        else {
                                            c = 0;}}
                                    else {
                                        if (img[397]==0){
                                            c = 7;}
                                        else {
                                            c = 9;}}}
                                else {
                                    if (img[320]==0){
                                        if (img[209]==0){
                                            c = 4;}
                                        else {
                                            c = 9;}}
                                    else {
                                        if (img[688]==0){
                                            c = 4;}
                                        else {
                                            c = 9;}}}}}}}}
            else {
                if (img[455]==0){
                    if (img[490]==0){
                        if (img[323]==0){
                            if (img[434]==0){
                                if (img[517]==0){
                                    if (img[149]==0){
                                        if (img[72]==0){
                                            c = 0;}
                                        else {
                                            c = 6;}}
                                    else {
                                        if (img[519]==0){
                                            c = 0;}
                                        else {
                                            c = 2;}}}
                                else {
                                    if (img[373]==0){
                                        if (img[453]==0){
                                            c = 2;}
                                        else {
                                            c = 0;}}
                                    else {
                                        if (img[541]==0){
                                            c = 5;}
                                        else {
                                            c = 0;}}}}
                            else {
                                if (img[514]==0){
                                    if (img[328]==0){
                                        if (img[326]==0){
                                            c = 5;}
                                        else {
                                            c = 9;}}
                                    else {
                                        if (img[568]==0){
                                            c = 0;}
                                        else {
                                            c = 2;}}}
                                else {
                                    if (img[602]==0){
                                        c = 5;}
                                    else {
                                        c = 6;}}}}
                        else {
                            if (img[240]==0){
                                if (img[234]==0){
                                    if (img[123]==0){
                                        if (img[243]==0){
                                            c = 5;}
                                        else {
                                            c = 3;}}
                                    else {
                                        if (img[238]==0){
                                            c = 5;}
                                        else {
                                            c = 3;}}}
                                else {
                                    if (img[272]==0){
                                        if (img[157]==0){
                                            c = 5;}
                                        else {
                                            c = 5;}}
                                    else {
                                        if (img[301]==0){
                                            c = 3;}
                                        else {
                                            c = 0;}}}}
                            else {
                                if (img[151]==0){
                                    if (img[485]==0){
                                        if (img[426]==0){
                                            c = 5;}
                                        else {
                                            c = 0;}}
                                    else {
                                        if (img[103]==0){
                                            c = 0;}
                                        else {
                                            c = 6;}}}
                                else {
                                    if (img[235]==0){
                                        if (img[72]==0){
                                            c = 3;}
                                        else {
                                            c = 2;}}
                                    else {
                                        if (img[685]==0){
                                            c = 3;}
                                        else {
                                            c = 5;}}}}}}
                    else {
                        if (img[708]==0){
                            if (img[402]==0){
                                if (img[322]==0){
                                    if (img[706]==0){
                                        if (img[544]==0){
                                            c = 2;}
                                        else {
                                            c = 2;}}
                                    else {
                                        c = 7;}}
                                else {
                                    if (img[462]==0){
                                        if (img[317]==0){
                                            c = 2;}
                                        else {
                                            c = 5;}}
                                    else {
                                        if (img[238]==0){
                                            c = 7;}
                                        else {
                                            c = 2;}}}}
                            else {
                                if (img[271]==0){
                                    if (img[653]==0){
                                        if (img[433]==0){
                                            c = 6;}
                                        else {
                                            c = 5;}}
                                    else {
                                        if (img[436]==0){
                                            c = 5;}
                                        else {
                                            c = 0;}}}
                                else {
                                    if (img[438]==0){
                                        if (img[130]==0){
                                            c = 5;}
                                        else {
                                            c = 0;}}
                                    else {
                                        if (img[321]==0){
                                            c = 2;}
                                        else {
                                            c = 0;}}}}}
                        else {
                            if (img[484]==0){
                                if (img[627]==0){
                                    if (img[203]==0){
                                        c = 7;}
                                    else {
                                        c = 2;}}
                                else {
                                    c = 7;}}
                            else {
                                c = 8;}}}}
                else {
                    if (img[435]==0){
                        if (img[72]==0){
                            if (img[488]==0){
                                if (img[352]==0){
                                    if (img[74]==0){
                                        if (img[68]==0){
                                            c = 0;}
                                        else {
                                            c = 6;}}
                                    else {
                                        if (img[98]==0){
                                            c = 6;}
                                        else {
                                            c = 0;}}}
                                else {
                                    if (img[270]==0){
                                        if (img[268]==0){
                                            c = 5;}
                                        else {
                                            c = 0;}}
                                    else {
                                        if (img[237]==0){
                                            c = 0;}
                                        else {
                                            c = 0;}}}}
                            else {
                                if (img[345]==0){
                                    if (img[351]==0){
                                        if (img[371]==0){
                                            c = 2;}
                                        else {
                                            c = 0;}}
                                    else {
                                        if (img[128]==0){
                                            c = 5;}
                                        else {
                                            c = 3;}}}
                                else {
                                    if (img[358]==0){
                                        if (img[522]==0){
                                            c = 5;}
                                        else {
                                            c = 0;}}
                                    else {
                                        if (img[511]==0){
                                            c = 6;}
                                        else {
                                            c = 0;}}}}}
                        else {
                            if (img[214]==0){
                                if (img[537]==0){
                                    c = 6;}
                                else {
                                    c = 5;}}
                            else {
                                if (img[291]==0){
                                    c = 2;}
                                else {
                                    if (img[182]==0){
                                        c = 3;}
                                    else {
                                        c = 0;}}}}}
                    else {
                        if (img[215]==0){
                            if (img[189]==0){
                                if (img[269]==0){
                                    if (img[164]==0){
                                        c = 6;}
                                    else {
                                        c = 4;}}
                                else {
                                    if (img[97]==0){
                                        if (img[437]==0){
                                            c = 6;}
                                        else {
                                            c = 0;}}
                                    else {
                                        c = 2;}}}
                            else {
                                if (img[266]==0){
                                    c = 2;}
                                else {
                                    c = 4;}}}
                        else {
                            if (img[346]==0){
                                if (img[343]==0){
                                    if (img[157]==0){
                                        if (img[515]==0){
                                            c = 0;}
                                        else {
                                            c = 5;}}
                                    else {
                                        if (img[106]==0){
                                            c = 2;}
                                        else {
                                            c = 3;}}}
                                else {
                                    if (img[208]==0){
                                        c = 6;}
                                    else {
                                        if (img[549]==0){
                                            c = 8;}
                                        else {
                                            c = 0;}}}}
                            else {
                                if (img[596]==0){
                                    if (img[542]==0){
                                        c = 7;}
                                    else {
                                        if (img[657]==0){
                                            c = 2;}
                                        else {
                                            c = 9;}}}
                                else {
                                    if (img[300]==0){
                                        if (img[132]==0){
                                            c = 0;}
                                        else {
                                            c = 6;}}
                                    else {
                                        if (img[213]==0){
                                            c = 4;}
                                        else {
                                            c = 0;}}}}}}}}}
        else {
            if (img[290]==0){
                if (img[152]==0){
                    if (img[247]==0){
                        if (img[486]==0){
                            if (img[625]==0){
                                if (img[208]==0){
                                    if (img[287]==0){
                                        if (img[711]==0){
                                            c = 1;}
                                        else {
                                            c = 9;}}
                                    else {
                                        if (img[571]==0){
                                            c = 4;}
                                        else {
                                            c = 6;}}}
                                else {
                                    if (img[315]==0){
                                        if (img[490]==0){
                                            c = 3;}
                                        else {
                                            c = 7;}}
                                    else {
                                        if (img[548]==0){
                                            c = 5;}
                                        else {
                                            c = 9;}}}}
                            else {
                                if (img[298]==0){
                                    if (img[188]==0){
                                        if (img[268]==0){
                                            c = 5;}
                                        else {
                                            c = 3;}}
                                    else {
                                        if (img[301]==0){
                                            c = 5;}
                                        else {
                                            c = 3;}}}
                                else {
                                    if (img[324]==0){
                                        if (img[455]==0){
                                            c = 9;}
                                        else {
                                            c = 2;}}
                                    else {
                                        if (img[304]==0){
                                            c = 3;}
                                        else {
                                            c = 5;}}}}}
                        else {
                            if (img[243]==0){
                                if (img[601]==0){
                                    if (img[304]==0){
                                        if (img[657]==0){
                                            c = 2;}
                                        else {
                                            c = 8;}}
                                    else {
                                        c = 5;}}
                                else {
                                    if (img[207]==0){
                                        if (img[97]==0){
                                            c = 6;}
                                        else {
                                            c = 2;}}
                                    else {
                                        if (img[186]==0){
                                            c = 3;}
                                        else {
                                            c = 5;}}}}
                            else {
                                if (img[407]==0){
                                    if (img[654]==0){
                                        if (img[608]==0){
                                            c = 0;}
                                        else {
                                            c = 2;}}
                                    else {
                                        if (img[430]==0){
                                            c = 3;}
                                        else {
                                            c = 0;}}}
                                else {
                                    if (img[401]==0){
                                        if (img[431]==0){
                                            c = 3;}
                                        else {
                                            c = 8;}}
                                    else {
                                        if (img[101]==0){
                                            c = 4;}
                                        else {
                                            c = 2;}}}}}}
                    else {
                        if (img[358]==0){
                            if (img[328]==0){
                                if (img[128]==0){
                                    if (img[741]==0){
                                        if (img[719]==0){
                                            c = 5;}
                                        else {
                                            c = 8;}}
                                    else {
                                        c = 9;}}
                                else {
                                    if (img[277]==0){
                                        c = 8;}
                                    else {
                                        c = 5;}}}
                            else {
                                if (img[276]==0){
                                    if (img[372]==0){
                                        if (img[462]==0){
                                            c = 3;}
                                        else {
                                            c = 8;}}
                                    else {
                                        if (img[324]==0){
                                            c = 4;}
                                        else {
                                            c = 7;}}}
                                else {
                                    if (img[190]==0){
                                        c = 5;}
                                    else {
                                        if (img[566]==0){
                                            c = 3;}
                                        else {
                                            c = 8;}}}}}
                        else {
                            if (img[267]==0){
                                if (img[412]==0){
                                    if (img[549]==0){
                                        if (img[293]==0){
                                            c = 8;}
                                        else {
                                            c = 4;}}
                                    else {
                                        c = 3;}}
                                else {
                                    if (img[159]==0){
                                        if (img[209]==0){
                                            c = 4;}
                                        else {
                                            c = 9;}}
                                    else {
                                        c = 2;}}}
                            else {
                                if (img[216]==0){
                                    if (img[353]==0){
                                        c = 4;}
                                    else {
                                        if (img[521]==0){
                                            c = 5;}
                                        else {
                                            c = 7;}}}
                                else {
                                    if (img[321]==0){
                                        c = 3;}
                                    else {
                                        c = 0;}}}}}}
                else {
                    if (img[486]==0){
                        if (img[296]==0){
                            if (img[315]==0){
                                if (img[490]==0){
                                    if (img[263]==0){
                                        if (img[455]==0){
                                            c = 3;}
                                        else {
                                            c = 2;}}
                                    else {
                                        if (img[291]==0){
                                            c = 3;}
                                        else {
                                            c = 5;}}}
                                else {
                                    if (img[265]==0){
                                        if (img[656]==0){
                                            c = 2;}
                                        else {
                                            c = 3;}}
                                    else {
                                        if (img[626]==0){
                                            c = 1;}
                                        else {
                                            c = 5;}}}}
                            else {
                                if (img[299]==0){
                                    if (img[267]==0){
                                        if (img[302]==0){
                                            c = 5;}
                                        else {
                                            c = 8;}}
                                    else {
                                        if (img[214]==0){
                                            c = 3;}
                                        else {
                                            c = 0;}}}
                                else {
                                    if (img[381]==0){
                                        if (img[189]==0){
                                            c = 2;}
                                        else {
                                            c = 5;}}
                                    else {
                                        if (img[373]==0){
                                            c = 3;}
                                        else {
                                            c = 8;}}}}}
                        else {
                            if (img[315]==0){
                                if (img[490]==0){
                                    if (img[529]==0){
                                        if (img[640]==0){
                                            c = 3;}
                                        else {
                                            c = 2;}}
                                    else {
                                        c = 2;}}
                                else {
                                    if (img[349]==0){
                                        if (img[517]==0){
                                            c = 1;}
                                        else {
                                            c = 2;}}
                                    else {
                                        if (img[323]==0){
                                            c = 2;}
                                        else {
                                            c = 3;}}}}
                            else {
                                if (img[343]==0){
                                    if (img[181]==0){
                                        c = 8;}
                                    else {
                                        c = 3;}}
                                else {
                                    if (img[287]==0){
                                        if (img[347]==0){
                                            c = 9;}
                                        else {
                                            c = 3;}}
                                    else {
                                        if (img[467]==0){
                                            c = 5;}
                                        else {
                                            c = 9;}}}}}}
                    else {
                        if (img[658]==0){
                            if (img[458]==0){
                                if (img[324]==0){
                                    if (img[71]==0){
                                        c = 5;}
                                    else {
                                        if (img[235]==0){
                                            c = 2;}
                                        else {
                                            c = 6;}}}
                                else {
                                    if (img[598]==0){
                                        c = 1;}
                                    else {
                                        c = 3;}}}
                            else {
                                if (img[540]==0){
                                    if (img[268]==0){
                                        if (img[185]==0){
                                            c = 6;}
                                        else {
                                            c = 5;}}
                                    else {
                                        c = 2;}}
                                else {
                                    if (img[343]==0){
                                        if (img[431]==0){
                                            c = 3;}
                                        else {
                                            c = 2;}}
                                    else {
                                        if (img[124]==0){
                                            c = 0;}
                                        else {
                                            c = 6;}}}}}
                        else {
                            if (img[431]==0){
                                if (img[316]==0){
                                    if (img[349]==0){
                                        c = 2;}
                                    else {
                                        if (img[118]==0){
                                            c = 3;}
                                        else {
                                            c = 2;}}}
                                else {
                                    if (img[240]==0){
                                        c = 5;}
                                    else {
                                        if (img[406]==0){
                                            c = 0;}
                                        else {
                                            c = 8;}}}}
                            else {
                                if (img[264]==0){
                                    if (img[315]==0){
                                        if (img[410]==0){
                                            c = 2;}
                                        else {
                                            c = 3;}}
                                    else {
                                        if (img[298]==0){
                                            c = 5;}
                                        else {
                                            c = 8;}}}
                                else {
                                    if (img[346]==0){
                                        if (img[454]==0){
                                            c = 8;}
                                        else {
                                            c = 3;}}
                                    else {
                                        if (img[294]==0){
                                            c = 5;}
                                        else {
                                            c = 8;}}}}}}}}
            else {
                if (img[326]==0){
                    if (img[296]==0){
                        if (img[487]==0){
                            if (img[329]==0){
                                if (img[186]==0){
                                    if (img[175]==0){
                                        if (img[485]==0){
                                            c = 5;}
                                        else {
                                            c = 6;}}
                                    else {
                                        if (img[264]==0){
                                            c = 5;}
                                        else {
                                            c = 3;}}}
                                else {
                                    if (img[330]==0){
                                        if (img[101]==0){
                                            c = 5;}
                                        else {
                                            c = 6;}}
                                    else {
                                        if (img[491]==0){
                                            c = 0;}
                                        else {
                                            c = 5;}}}}
                            else {
                                if (img[214]==0){
                                    if (img[158]==0){
                                        if (img[313]==0){
                                            c = 4;}
                                        else {
                                            c = 8;}}
                                    else {
                                        if (img[371]==0){
                                            c = 8;}
                                        else {
                                            c = 0;}}}
                                else {
                                    if (img[539]==0){
                                        if (img[404]==0){
                                            c = 0;}
                                        else {
                                            c = 9;}}
                                    else {
                                        if (img[381]==0){
                                            c = 0;}
                                        else {
                                            c = 8;}}}}}
                        else {
                            if (img[214]==0){
                                if (img[430]==0){
                                    if (img[460]==0){
                                        if (img[349]==0){
                                            c = 2;}
                                        else {
                                            c = 5;}}
                                    else {
                                        if (img[632]==0){
                                            c = 6;}
                                        else {
                                            c = 8;}}}
                                else {
                                    if (img[603]==0){
                                        if (img[432]==0){
                                            c = 6;}
                                        else {
                                            c = 5;}}
                                    else {
                                        if (img[295]==0){
                                            c = 6;}
                                        else {
                                            c = 6;}}}}
                            else {
                                if (img[571]==0){
                                    if (img[414]==0){
                                        c = 5;}
                                    else {
                                        c = 8;}}
                                else {
                                    if (img[428]==0){
                                        if (img[598]==0){
                                            c = 8;}
                                        else {
                                            c = 5;}}
                                    else {
                                        if (img[260]==0){
                                            c = 6;}
                                        else {
                                            c = 5;}}}}}}
                    else {
                        if (img[245]==0){
                            if (img[627]==0){
                                if (img[209]==0){
                                    if (img[265]==0){
                                        if (img[571]==0){
                                            c = 4;}
                                        else {
                                            c = 6;}}
                                    else {
                                        if (img[404]==0){
                                            c = 7;}
                                        else {
                                            c = 9;}}}
                                else {
                                    if (img[231]==0){
                                        if (img[682]==0){
                                            c = 9;}
                                        else {
                                            c = 3;}}
                                    else {
                                        if (img[376]==0){
                                            c = 7;}
                                        else {
                                            c = 3;}}}}
                            else {
                                if (img[486]==0){
                                    if (img[268]==0){
                                        if (img[270]==0){
                                            c = 5;}
                                        else {
                                            c = 8;}}
                                    else {
                                        if (img[438]==0){
                                            c = 3;}
                                        else {
                                            c = 3;}}}
                                else {
                                    if (img[573]==0){
                                        if (img[681]==0){
                                            c = 8;}
                                        else {
                                            c = 0;}}
                                    else {
                                        if (img[151]==0){
                                            c = 6;}
                                        else {
                                            c = 3;}}}}}
                        else {
                            if (img[358]==0){
                                if (img[486]==0){
                                    if (img[177]==0){
                                        if (img[329]==0){
                                            c = 5;}
                                        else {
                                            c = 4;}}
                                    else {
                                        if (img[679]==0){
                                            c = 5;}
                                        else {
                                            c = 3;}}}
                                else {
                                    if (img[219]==0){
                                        if (img[301]==0){
                                            c = 8;}
                                        else {
                                            c = 0;}}
                                    else {
                                        if (img[660]==0){
                                            c = 5;}
                                        else {
                                            c = 8;}}}}
                            else {
                                c = 0;}}}}
                else {
                    if (img[597]==0){
                        if (img[211]==0){
                            if (img[542]==0){
                                if (img[294]==0){
                                    if (img[408]==0){
                                        if (img[405]==0){
                                            c = 7;}
                                        else {
                                            c = 4;}}
                                    else {
                                        if (img[183]==0){
                                            c = 4;}
                                        else {
                                            c = 9;}}}
                                else {
                                    if (img[432]==0){
                                        if (img[292]==0){
                                            c = 4;}
                                        else {
                                            c = 7;}}
                                    else {
                                        if (img[266]==0){
                                            c = 4;}
                                        else {
                                            c = 9;}}}}
                            else {
                                if (img[214]==0){
                                    if (img[266]==0){
                                        if (img[286]==0){
                                            c = 6;}
                                        else {
                                            c = 5;}}
                                    else {
                                        if (img[153]==0){
                                            c = 5;}
                                        else {
                                            c = 6;}}}
                                else {
                                    if (img[575]==0){
                                        c = 8;}
                                    else {
                                        if (img[596]==0){
                                            c = 0;}
                                        else {
                                            c = 2;}}}}}
                        else {
                            if (img[155]==0){
                                if (img[404]==0){
                                    if (img[294]==0){
                                        if (img[177]==0){
                                            c = 9;}
                                        else {
                                            c = 8;}}
                                    else {
                                        if (img[182]==0){
                                            c = 7;}
                                        else {
                                            c = 9;}}}
                                else {
                                    if (img[190]==0){
                                        if (img[651]==0){
                                            c = 9;}
                                        else {
                                            c = 3;}}
                                    else {
                                        if (img[213]==0){
                                            c = 4;}
                                        else {
                                            c = 5;}}}}
                            else {
                                if (img[651]==0){
                                    if (img[100]==0){
                                        if (img[298]==0){
                                            c = 5;}
                                        else {
                                            c = 9;}}
                                    else {
                                        c = 6;}}
                                else {
                                    if (img[297]==0){
                                        if (img[267]==0){
                                            c = 5;}
                                        else {
                                            c = 3;}}
                                    else {
                                        if (img[514]==0){
                                            c = 3;}
                                        else {
                                            c = 8;}}}}}}
                    else {
                        if (img[485]==0){
                            if (img[270]==0){
                                if (img[158]==0){
                                    if (img[708]==0){
                                        if (img[267]==0){
                                            c = 5;}
                                        else {
                                            c = 3;}}
                                    else {
                                        c = 9;}}
                                else {
                                    if (img[271]==0){
                                        if (img[346]==0){
                                            c = 3;}
                                        else {
                                            c = 5;}}
                                    else {
                                        if (img[372]==0){
                                            c = 3;}
                                        else {
                                            c = 8;}}}}
                            else {
                                if (img[330]==0){
                                    if (img[595]==0){
                                        if (img[524]==0){
                                            c = 9;}
                                        else {
                                            c = 3;}}
                                    else {
                                        if (img[247]==0){
                                            c = 3;}
                                        else {
                                            c = 5;}}}
                                else {
                                    if (img[481]==0){
                                        if (img[304]==0){
                                            c = 9;}
                                        else {
                                            c = 5;}}
                                    else {
                                        if (img[239]==0){
                                            c = 0;}
                                        else {
                                            c = 0;}}}}}
                        else {
                            if (img[385]==0){
                                if (img[545]==0){
                                    if (img[407]==0){
                                        if (img[575]==0){
                                            c = 8;}
                                        else {
                                            c = 0;}}
                                    else {
                                        if (img[95]==0){
                                            c = 8;}
                                        else {
                                            c = 2;}}}
                                else {
                                    if (img[247]==0){
                                        if (img[429]==0){
                                            c = 3;}
                                        else {
                                            c = 2;}}
                                    else {
                                        if (img[458]==0){
                                            c = 5;}
                                        else {
                                            c = 8;}}}}
                            else {
                                if (img[242]==0){
                                    if (img[657]==0){
                                        if (img[188]==0){
                                            c = 6;}
                                        else {
                                            c = 8;}}
                                    else {
                                        if (img[272]==0){
                                            c = 5;}
                                        else {
                                            c = 8;}}}
                                else {
                                    if (img[329]==0){
                                        if (img[410]==0){
                                            c = 8;}
                                        else {
                                            c = 3;}}
                                    else {
                                        if (img[266]==0){
                                            c = 8;}
                                        else {
                                            c = 0;}}}}}}}}}}
    else {
        if (img[429]==0){
            if (img[347]==0){
                if (img[350]==0){
                    if (img[155]==0){
                        if (img[455]==0){
                            if (img[551]==0){
                                if (img[432]==0){
                                    if (img[159]==0){
                                        if (img[152]==0){
                                            c = 7;}
                                        else {
                                            c = 2;}}
                                    else {
                                        if (img[324]==0){
                                            c = 2;}
                                        else {
                                            c = 1;}}}
                                else {
                                    if (img[401]==0){
                                        if (img[437]==0){
                                            c = 1;}
                                        else {
                                            c = 7;}}
                                    else {
                                        if (img[380]==0){
                                            c = 5;}
                                        else {
                                            c = 9;}}}}
                            else {
                                if (img[543]==0){
                                    if (img[405]==0){
                                        if (img[270]==0){
                                            c = 2;}
                                        else {
                                            c = 7;}}
                                    else {
                                        if (img[372]==0){
                                            c = 3;}
                                        else {
                                            c = 5;}}}
                                else {
                                    if (img[688]==0){
                                        if (img[682]==0){
                                            c = 2;}
                                        else {
                                            c = 7;}}
                                    else {
                                        if (img[431]==0){
                                            c = 7;}
                                        else {
                                            c = 8;}}}}}
                        else {
                            if (img[211]==0){
                                if (img[570]==0){
                                    if (img[266]==0){
                                        if (img[487]==0){
                                            c = 6;}
                                        else {
                                            c = 4;}}
                                    else {
                                        if (img[484]==0){
                                            c = 7;}
                                        else {
                                            c = 9;}}}
                                else {
                                    if (img[243]==0){
                                        if (img[217]==0){
                                            c = 6;}
                                        else {
                                            c = 4;}}
                                    else {
                                        if (img[453]==0){
                                            c = 2;}
                                        else {
                                            c = 4;}}}}
                            else {
                                if (img[343]==0){
                                    if (img[538]==0){
                                        if (img[427]==0){
                                            c = 7;}
                                        else {
                                            c = 9;}}
                                    else {
                                        if (img[714]==0){
                                            c = 2;}
                                        else {
                                            c = 3;}}}
                                else {
                                    if (img[157]==0){
                                        if (img[304]==0){
                                            c = 9;}
                                        else {
                                            c = 4;}}
                                    else {
                                        if (img[272]==0){
                                            c = 4;}
                                        else {
                                            c = 0;}}}}}}
                    else {
                        if (img[399]==0){
                            if (img[404]==0){
                                if (img[683]==0){
                                    if (img[397]==0){
                                        if (img[679]==0){
                                            c = 2;}
                                        else {
                                            c = 2;}}
                                    else {
                                        if (img[257]==0){
                                            c = 6;}
                                        else {
                                            c = 4;}}}
                                else {
                                    if (img[571]==0){
                                        if (img[486]==0){
                                            c = 3;}
                                        else {
                                            c = 2;}}
                                    else {
                                        if (img[205]==0){
                                            c = 7;}
                                        else {
                                            c = 2;}}}}
                            else {
                                if (img[485]==0){
                                    if (img[543]==0){
                                        if (img[373]==0){
                                            c = 3;}
                                        else {
                                            c = 5;}}
                                    else {
                                        if (img[684]==0){
                                            c = 2;}
                                        else {
                                            c = 8;}}}
                                else {
                                    if (img[374]==0){
                                        if (img[348]==0){
                                            c = 2;}
                                        else {
                                            c = 8;}}
                                    else {
                                        if (img[544]==0){
                                            c = 8;}
                                        else {
                                            c = 2;}}}}}
                        else {
                            if (img[214]==0){
                                if (img[661]==0){
                                    if (img[243]==0){
                                        if (img[663]==0){
                                            c = 6;}
                                        else {
                                            c = 4;}}
                                    else {
                                        if (img[575]==0){
                                            c = 9;}
                                        else {
                                            c = 2;}}}
                                else {
                                    if (img[326]==0){
                                        if (img[187]==0){
                                            c = 4;}
                                        else {
                                            c = 6;}}
                                    else {
                                        c = 9;}}}
                            else {
                                if (img[626]==0){
                                    if (img[438]==0){
                                        if (img[656]==0){
                                            c = 2;}
                                        else {
                                            c = 3;}}
                                    else {
                                        if (img[516]==0){
                                            c = 6;}
                                        else {
                                            c = 9;}}}
                                else {
                                    if (img[302]==0){
                                        if (img[299]==0){
                                            c = 6;}
                                        else {
                                            c = 2;}}
                                    else {
                                        if (img[497]==0){
                                            c = 8;}
                                        else {
                                            c = 0;}}}}}}}
                else {
                    if (img[206]==0){
                        if (img[550]==0){
                            if (img[328]==0){
                                if (img[493]==0){
                                    if (img[608]==0){
                                        if (img[288]==0){
                                            c = 1;}
                                        else {
                                            c = 7;}}
                                    else {
                                        if (img[291]==0){
                                            c = 2;}
                                        else {
                                            c = 1;}}}
                                else {
                                    if (img[515]==0){
                                        if (img[625]==0){
                                            c = 1;}
                                        else {
                                            c = 3;}}
                                    else {
                                        if (img[655]==0){
                                            c = 6;}
                                        else {
                                            c = 8;}}}}
                            else {
                                if (img[293]==0){
                                    if (img[183]==0){
                                        if (img[189]==0){
                                            c = 5;}
                                        else {
                                            c = 1;}}
                                    else {
                                        if (img[294]==0){
                                            c = 3;}
                                        else {
                                            c = 8;}}}
                                else {
                                    if (img[514]==0){
                                        if (img[593]==0){
                                            c = 1;}
                                        else {
                                            c = 3;}}
                                    else {
                                        if (img[454]==0){
                                            c = 8;}
                                        else {
                                            c = 2;}}}}}
                        else {
                            if (img[552]==0){
                                if (img[515]==0){
                                    if (img[325]==0){
                                        if (img[546]==0){
                                            c = 8;}
                                        else {
                                            c = 1;}}
                                    else {
                                        if (img[513]==0){
                                            c = 3;}
                                        else {
                                            c = 8;}}}
                                else {
                                    if (img[264]==0){
                                        if (img[154]==0){
                                            c = 6;}
                                        else {
                                            c = 2;}}
                                    else {
                                        if (img[656]==0){
                                            c = 8;}
                                        else {
                                            c = 8;}}}}
                            else {
                                if (img[426]==0){
                                    if (img[488]==0){
                                        if (img[489]==0){
                                            c = 3;}
                                        else {
                                            c = 1;}}
                                    else {
                                        if (img[686]==0){
                                            c = 2;}
                                        else {
                                            c = 3;}}}
                                else {
                                    if (img[661]==0){
                                        if (img[398]==0){
                                            c = 3;}
                                        else {
                                            c = 6;}}
                                    else {
                                        if (img[319]==0){
                                            c = 4;}
                                        else {
                                            c = 9;}}}}}}
                    else {
                        if (img[515]==0){
                            if (img[517]==0){
                                if (img[656]==0){
                                    if (img[320]==0){
                                        if (img[377]==0){
                                            c = 7;}
                                        else {
                                            c = 3;}}
                                    else {
                                        if (img[412]==0){
                                            c = 1;}
                                        else {
                                            c = 3;}}}
                                else {
                                    if (img[457]==0){
                                        if (img[359]==0){
                                            c = 3;}
                                        else {
                                            c = 0;}}
                                    else {
                                        if (img[568]==0){
                                            c = 3;}
                                        else {
                                            c = 8;}}}}
                            else {
                                if (img[152]==0){
                                    if (img[545]==0){
                                        if (img[432]==0){
                                            c = 7;}
                                        else {
                                            c = 3;}}
                                    else {
                                        if (img[596]==0){
                                            c = 7;}
                                        else {
                                            c = 3;}}}
                                else {
                                    if (img[213]==0){
                                        if (img[321]==0){
                                            c = 2;}
                                        else {
                                            c = 1;}}
                                    else {
                                        if (img[210]==0){
                                            c = 8;}
                                        else {
                                            c = 3;}}}}}
                        else {
                            if (img[320]==0){
                                if (img[685]==0){
                                    if (img[427]==0){
                                        if (img[682]==0){
                                            c = 2;}
                                        else {
                                            c = 7;}}
                                    else {
                                        if (img[574]==0){
                                            c = 9;}
                                        else {
                                            c = 6;}}}
                                else {
                                    if (img[606]==0){
                                        if (img[153]==0){
                                            c = 7;}
                                        else {
                                            c = 3;}}
                                    else {
                                        if (img[521]==0){
                                            c = 2;}
                                        else {
                                            c = 3;}}}}
                            else {
                                if (img[499]==0){
                                    if (img[609]==0){
                                        if (img[258]==0){
                                            c = 8;}
                                        else {
                                            c = 7;}}
                                    else {
                                        if (img[602]==0){
                                            c = 8;}
                                        else {
                                            c = 2;}}}
                                else {
                                    if (img[272]==0){
                                        if (img[460]==0){
                                            c = 1;}
                                        else {
                                            c = 2;}}
                                    else {
                                        c = 7;}}}}}}}
            else {
                if (img[515]==0){
                    if (img[380]==0){
                        if (img[351]==0){
                            if (img[410]==0){
                                if (img[149]==0){
                                    if (img[123]==0){
                                        if (img[690]==0){
                                            c = 5;}
                                        else {
                                            c = 5;}}
                                    else {
                                        if (img[403]==0){
                                            c = 1;}
                                        else {
                                            c = 3;}}}
                                else {
                                    if (img[262]==0){
                                        if (img[544]==0){
                                            c = 3;}
                                        else {
                                            c = 2;}}
                                    else {
                                        if (img[660]==0){
                                            c = 1;}
                                        else {
                                            c = 5;}}}}
                            else {
                                if (img[400]==0){
                                    if (img[659]==0){
                                        if (img[327]==0){
                                            c = 4;}
                                        else {
                                            c = 9;}}
                                    else {
                                        if (img[573]==0){
                                            c = 8;}
                                        else {
                                            c = 8;}}}
                                else {
                                    if (img[567]==0){
                                        if (img[158]==0){
                                            c = 4;}
                                        else {
                                            c = 8;}}
                                    else {
                                        if (img[186]==0){
                                            c = 6;}
                                        else {
                                            c = 2;}}}}}
                        else {
                            if (img[296]==0){
                                if (img[157]==0){
                                    if (img[379]==0){
                                        if (img[148]==0){
                                            c = 7;}
                                        else {
                                            c = 3;}}
                                    else {
                                        c = 1;}}
                                else {
                                    c = 5;}}
                            else {
                                if (img[274]==0){
                                    if (img[517]==0){
                                        if (img[485]==0){
                                            c = 3;}
                                        else {
                                            c = 8;}}
                                    else {
                                        if (img[318]==0){
                                            c = 1;}
                                        else {
                                            c = 8;}}}
                                else {
                                    if (img[384]==0){
                                        if (img[270]==0){
                                            c = 3;}
                                        else {
                                            c = 5;}}
                                    else {
                                        if (img[575]==0){
                                            c = 7;}
                                        else {
                                            c = 0;}}}}}}
                    else {
                        if (img[155]==0){
                            if (img[404]==0){
                                if (img[431]==0){
                                    if (img[377]==0){
                                        if (img[149]==0){
                                            c = 7;}
                                        else {
                                            c = 2;}}
                                    else {
                                        if (img[607]==0){
                                            c = 9;}
                                        else {
                                            c = 8;}}}
                                else {
                                    if (img[211]==0){
                                        if (img[321]==0){
                                            c = 4;}
                                        else {
                                            c = 9;}}
                                    else {
                                        if (img[205]==0){
                                            c = 9;}
                                        else {
                                            c = 7;}}}}
                            else {
                                if (img[211]==0){
                                    if (img[294]==0){
                                        if (img[97]==0){
                                            c = 4;}
                                        else {
                                            c = 6;}}
                                    else {
                                        if (img[577]==0){
                                            c = 4;}
                                        else {
                                            c = 1;}}}
                                else {
                                    if (img[578]==0){
                                        if (img[513]==0){
                                            c = 9;}
                                        else {
                                            c = 8;}}
                                    else {
                                        if (img[490]==0){
                                            c = 3;}
                                        else {
                                            c = 8;}}}}}
                        else {
                            if (img[322]==0){
                                if (img[490]==0){
                                    if (img[485]==0){
                                        if (img[326]==0){
                                            c = 5;}
                                        else {
                                            c = 3;}}
                                    else {
                                        if (img[295]==0){
                                            c = 8;}
                                        else {
                                            c = 2;}}}
                                else {
                                    if (img[405]==0){
                                        if (img[599]==0){
                                            c = 4;}
                                        else {
                                            c = 8;}}
                                    else {
                                        if (img[659]==0){
                                            c = 8;}
                                        else {
                                            c = 8;}}}}
                            else {
                                if (img[517]==0){
                                    if (img[179]==0){
                                        if (img[157]==0){
                                            c = 4;}
                                        else {
                                            c = 5;}}
                                    else {
                                        if (img[457]==0){
                                            c = 3;}
                                        else {
                                            c = 8;}}}
                                else {
                                    if (img[266]==0){
                                        if (img[597]==0){
                                            c = 8;}
                                        else {
                                            c = 3;}}
                                    else {
                                        if (img[494]==0){
                                            c = 1;}
                                        else {
                                            c = 8;}}}}}}}
                else {
                    if (img[657]==0){
                        if (img[271]==0){
                            if (img[654]==0){
                                if (img[431]==0){
                                    if (img[265]==0){
                                        if (img[601]==0){
                                            c = 2;}
                                        else {
                                            c = 8;}}
                                    else {
                                        if (img[428]==0){
                                            c = 2;}
                                        else {
                                            c = 6;}}}
                                else {
                                    if (img[660]==0){
                                        if (img[554]==0){
                                            c = 6;}
                                        else {
                                            c = 2;}}
                                    else {
                                        if (img[573]==0){
                                            c = 4;}
                                        else {
                                            c = 8;}}}}
                            else {
                                if (img[595]==0){
                                    if (img[680]==0){
                                        if (img[294]==0){
                                            c = 8;}
                                        else {
                                            c = 1;}}
                                    else {
                                        if (img[459]==0){
                                            c = 9;}
                                        else {
                                            c = 8;}}}
                                else {
                                    if (img[608]==0){
                                        if (img[606]==0){
                                            c = 8;}
                                        else {
                                            c = 2;}}
                                    else {
                                        c = 2;}}}}
                        else {
                            if (img[404]==0){
                                if (img[158]==0){
                                    if (img[512]==0){
                                        if (img[377]==0){
                                            c = 7;}
                                        else {
                                            c = 9;}}
                                    else {
                                        if (img[399]==0){
                                            c = 2;}
                                        else {
                                            c = 9;}}}
                                else {
                                    if (img[377]==0){
                                        if (img[425]==0){
                                            c = 2;}
                                        else {
                                            c = 9;}}
                                    else {
                                        if (img[432]==0){
                                            c = 2;}
                                        else {
                                            c = 8;}}}}
                            else {
                                if (img[459]==0){
                                    if (img[539]==0){
                                        if (img[213]==0){
                                            c = 4;}
                                        else {
                                            c = 9;}}
                                    else {
                                        if (img[127]==0){
                                            c = 5;}
                                        else {
                                            c = 2;}}}
                                else {
                                    if (img[211]==0){
                                        if (img[247]==0){
                                            c = 8;}
                                        else {
                                            c = 5;}}
                                    else {
                                        if (img[455]==0){
                                            c = 8;}
                                        else {
                                            c = 2;}}}}}}
                    else {
                        if (img[294]==0){
                            if (img[434]==0){
                                if (img[495]==0){
                                    if (img[570]==0){
                                        c = 0;}
                                    else {
                                        if (img[133]==0){
                                            c = 8;}
                                        else {
                                            c = 5;}}}
                                else {
                                    if (img[264]==0){
                                        c = 5;}
                                    else {
                                        if (img[400]==0){
                                            c = 0;}
                                        else {
                                            c = 2;}}}}
                            else {
                                if (img[397]==0){
                                    if (img[405]==0){
                                        if (img[636]==0){
                                            c = 8;}
                                        else {
                                            c = 2;}}
                                    else {
                                        if (img[488]==0){
                                            c = 8;}
                                        else {
                                            c = 8;}}}
                                else {
                                    c = 6;}}}
                        else {
                            if (img[405]==0){
                                if (img[487]==0){
                                    if (img[574]==0){
                                        if (img[526]==0){
                                            c = 8;}
                                        else {
                                            c = 2;}}
                                    else {
                                        c = 7;}}
                                else {
                                    if (img[435]==0){
                                        if (img[207]==0){
                                            c = 5;}
                                        else {
                                            c = 0;}}
                                    else {
                                        if (img[597]==0){
                                            c = 9;}
                                        else {
                                            c = 8;}}}}
                            else {
                                if (img[290]==0){
                                    if (img[299]==0){
                                        if (img[324]==0){
                                            c = 6;}
                                        else {
                                            c = 1;}}
                                    else {
                                        if (img[434]==0){
                                            c = 0;}
                                        else {
                                            c = 8;}}}
                                else {
                                    if (img[376]==0){
                                        if (img[316]==0){
                                            c = 8;}
                                        else {
                                            c = 2;}}
                                    else {
                                        if (img[481]==0){
                                            c = 8;}
                                        else {
                                            c = 3;}}}}}}}}}
        else {
            if (img[542]==0){
                if (img[211]==0){
                    if (img[596]==0){
                        if (img[267]==0){
                            if (img[98]==0){
                                if (img[155]==0){
                                    if (img[94]==0){
                                        if (img[322]==0){
                                            c = 4;}
                                        else {
                                            c = 4;}}
                                    else {
                                        if (img[545]==0){
                                            c = 4;}
                                        else {
                                            c = 6;}}}
                                else {
                                    if (img[538]==0){
                                        if (img[156]==0){
                                            c = 4;}
                                        else {
                                            c = 4;}}
                                    else {
                                        if (img[265]==0){
                                            c = 2;}
                                        else {
                                            c = 4;}}}}
                            else {
                                if (img[515]==0){
                                    if (img[128]==0){
                                        c = 4;}
                                    else {
                                        if (img[158]==0){
                                            c = 5;}
                                        else {
                                            c = 2;}}}
                                else {
                                    if (img[510]==0){
                                        c = 6;}
                                    else {
                                        c = 4;}}}}
                        else {
                            if (img[185]==0){
                                if (img[381]==0){
                                    if (img[440]==0){
                                        if (img[268]==0){
                                            c = 2;}
                                        else {
                                            c = 5;}}
                                    else {
                                        if (img[356]==0){
                                            c = 7;}
                                        else {
                                            c = 9;}}}
                                else {
                                    if (img[375]==0){
                                        if (img[372]==0){
                                            c = 7;}
                                        else {
                                            c = 9;}}
                                    else {
                                        if (img[483]==0){
                                            c = 4;}
                                        else {
                                            c = 4;}}}}
                            else {
                                if (img[124]==0){
                                    if (img[437]==0){
                                        if (img[346]==0){
                                            c = 1;}
                                        else {
                                            c = 4;}}
                                    else {
                                        if (img[710]==0){
                                            c = 4;}
                                        else {
                                            c = 5;}}}
                                else {
                                    if (img[384]==0){
                                        c = 3;}
                                    else {
                                        c = 6;}}}}}
                    else {
                        if (img[127]==0){
                            if (img[381]==0){
                                if (img[159]==0){
                                    if (img[382]==0){
                                        if (img[385]==0){
                                            c = 5;}
                                        else {
                                            c = 0;}}
                                    else {
                                        c = 8;}}
                                else {
                                    if (img[407]==0){
                                        if (img[296]==0){
                                            c = 5;}
                                        else {
                                            c = 3;}}
                                    else {
                                        c = 6;}}}
                            else {
                                if (img[378]==0){
                                    if (img[373]==0){
                                        c = 2;}
                                    else {
                                        if (img[594]==0){
                                            c = 4;}
                                        else {
                                            c = 6;}}}
                                else {
                                    if (img[105]==0){
                                        if (img[484]==0){
                                            c = 5;}
                                        else {
                                            c = 8;}}
                                    else {
                                        c = 6;}}}}
                        else {
                            if (img[351]==0){
                                if (img[318]==0){
                                    if (img[295]==0){
                                        if (img[660]==0){
                                            c = 2;}
                                        else {
                                            c = 2;}}
                                    else {
                                        c = 3;}}
                                else {
                                    if (img[157]==0){
                                        c = 6;}
                                    else {
                                        if (img[343]==0){
                                            c = 2;}
                                        else {
                                            c = 0;}}}}
                            else {
                                if (img[540]==0){
                                    if (img[289]==0){
                                        c = 3;}
                                    else {
                                        if (img[464]==0){
                                            c = 5;}
                                        else {
                                            c = 2;}}}
                                else {
                                    if (img[273]==0){
                                        if (img[403]==0){
                                            c = 6;}
                                        else {
                                            c = 3;}}
                                    else {
                                        c = 8;}}}}}}
                else {
                    if (img[381]==0){
                        if (img[351]==0){
                            if (img[384]==0){
                                if (img[104]==0){
                                    if (img[411]==0){
                                        if (img[415]==0){
                                            c = 5;}
                                        else {
                                            c = 0;}}
                                    else {
                                        if (img[407]==0){
                                            c = 9;}
                                        else {
                                            c = 5;}}}
                                else {
                                    c = 6;}}
                            else {
                                if (img[596]==0){
                                    if (img[288]==0){
                                        if (img[241]==0){
                                            c = 4;}
                                        else {
                                            c = 9;}}
                                    else {
                                        if (img[428]==0){
                                            c = 8;}
                                        else {
                                            c = 9;}}}
                                else {
                                    if (img[520]==0){
                                        if (img[524]==0){
                                            c = 8;}
                                        else {
                                            c = 0;}}
                                    else {
                                        if (img[347]==0){
                                            c = 2;}
                                        else {
                                            c = 0;}}}}}
                        else {
                            if (img[178]==0){
                                if (img[298]==0){
                                    if (img[346]==0){
                                        if (img[235]==0){
                                            c = 1;}
                                        else {
                                            c = 7;}}
                                    else {
                                        if (img[438]==0){
                                            c = 4;}
                                        else {
                                            c = 4;}}}
                                else {
                                    if (img[545]==0){
                                        if (img[511]==0){
                                            c = 3;}
                                        else {
                                            c = 2;}}
                                    else {
                                        if (img[440]==0){
                                            c = 8;}
                                        else {
                                            c = 4;}}}}
                            else {
                                if (img[376]==0){
                                    if (img[581]==0){
                                        if (img[287]==0){
                                            c = 7;}
                                        else {
                                            c = 8;}}
                                    else {
                                        c = 8;}}
                                else {
                                    if (img[511]==0){
                                        if (img[219]==0){
                                            c = 3;}
                                        else {
                                            c = 5;}}
                                    else {
                                        if (img[498]==0){
                                            c = 8;}
                                        else {
                                            c = 2;}}}}}}
                    else {
                        if (img[156]==0){
                            if (img[317]==0){
                                if (img[342]==0){
                                    if (img[319]==0){
                                        if (img[377]==0){
                                            c = 7;}
                                        else {
                                            c = 3;}}
                                    else {
                                        if (img[455]==0){
                                            c = 9;}
                                        else {
                                            c = 4;}}}
                                else {
                                    if (img[233]==0){
                                        if (img[357]==0){
                                            c = 4;}
                                        else {
                                            c = 9;}}
                                    else {
                                        if (img[572]==0){
                                            c = 9;}
                                        else {
                                            c = 8;}}}}
                            else {
                                if (img[442]==0){
                                    if (img[212]==0){
                                        if (img[573]==0){
                                            c = 9;}
                                        else {
                                            c = 4;}}
                                    else {
                                        if (img[210]==0){
                                            c = 9;}
                                        else {
                                            c = 9;}}}
                                else {
                                    if (img[553]==0){
                                        if (img[441]==0){
                                            c = 9;}
                                        else {
                                            c = 4;}}
                                    else {
                                        if (img[340]==0){
                                            c = 8;}
                                        else {
                                            c = 9;}}}}}
                        else {
                            if (img[181]==0){
                                if (img[596]==0){
                                    if (img[296]==0){
                                        if (img[467]==0){
                                            c = 9;}
                                        else {
                                            c = 4;}}
                                    else {
                                        if (img[464]==0){
                                            c = 2;}
                                        else {
                                            c = 4;}}}
                                else {
                                    if (img[440]==0){
                                        if (img[321]==0){
                                            c = 2;}
                                        else {
                                            c = 8;}}
                                    else {
                                        if (img[319]==0){
                                            c = 2;}
                                        else {
                                            c = 6;}}}}
                            else {
                                if (img[511]==0){
                                    if (img[317]==0){
                                        if (img[654]==0){
                                            c = 4;}
                                        else {
                                            c = 3;}}
                                    else {
                                        if (img[326]==0){
                                            c = 5;}
                                        else {
                                            c = 9;}}}
                                else {
                                    if (img[348]==0){
                                        if (img[684]==0){
                                            c = 2;}
                                        else {
                                            c = 8;}}
                                    else {
                                        if (img[655]==0){
                                            c = 4;}
                                        else {
                                            c = 8;}}}}}}}}
            else {
                if (img[271]==0){
                    if (img[346]==0){
                        if (img[344]==0){
                            if (img[347]==0){
                                if (img[321]==0){
                                    if (img[684]==0){
                                        if (img[343]==0){
                                            c = 2;}
                                        else {
                                            c = 5;}}
                                    else {
                                        if (img[243]==0){
                                            c = 7;}
                                        else {
                                            c = 5;}}}
                                else {
                                    if (img[179]==0){
                                        if (img[103]==0){
                                            c = 2;}
                                        else {
                                            c = 6;}}
                                    else {
                                        if (img[513]==0){
                                            c = 3;}
                                        else {
                                            c = 2;}}}}
                            else {
                                if (img[207]==0){
                                    if (img[302]==0){
                                        if (img[96]==0){
                                            c = 6;}
                                        else {
                                            c = 2;}}
                                    else {
                                        if (img[265]==0){
                                            c = 5;}
                                        else {
                                            c = 8;}}}
                                else {
                                    if (img[498]==0){
                                        if (img[628]==0){
                                            c = 2;}
                                        else {
                                            c = 8;}}
                                    else {
                                        c = 2;}}}}
                        else {
                            if (img[211]==0){
                                if (img[575]==0){
                                    if (img[494]==0){
                                        c = 8;}
                                    else {
                                        if (img[572]==0){
                                            c = 4;}
                                        else {
                                            c = 6;}}}
                                else {
                                    c = 6;}}
                            else {
                                if (img[658]==0){
                                    if (img[570]==0){
                                        if (img[209]==0){
                                            c = 4;}
                                        else {
                                            c = 9;}}
                                    else {
                                        if (img[566]==0){
                                            c = 6;}
                                        else {
                                            c = 2;}}}
                                else {
                                    if (img[511]==0){
                                        if (img[372]==0){
                                            c = 7;}
                                        else {
                                            c = 8;}}
                                    else {
                                        c = 6;}}}}}
                    else {
                        if (img[274]==0){
                            if (img[572]==0){
                                if (img[324]==0){
                                    if (img[687]==0){
                                        if (img[298]==0){
                                            c = 6;}
                                        else {
                                            c = 4;}}
                                    else {
                                        if (img[657]==0){
                                            c = 8;}
                                        else {
                                            c = 5;}}}
                                else {
                                    if (img[405]==0){
                                        if (img[717]==0){
                                            c = 4;}
                                        else {
                                            c = 9;}}
                                    else {
                                        if (img[511]==0){
                                            c = 9;}
                                        else {
                                            c = 2;}}}}
                            else {
                                if (img[656]==0){
                                    if (img[219]==0){
                                        if (img[637]==0){
                                            c = 6;}
                                        else {
                                            c = 6;}}
                                    else {
                                        if (img[492]==0){
                                            c = 6;}
                                        else {
                                            c = 5;}}}
                                else {
                                    if (img[514]==0){
                                        if (img[296]==0){
                                            c = 5;}
                                        else {
                                            c = 3;}}
                                    else {
                                        if (img[207]==0){
                                            c = 6;}
                                        else {
                                            c = 8;}}}}}
                        else {
                            if (img[428]==0){
                                if (img[706]==0){
                                    if (img[382]==0){
                                        if (img[305]==0){
                                            c = 8;}
                                        else {
                                            c = 5;}}
                                    else {
                                        c = 8;}}
                                else {
                                    if (img[571]==0){
                                        c = 8;}
                                    else {
                                        c = 9;}}}
                            else {
                                if (img[216]==0){
                                    if (img[127]==0){
                                        if (img[324]==0){
                                            c = 4;}
                                        else {
                                            c = 5;}}
                                    else {
                                        c = 6;}}
                                else {
                                    if (img[492]==0){
                                        if (img[436]==0){
                                            c = 0;}
                                        else {
                                            c = 8;}}
                                    else {
                                        if (img[568]==0){
                                            c = 9;}
                                        else {
                                            c = 0;}}}}}}}
                else {
                    if (img[345]==0){
                        if (img[321]==0){
                            if (img[342]==0){
                                if (img[681]==0){
                                    if (img[685]==0){
                                        if (img[347]==0){
                                            c = 2;}
                                        else {
                                            c = 2;}}
                                    else {
                                        if (img[320]==0){
                                            c = 3;}
                                        else {
                                            c = 8;}}}
                                else {
                                    if (img[631]==0){
                                        if (img[567]==0){
                                            c = 7;}
                                        else {
                                            c = 1;}}
                                    else {
                                        if (img[290]==0){
                                            c = 3;}
                                        else {
                                            c = 8;}}}}
                            else {
                                if (img[657]==0){
                                    if (img[208]==0){
                                        if (img[350]==0){
                                            c = 4;}
                                        else {
                                            c = 6;}}
                                    else {
                                        if (img[156]==0){
                                            c = 9;}
                                        else {
                                            c = 2;}}}
                                else {
                                    if (img[387]==0){
                                        if (img[424]==0){
                                            c = 8;}
                                        else {
                                            c = 5;}}
                                    else {
                                        c = 9;}}}}
                        else {
                            if (img[657]==0){
                                if (img[184]==0){
                                    if (img[381]==0){
                                        if (img[162]==0){
                                            c = 5;}
                                        else {
                                            c = 6;}}
                                    else {
                                        if (img[268]==0){
                                            c = 4;}
                                        else {
                                            c = 1;}}}
                                else {
                                    if (img[551]==0){
                                        if (img[652]==0){
                                            c = 2;}
                                        else {
                                            c = 1;}}
                                    else {
                                        if (img[658]==0){
                                            c = 2;}
                                        else {
                                            c = 8;}}}}
                            else {
                                if (img[292]==0){
                                    if (img[437]==0){
                                        if (img[515]==0){
                                            c = 3;}
                                        else {
                                            c = 2;}}
                                    else {
                                        if (img[625]==0){
                                            c = 8;}
                                        else {
                                            c = 3;}}}
                                else {
                                    if (img[378]==0){
                                        if (img[627]==0){
                                            c = 4;}
                                        else {
                                            c = 0;}}
                                    else {
                                        if (img[468]==0){
                                            c = 8;}
                                        else {
                                            c = 8;}}}}}}
                    else {
                        if (img[657]==0){
                            if (img[95]==0){
                                if (img[212]==0){
                                    if (img[409]==0){
                                        if (img[276]==0){
                                            c = 6;}
                                        else {
                                            c = 5;}}
                                    else {
                                        if (img[127]==0){
                                            c = 4;}
                                        else {
                                            c = 2;}}}
                                else {
                                    if (img[567]==0){
                                        if (img[211]==0){
                                            c = 4;}
                                        else {
                                            c = 9;}}
                                    else {
                                        if (img[331]==0){
                                            c = 2;}
                                        else {
                                            c = 0;}}}}
                            else {
                                if (img[186]==0){
                                    if (img[91]==0){
                                        if (img[189]==0){
                                            c = 6;}
                                        else {
                                            c = 8;}}
                                    else {
                                        c = 2;}}
                                else {
                                    if (img[374]==0){
                                        if (img[572]==0){
                                            c = 4;}
                                        else {
                                            c = 0;}}
                                    else {
                                        if (img[485]==0){
                                            c = 3;}
                                        else {
                                            c = 2;}}}}}
                        else {
                            if (img[455]==0){
                                if (img[487]==0){
                                    if (img[354]==0){
                                        if (img[267]==0){
                                            c = 0;}
                                        else {
                                            c = 5;}}
                                    else {
                                        if (img[595]==0){
                                            c = 8;}
                                        else {
                                            c = 3;}}}
                                else {
                                    if (img[432]==0){
                                        if (img[570]==0){
                                            c = 9;}
                                        else {
                                            c = 6;}}
                                    else {
                                        if (img[407]==0){
                                            c = 8;}
                                        else {
                                            c = 8;}}}}
                            else {
                                if (img[597]==0){
                                    if (img[212]==0){
                                        if (img[664]==0){
                                            c = 4;}
                                        else {
                                            c = 8;}}
                                    else {
                                        if (img[383]==0){
                                            c = 4;}
                                        else {
                                            c = 9;}}}
                                else {
                                    if (img[407]==0){
                                        if (img[156]==0){
                                            c = 5;}
                                        else {
                                            c = 0;}}
                                    else {
                                        if (img[354]==0){
                                            c = 5;}
                                        else {
                                            c = 8;}}}}}}}}}}
    return c;
}

void update_img(UINT16 x, UINT16 y){
	UINT16 sub_x, sub_y;
	UINT16 off_x, off_y;
	UINT16 ind;

        for (off_x=0; off_x<6; off_x++) {
	    for (off_y=0; off_y<6; off_y++) {
		if (draw){
		        plot(x+off_x, y+off_y, i, SOLID);}
		else {
			plot(x+off_x, y+off_y, 1, SOLID);}
	}}
        ind = 0;
	sub_x = 28-(122-x)/3;
	sub_y = 28-(118-y)/3;
	if (debug){
		gotogxy(0, 5);
		gprintf("    ");
		gotogxy(0, 5);
		gprintf("%u",sub_x);
		gotogxy(0, 6);
		gprintf("    ");
		gotogxy(0, 6);
		gprintf("%u",sub_y);}

	ind = sub_y*28+sub_x;
	if (debug){
		gotogxy(0, 7);
		gprintf("    ");
		gotogxy(0, 7);
		gprintf("%u",ind);}
	if (draw){
		for (off_x=0; off_x<2; off_x++) {
			for (off_y=0; off_y<2; off_y++) {
				ind = (sub_y+off_y)*28+(sub_x+off_x);
				img[ind]=1;}}
	}
}

void plt(){
	UINT16 ind;
	INT8 plty=-1;
	UINT8 pltx=0;
	for (ind=0; ind<783; ind++) {
		if (ind%28 == 0){
			plty ++;
			pltx = 0;}
		if (img[ind]==1){
			plot(pltx, plty+100, i, SOLID);}
		pltx++;
	}
}

void free(){
	UINT16 ind;
	for (ind=0; ind<783; ind++) {
		img[ind] = 0;
	}
}

void init(){
	free();
	color(BLACK, WHITE, SOLID); 
	box(38+1, 34+1, 122+8+1, 118+8+1, M_NOFILL);
	box(38+2, 34+2, 122+8+2, 118+8+2, M_NOFILL);
	box(38+3, 34+3, 122+8+3, 118+8+3, M_NOFILL);
	box(38+4, 34+4, 122+8+4, 118+8+4, M_NOFILL);
	box(38, 34, 122+8, 118+8, M_FILL);
	gotogxy(1, 1); // Places you at these coordinates
	gprintf("Write something!");
	gotogxy(1, 2);
	gprintf("[A] - Predict");
	gotogxy(1, 3);
	gprintf("[B] - Clear"); 
	gotogxy(0, 5);
	gprintf("    ");
	gotogxy(0, 6);
	gprintf("    ");
	gotogxy(0, 7);
	gprintf("    ");
	gotogxy(0, 11);
	gprintf("    ");
	gotogxy(0, 12);
	gprintf("    ");
	gotogxy(0, 13);
	gprintf("    ");
	gotogxy(0, 14);
	gprintf("    ");
	gotogxy(0, 15);
	gprintf("    ");
	gotogxy(0, 16);
	gprintf("    ");

}

void main(){  
    init();

    while (1) { 
        if (joypad() == J_UP && y != 34+6){
            y=y-1; //min = 34
	}
        if (joypad() == J_DOWN && y != 118-6){
            y=y+1; //max=118
	}
	if (joypad() == J_LEFT && x != 38+6){
	    x=x-1; //min=38
	}
	if (joypad() == J_RIGHT && x != 122-6){
	    x=x+1; //max=122
	}
	if (joypad() == J_A) { 
	    waitpadup();	
            c = inference();
	    if (debug){
		    plt();}
	    plot(130, 126, i, SOLID);
	    gotogxy(6, 17);
	    gprintf("I guess... %d?",c);
	}

	if (joypad() == J_B) { 
	    free();
	    gotogxy(0, 17);
	    box(38, 34, 122+8, 118+8, M_FILL);
	    if (debug){
	            box(0, 100, 28, 128, M_FILL);}
	}

	if (joypad() == J_SELECT){
	    waitpadup();
	    if (debug){
	    	debug = 0;
		init();
	    }
	    else {
		debug = 1;
		box(0, 100, 28, 128, M_FILL);
	    }
	}


	update_img(x, y);

}}
