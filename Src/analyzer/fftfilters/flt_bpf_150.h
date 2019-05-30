/*
  IIR COEF for +DSP / Audio DSP
  BPF 150Hz

  by KD8CEC
  kd8cec@gmail.com
  -----------------------------------------------------------------------------
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *******************************************************************************/

#define FLT_BPF_150_COUNT 			16
#define FLT_BPF_150_MINFREQ	  250
#define FLT_BPF_150_MAXFREQ	  4000

const int FLT_BPF_150_INDEX[FLT_BPF_150_COUNT] = {310, 320, 345, 360, 380, 405, 520, 610, 720, 840, 1160, 1480, 1800, 2120, 2440, 2760};

const float FLT_BPF_150[FLT_BPF_150_COUNT][30] = {
// 310
{
0.00000000000963881826287,
0.00000000001927763652573,
0.00000000000963881826287,
1.96619429807302315005302,
-0.97011752593385902621037,
1.00000000000000000000000,
2.00000000000000000000000,
1.00000000000000000000000,
1.97076951386851306757819,
-0.97378299421335634544761,
1.00000000000000000000000,
2.00000000000000000000000,
1.00000000000000000000000,
1.97088683465328751154289,
-0.97580526551629798159837,
1.00000000000000000000000,
-2.00000000000000000000000,
1.00000000000000000000000,
1.98056492451449051017676,
-0.98298659942880262097020,
1.00000000000000000000000,
-2.00000000000000000000000,
1.00000000000000000000000,
1.98503899957864460290580,
-0.99063627032950418715984,
1.00000000000000000000000,
-2.00000000000000000000000,
1.00000000000000000000000,
1.99202519735498029262999,
-0.99418104970796861152849,
}
,
// 320
{
0.00000000000963881826287,
0.00000000001927763652573,
0.00000000000963881826287,
1.96600444471651436550985,
-0.97018145169948966088924,
1.00000000000000000000000,
2.00000000000000000000000,
1.00000000000000000000000,
1.97048067125004178201664,
-0.97371883114019708305165,
1.00000000000000000000000,
2.00000000000000000000000,
1.00000000000000000000000,
1.97072542981282738949744,
-0.97592374926913527666272,
1.00000000000000000000000,
-2.00000000000000000000000,
1.00000000000000000000000,
1.98024587178846145363309,
-0.98286725819812104099071,
1.00000000000000000000000,
-2.00000000000000000000000,
1.00000000000000000000000,
1.98479771298159191061927,
-0.99069209328216445431536,
1.00000000000000000000000,
-2.00000000000000000000000,
1.00000000000000000000000,
1.99178291216568958965638,
-0.99412503016158282331816,
}
,
// 345
{
0.00000000000963881826287,
0.00000000001927763652573,
0.00000000000963881826287,
1.96547786313787176126766,
-0.97032259671485721064244,
1.00000000000000000000000,
2.00000000000000000000000,
1.00000000000000000000000,
1.96974412040032920145904,
-0.97357719210195303727318,
1.00000000000000000000000,
2.00000000000000000000000,
1.00000000000000000000000,
1.97025617677565634267012,
-0.97618773397694935667346,
1.00000000000000000000000,
-2.00000000000000000000000,
1.00000000000000000000000,
1.97944734409548028786219,
-0.98260146718585494873821,
1.00000000000000000000000,
-2.00000000000000000000000,
1.00000000000000000000000,
1.98414668829390627990961,
-0.99081739036072702386804,
1.00000000000000000000000,
-2.00000000000000000000000,
1.00000000000000000000000,
1.99115793864847434591070,
-0.99399931480452818899352,
}
,
// 360
{
0.00000000000963881826287,
0.00000000001927763652573,
0.00000000000963881826287,
1.96512841639823498951500,
-0.97039658669765727072587,
1.00000000000000000000000,
2.00000000000000000000000,
1.00000000000000000000000,
1.96929017117957716465071,
-0.97350295960702704078926,
1.00000000000000000000000,
2.00000000000000000000000,
1.00000000000000000000000,
1.96993292289360777402862,
-0.97632736906192019166184,
1.00000000000000000000000,
-2.00000000000000000000000,
1.00000000000000000000000,
1.97896424553624972197952,
-0.98246093477458495968335,
1.00000000000000000000000,
-2.00000000000000000000000,
1.00000000000000000000000,
1.98372467465826662902373,
-0.99088416229385245515004,
1.00000000000000000000000,
-2.00000000000000000000000,
1.00000000000000000000000,
1.99076837324436484166768,
-0.99393233295306615548981,
}
,
// 380
{
0.00000000000963881826287,
0.00000000001927763652573,
0.00000000000963881826287,
1.96462572301487092829575,
-0.97048505488125769158358,
1.00000000000000000000000,
2.00000000000000000000000,
1.00000000000000000000000,
1.96866858176489301079926,
-0.97341421631506885869811,
1.00000000000000000000000,
2.00000000000000000000000,
1.00000000000000000000000,
1.96945703755673395818349,
-0.97649539936720275434823,
1.00000000000000000000000,
-2.00000000000000000000000,
1.00000000000000000000000,
1.97831171073711087338154,
-0.98229187795065575627973,
1.00000000000000000000000,
-2.00000000000000000000000,
1.00000000000000000000000,
1.98312693587939481432159,
-0.99096494727979811401042,
1.00000000000000000000000,
-2.00000000000000000000000,
1.00000000000000000000000,
1.99023037771707311804903,
-0.99385130606127825014795,
}
,
// 405
{
0.00000000000963881826287,
0.00000000001927763652573,
0.00000000000963881826287,
1.96394107489293312518441,
-0.97058204687052118675439,
1.00000000000000000000000,
2.00000000000000000000000,
1.00000000000000000000000,
1.96786258063901198234191,
-0.97331694130207868642657,
1.00000000000000000000000,
2.00000000000000000000000,
1.00000000000000000000000,
1.96879473170168828310977,
-0.97668089660096402138123,
1.00000000000000000000000,
-2.00000000000000000000000,
1.00000000000000000000000,
1.97747788178524519508983,
-0.98210531504485942821958,
1.00000000000000000000000,
-2.00000000000000000000000,
1.00000000000000000000000,
1.98232542718438131679193,
-0.99105465823061489327728,
1.00000000000000000000000,
-2.00000000000000000000000,
1.00000000000000000000000,
1.98952605398972437455996,
-0.99376134195597187748206,
}
,
// 520
{
0.00000000000963881826287,
0.00000000001927763652573,
0.00000000000963881826287,
1.96005296306792464733348,
-0.97089952116839872697795,
1.00000000000000000000000,
2.00000000000000000000000,
1.00000000000000000000000,
1.96367407547798844547060,
-0.97299867653233151898462,
1.00000000000000000000000,
2.00000000000000000000000,
1.00000000000000000000000,
1.96489773331985095872199,
-0.97729646448121065827053,
1.00000000000000000000000,
-2.00000000000000000000000,
1.00000000000000000000000,
1.97326854139384355590892,
-0.98148671822298083622371,
1.00000000000000000000000,
-2.00000000000000000000000,
1.00000000000000000000000,
1.97791159850158981825530,
-0.99135596454863805782054,
1.00000000000000000000000,
-2.00000000000000000000000,
1.00000000000000000000000,
1.98578100040134541970360,
-0.99345930456310238554352,
}
,
// 610
{
0.00000000000963881826287,
0.00000000001927763652573,
0.00000000000963881826287,
1.95622458618394290397191,
-0.97106027679387030282498,
1.00000000000000000000000,
2.00000000000000000000000,
1.00000000000000000000000,
1.95978595268343491753171,
-0.97283760001157681962525,
1.00000000000000000000000,
2.00000000000000000000000,
1.00000000000000000000000,
1.96098175979541844426990,
-0.97761240945114302736130,
1.00000000000000000000000,
-2.00000000000000000000000,
1.00000000000000000000000,
1.96943961867694405931672,
-0.98116952115318101235175,
1.00000000000000000000000,
-2.00000000000000000000000,
1.00000000000000000000000,
1.97367393587694706091895,
-0.99151248898714783308606,
1.00000000000000000000000,
-2.00000000000000000000000,
1.00000000000000000000000,
1.98222356607740279876850,
-0.99330247279188732534294,
}
,
// 720
{
0.00000000000963881826287,
0.00000000001927763652573,
0.00000000000963881826287,
1.95065917387688592121719,
-0.97120040855972422644271,
1.00000000000000000000000,
2.00000000000000000000000,
1.00000000000000000000000,
1.95425968455235543608239,
-0.97269723201998870010243,
1.00000000000000000000000,
2.00000000000000000000000,
1.00000000000000000000000,
1.95525419113499765444431,
-0.97788974638152326157581,
1.00000000000000000000000,
-2.00000000000000000000000,
1.00000000000000000000000,
1.96403468973947981091044,
-0.98089125405386223821580,
1.00000000000000000000000,
-2.00000000000000000000000,
1.00000000000000000000000,
1.96760424272517475685618,
-0.99165075842375705050813,
1.00000000000000000000000,
-2.00000000000000000000000,
1.00000000000000000000000,
1.97708860324007540398839,
-0.99316397305079540114292,
}
,
// 840
{
0.00000000000963881826287,
0.00000000001927763652573,
0.00000000000963881826287,
1.94350693934948925978290,
-0.97131055048147008079695,
1.00000000000000000000000,
2.00000000000000000000000,
1.00000000000000000000000,
1.94723463922968309525174,
-0.97258693285525887883836,
1.00000000000000000000000,
2.00000000000000000000000,
1.00000000000000000000000,
1.94788130360557598663718,
-0.97810880762656482456663,
1.00000000000000000000000,
-2.00000000000000000000000,
1.00000000000000000000000,
1.95717812531563550848546,
-0.98067156964074986280622,
1.00000000000000000000000,
-2.00000000000000000000000,
1.00000000000000000000000,
1.95989449183692832079373,
-0.99176046692893460310358,
1.00000000000000000000000,
-2.00000000000000000000000,
1.00000000000000000000000,
1.97047667000956150396007,
-0.99305410928982418283795,
}
,
// 1160
{
0.00000000000963881826287,
0.00000000001927763652573,
0.00000000000963881826287,
1.91905827134591966398602,
-0.97149199326987734082195,
1.00000000000000000000000,
2.00000000000000000000000,
1.00000000000000000000000,
1.92272142543109314516414,
-0.97847137467784217612632,
1.00000000000000000000000,
2.00000000000000000000000,
1.00000000000000000000000,
1.92334286776660823292673,
-0.97240528556810923443976,
1.00000000000000000000000,
-2.00000000000000000000000,
1.00000000000000000000000,
1.93381967218363426397332,
-0.98030818731963365042503,
1.00000000000000000000000,
-2.00000000000000000000000,
1.00000000000000000000000,
1.93391757864102187269850,
-0.99194282383508736167244,
1.00000000000000000000000,
-2.00000000000000000000000,
1.00000000000000000000000,
1.94762076678899687109947,
-0.99287154808703970143569,
}
,
// 1480
{
0.00000000000963881826287,
0.00000000001927763652573,
0.00000000000963881826287,
1.88695578282358589206069,
-0.97159521026130901688589,
1.00000000000000000000000,
2.00000000000000000000000,
1.00000000000000000000000,
1.88981386063140344155897,
-0.97867837691384851339649,
1.00000000000000000000000,
2.00000000000000000000000,
1.00000000000000000000000,
1.89194071495232196689074,
-0.97230198251868260594932,
1.00000000000000000000000,
-2.00000000000000000000000,
1.00000000000000000000000,
1.90022851466334197212404,
-0.99204727984566754006579,
1.00000000000000000000000,
-2.00000000000000000000000,
1.00000000000000000000000,
1.90298889985058883311808,
-0.98010084035914368794096,
1.00000000000000000000000,
-2.00000000000000000000000,
1.00000000000000000000000,
1.91715835580698379381204,
-0.99276700528647110477465,
}
,
// 1800
{
0.00000000000963881826287,
0.00000000001927763652573,
0.00000000000963881826287,
1.84736872890400016800072,
-0.97166232592740331419634,
1.00000000000000000000000,
2.00000000000000000000000,
1.00000000000000000000000,
1.84937280857573771442048,
-0.97881320204151189834363,
1.00000000000000000000000,
2.00000000000000000000000,
1.00000000000000000000000,
1.85310954947215589250220,
-0.97223482266956517960921,
1.00000000000000000000000,
-2.00000000000000000000000,
1.00000000000000000000000,
1.85900226336324636555730,
-0.99211541482296783378558,
1.00000000000000000000000,
-2.00000000000000000000000,
1.00000000000000000000000,
1.86472315504465524504951,
-0.97996583786770918855780,
1.00000000000000000000000,
-2.00000000000000000000000,
1.00000000000000000000000,
1.87916765016781028840853,
-0.99269882556024313657872,
}
,
// 2120
{
0.00000000000963881826287,
0.00000000001927763652573,
0.00000000000963881826287,
1.80047006115099694767423,
-0.97170980120849548278272,
1.00000000000000000000000,
2.00000000000000000000000,
1.00000000000000000000000,
1.80159122051707565326240,
-0.97890865940102078646134,
1.00000000000000000000000,
2.00000000000000000000000,
1.00000000000000000000000,
1.80698590064837194546499,
-0.97218732173725364020811,
1.00000000000000000000000,
-2.00000000000000000000000,
1.00000000000000000000000,
1.81041824869226064542715,
-0.99216369293387196570677,
1.00000000000000000000000,
-2.00000000000000000000000,
1.00000000000000000000000,
1.81914010628235067734693,
-0.97987027741843391037690,
1.00000000000000000000000,
-2.00000000000000000000000,
1.00000000000000000000000,
1.83378185905820290102497,
-0.99265052141009413322337,
}
,
// 2440
{
0.00000000000963881826287,
0.00000000001927763652573,
0.00000000000963881826287,
1.74645281254021123018561,
-0.97174540982192980642651,
1.00000000000000000000000,
2.00000000000000000000000,
1.00000000000000000000000,
1.74667356890854552631254,
-0.97898029641934170008710,
1.00000000000000000000000,
2.00000000000000000000000,
1.00000000000000000000000,
1.75374385209100824845052,
-0.97215169693041114662435,
1.00000000000000000000000,
-2.00000000000000000000000,
1.00000000000000000000000,
1.75467620905590426794163,
-0.99219994066864791726346,
1.00000000000000000000000,
-2.00000000000000000000000,
1.00000000000000000000000,
1.76640374867783456203085,
-0.97979857527563052332908,
1.00000000000000000000000,
-2.00000000000000000000000,
1.00000000000000000000000,
1.78117209996533976124056,
-0.99261425721439144886915,
}
,
// 2760
{
0.00000000000963881826287,
0.00000000001927763652573,
0.00000000000963881826287,
1.68484516054306610044478,
-0.97903643758576686106920,
1.00000000000000000000000,
2.00000000000000000000000,
1.00000000000000000000000,
1.68553443969959260151370,
-0.97177330576060638733793,
1.00000000000000000000000,
2.00000000000000000000000,
1.00000000000000000000000,
1.69200045354646855244596,
-0.99222835608277604180216,
1.00000000000000000000000,
-2.00000000000000000000000,
1.00000000000000000000000,
1.69358925061592602290261,
-0.97212379012955374424365,
1.00000000000000000000000,
-2.00000000000000000000000,
1.00000000000000000000000,
1.70671363663011321776253,
-0.97974239040572608239188,
1.00000000000000000000000,
-2.00000000000000000000000,
1.00000000000000000000000,
1.72154167884528441767600,
-0.99258583074883499630658,
}

};


