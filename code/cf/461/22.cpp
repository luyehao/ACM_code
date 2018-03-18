//22.cpp
#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <set>
#include <map>
#include <string>
#include <cmath>
#include <cstdlib>
#include <time.h>
using namespace std;

int aaa[2000] = {0,0,0,0,0,0,1,2,3,4,6,8,13,20,30,40,50,60,71,82,96,112,131,150,176,208,247,290,342,400,465,530,595,660,726,792,861,932,1006,1080,1161,1248,1342,1440,1547,1660,1780,1900,2035,2184,2348,2524,2717,2924,3146,3376,3627,3896,4184,4484,4805,5140,5490,5840,6190,6540,6891,7242,7596,7952,8311,8670,9036,9408,9787,10170,10562,10960,11365,11770,12190,12624,13073,13534,14012,14504,15011,15526,16062,16616,17189,17774,18380,19000,19635,20270,20936,21632,22359,23114,23902,24720,25569,26442,27352,28296,29275,30282,31326,32400,33505,34626,35792,37000,38251,39538,40870,42240,43649,45082,46564,48088,49655,51250,52890,54560,56261,57962,59663,61364,63066,64768,66473,68180,69890,71600,73317,75040,76770,78504,80247,81996,83752,85508,87279,89064,90864,92676,94505,96348,98206,100072,101959,103864,105788,107724,109681,111652,113638,115624,117641,119688,121766,123872,126011,128180,130380,132604,134865,137160,139490,141848,144243,146668,149124,151596,154113,156672,159274,161912,164595,167316,170076,172860,175693,178568,181486,184432,187423,190444,193496,196548,199663,202840,206080,209380,212745,216172,219662,223208,226823,230504,234252,238060,241937,245876,249878,253928,258055,262256,266532,270876,275297,279788,284350,288968,293667,298440,303288,308196,313181,318228,323338,328480,333715,339040,344456,349956,355549,361228,366994,372832,378767,384792,390908,397100,403385,409748,416190,422680,429275,435968,442760,449636,456613,463676,470826,478032,485343,492744,500236,507788,515433,523140,530910,538680,546450,554220,561991,569762,577536,585312,593091,600870,608656,616448,624247,632050,639862,647680,655505,663330,671170,679024,686893,694774,702672,710584,718511,726446,734402,742376,750369,758374,766400,774440,782495,790550,798636,806752,814899,823074,831282,839520,847789,856082,864412,872776,881175,889602,898066,906560,915085,923626,932212,940840,949511,958218,966970,975760,984589,993442,1002344,1011288,1020275,1029290,1038350,1047440,1056561,1065682,1074866,1084112,1093421,1102790,1112224,1121720,1131279,1140894,1150578,1160328,1170145,1180022,1189968,1199976,1210047,1220166,1230362,1240632,1250977,1261390,1271880,1282440,1293071,1303758,1314526,1325368,1336285,1347262,1358316,1369432,1380611,1391822,1403126,1414520,1426005,1437574,1449236,1460984,1472819,1484726,1496730,1508824,1521009,1533270,1545624,1558056,1570567,1583126,1595790,1608552,1621413,1634358,1647404,1660536,1673755,1687030,1700410,1713880,1727441,1741062,1754776,1768552,1782391,1796230,1810196,1824288,1838507,1852850,1867322,1881920,1896645,1911490,1926468,1941576,1956815,1972178,1987674,2003296,2019045,2034906,2050908,2067048,2083327,2099738,2116290,2132976,2149797,2166738,2183824,2201048,2218411,2235898,2253526,2271280,2289161,2307138,2325272,2343560,2362003,2380594,2399342,2418240,2437289,2456474,2475820,2495320,2514975,2534770,2554722,2574816,2595053,2615402,2635920,2656600,2677443,2698434,2719590,2740896,2762353,2783930,2805676,2827576,2849631,2871810,2894146,2916608,2939197,2961850,2984692,3007720,3030935,3054330,3077914,3101680,3125629,3149746,3174056,3198552,3223235,3248090,3273134,3298352,3323745,3349282,3375020,3400952,3427079,3453386,3479890,3506576,3533445,3560466,3587688,3615096,3642691,3670442,3698382,3726480,3754737,3783090,3811660,3840440,3869431,3898618,3928018,3957616,3987413,4017378,4047560,4077944,4108531,4139290,4170254,4201392,4232705,4264130,4295780,4327640,4359711,4391962,4424426,4457072,4489901,4522850,4556016,4589368,4622907,4656570,4690422,4724400,4758505,4792610,4826715,4860820,4894926,4929032,4963141,4997252,5031366,5065480,5099601,5133728,5167862,5202000,5236147,5270300,5304460,5338620,5372795,5406984,5441188,5475404,5509637,5543884,5578146,5612416,5646707,5681016,5715344,5749684,5784045,5818420,5852810,5887200,5921621,5956072,5990554,6025064,6059607,6094180,6128784,6163412,6198077,6232776,6267510,6302272,6337071,6371900,6406760,6441636,6476557,6511520,6546526,6581568,6616655,6651780,6686944,6722132,6757369,6792648,6827970,6863320,6898715,6934140,6969596,7005052,7040571,7076152,7111796,7147500,7183269,7219100,7254994,7290944,7326963,7363048,7399200,7435412,7471693,7508036,7544442,7580896,7617427,7654032,7690712,7727460,7764285,7801180,7838146,7875168,7912271,7949448,7986700,8024012,8061401,8098852,8136366,8173912,8211551,8249280,8287100,8325004,8363001,8401084,8439254,8477496,8515835,8554264,8592784,8631380,8670069,8708836,8747682,8786576,8825575,8864672,8903868,8943148,8982529,9021996,9061550,9101160,9140875,9180680,9220576,9260532,9300581,9340692,9380866,9421040,9461341,9501768,9542322,9583000,9623807,9664740,9705800,9746980,9788293,9829736,9871310,9913008,9954839,9996796,10038880,10081076,10123413,10165888,10208502,10251248,10294135,10337156,10380312,10423588,10467009,10510568,10554266,10598088,10642051,10686140,10730356,10774668,10819137,10863760,10908538,10953464,10998547,11043780,11089164,11134684,11180365,11226200,11272190,11318320,11364607,11411036,11457608,11504292,11551145,11598160,11645338,11692664,11740155,11787796,11835588,11883500,11931581,11979816,12028206,12076720,12125391,12174188,12223112,12272100,12321277,12370640,12420190,12469920,12519839,12569940,12620224,12670676,12721321,12772152,12823170,12874360,12925739,12977292,13029020,13080892,13132965,13185232,13237694,13290336,13343175,13396196,13449400,13502756,13556313,13610056,13663986,13718072,13772347,13826780,13881372,13936060,13990965,14046080,14101406,14156928,14212663,14268596,14324728,14381028,14437545,14494264,14551186,14608280,14665579,14723052,14780700,14838460,14896445,14954640,15013046,15071632,15130431,15189412,15248576,15307860,15367361,15427048,15486922,15546920,15607107,15667420,15727860,15788300,15848995,15909944,15971148,16032604,16094317,16156284,16218506,16280976,16343707,16406696,16469944,16533444,16597205,16661220,16725490,16790000,16854779,16919824,16985136,17050708,17116549,17182652,17249018,17315632,17382519,17449672,17517092,17584764,17652705,17720900,17789350,17858024,17926983,17996224,18065748,18135548,18205633,18275996,18346638,18417544,18488739,18560216,18631976,18704004,18776317,18848900,18921754,18994848,19068239,19141920,19215892,19290140,19364681,19439500,19514598,19589944,19665587,19741512,19817720,19894180,19970925,20047924,20125178,20202624,20280387,20358464,20436856,20515556,20594573,20673900,20753538,20833472,20913727,20994296,21075180,21156364,21237865,21319668,21401774,21484152,21566859,21649888,21733240,21816900,21900885,21985180,22069786,22154672,22239887,22325416,22411260,22497388,22583833,22670564,22757582,22844824,22932411,23020336,23108600,23197188,23286117,23375372,23464954,23554832,23645055,23735608,23826492,23917676,24009193,24101012,24193134,24285496,24378211,24471264,24564656,24658356,24752397,24846748,24941410,25036320,25131575,25227144,25323028,25419164,25515617,25612324,25709286,25806376,25903847,26001696,26099924,26198524,26297505,26396860,26496590,26596680,26697155,26798008,26899240,27000836,27102813,27205156,27307866,27410912,27514351,27618176,27722388,27826972,27931945,28037292,28143014,28249080,28355539,28462376,28569592,28677156,28785101,28893396,29002042,29110976,29220319,29330064,29440212,29550748,29661689,29773020,29884742,29996824,30109315,30222200,30335480,30449124,30563165,30677572,30792346,30907424,31022919,31138816,31255116,31371788,31488865,31606316,31724142,31842280,31960827,32079752,32199056,32318676,32438677,32558996,32679634,32800464,32921735,33043440,33165580,33288140,33411137,33534556,33658398,33782632,33907307,34032408,34157936,34283860,34410213,34536964,34664114,34791600,34919535,35047904,35176708,35305916,35435561,35565612,35696070,35826872,35958115,36089768,36221832,36354244,36487069,36620244,36753770,36887520,37021735,37156400,37291516,37427052,37563041,37699452,37836286,37973480,38111131,38249208,38387712,38526580,38665877,38805540,38945570,39085840};



int main()
{
	int n; cin>>n;
	if (n<=1000) cout << aaa[n];
    else
{
    int ans = 0;
    for (int i=1;i<=n;i++)
    {
        for (int j=i;j<=n;j++)
        {
            for (int k=j;k<=n && i+j>k && k-j<i;k++)
            {
                if ((i^j^k) == 0)
                {
                    ans++;
                }
            }
        }
    }
    cout << ans << endl;
}

    return 0;
}
