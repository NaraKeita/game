#include <Novice.h>
#include<stdio.h>

const char kWindowTitle[] = "LC1D_20_ナラケイタ_タイトル";

// Windowsアプリでのエントリーポイント(main関数)
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {

	// ライブラリの初期化
	Novice::Initialize(kWindowTitle, 1280, 720);

	// キー入力結果を受け取る箱
	char keys[256] = {0};
	char preKeys[256] = {0};

int next=0;

	//自機
	int speed = 6;
	int posX = 500;
	int posY = 630;

	//練習
	int POSX = 795;
	int POSY = -2050;

	int POS2X = 585;
	int POS2Y = -2590;

	int POS3X = 645;
	int POS3Y = -3150;

	int POS4X = 735;
	int POS4Y = -3780;

	int POS5X = 785;
	int POS5Y = -4430;

	int POS6X = 525;
	int POS6Y = -4850;

	int POS7X = 755;
	int POS7Y = -5209;

	int POS8X = 795;
	int POS8Y = -5820;

	int POS9X = 515;
	int POS9Y = -6430;

	int POS10X = 935;
	int POS10Y = -7050;

	int POS11X = 675;
	int POS11Y = -7480;

	int POS12X = 375;
	int POS12Y = -8050;

	int POS13X = 945;
	int POS13Y = -8650;

	int POS14X = 615;
	int POS14Y = -9250;

	int POS15X = 795;
	int POS15Y = -9780;

	int POS16X = 445;
	int POS16Y = -10350;

	int POS17X = 555;
	int POS17Y = -10790;

	int POS18X = 925;
	int POS18Y = -11300;

	int POS19X = 795;
	int POS19Y = -11780;

	int POS20X = 845;
	int POS20Y = -12250;

	//本番
	int POS21X = 445;
	int POS21Y = -23770;

	int POS22X = 765;
	int POS22Y = -28150;

	int POS23X = 555;
	int POS23Y = -14580;

	int POS24X = 365;
	int POS24Y = -24590;

	int POS25X = 808;
	int POS25Y = -28800;

	int POS26X = 695;
	int POS26Y = -14950;

	int POS27X = 545;
	int POS27Y = -30290;

	int POS28X = 455;
	int POS28Y = -24960;

	int POS29X = 678;
	int POS29Y = -25480;

	int POS30X = 345;
	int POS30Y = -15480;

	int POS31X = 335;
	int POS31Y = -30760;

	int POS32X = 725;
	int POS32Y = -31250;

	int POS33X = 485;
	int POS33Y = -15950;

	int POS34X = 805;
	int POS34Y = -25990;

	int POS35X = 395;
	int POS35Y = -16240;

	int POS36X = 555;
	int POS36Y = -31850;

	int POS37X = 475;
	int POS37Y = -16620;

	int POS38X = 777;
	int POS38Y = -26410;

	int POS39X = 666;
	int POS39Y = -17130;

	int POS40X = 444;
	int POS40Y = -32250;

	//大きさが違うアイテムたち
	int POS41X = 565;
	int POS41Y = -17680;

	int POS42X = 675;
	int POS42Y = -26830;

	int POS43X = 345;
	int POS43Y = -18020;

	int POS44X = 435;
	int POS44Y = -32650;

	int POS45X = 765;
	int POS45Y = -18480;

	int POS46X = 435;
	int POS46Y = -27280;

	int POS47X = 396;
	int POS47Y = -18900;

	int POS48X = 795;
	int POS48Y = -33090;

	int POS49X = 666;
	int POS49Y = -19500;

	int POS50X = 555;
	int POS50Y = -27850;

	int POS51X = 495;
	int POS51Y = -19993;

	int POS52X = 615;
	int POS52Y = -20450;

	int POS53X = 395;
	int POS53Y = -20942;

	int POS54X = 721;
	int POS54Y = -28340;

	int POS55X = 365;
	int POS55Y = -28870;

	int POS56X = 415;
	int POS56Y = -29360;

	int POS57X = 665;
	int POS57Y = -33450;

	int POS58X = 585;
	int POS58Y = -33830;

	int POS59X = 395;
	int POS59Y = -34220;

	int POS60X = 735;
	int POS60Y = -34750;

	//マイナスになるアイテム
	int POS61X = 366;
	int POS61Y = -15400;

	int POS62X = 634;
	int POS62Y = -15920;

	int POS63X = 456;
	int POS63Y = -16250;

	int POS64X = 344;
	int POS64Y = -16750;

	int POS65X = 705;
	int POS65Y = -17315;

	int POS66X = 567;
	int POS66Y = -17840;

	int POS67X = 555;
	int POS67Y = -18280;

	int POS68X = 666;
	int POS68Y = -18660;

	int POS69X = 333;
	int POS69Y = -18990;

	int POS70X = 777;
	int POS70Y = -16560;

	int POS71X = 444;
	int POS71Y = -17530;

	int POS72X = 578;
	int POS72Y = -18280;

	int POS73X = 785;
	int POS73Y = -17900;

	int POS74X = 345;
	int POS74Y = -19356;

	int POS75X = 678;
	int POS75Y = -19920;

	//WARNING
	int POS76X = 315;
	int POS76Y = -6450;

	//GAMESTART
	int POS77X = 415;
	int POS77Y = -100;

	//右上にある説明用
	int S77X = 1060;
	int S77Y = 200;


	int SPEED = 6;
	int SPEED1 = 3;
	int SPEED2 = 8;
	int SPEED3 = 11;
	int SPEED5 = 4;

	//練習のアイテムのフラグ
	bool flag = true;
	bool flag2 = true;
	bool flag3 = true;
	bool flag4 = true;
	bool flag5 = true;
	bool flag6 = true;
	bool flag7 = true;
	bool flag8 = true;
	bool flag9 = true;
	bool flag10 = true;
	bool flag11 = true;
	bool flag12 = true;
	bool flag13 = true;
	bool flag14 = true;
	bool flag15 = true;
	bool flag16 = true;
	bool flag17 = true;
	bool flag18 = true;
	bool flag19 = true;
	bool flag20 = true;

	//本番のアイテムのフラグ
	bool flag21 = true;
	bool flag22 = true;
	bool flag23 = true;
	bool flag24 = true;
	bool flag25 = true;
	bool flag26 = true;
	bool flag27 = true;
	bool flag28 = true;
	bool flag29 = true;
	bool flag30 = true;
	bool flag31 = true;
	bool flag32 = true;
	bool flag33 = true;
	bool flag34 = true;
	bool flag35 = true;
	bool flag36 = true;
	bool flag37 = true;
	bool flag38 = true;
	bool flag39 = true;
	bool flag40 = true;

	//大きさが違うアイテムのフラグ
	bool flag41 = true;
	bool flag42 = true;
	bool flag43 = true;
	bool flag44 = true;
	bool flag45 = true;
	bool flag46 = true;
	bool flag47 = true;
	bool flag48 = true;
	bool flag49 = true;
	bool flag50 = true;
	bool flag51 = true;
	bool flag52 = true;
	bool flag53 = true;
	bool flag54 = true;
	bool flag55 = true;
	bool flag56 = true;
	bool flag57 = true;
	bool flag58 = true;
	bool flag59 = true;
	bool flag60 = true;

	//マイナスになるアイテムのフラグ
	bool flag61 = true;
	bool flag62 = true;
	bool flag63 = true;
	bool flag64 = true;
	bool flag65 = true;
	bool flag66 = true;
	bool flag67 = true;
	bool flag68 = true;
	bool flag69= true;
	bool flag70 = true;
	bool flag71 = true;
	bool flag72 = true;
	bool flag73 = true;
	bool flag74 = true;
	bool flag75 = true;

	//WARNING
	bool flag76 = true;

	//GAMESTART
	bool flag77 = true;

	

	//自機の当たり判定宣言
	int left = 0;
	int right = 0;
	int top = 0;
	int bottom = 0;

	//アイテム1の当たり判定宣言
	int LEFT = 0;
	int RIGHT = 0;
	int TOP = 0;
	int BOTTOM = 0;

	//アイテム2の当たり判定宣言
	int LEFT2 = 0;
	int RIGHT2 = 0;
	int TOP2 = 0;
	int BOTTOM2 = 0;

	//アイテム3の当たり判定宣言
	int LEFT3 = 0;
	int RIGHT3 = 0;
	int TOP3 = 0;
	int BOTTOM3 = 0;

	//アイテム4の当たり判定宣言
	int LEFT4 = 0;
	int RIGHT4 = 0;
	int TOP4 = 0;
	int BOTTOM4 = 0;

	//アイテム5の当たり判定宣言
	int LEFT5 = 0;
	int RIGHT5 = 0;
	int TOP5 = 0;
	int BOTTOM5 = 0;

	//アイテム6の当たり判定宣言
	int LEFT6 = 0;
	int RIGHT6 = 0;
	int TOP6 = 0;
	int BOTTOM6 = 0;

	//アイテム7の当たり判定宣言
	int LEFT7 = 0;
	int RIGHT7 = 0;
	int TOP7 = 0;
	int BOTTOM7 = 0;

	//アイテム8の当たり判定宣言
	int LEFT8 = 0;
	int RIGHT8 = 0;
	int TOP8 = 0;
	int BOTTOM8 = 0;

	//アイテム9の当たり判定宣言
	int LEFT9 = 0;
	int RIGHT9 = 0;
	int TOP9 = 0;
	int BOTTOM9 = 0;

	//アイテム10の当たり判定宣言
	int LEFT10 = 0;
	int RIGHT10 = 0;
	int TOP10 = 0;
	int BOTTOM10 = 0;

	//アイテム11の当たり判定宣言
	int LEFT11 = 0;
	int RIGHT11 = 0;
	int TOP11 = 0;
	int BOTTOM11 = 0;

	//アイテム12の当たり判定宣言
	int LEFT12 = 0;
	int RIGHT12 = 0;
	int TOP12 = 0;
	int BOTTOM12 = 0;

	//アイテム13の当たり判定宣言
	int LEFT13 = 0;
	int RIGHT13 = 0;
	int TOP13 = 0;
	int BOTTOM13 = 0;

	//アイテム14の当たり判定宣言
	int LEFT14 = 0;
	int RIGHT14 = 0;
	int TOP14 = 0;
	int BOTTOM14 = 0;

	//アイテム15の当たり判定宣言
	int LEFT15 = 0;
	int RIGHT15 = 0;
	int TOP15 = 0;
	int BOTTOM15 = 0;

	//アイテム16の当たり判定宣言
	int LEFT16 = 0;
	int RIGHT16 = 0;
	int TOP16 = 0;
	int BOTTOM16 = 0;

	//アイテム17の当たり判定宣言
	int LEFT17 = 0;
	int RIGHT17 = 0;
	int TOP17 = 0;
	int BOTTOM17 = 0;

	//アイテム18の当たり判定宣言
	int LEFT18 = 0;
	int RIGHT18 = 0;
	int TOP18 = 0;
	int BOTTOM18 = 0;

	//アイテム19の当たり判定宣言
	int LEFT19 = 0;
	int RIGHT19 = 0;
	int TOP19 = 0;
	int BOTTOM19 = 0;

	//アイテム20の当たり判定宣言
	int LEFT20 = 0;
	int RIGHT20 = 0;
	int TOP20 = 0;
	int BOTTOM20 = 0;


	//アイテム21の当たり判定宣言
	int LEFT21 = 0;
	int RIGHT21 = 0;
	int TOP21 = 0;
	int BOTTOM21 = 0;

	//アイテム22の当たり判定宣言
	int LEFT22 = 0;
	int RIGHT22 = 0;
	int TOP22 = 0;
	int BOTTOM22 = 0;

	//アイテム23の当たり判定宣言
	int LEFT23 = 0;
	int RIGHT23 = 0;
	int TOP23 = 0;
	int BOTTOM23 = 0;

	//アイテム24の当たり判定宣言
	int LEFT24 = 0;
	int RIGHT24 = 0;
	int TOP24 = 0;
	int BOTTOM24 = 0;

	//アイテム25の当たり判定宣言
	int LEFT25 = 0;
	int RIGHT25 = 0;
	int TOP25 = 0;
	int BOTTOM25 = 0;

	//アイテム26の当たり判定宣言
	int LEFT26 = 0;
	int RIGHT26 = 0;
	int TOP26 = 0;
	int BOTTOM26 = 0;

	//アイテム27の当たり判定宣言
	int LEFT27 = 0;
	int RIGHT27 = 0;
	int TOP27 = 0;
	int BOTTOM27 = 0;

	//アイテム28の当たり判定宣言
	int LEFT28 = 0;
	int RIGHT28 = 0;
	int TOP28 = 0;
	int BOTTOM28 = 0;

	//アイテム29の当たり判定宣言
	int LEFT29 = 0;
	int RIGHT29 = 0;
	int TOP29 = 0;
	int BOTTOM29 = 0;

	//アイテム30の当たり判定宣言
	int LEFT30 = 0;
	int RIGHT30 = 0;
	int TOP30 = 0;
	int BOTTOM30 = 0;

	//アイテム31の当たり判定宣言
	int LEFT31 = 0;
	int RIGHT31 = 0;
	int TOP31 = 0;
	int BOTTOM31 = 0;

	//アイテム32の当たり判定宣言
	int LEFT32 = 0;
	int RIGHT32 = 0;
	int TOP32 = 0;
	int BOTTOM32 = 0;

	//アイテム33の当たり判定宣言
	int LEFT33 = 0;
	int RIGHT33 = 0;
	int TOP33 = 0;
	int BOTTOM33 = 0;

	//アイテム34の当たり判定宣言
	int LEFT34 = 0;
	int RIGHT34 = 0;
	int TOP34 = 0;
	int BOTTOM34 = 0;

	//アイテム35の当たり判定宣言
	int LEFT35 = 0;
	int RIGHT35 = 0;
	int TOP35 = 0;
	int BOTTOM35 = 0;

	//アイテム36の当たり判定宣言
	int LEFT36 = 0;
	int RIGHT36 = 0;
	int TOP36 = 0;
	int BOTTOM36 = 0;

	//アイテム37の当たり判定宣言
	int LEFT37 = 0;
	int RIGHT37 = 0;
	int TOP37 = 0;
	int BOTTOM37 = 0;

	//アイテム38の当たり判定宣言
	int LEFT38 = 0;
	int RIGHT38 = 0;
	int TOP38 = 0;
	int BOTTOM38 = 0;

	//アイテム39の当たり判定宣言
	int LEFT39 = 0;
	int RIGHT39 = 0;
	int TOP39 = 0;
	int BOTTOM39 = 0;

	//アイテム40の当たり判定宣言
	int LEFT40 = 0;
	int RIGHT40 = 0;
	int TOP40 = 0;
	int BOTTOM40 = 0;

	//アイテム41の当たり判定宣言
	int LEFT41 = 0;
	int RIGHT41 = 0;
	int TOP41 = 0;
	int BOTTOM41 = 0;

	//アイテム42の当たり判定宣言
	int LEFT42 = 0;
	int RIGHT42 = 0;
	int TOP42 = 0;
	int BOTTOM42 = 0;

	//アイテム43の当たり判定宣言
	int LEFT43 = 0;
	int RIGHT43 = 0;
	int TOP43 = 0;
	int BOTTOM43 = 0;

	//アイテム44の当たり判定宣言
	int LEFT44 = 0;
	int RIGHT44 = 0;
	int TOP44 = 0;
	int BOTTOM44 = 0;

	//アイテム45の当たり判定宣言
	int LEFT45 = 0;
	int RIGHT45 = 0;
	int TOP45 = 0;
	int BOTTOM45 = 0;

	//アイテム46の当たり判定宣言
	int LEFT46 = 0;
	int RIGHT46 = 0;
	int TOP46 = 0;
	int BOTTOM46 = 0;

	//アイテム47の当たり判定宣言
	int LEFT47 = 0;
	int RIGHT47 = 0;
	int TOP47 = 0;
	int BOTTOM47 = 0;

	//アイテム48の当たり判定宣言
	int LEFT48 = 0;
	int RIGHT48 = 0;
	int TOP48 = 0;
	int BOTTOM48 = 0;

	//アイテム49の当たり判定宣言
	int LEFT49 = 0;
	int RIGHT49 = 0;
	int TOP49 = 0;
	int BOTTOM49 = 0;

	//アイテム50の当たり判定宣言
	int LEFT50 = 0;
	int RIGHT50 = 0;
	int TOP50 = 0;
	int BOTTOM50 = 0;

	//アイテム51の当たり判定宣言
	int LEFT51 = 0;
	int RIGHT51 = 0;
	int TOP51 = 0;
	int BOTTOM51 = 0;

	//アイテム52の当たり判定宣言
	int LEFT52 = 0;
	int RIGHT52 = 0;
	int TOP52 = 0;
	int BOTTOM52 = 0;

	//アイテム53の当たり判定宣言
	int LEFT53 = 0;
	int RIGHT53 = 0;
	int TOP53 = 0;
	int BOTTOM53 = 0;

	//アイテム54の当たり判定宣言
	int LEFT54 = 0;
	int RIGHT54 = 0;
	int TOP54 = 0;
	int BOTTOM54 = 0;

	//アイテム55の当たり判定宣言
	int LEFT55 = 0;
	int RIGHT55 = 0;
	int TOP55 = 0;
	int BOTTOM55 = 0;

	//アイテム56の当たり判定宣言
	int LEFT56 = 0;
	int RIGHT56 = 0;
	int TOP56 = 0;
	int BOTTOM56 = 0;

	//アイテム57の当たり判定宣言
	int LEFT57 = 0;
	int RIGHT57 = 0;
	int TOP57 = 0;
	int BOTTOM57 = 0;

	//アイテム58の当たり判定宣言
	int LEFT58 = 0;
	int RIGHT58 = 0;
	int TOP58 = 0;
	int BOTTOM58 = 0;

	//アイテム59の当たり判定宣言
	int LEFT59 = 0;
	int RIGHT59 = 0;
	int TOP59 = 0;
	int BOTTOM59 = 0;

	//アイテム60の当たり判定宣言
	int LEFT60 = 0;
	int RIGHT60 = 0;
	int TOP60 = 0;
	int BOTTOM60 = 0;

	//マイナスアイテム61の当たり判定宣言
	int LEFT61 = 0;
	int RIGHT61 = 0;
	int TOP61 = 0;
	int BOTTOM61 = 0;

	//マイナスアイテム62の当たり判定宣言
	int LEFT62 = 0;
	int RIGHT62 = 0;
	int TOP62 = 0;
	int BOTTOM62 = 0;

	//マイナスアイテム63の当たり判定宣言
	int LEFT63 = 0;
	int RIGHT63 = 0;
	int TOP63 = 0;
	int BOTTOM63 = 0;

	//マイナスアイテム64の当たり判定宣言
	int LEFT64 = 0;
	int RIGHT64 = 0;
	int TOP64 = 0;
	int BOTTOM64 = 0;

	//マイナスアイテム65の当たり判定宣言
	int LEFT65 = 0;
	int RIGHT65 = 0;
	int TOP65 = 0;
	int BOTTOM65 = 0;

	//マイナスアイテム66の当たり判定宣言
	int LEFT66 = 0;
	int RIGHT66 = 0;
	int TOP66 = 0;
	int BOTTOM66 = 0;

	//マイナスアイテム67の当たり判定宣言
	int LEFT67 = 0;
	int RIGHT67 = 0;
	int TOP67 = 0;
	int BOTTOM67 = 0;

	//マイナスアイテム68の当たり判定宣言
	int LEFT68 = 0;
	int RIGHT68 = 0;
	int TOP68 = 0;
	int BOTTOM68 = 0;

	//マイナスアイテム69の当たり判定宣言
	int LEFT69 = 0;
	int RIGHT69 = 0;
	int TOP69 = 0;
	int BOTTOM69 = 0;

	//マイナスアイテム70の当たり判定宣言
	int LEFT70 = 0;
	int RIGHT70 = 0;
	int TOP70 = 0;
	int BOTTOM70 = 0;

	//マイナスアイテム71の当たり判定宣言
	int LEFT71 = 0;
	int RIGHT71 = 0;
	int TOP71 = 0;
	int BOTTOM71 = 0;

	//マイナスアイテム72の当たり判定宣言
	int LEFT72 = 0;
	int RIGHT72 = 0;
	int TOP72 = 0;
	int BOTTOM72 = 0;

	//マイナスアイテム73の当たり判定宣言
	int LEFT73 = 0;
	int RIGHT73 = 0;
	int TOP73 = 0;
	int BOTTOM73 = 0;

	//マイナスアイテム74の当たり判定宣言
	int LEFT74 = 0;
	int RIGHT74 = 0;
	int TOP74 = 0;
	int BOTTOM74 = 0;

	//マイナスアイテム75の当たり判定宣言
	int LEFT75 = 0;
	int RIGHT75 = 0;
	int TOP75 = 0;
	int BOTTOM75 = 0;

	//WARNING
	int LEFT76 = 0;
	int RIGHT76 = 0;
	int TOP76 = 0;
	int BOTTOM76 = 0;

	//GAMESTART
	int LEFT77 = 0;
	int RIGHT77 = 0;
	int TOP77 = 0;
	int BOTTOM77 = 0;

	

	//タイトル
	int taitoru = Novice::LoadTexture("./taitoru.png");

	//右の方にある説明
	int migi = Novice::LoadTexture("./migi.png");

	//左の方にある説明
	int hidari = Novice::LoadTexture("./hidari.png");

	//WARNING
	int warning = Novice::LoadTexture("./score.png");
	

	//GAMESTART
	int START = Novice::LoadTexture("./GAMESTART.png");

	//マイナスアイテム
	int mainasu = Novice::LoadTexture("./minus.png");

	//練習用のアイテム
	int rennsyuu = Novice::LoadTexture("./rennsyuu.png");

	//赤のアイテム
	int aka = Novice::LoadTexture("./RED.png");

	//青のアイテム
	int ao = Novice::LoadTexture("./BLUE.png");

	//緑のアイテム
	int midori = Novice::LoadTexture("./GREEN.png");

	//プレイヤー
	int jiki = Novice::LoadTexture("./jiki.png");

	//終わりのタイトル
	int owari = Novice::LoadTexture("./owari.png");

	//int modoru = 0;

	//背景動く
	int Haikei = Novice::LoadTexture("./haikei.png");
	int PosX = 0;
	int PosY = 0;

	int Pos2X = 0;
	int Pos2Y = -720;

	int Speed = 7;


	//スコア
	int score = 0;

	// ウィンドウの×ボタンが押されるまでループ
	while (Novice::ProcessMessage() == 0) {
		// フレームの開始
		Novice::BeginFrame();

		// キー入力を受け取る
		memcpy(preKeys, keys, 256);
		Novice::GetHitKeyStateAll(keys);

		///
		/// ↓更新処理ここから
		///
		 
		

		if(next==1){
			

		posX = posX + speed;

		if (posX <= 285) {
			speed *= -1;
		}
		if (posX >= 975) {
			speed *= -1;
		}

		if (keys[DIK_SPACE] && preKeys[DIK_SPACE] == 0) {
			speed *= -1;
		}

		//説明用
		S77X = S77X + SPEED5;

		if (S77X <= 1060) {
			SPEED5 *= -1;
		}
		if (S77X >= 1200) {
			SPEED5 *= -1;
		}

		//背景動く
		if (PosY >= 720) {
			PosY = -720;
		}
		if (Pos2Y >= 720) {
			Pos2Y = -720;
		}
		PosY += Speed;
		Pos2Y += Speed;


		//練習のアイテムのスピード
		POSY += SPEED;
		POS2Y += SPEED;
		POS3Y += SPEED;
		POS4Y += SPEED;
		POS5Y += SPEED;
		POS6Y += SPEED;
		POS7Y += SPEED;
		POS8Y += SPEED;
		POS9Y += SPEED;
		POS10Y += SPEED;
		POS11Y += SPEED;
		POS12Y += SPEED;
		POS13Y += SPEED;
		POS14Y += SPEED;
		POS15Y += SPEED;
		POS16Y += SPEED;
		POS17Y += SPEED;
		POS18Y += SPEED;
		POS19Y += SPEED;
		POS20Y += SPEED;

		//本番のアイテムのスピード
		POS21Y += SPEED2;
		POS22Y += SPEED3;
		POS23Y += SPEED;
		POS24Y += SPEED2;
		POS25Y += SPEED3;
		POS26Y += SPEED;
		POS27Y += SPEED3;
		POS28Y += SPEED2;
		POS29Y += SPEED2;
		POS30Y += SPEED;
		POS31Y += SPEED3;
		POS32Y += SPEED3;
		POS33Y += SPEED;
		POS34Y += SPEED2;
		POS35Y += SPEED;
		POS36Y += SPEED3;
		POS37Y += SPEED;
		POS38Y += SPEED2;
		POS39Y += SPEED;
		POS40Y += SPEED3;

		//大きさが違うアイテムのスピード
		POS41Y += SPEED;
		POS42Y += SPEED2;
		POS43Y += SPEED;
		POS44Y += SPEED3;
		POS45Y += SPEED;
		POS46Y += SPEED2;
		POS47Y += SPEED;
		POS48Y += SPEED3;
		POS49Y += SPEED;
		POS50Y += SPEED2;
		POS51Y += SPEED;
		POS52Y += SPEED;
		POS53Y += SPEED;
		POS54Y += SPEED2;
		POS55Y += SPEED2;
		POS56Y += SPEED2;
		POS57Y += SPEED3;
		POS58Y += SPEED3;
		POS59Y += SPEED3;
		POS60Y += SPEED3;

		//マイナスになるアイテムのスピード
		POS61Y += SPEED;
		POS62Y += SPEED;
		POS63Y += SPEED;
		POS64Y += SPEED;
		POS65Y += SPEED;
		POS66Y += SPEED;
		POS67Y += SPEED;
		POS68Y += SPEED;
		POS69Y += SPEED;
		POS70Y += SPEED;
		POS71Y += SPEED;
		POS72Y += SPEED;
		POS73Y += SPEED;
		POS74Y += SPEED;
		POS75Y += SPEED;

		//WARNING
		POS76Y += SPEED1;

		//GAMESTART
		POS77Y += SPEED1;

		//自機の当たり判定の処理
		left = posX;
		right = posX + 25;
		top = posY;
		bottom = posY + 25;
		
		
		

		//アイテム1の当たり判定の処理
		LEFT = POSX;
		RIGHT = POSX + 35;
		TOP = POSY;
		BOTTOM = POSY + 35;

		
		
		//アイテム2の当たり判定の処理
		LEFT2 = POS2X;
		RIGHT2 = POS2X + 20;
		TOP2 = POS2Y;
		BOTTOM2 = POS2Y + 20;

		//アイテム3の当たり判定の処理
		LEFT3 = POS3X;
		RIGHT3 = POS3X + 30;
		TOP3 = POS3Y;
		BOTTOM3 = POS3Y + 30;

		//アイテム4の当たり判定の処理
		LEFT4 = POS4X;
		RIGHT4 = POS4X + 25;
		TOP4 = POS4Y;
		BOTTOM4 = POS4Y + 25;

		//アイテム5の当たり判定の処理
		LEFT5 = POS5X;
		RIGHT5 = POS5X + 20;
		TOP5 = POS5Y;
		BOTTOM5 = POS5Y + 20;

		//アイテム6の当たり判定の処理
		LEFT6 = POS6X;
		RIGHT6 = POS6X + 30;
		TOP6 = POS6Y;
		BOTTOM6 = POS6Y + 30;

		//アイテム7の当たり判定の処理
		LEFT7 = POS7X;
		RIGHT7 = POS7X + 25;
		TOP7 = POS7Y;
		BOTTOM7 = POS7Y + 25;

		//アイテム8の当たり判定の処理
		LEFT8 = POS8X;
		RIGHT8 = POS8X + 35;
		TOP8 = POS8Y;
		BOTTOM8 = POS8Y + 35;

		//アイテム9の当たり判定の処理
		LEFT9 = POS9X;
		RIGHT9 = POS9X + 35;
		TOP9 = POS9Y;
		BOTTOM9 = POS9Y + 35;

		//アイテム10の当たり判定の処理
		LEFT10 = POS10X;
		RIGHT10 = POS10X + 35;
		TOP10 = POS10Y;
		BOTTOM10= POS10Y + 35;

		//アイテム11の当たり判定の処理
		LEFT11 = POS11X;
		RIGHT11 = POS11X + 35;
		TOP11 = POS11Y;
		BOTTOM11 = POS11Y + 35;

		//アイテム12の当たり判定の処理
		LEFT12 = POS12X;
		RIGHT12 = POS12X + 35;
		TOP12 = POS12Y;
		BOTTOM12 = POS12Y + 35;

		//アイテム13の当たり判定の処理
		LEFT13 = POS13X;
		RIGHT13 = POS13X + 35;
		TOP13 = POS13Y;
		BOTTOM13 = POS13Y + 35;

		//アイテム14の当たり判定の処理
		LEFT14 = POS14X;
		RIGHT14 = POS14X + 35;
		TOP14 = POS14Y;
		BOTTOM14 = POS14Y + 35;

		//アイテム15の当たり判定の処理
		LEFT15 = POS15X;
		RIGHT15 = POS15X + 35;
		TOP15 = POS15Y;
		BOTTOM15 = POS15Y + 35;

		//アイテム16の当たり判定の処理
		LEFT16 = POS16X;
		RIGHT16 = POS16X + 35;
		TOP16 = POS16Y;
		BOTTOM16 = POS16Y + 35;

		//アイテム17の当たり判定の処理
		LEFT17 = POS17X;
		RIGHT17 = POS17X + 35;
		TOP17 = POS17Y;
		BOTTOM17 = POS17Y + 35;

		//アイテム18の当たり判定の処理
		LEFT18 = POS18X;
		RIGHT18 = POS18X + 35;
		TOP18 = POS18Y;
		BOTTOM18 = POS18Y + 35;

		//アイテム19の当たり判定の処理
		LEFT19 = POS19X;
		RIGHT19 = POS19X + 35;
		TOP19 = POS19Y;
		BOTTOM19 = POS19Y + 35;

		//アイテム20の当たり判定の処理
		LEFT20 = POS20X;
		RIGHT20 = POS20X + 35;
		TOP20 = POS20Y;
		BOTTOM20 = POS20Y + 35;


		//アイテム21の当たり判定の処理
		LEFT21 = POS21X;
		RIGHT21 = POS21X + 35;
		TOP21 = POS21Y;
		BOTTOM21 = POS21Y + 35;

		//アイテム22の当たり判定の処理
		LEFT22 = POS22X;
		RIGHT22 = POS22X + 35;
		TOP22 = POS22Y;
		BOTTOM22 = POS22Y + 35;

		//アイテム23の当たり判定の処理
		LEFT23 = POS23X;
		RIGHT23 = POS23X + 35;
		TOP23 = POS23Y;
		BOTTOM23 = POS23Y + 35;

		//アイテム24の当たり判定の処理
		LEFT24 = POS24X;
		RIGHT24 = POS24X + 35;
		TOP24 = POS24Y;
		BOTTOM24 = POS24Y + 35;

		//アイテム25の当たり判定の処理
		LEFT25 = POS25X;
		RIGHT25 = POS25X + 35;
		TOP25 = POS25Y;
		BOTTOM25 = POS25Y + 35;

		//アイテム26の当たり判定の処理
		LEFT26 = POS26X;
		RIGHT26 = POS26X + 35;
		TOP26 = POS26Y;
		BOTTOM26 = POS26Y + 35;

		//アイテム27の当たり判定の処理
		LEFT27 = POS27X;
		RIGHT27 = POS27X + 35;
		TOP27 = POS27Y;
		BOTTOM27 = POS27Y + 35;

		//アイテム28の当たり判定の処理
		LEFT28 = POS28X;
		RIGHT28 = POS28X + 35;
		TOP28 = POS28Y;
		BOTTOM28 = POS28Y + 35;

		//アイテム29の当たり判定の処理
		LEFT29 = POS29X;
		RIGHT29 = POS29X + 35;
		TOP29 = POS29Y;
		BOTTOM29 = POS29Y + 35;

		//アイテム30の当たり判定の処理
		LEFT30 = POS30X;
		RIGHT30 = POS30X + 35;
		TOP30 = POS30Y;
		BOTTOM30 = POS30Y + 35;

		//アイテム31の当たり判定の処理
		LEFT31 = POS31X;
		RIGHT31 = POS31X + 35;
		TOP31 = POS31Y;
		BOTTOM31 = POS31Y + 35;

		//アイテム32の当たり判定の処理
		LEFT32 = POS32X;
		RIGHT32 = POS32X + 35;
		TOP32 = POS32Y;
		BOTTOM32 = POS32Y + 35;

		//アイテム33の当たり判定の処理
		LEFT33 = POS33X;
		RIGHT33 = POS33X + 35;
		TOP33 = POS33Y;
		BOTTOM33 = POS33Y + 35;

		//アイテム34の当たり判定の処理
		LEFT34 = POS34X;
		RIGHT34 = POS34X + 35;
		TOP34 = POS34Y;
		BOTTOM34 = POS34Y + 35;

		//アイテム35の当たり判定の処理
		LEFT35 = POS35X;
		RIGHT35 = POS35X + 35;
		TOP35 = POS35Y;
		BOTTOM35 = POS35Y + 35;

		//アイテム36の当たり判定の処理
		LEFT36 = POS36X;
		RIGHT36 = POS36X + 35;
		TOP36 = POS36Y;
		BOTTOM36 = POS36Y + 35;

		//アイテム37の当たり判定の処理
		LEFT37 = POS37X;
		RIGHT37 = POS37X + 35;
		TOP37 = POS37Y;
		BOTTOM37 = POS37Y + 35;

		//アイテム38の当たり判定の処理
		LEFT38 = POS38X;
		RIGHT38 = POS38X + 35;
		TOP38 = POS38Y;
		BOTTOM38 = POS38Y + 35;

		//アイテム39の当たり判定の処理
		LEFT39 = POS39X;
		RIGHT39 = POS39X + 35;
		TOP39 = POS39Y;
		BOTTOM39 = POS39Y + 35;

		//アイテム40の当たり判定の処理
		LEFT40 = POS40X;
		RIGHT40 = POS40X + 35;
		TOP40 = POS40Y;
		BOTTOM40 = POS40Y + 35;

		//アイテム41の当たり判定の処理
		LEFT41 = POS41X;
		RIGHT41 = POS41X + 25;
		TOP41 = POS41Y;
		BOTTOM41 = POS41Y + 25;

		//アイテム42の当たり判定の処理
		LEFT42 = POS42X;
		RIGHT42 = POS42X + 20;
		TOP42 = POS42Y;
		BOTTOM42 = POS42Y + 20;

		//アイテム43の当たり判定の処理
		LEFT43 = POS43X;
		RIGHT43 = POS43X + 15;
		TOP43 = POS43Y;
		BOTTOM43 = POS43Y + 15;

		//アイテム44の当たり判定の処理
		LEFT44 = POS44X;
		RIGHT44 = POS44X + 20;
		TOP44 = POS44Y;
		BOTTOM44 = POS44Y + 20;

		//アイテム45の当たり判定の処理
		LEFT45 = POS45X;
		RIGHT45 = POS45X + 25;
		TOP45 = POS45Y;
		BOTTOM45 = POS45Y + 25;

		//アイテム46の当たり判定の処理
		LEFT46 = POS46X;
		RIGHT46 = POS46X + 20;
		TOP46 = POS46Y;
		BOTTOM46 = POS46Y + 20;

		//アイテム47の当たり判定の処理
		LEFT47 = POS47X;
		RIGHT47 = POS47X + 15;
		TOP47 = POS47Y;
		BOTTOM47 = POS47Y + 15;

		//アイテム48の当たり判定の処理
		LEFT48 = POS48X;
		RIGHT48 = POS48X + 20;
		TOP48 = POS48Y;
		BOTTOM48 = POS48Y + 20;

		//アイテム49の当たり判定の処理
		LEFT49 = POS49X;
		RIGHT49 = POS49X + 25;
		TOP49 = POS49Y;
		BOTTOM49 = POS49Y + 25;

		//アイテム50の当たり判定の処理
		LEFT50 = POS50X;
		RIGHT50 = POS50X + 20;
		TOP50 = POS50Y;
		BOTTOM50 = POS50Y + 20;

		//アイテム51の当たり判定の処理
		LEFT51 = POS51X;
		RIGHT51 = POS51X + 20;
		TOP51 = POS51Y;
		BOTTOM51 = POS51Y + 20;

		//アイテム52の当たり判定の処理
		LEFT52 = POS52X;
		RIGHT52 = POS52X + 25;
		TOP52 = POS52Y;
		BOTTOM52 = POS52Y + 25;

		//アイテム53の当たり判定の処理
		LEFT53 = POS53X;
		RIGHT53 = POS53X + 15;
		TOP53 = POS53Y;
		BOTTOM53 = POS53Y + 15;

		//アイテム54の当たり判定の処理
		LEFT54 = POS54X;
		RIGHT54 = POS54X + 20;
		TOP54 = POS54Y;
		BOTTOM54 = POS54Y + 20;

		//アイテム55の当たり判定の処理
		LEFT55 = POS55X;
		RIGHT55 = POS55X + 15;
		TOP55 = POS55Y;
		BOTTOM55 = POS55Y + 15;

		//アイテム56の当たり判定の処理
		LEFT56 = POS56X;
		RIGHT56 = POS56X + 25;
		TOP56 = POS56Y;
		BOTTOM56 = POS56Y + 25;

		//アイテム57の当たり判定の処理
		LEFT57 = POS57X;
		RIGHT57 = POS57X + 25;
		TOP57 = POS57Y;
		BOTTOM57 = POS57Y + 25;

		//アイテム58の当たり判定の処理
		LEFT58 = POS58X;
		RIGHT58 = POS58X + 15;
		TOP58 = POS58Y;
		BOTTOM58 = POS58Y + 15;

		//アイテム59の当たり判定の処理
		LEFT59 = POS59X;
		RIGHT59 = POS59X + 20;
		TOP59 = POS59Y;
		BOTTOM59 = POS59Y + 20;

		//アイテム60の当たり判定の処理
		LEFT60 = POS60X;
		RIGHT60 = POS60X + 25;
		TOP60 = POS60Y;
		BOTTOM60 = POS60Y + 25;



		//マイナスアイテム61の当たり判定の処理
		LEFT61 = POS61X;
		RIGHT61 = POS61X + 35;
		TOP61 = POS61Y;
		BOTTOM61 = POS61Y + 35;

		//マイナスアイテム62の当たり判定の処理
		LEFT62 = POS62X;
		RIGHT62 = POS62X + 35;
		TOP62 = POS62Y;
		BOTTOM62 = POS62Y + 35;

		//マイナスアイテム63の当たり判定の処理
		LEFT63 = POS63X;
		RIGHT63 = POS63X + 35;
		TOP63 = POS63Y;
		BOTTOM63 = POS63Y + 35;

		//マイナスアイテム64の当たり判定の処理
		LEFT64 = POS64X;
		RIGHT64 = POS64X + 35;
		TOP64 = POS64Y;
		BOTTOM64 = POS64Y + 35;

		//マイナスアイテム65の当たり判定の処理
		LEFT65 = POS65X;
		RIGHT65 = POS65X + 35;
		TOP65 = POS65Y;
		BOTTOM65 = POS65Y + 35;

		//マイナスアイテム66の当たり判定の処理
		LEFT66 = POS66X;
		RIGHT66 = POS66X + 35;
		TOP66 = POS66Y;
		BOTTOM66 = POS66Y + 35;

		//マイナスアイテム67の当たり判定の処理
		LEFT67 = POS67X;
		RIGHT67 = POS67X + 35;
		TOP67 = POS67Y;
		BOTTOM67 = POS67Y + 35;

		//マイナスアイテム68の当たり判定の処理
		LEFT68 = POS68X;
		RIGHT68 = POS68X + 35;
		TOP68 = POS68Y;
		BOTTOM68 = POS68Y + 35;

		//マイナスアイテム69の当たり判定の処理
		LEFT69 = POS69X;
		RIGHT69 = POS69X + 35;
		TOP69 = POS69Y;
		BOTTOM69 = POS69Y + 35;

		//マイナスアイテム70の当たり判定の処理
		LEFT70 = POS70X;
		RIGHT70 = POS70X + 35;
		TOP70 = POS70Y;
		BOTTOM70 = POS70Y + 35;

		//マイナスアイテム71の当たり判定の処理
		LEFT71 = POS71X;
		RIGHT71 = POS71X + 35;
		TOP71 = POS71Y;
		BOTTOM71 = POS71Y + 35;

		//マイナスアイテム72の当たり判定の処理
		LEFT72 = POS72X;
		RIGHT72 = POS72X + 35;
		TOP72 = POS72Y;
		BOTTOM72 = POS72Y + 35;

		//マイナスアイテム73の当たり判定の処理
		LEFT73 = POS73X;
		RIGHT73 = POS73X + 35;
		TOP73 = POS73Y;
		BOTTOM73 = POS73Y + 35;

		//マイナスアイテム74の当たり判定の処理
		LEFT74 = POS74X;
		RIGHT74 = POS74X + 35;
		TOP74 = POS74Y;
		BOTTOM74 = POS74Y + 35;

		//マイナスアイテム75の当たり判定の処理
		LEFT75 = POS75X;
		RIGHT75 = POS75X + 35;
		TOP75 = POS75Y;
		BOTTOM75 = POS75Y + 35;

		//WARNING
		LEFT76 = POS76X;
		RIGHT76 = POS76X + 35;
		TOP76 = POS76Y;
		BOTTOM76 = POS76Y + 35;

		

		//GAMESTART
		LEFT77 = POS77X;
		RIGHT77 = POS77X + 35;
		TOP77 = POS77Y;
		BOTTOM77 = POS77Y + 35;

		

		///
		/// ↑更新処理ここまで
		///

		///
		/// ↓描画処理ここから
		///

		//真ん中背景動く
		Novice::DrawSprite(PosX, PosY, Haikei, 1.0f, 1.0f, 0.0f, WHITE);
		Novice::DrawSprite(Pos2X, Pos2Y, Haikei, 1.0f, 1.0f, 0.0f, WHITE);

		//自機	
		Novice::DrawSprite(posX, posY, jiki, 2.0f, 2.0f, 0.0f, WHITE);

		//説明用	
		Novice::DrawSprite(S77X, S77Y, jiki, 1.0f, 1.0f, 0.0f, WHITE);
		
		//練習のアイテム
		if (flag == true) {
			Novice::DrawSprite(POSX, POSY, rennsyuu, 1.0f, 1.0f, 0.0f, WHITE);
		}
		if (flag2 == true) {
			Novice::DrawSprite(POS2X, POS2Y, rennsyuu, 1.0f, 1.0f, 0.0f, WHITE);
		}
		if (flag3 == true) {
			Novice::DrawSprite(POS3X, POS3Y, rennsyuu, 1.0f, 1.0f, 0.0f, WHITE);
		}
		if (flag4 == true) {
			Novice::DrawSprite(POS4X, POS4Y, rennsyuu, 1.0f, 1.0f, 0.0f, WHITE);
		}
		if (flag5 == true) {
			Novice::DrawSprite(POS5X, POS5Y, rennsyuu, 1.0f, 1.0f, 0.0f, WHITE);
		}
		if (flag6 == true) {
			Novice::DrawSprite(POS6X, POS6Y, rennsyuu, 1.0f, 1.0f, 0.0f, WHITE);
		}
		if (flag7 == true) {
			Novice::DrawSprite(POS7X, POS7Y, rennsyuu, 1.0f, 1.0f, 0.0f, WHITE);
		}
		if (flag8 == true) {
			Novice::DrawSprite(POS8X, POS8Y, rennsyuu, 1.0f, 1.0f, 0.0f, WHITE);
		}
		if (flag9 == true) {
			Novice::DrawSprite(POS9X, POS9Y, rennsyuu, 1.0f, 1.0f, 0.0f, WHITE);
		}
		if (flag10 == true) {
			Novice::DrawSprite(POS10X, POS10Y, rennsyuu, 1.0f, 1.0f, 0.0f, WHITE);
		}
		if (flag11 == true) {
			Novice::DrawSprite(POS11X, POS11Y, rennsyuu, 1.0f, 1.0f, 0.0f, WHITE);
		}
		if (flag12 == true) {
			Novice::DrawSprite(POS12X, POS12Y, rennsyuu, 1.0f, 1.0f, 0.0f, WHITE);
		}
		if (flag13 == true) {
			Novice::DrawSprite(POS13X, POS13Y, rennsyuu, 1.0f, 1.0f, 0.0f, WHITE);
		}
		if (flag14 == true) {
			Novice::DrawSprite(POS14X, POS14Y, rennsyuu, 1.0f, 1.0f, 0.0f, WHITE);
		}
		if (flag15 == true) {
			Novice::DrawSprite(POS15X, POS15Y, rennsyuu, 1.0f, 1.0f, 0.0f, WHITE);
		}
		if (flag16 == true) {
			Novice::DrawSprite(POS16X, POS16Y, rennsyuu, 1.0f, 1.0f, 0.0f, WHITE);
		}
		if (flag17 == true) {
			Novice::DrawSprite(POS17X, POS17Y, rennsyuu, 1.0f, 1.0f, 0.0f, WHITE);
		}
		if (flag18 == true) {
			Novice::DrawSprite(POS18X, POS18Y, rennsyuu, 1.0f, 1.0f, 0.0f, WHITE);
		}
		if (flag19 == true) {
			Novice::DrawSprite(POS19X, POS19Y, rennsyuu, 1.0f, 1.0f, 0.0f, WHITE);
		}
		if (flag20 == true) {
			Novice::DrawSprite(POS20X, POS20Y, rennsyuu, 1.0f, 1.0f, 0.0f, WHITE);
		}

		//本番のアイテム
		if (flag21 == true) {
			Novice::DrawSprite(POS21X, POS21Y, aka, 1.0f, 1.0f, 0.0f, WHITE);
		}
		if (flag22 == true) {
			Novice::DrawSprite(POS22X, POS22Y, midori, 1.0f, 1.0f, 0.0f, WHITE);
		}
		if (flag23 == true) {
			Novice::DrawSprite(POS23X, POS23Y, midori, 1.0f, 1.0f, 0.0f, WHITE);
		}
		if (flag24 == true) {
			Novice::DrawSprite(POS24X, POS24Y, aka, 1.0f, 1.0f, 0.0f, WHITE);
		}
		if (flag25 == true) {
			Novice::DrawSprite(POS25X, POS25Y, ao, 1.0f, 1.0f, 0.0f, WHITE);
		}
		if (flag26 == true) {
			Novice::DrawSprite(POS26X, POS26Y, aka, 1.0f, 1.0f, 0.0f, WHITE);
		}
		if (flag27 == true) {
			Novice::DrawSprite(POS27X, POS27Y, midori, 1.0f, 1.0f, 0.0f, WHITE);
		}
		if (flag28 == true) {
			Novice::DrawSprite(POS28X, POS28Y, aka, 1.0f, 1.0f, 0.0f, WHITE);
		}
		if (flag29 == true) {
			Novice::DrawSprite(POS29X, POS29Y, ao, 1.0f, 1.0f, 0.0f, WHITE);
		}
		if (flag30 == true) {
			Novice::DrawSprite(POS30X, POS30Y, aka, 1.0f, 1.0f, 0.0f, WHITE);
		}
		if (flag31 == true) {
			Novice::DrawSprite(POS31X, POS31Y, midori, 1.0f, 1.0f, 0.0f, WHITE);
		}
		if (flag32 == true) {
			Novice::DrawSprite(POS32X, POS32Y, midori, 1.0f, 1.0f, 0.0f, WHITE);
		}
		if (flag33 == true) {
			Novice::DrawSprite(POS33X, POS33Y, midori, 1.0f, 1.0f, 0.0f, WHITE);
		}
		if (flag34 == true) {
			Novice::DrawSprite(POS34X, POS34Y, aka, 1.0f, 1.0f, 0.0f, WHITE);
		}
		if (flag35 == true) {
			Novice::DrawSprite(POS35X, POS35Y, ao, 1.0f, 1.0f, 0.0f, WHITE);
		}
		if (flag36 == true) {
			Novice::DrawSprite(POS36X, POS36Y, midori, 1.0f, 1.0f, 0.0f, WHITE);
		}
		if (flag37 == true) {
			Novice::DrawSprite(POS37X, POS37Y, midori, 1.0f, 1.0f, 0.0f, WHITE);
		}
		if (flag38 == true) {
			Novice::DrawSprite(POS38X, POS38Y, aka, 1.0f, 1.0f, 0.0f, WHITE);
		}
		if (flag39 == true) {
			Novice::DrawSprite(POS39X, POS39Y, ao, 1.0f, 1.0f, 0.0f, WHITE);
		}
		if (flag40 == true) {
			Novice::DrawSprite(POS40X, POS40Y, midori, 1.0f, 1.0f, 0.0f, WHITE);
		}

		//大きさが違うアイテム
		if (flag41 == true) {
			Novice::DrawSprite(POS41X, POS41Y, aka, 1.0f, 1.0f, 0.0f, WHITE);
		}
		if (flag42 == true) {
			Novice::DrawSprite(POS42X, POS42Y, ao, 1.0f, 1.0f, 0.0f, WHITE);
		}
		if (flag43 == true) {
			Novice::DrawSprite(POS43X, POS43Y, aka, 1.0f, 1.0f, 0.0f, WHITE);
		}
		if (flag44 == true) {
			Novice::DrawSprite(POS44X, POS44Y, midori, 1.0f, 1.0f, 0.0f, WHITE);
		}
		if (flag45 == true) {
			Novice::DrawSprite(POS45X, POS45Y, aka, 1.0f, 1.0f, 0.0f, WHITE);
		}
		if (flag46 == true) {
			Novice::DrawSprite(POS46X, POS46Y, ao, 1.0f, 1.0f, 0.0f, WHITE);
		}
		if (flag47 == true) {
			Novice::DrawSprite(POS47X, POS47Y, aka, 1.0f, 1.0f, 0.0f, WHITE);
		}
		if (flag48 == true) {
			Novice::DrawSprite(POS48X, POS48Y, midori, 1.0f, 1.0f, 0.0f, WHITE);
		}
		if (flag49 == true) {
			Novice::DrawSprite(POS49X, POS49Y, aka, 1.0f, 1.0f, 0.0f, WHITE);
		}
		if (flag50 == true) {
			Novice::DrawSprite(POS50X, POS50Y, ao, 1.0f, 1.0f, 0.0f, WHITE);
		}
		if (flag51 == true) {
			Novice::DrawSprite(POS51X, POS51Y, aka, 1.0f, 1.0f, 0.0f, WHITE);
		}
		if (flag52 == true) {
			Novice::DrawSprite(POS52X, POS52Y, aka, 1.0f, 1.0f, 0.0f, WHITE);
		}
		if (flag53 == true) {
			Novice::DrawSprite(POS53X, POS53Y, aka, 1.0f, 1.0f, 0.0f, WHITE);
		}
		if (flag54 == true) {
			Novice::DrawSprite(POS54X, POS54Y, ao, 1.0f, 1.0f, 0.0f, WHITE);
		}
		if (flag55 == true) {
			Novice::DrawSprite(POS55X, POS55Y, ao, 1.0f, 1.0f, 0.0f, WHITE);
		}
		if (flag56 == true) {
			Novice::DrawSprite(POS56X, POS56Y, ao, 1.0f, 1.0f, 0.0f, WHITE);
		}
		if (flag57 == true) {
			Novice::DrawSprite(POS57X, POS57Y, midori, 1.0f, 1.0f, 0.0f, WHITE);
		}
		if (flag58 == true) {
			Novice::DrawSprite(POS58X, POS58Y, midori, 1.0f, 1.0f, 0.0f, WHITE);
		}												  
		if (flag59 == true) {							  
			Novice::DrawSprite(POS59X, POS59Y, midori, 1.0f, 1.0f, 0.0f, WHITE);
		}												  
		if (flag60 == true) {							  
			Novice::DrawSprite(POS60X, POS60Y, midori, 1.0f, 1.0f, 0.0f, WHITE);
		}

		//マイナスアイテム
		if (flag61 == true) {
			Novice::DrawSprite(POS61X, POS61Y, mainasu, 1.0f, 1.0f, 0.0f, WHITE);
		}
		if (flag62 == true) {
			Novice::DrawSprite(POS62X, POS62Y, mainasu, 1.0f, 1.0f, 0.0f, WHITE);
		}
		if (flag63 == true) {
			Novice::DrawSprite(POS63X, POS63Y, mainasu, 1.0f, 1.0f, 0.0f, WHITE);
		}
		if (flag64 == true) {
			Novice::DrawSprite(POS64X, POS64Y, mainasu, 1.0f, 1.0f, 0.0f, WHITE);
		}
		if (flag65 == true) {
			Novice::DrawSprite(POS65X, POS65Y, mainasu, 1.0f, 1.0f, 0.0f, WHITE);
		}
		if (flag66 == true) {
			Novice::DrawSprite(POS66X, POS66Y, mainasu, 1.0f, 1.0f, 0.0f, WHITE);
		}
		if (flag67 == true) {
			Novice::DrawSprite(POS67X, POS67Y, mainasu, 1.0f, 1.0f, 0.0f, WHITE);
		}
		if (flag68 == true) {
			Novice::DrawSprite(POS68X, POS68Y, mainasu, 1.0f, 1.0f, 0.0f, WHITE);
		}
		if (flag69 == true) {
			Novice::DrawSprite(POS69X, POS69Y, mainasu, 1.0f, 1.0f, 0.0f, WHITE);
		}
		if (flag70 == true) {
			Novice::DrawSprite(POS70X, POS70Y, mainasu, 1.0f, 1.0f, 0.0f, WHITE);
		}
		if (flag71 == true) {
			Novice::DrawSprite(POS71X, POS71Y, mainasu, 1.0f, 1.0f, 0.0f, WHITE);
		}
		if (flag72 == true) {
			Novice::DrawSprite(POS72X, POS72Y, mainasu, 1.0f, 1.0f, 0.0f, WHITE);
		}
		if (flag73 == true) {
			Novice::DrawSprite(POS73X, POS73Y, mainasu, 1.0f, 1.0f, 0.0f, WHITE);
		}
		if (flag74 == true) {
			Novice::DrawSprite(POS74X, POS74Y, mainasu, 1.0f, 1.0f, 0.0f, WHITE);
		}
		if (flag75 == true) {
			Novice::DrawSprite(POS75X, POS75Y, mainasu, 1.0f, 1.0f, 0.0f, WHITE);
		}

		//WARNING
		if (flag76 == true) {
			Novice::DrawSprite(POS76X, POS76Y, warning,1.3f,1.3f, 0.0f, WHITE);
		}

		//GAMESTART
		if (flag77 == true) {
			Novice::DrawSprite(POS77X, POS77Y, START, 1.0f, 1.0f, 0.0f, WHITE);
		}

		//練習のアイテム
		if (LEFT <= right && left <= RIGHT && TOP <= bottom && top <= BOTTOM) {
			flag = false;
		}
		if (LEFT2 <= right && left <= RIGHT2 && TOP2 <= bottom && top <= BOTTOM2) {
			flag2 = false;
		}
		if (LEFT3 <= right && left <= RIGHT3 && TOP3 <= bottom && top <= BOTTOM3) {
			flag3 = false;
		}
		if (LEFT4 <= right && left <= RIGHT4 && TOP4 <= bottom && top <= BOTTOM4) {
			flag4 = false;
		}
		if (LEFT5 <= right && left <= RIGHT5 && TOP5 <= bottom && top <= BOTTOM5) {
			flag5 = false;
		}
		if (LEFT6 <= right && left <= RIGHT6 && TOP6 <= bottom && top <= BOTTOM6) {
			flag6 = false;
		}
		if (LEFT7 <= right && left <= RIGHT7 && TOP7 <= bottom && top <= BOTTOM7) {
			flag7 = false;
		}
		if (LEFT8 <= right && left <= RIGHT8 && TOP8 <= bottom && top <= BOTTOM8) {
			flag8 = false;
		}
		if (LEFT9 <= right && left <= RIGHT9 && TOP9 <= bottom && top <= BOTTOM9) {
			flag9 = false;
		}
		if (LEFT10 <= right && left <= RIGHT10 && TOP10 <= bottom && top <= BOTTOM10) {
			flag10 = false;
		}
		if (LEFT11 <= right && left <= RIGHT11 && TOP11 <= bottom && top <= BOTTOM11) {
			flag11 = false;
		}
		if (LEFT12 <= right && left <= RIGHT12 && TOP12 <= bottom && top <= BOTTOM12) {
			flag12 = false;
		}
		if (LEFT13 <= right && left <= RIGHT13 && TOP13 <= bottom && top <= BOTTOM13) {
			flag13 = false;
		}
		if (LEFT14 <= right && left <= RIGHT14 && TOP14 <= bottom && top <= BOTTOM14) {
			flag14 = false;
		}
		if (LEFT15 <= right && left <= RIGHT15 && TOP15 <= bottom && top <= BOTTOM15) {
			flag15 = false;
		}
		if (LEFT16 <= right && left <= RIGHT16 && TOP16 <= bottom && top <= BOTTOM16) {
			flag16 = false;
		}
		if (LEFT17 <= right && left <= RIGHT17 && TOP17 <= bottom && top <= BOTTOM17) {
			flag17 = false;
		}
		if (LEFT18 <= right && left <= RIGHT18 && TOP18 <= bottom && top <= BOTTOM18) {
			flag18 = false;
		}
		if (LEFT19 <= right && left <= RIGHT19 && TOP19 <= bottom && top <= BOTTOM19) {
			flag19 = false;
		}
		if (LEFT20 <= right && left <= RIGHT20 && TOP20 <= bottom && top <= BOTTOM20) {
			flag20 = false;
		}

		//本番のアイテム
		if (LEFT21 <= right && left <= RIGHT21 && TOP21 <= bottom && top <= BOTTOM21) {
			flag21 = false;
		}
		if (LEFT22 <= right && left <= RIGHT22 && TOP22 <= bottom && top <= BOTTOM22) {
			flag22 = false;
		}
		if (LEFT23 <= right && left <= RIGHT23 && TOP23 <= bottom && top <= BOTTOM23) {
			flag23 = false;
		}
		if (LEFT24 <= right && left <= RIGHT24 && TOP24 <= bottom && top <= BOTTOM24) {
			flag24 = false;
		}
		if (LEFT25 <= right && left <= RIGHT25 && TOP25 <= bottom && top <= BOTTOM25) {
			flag25 = false;
		}
		if (LEFT26 <= right && left <= RIGHT26 && TOP26 <= bottom && top <= BOTTOM26) {
			flag26 = false;
		}
		if (LEFT27 <= right && left <= RIGHT27 && TOP27 <= bottom && top <= BOTTOM27) {
			flag27 = false;
		}
		if (LEFT28 <= right && left <= RIGHT28 && TOP28 <= bottom && top <= BOTTOM28) {
			flag28 = false;
		}
		if (LEFT29 <= right && left <= RIGHT29 && TOP29 <= bottom && top <= BOTTOM29) {
			flag29 = false;
		}
		if (LEFT30 <= right && left <= RIGHT30 && TOP30 <= bottom && top <= BOTTOM30) {
			flag30 = false;
		}
		if (LEFT31 <= right && left <= RIGHT31 && TOP31 <= bottom && top <= BOTTOM31) {
			flag31 = false;
		}
		if (LEFT32 <= right && left <= RIGHT32 && TOP32 <= bottom && top <= BOTTOM32) {
			flag32 = false;
		}
		if (LEFT33 <= right && left <= RIGHT33 && TOP33 <= bottom && top <= BOTTOM33) {
			flag33 = false;
		}
		if (LEFT34 <= right && left <= RIGHT34 && TOP34 <= bottom && top <= BOTTOM34) {
			flag34 = false;
		}
		if (LEFT35 <= right && left <= RIGHT35 && TOP35 <= bottom && top <= BOTTOM35) {
			flag35 = false;
		}
		if (LEFT36 <= right && left <= RIGHT36 && TOP36 <= bottom && top <= BOTTOM36) {
			flag36 = false;
		}
		if (LEFT37 <= right && left <= RIGHT37 && TOP37 <= bottom && top <= BOTTOM37) {
			flag37 = false;
		}
		if (LEFT38 <= right && left <= RIGHT38 && TOP38 <= bottom && top <= BOTTOM38) {
			flag38 = false;
		}
		if (LEFT39 <= right && left <= RIGHT39 && TOP39 <= bottom && top <= BOTTOM39) {
			flag39 = false;
		}
		if (LEFT40 <= right && left <= RIGHT40 && TOP40 <= bottom && top <= BOTTOM40) {
			flag40 = false;
		}

		//大きさが違うアイテム
		if (LEFT41 <= right && left <= RIGHT41 && TOP41 <= bottom && top <= BOTTOM41) {
			flag41 = false;
		}
		if (LEFT42 <= right && left <= RIGHT42 && TOP42 <= bottom && top <= BOTTOM42) {
			flag42 = false;
		}
		if (LEFT43 <= right && left <= RIGHT43 && TOP43 <= bottom && top <= BOTTOM43) {
			flag43 = false;
		}
		if (LEFT44 <= right && left <= RIGHT44 && TOP44 <= bottom && top <= BOTTOM44) {
			flag44 = false;
		}
		if (LEFT45 <= right && left <= RIGHT45 && TOP45 <= bottom && top <= BOTTOM45) {
			flag45 = false;
		}
		if (LEFT46 <= right && left <= RIGHT46 && TOP46 <= bottom && top <= BOTTOM46) {
			flag46 = false;
		}
		if (LEFT47 <= right && left <= RIGHT47 && TOP47 <= bottom && top <= BOTTOM47) {
			flag47 = false;
		}
		if (LEFT48 <= right && left <= RIGHT48 && TOP48 <= bottom && top <= BOTTOM48) {
			flag48 = false;
		}
		if (LEFT49 <= right && left <= RIGHT49 && TOP49 <= bottom && top <= BOTTOM49) {
			flag49 = false;
		}
		if (LEFT50 <= right && left <= RIGHT50 && TOP50 <= bottom && top <= BOTTOM50) {
			flag50 = false;
		}
		if (LEFT51 <= right && left <= RIGHT51 && TOP51 <= bottom && top <= BOTTOM51) {
			flag51 = false;
		}
		if (LEFT52 <= right && left <= RIGHT52 && TOP52 <= bottom && top <= BOTTOM52) {
			flag52 = false;
		}
		if (LEFT53 <= right && left <= RIGHT53 && TOP53 <= bottom && top <= BOTTOM53) {
			flag53 = false;
		}
		if (LEFT54 <= right && left <= RIGHT54 && TOP54 <= bottom && top <= BOTTOM54) {
			flag54 = false;
		}
		if (LEFT55 <= right && left <= RIGHT55 && TOP55 <= bottom && top <= BOTTOM55) {
			flag55 = false;
		}
		if (LEFT56 <= right && left <= RIGHT56 && TOP56 <= bottom && top <= BOTTOM56) {
			flag56 = false;
		}
		if (LEFT57 <= right && left <= RIGHT57 && TOP57 <= bottom && top <= BOTTOM57) {
			flag57 = false;
		}
		if (LEFT58 <= right && left <= RIGHT58 && TOP58 <= bottom && top <= BOTTOM58) {
			flag58 = false;
		}
		if (LEFT59 <= right && left <= RIGHT59 && TOP59 <= bottom && top <= BOTTOM59) {
			flag59 = false;
		}
		if (LEFT60 <= right && left <= RIGHT60 && TOP60 <= bottom && top <= BOTTOM60) {
			flag60 = false;
		}

		//マイナスアイテム
		if (LEFT61 <= right && left <= RIGHT61 && TOP61 <= bottom && top <= BOTTOM61) {
			flag61 = false;
		}
		if (LEFT62 <= right && left <= RIGHT62 && TOP62 <= bottom && top <= BOTTOM62) {
			flag62 = false;
		}
		if (LEFT63 <= right && left <= RIGHT63 && TOP63 <= bottom && top <= BOTTOM63) {
			flag63 = false;
		}
		if (LEFT64 <= right && left <= RIGHT64 && TOP64 <= bottom && top <= BOTTOM64) {
			flag64 = false;
		}
		if (LEFT65 <= right && left <= RIGHT65 && TOP65 <= bottom && top <= BOTTOM65) {
			flag65 = false;
		}
		if (LEFT66 <= right && left <= RIGHT66 && TOP66 <= bottom && top <= BOTTOM66) {
			flag66 = false;
		}
		if (LEFT67 <= right && left <= RIGHT67 && TOP67 <= bottom && top <= BOTTOM67) {
			flag67 = false;
		}
		if (LEFT68 <= right && left <= RIGHT68 && TOP68 <= bottom && top <= BOTTOM68) {
			flag68 = false;
		}
		if (LEFT69 <= right && left <= RIGHT69 && TOP69 <= bottom && top <= BOTTOM69) {
			flag69 = false;
		}
		if (LEFT70 <= right && left <= RIGHT70 && TOP70 <= bottom && top <= BOTTOM70) {
			flag70 = false;
		}
		if (LEFT71 <= right && left <= RIGHT71 && TOP71 <= bottom && top <= BOTTOM71) {
			flag71 = false;
		}
		if (LEFT72 <= right && left <= RIGHT72 && TOP72 <= bottom && top <= BOTTOM72) {
			flag72 = false;
		}
		if (LEFT73 <= right && left <= RIGHT73 && TOP73 <= bottom && top <= BOTTOM73) {
			flag73 = false;
		}
		if (LEFT74 <= right && left <= RIGHT74 && TOP74 <= bottom && top <= BOTTOM74) {
			flag74 = false;
		}
		if (LEFT75 <= right && left <= RIGHT75 && TOP75 <= bottom && top <= BOTTOM75) {
			flag75 = false;
		}
		
		//WARNING
		if (LEFT76 <= right && left <= RIGHT76 && TOP76 <= bottom && top <= BOTTOM76) {
			flag76 = false;
		}

		//GAMESTART
		if (LEFT77 <= right && left <= RIGHT77 && TOP77 <= bottom && top <= BOTTOM77) {
			flag77 = false;
		}



		if (flag == false) {
			score = +20;
		}
		if (flag2 == false) {
			if (flag == true) {
				score = +20;
			}
			if (flag == false) {
				score += 20;
			}
		}
		if (flag3 == false) {
			if (flag == true && flag2 == true) {
				score = +20;
			}
			if (flag == false || flag2 == false) {
				score += 20;
			}
		}
		if (flag4 == false) {
			if (flag == true && flag2 == true && flag3 == true) {
				score = +20;
			}
			if (flag == false || flag2 == false || flag3 == false) {
				score += 20;
			}
		}
		if (flag5 == false) {
			if (flag == true && flag2 == true && flag3 == true && flag4 == true) {
				score = +20;
			}
			if (flag == false || flag2 == false || flag3 == false || flag4 == false) {
				score += 20;
			}
		}
		if (flag6 == false) {
			if (flag == true && flag2 == true && flag3 == true && flag4 == true && flag5 == true) {
				score = +20;
			}
			if (flag == false || flag2 == false || flag3 == false || flag4 == false || flag5 == false) {
				score += 20;
			}
		}
		if (flag7 == false) {
			if (flag == true && flag2 == true && flag3 == true && flag4 == true
				&& flag5 == true && flag6 == true) {
				score = +20;
			}
			if (flag == false || flag2 == false || flag3 == false || flag4 == false
				|| flag5 == false || flag6 == false) {
				score += 20;
			}
		}
		if (flag8 == false) {
			if (flag == true && flag2 == true && flag3 == true && flag4 == true
				&& flag5 == true && flag6 == true && flag7 == true) {
				score = +20;
			}
			if (flag == false || flag2 == false || flag3 == false || flag4 == false
				|| flag5 == false || flag6 == false || flag7 == false) {
				score += 20;
			}
		}
		if (flag9 == false) {
			if (flag == true && flag2 == true && flag3 == true && flag4 == true
				&& flag5 == true && flag6 == true && flag7 == true && flag8 == true) {
				score = +20;
			}
			if (flag == false || flag2 == false || flag3 == false || flag4 == false
				|| flag5 == false || flag6 == false || flag7 == false || flag8 == false) {
				score += 20;
			}
		}
		if (flag10 == false) {
			if (flag == true && flag2 == true && flag3 == true && flag4 == true
				&& flag5 == true && flag6 == true && flag7 == true && flag8 == true
				&& flag9 == true) {
				score = +20;
			}
			if (flag == false || flag2 == false || flag3 == false || flag4 == false
				|| flag5 == false || flag6 == false || flag7 == false || flag8 == false 
				|| flag9 == false) {
				score += 20;
			}
		}
		if (flag11 == false) {
			if (flag == true && flag2 == true && flag3 == true && flag4 == true
				&& flag5 == true && flag6 == true && flag7 == true && flag8 == true
				&& flag9 == true && flag10 == true) {
				score = +20;
			}
			if (flag == false || flag2 == false || flag3 == false || flag4 == false
				|| flag5 == false || flag6 == false || flag7 == false || flag8 == false
				|| flag9 == false || flag10 == false) {
				score += 20;
			}
		}
		if (flag12 == false) {
			if (flag == true && flag2 == true && flag3 == true && flag4 == true
				&& flag5 == true && flag6 == true && flag7 == true && flag8 == true
				&& flag9 == true && flag10 == true && flag11 == true) {
				score = +20;
			}
			if (flag == false || flag2 == false || flag3 == false || flag4 == false
				|| flag5 == false || flag6 == false || flag7 == false || flag8 == false
				|| flag9 == false || flag10 == false || flag11 == false) {
				score += 20;
			}
		}
		if (flag13 == false) {
			if (flag == true && flag2 == true && flag3 == true && flag4 == true
				&& flag5 == true && flag6 == true && flag7 == true && flag8 == true
				&& flag9 == true && flag10 == true && flag11 == true && flag12 == true) {
				score = +20;
			}
			if (flag == false || flag2 == false || flag3 == false || flag4 == false
				|| flag5 == false || flag6 == false || flag7 == false || flag8 == false
				|| flag9 == false || flag10 == false || flag11 == false || flag12 == false) {
				score += 20;
			}
		}
		if (flag14 == false) {
			if (flag == true && flag2 == true && flag3 == true && flag4 == true
				&& flag5 == true && flag6 == true && flag7 == true && flag8 == true
				&& flag9 == true && flag10 == true && flag11 == true && flag12 == true
				&& flag13 == true) {
				score = +20;
			}
			if (flag == false || flag2 == false || flag3 == false || flag4 == false
				|| flag5 == false || flag6 == false || flag7 == false || flag8 == false
				|| flag9 == false || flag10 == false || flag11 == false || flag12 == false
				|| flag13 == false) {
				score += 20;
			}
		}
		if (flag15 == false) {
			if (flag == true && flag2 == true && flag3 == true && flag4 == true
				&& flag5 == true && flag6 == true && flag7 == true && flag8 == true
				&& flag9 == true && flag10 == true && flag11 == true && flag12 == true
				&& flag13 == true && flag14 == true) {
				score = +20;
			}
			if (flag == false || flag2 == false || flag3 == false || flag4 == false
				|| flag5 == false || flag6 == false || flag7 == false || flag8 == false
				|| flag9 == false || flag10 == false || flag11 == false || flag12 == false
				|| flag13 == false || flag14 == false) {
				score += 20;
			}
		}
		if (flag16 == false) {
			if (flag == true && flag2 == true && flag3 == true && flag4 == true
				&& flag5 == true && flag6 == true && flag7 == true && flag8 == true
				&& flag9 == true && flag10 == true && flag11 == true && flag12 == true
				&& flag13 == true && flag14 == true && flag15 == true) {
				score = +20;
			}
			if (flag == false || flag2 == false || flag3 == false || flag4 == false
				|| flag5 == false || flag6 == false || flag7 == false || flag8 == false
				|| flag9 == false || flag10 == false || flag11 == false || flag12 == false
				|| flag13 == false || flag14 == false || flag15 == false) {
				score += 20;
			}
		}
		if (flag17 == false) {
			if (flag == true && flag2 == true && flag3 == true && flag4 == true
				&& flag5 == true && flag6 == true && flag7 == true && flag8 == true
				&& flag9 == true && flag10 == true && flag11 == true && flag12 == true
				&& flag13 == true && flag14 == true && flag15 == true && flag16 == true) {
				score = +20;
			}
			if (flag == false || flag2 == false || flag3 == false || flag4 == false
				|| flag5 == false || flag6 == false || flag7 == false || flag8 == false
				|| flag9 == false || flag10 == false || flag11 == false || flag12 == false
				|| flag13 == false || flag14 == false || flag15 == false || flag16 == false) {
				score += 20;
			}
		}
		if (flag18 == false) {
			if (flag == true && flag2 == true && flag3 == true && flag4 == true
				&& flag5 == true && flag6 == true && flag7 == true && flag8 == true
				&& flag9 == true && flag10 == true && flag11 == true && flag12 == true
				&& flag13 == true && flag14 == true && flag15 == true && flag16 == true
				&& flag17 == true) {
				score = +20;
			}
			if (flag == false || flag2 == false || flag3 == false || flag4 == false
				|| flag5 == false || flag6 == false || flag7 == false || flag8 == false
				|| flag9 == false || flag10 == false || flag11 == false || flag12 == false
				|| flag13 == false || flag14 == false || flag15 == false || flag16 == false
				|| flag17 == false) {
				score += 20;
			}
		}
		if (flag19 == false) {
			if (flag == true && flag2 == true && flag3 == true && flag4 == true
				&& flag5 == true && flag6 == true && flag7 == true && flag8 == true
				&& flag9 == true && flag10 == true && flag11 == true && flag12 == true
				&& flag13 == true && flag14 == true && flag15 == true && flag16 == true
				&& flag17 == true && flag18 == true) {
				score = +20;
			}
			if (flag == false || flag2 == false || flag3 == false || flag4 == false
				|| flag5 == false || flag6 == false || flag7 == false || flag8 == false
				|| flag9 == false || flag10 == false || flag11 == false || flag12 == false
				|| flag13 == false || flag14 == false || flag15 == false || flag16 == false
				|| flag17 == false || flag18 == false) {
				score += 20;
			}
		}
		if (flag20 == false) {
			if (flag == true && flag2 == true && flag3 == true && flag4 == true
				&& flag5 == true && flag6 == true && flag7 == true && flag8 == true
				&& flag9 == true && flag10 == true && flag11 == true && flag12 == true
				&& flag13 == true && flag14 == true && flag15 == true && flag16 == true
				&& flag17 == true && flag18 == true && flag19 == true) {
				score = +20;
			}
			if (flag == false || flag2 == false || flag3 == false || flag4 == false
				|| flag5 == false || flag6 == false || flag7 == false || flag8 == false
				|| flag9 == false || flag10 == false || flag11 == false || flag12 == false
				|| flag13 == false || flag14 == false || flag15 == false || flag16 == false
				|| flag17 == false || flag18 == false || flag19 == false) {
				score += 20;
			}
		}

		if (flag21 == false) {
			if (flag == true && flag2 == true && flag3 == true && flag4 == true
				&& flag5 == true && flag6 == true && flag7 == true && flag8 == true
				&& flag9 == true && flag10 == true && flag11 == true && flag12 == true
				&& flag13 == true && flag14 == true && flag15 == true && flag16 == true
				&& flag17 == true && flag18 == true && flag19 == true && flag20 == true) {
				score = +35;
			}
			if (flag == false || flag2 == false || flag3 == false || flag4 == false
				|| flag5 == false || flag6 == false || flag7 == false || flag8 == false
				|| flag9 == false || flag10 == false || flag11 == false || flag12 == false
				|| flag13 == false || flag14 == false || flag15 == false || flag16 == false
				|| flag17 == false || flag18 == false || flag19 == false || flag20 == false) {
				score += 35;
			}
		}
		if (flag22 == false) {
			if (flag == true && flag2 == true && flag3 == true && flag4 == true
				&& flag5 == true && flag6 == true && flag7 == true && flag8 == true
				&& flag9 == true && flag10 == true && flag11 == true && flag12 == true
				&& flag13 == true && flag14 == true && flag15 == true && flag16 == true
				&& flag17 == true && flag18 == true && flag19 == true && flag20 == true
				&& flag21 == true) {
				score = +20;
			}
			if (flag == false || flag2 == false || flag3 == false || flag4 == false
				|| flag5 == false || flag6 == false || flag7 == false || flag8 == false
				|| flag9 == false || flag10 == false || flag11 == false || flag12 == false
				|| flag13 == false || flag14 == false || flag15 == false || flag16 == false
				|| flag17 == false || flag18 == false || flag19 == false || flag20 == false
				|| flag21 == false) {
				score += 20;
			}
		}
		if (flag23 == false) {
			if (flag == true && flag2 == true && flag3 == true && flag4 == true
				&& flag5 == true && flag6 == true && flag7 == true && flag8 == true
				&& flag9 == true && flag10 == true && flag11 == true && flag12 == true
				&& flag13 == true && flag14 == true && flag15 == true && flag16 == true
				&& flag17 == true && flag18 == true && flag19 == true && flag20 == true
				&& flag21 == true && flag22 == true) {
				score = +50;
			}
			if (flag == false || flag2 == false || flag3 == false || flag4 == false
				|| flag5 == false || flag6 == false || flag7 == false || flag8 == false
				|| flag9 == false || flag10 == false || flag11 == false || flag12 == false
				|| flag13 == false || flag14 == false || flag15 == false || flag16 == false
				|| flag17 == false || flag18 == false || flag19 == false || flag20 == false
				|| flag21 == false || flag22 == false) {
				score += 50;
			}
		}
		if (flag24 == false) {
			if (flag == true && flag2 == true && flag3 == true && flag4 == true
				&& flag5 == true && flag6 == true && flag7 == true && flag8 == true
				&& flag9 == true && flag10 == true && flag11 == true && flag12 == true
				&& flag13 == true && flag14 == true && flag15 == true && flag16 == true
				&& flag17 == true && flag18 == true && flag19 == true && flag20 == true
				&& flag21 == true && flag22 == true && flag23 == true) {
				score = +35;
			}
			if (flag == false || flag2 == false || flag3 == false || flag4 == false
				|| flag5 == false || flag6 == false || flag7 == false || flag8 == false
				|| flag9 == false || flag10 == false || flag11 == false || flag12 == false
				|| flag13 == false || flag14 == false || flag15 == false || flag16 == false
				|| flag17 == false || flag18 == false || flag19 == false || flag20 == false
				|| flag21 == false || flag22 == false || flag23 == false) {
				score += 35;
			}
		}
		if (flag25 == false) {
			if (flag == true && flag2 == true && flag3 == true && flag4 == true
				&& flag5 == true && flag6 == true && flag7 == true && flag8 == true
				&& flag9 == true && flag10 == true && flag11 == true && flag12 == true
				&& flag13 == true && flag14 == true && flag15 == true && flag16 == true
				&& flag17 == true && flag18 == true && flag19 == true && flag20 == true
				&& flag21 == true && flag22 == true && flag23 == true && flag24 == true) {
				score = +50;
			}
			if (flag == false || flag2 == false || flag3 == false || flag4 == false
				|| flag5 == false || flag6 == false || flag7 == false || flag8 == false
				|| flag9 == false || flag10 == false || flag11 == false || flag12 == false
				|| flag13 == false || flag14 == false || flag15 == false || flag16 == false
				|| flag17 == false || flag18 == false || flag19 == false || flag20 == false
				|| flag21 == false || flag22 == false || flag23 == false || flag24 == false) {
				score += 50;
			}
		}
		if (flag26 == false) {
			if (flag == true && flag2 == true && flag3 == true && flag4 == true
				&& flag5 == true && flag6 == true && flag7 == true && flag8 == true
				&& flag9 == true && flag10 == true && flag11 == true && flag12 == true
				&& flag13 == true && flag14 == true && flag15 == true && flag16 == true
				&& flag17 == true && flag18 == true && flag19 == true && flag20 == true
				&& flag21 == true && flag22 == true && flag23 == true && flag24 == true
				&& flag25 == true) {
				score = +20;
			}
			if (flag == false || flag2 == false || flag3 == false || flag4 == false
				|| flag5 == false || flag6 == false || flag7 == false || flag8 == false
				|| flag9 == false || flag10 == false || flag11 == false || flag12 == false
				|| flag13 == false || flag14 == false || flag15 == false || flag16 == false
				|| flag17 == false || flag18 == false || flag19 == false || flag20 == false
				|| flag21 == false || flag22 == false || flag23 == false || flag24 == false
				|| flag25 == false) {
				score += 20;
			}
		}
		if (flag27 == false) {
			if (flag == true && flag2 == true && flag3 == true && flag4 == true
				&& flag5 == true && flag6 == true && flag7 == true && flag8 == true
				&& flag9 == true && flag10 == true && flag11 == true && flag12 == true
				&& flag13 == true && flag14 == true && flag15 == true && flag16 == true
				&& flag17 == true && flag18 == true && flag19 == true && flag20 == true
				&& flag21 == true && flag22 == true && flag23 == true && flag24 == true
				&& flag25 == true && flag26 == true) {
				score = +50;
			}
			if (flag == false || flag2 == false || flag3 == false || flag4 == false
				|| flag5 == false || flag6 == false || flag7 == false || flag8 == false
				|| flag9 == false || flag10 == false || flag11 == false || flag12 == false
				|| flag13 == false || flag14 == false || flag15 == false || flag16 == false
				|| flag17 == false || flag18 == false || flag19 == false || flag20 == false
				|| flag21 == false || flag22 == false || flag23 == false || flag24 == false
				|| flag25 == false || flag26 == false) {
				score += 50;
			}
		}
		if (flag28 == false) {
			if (flag == true && flag2 == true && flag3 == true && flag4 == true
				&& flag5 == true && flag6 == true && flag7 == true && flag8 == true
				&& flag9 == true && flag10 == true && flag11 == true && flag12 == true
				&& flag13 == true && flag14 == true && flag15 == true && flag16 == true
				&& flag17 == true && flag18 == true && flag19 == true && flag20 == true
				&& flag21 == true && flag22 == true && flag23 == true && flag24 == true
				&& flag25 == true && flag26 == true && flag27 == true) {
				score = +35;
			}
			if (flag == false || flag2 == false || flag3 == false || flag4 == false
				|| flag5 == false || flag6 == false || flag7 == false || flag8 == false
				|| flag9 == false || flag10 == false || flag11 == false || flag12 == false
				|| flag13 == false || flag14 == false || flag15 == false || flag16 == false
				|| flag17 == false || flag18 == false || flag19 == false || flag20 == false
				|| flag21 == false || flag22 == false || flag23 == false || flag24 == false
				|| flag25 == false || flag26 == false || flag27 == false) {
				score += 35;
			}
		}
		if (flag29 == false) {
			if (flag == true && flag2 == true && flag3 == true && flag4 == true
				&& flag5 == true && flag6 == true && flag7 == true && flag8 == true
				&& flag9 == true && flag10 == true && flag11 == true && flag12 == true
				&& flag13 == true && flag14 == true && flag15 == true && flag16 == true
				&& flag17 == true && flag18 == true && flag19 == true && flag20 == true
				&& flag21 == true && flag22 == true && flag23 == true && flag24 == true
				&& flag25 == true && flag26 == true && flag27 == true && flag28 == true) {
				score = +35;
			}
			if (flag == false || flag2 == false || flag3 == false || flag4 == false
				|| flag5 == false || flag6 == false || flag7 == false || flag8 == false
				|| flag9 == false || flag10 == false || flag11 == false || flag12 == false
				|| flag13 == false || flag14 == false || flag15 == false || flag16 == false
				|| flag17 == false || flag18 == false || flag19 == false || flag20 == false
				|| flag21 == false || flag22 == false || flag23 == false || flag24 == false
				|| flag25 == false || flag26 == false || flag27 == false || flag28 == false) {
				score += 35;
			}
		}
		if (flag30 == false) {
			if (flag == true && flag2 == true && flag3 == true && flag4 == true
				&& flag5 == true && flag6 == true && flag7 == true && flag8 == true
				&& flag9 == true && flag10 == true && flag11 == true && flag12 == true
				&& flag13 == true && flag14 == true && flag15 == true && flag16 == true
				&& flag17 == true && flag18 == true && flag19 == true && flag20 == true
				&& flag21 == true && flag22 == true && flag23 == true && flag24 == true
				&& flag25 == true && flag26 == true && flag27 == true && flag28 == true
				&& flag29 == true) {
				score = +20;
			}
			if (flag == false || flag2 == false || flag3 == false || flag4 == false
				|| flag5 == false || flag6 == false || flag7 == false || flag8 == false
				|| flag9 == false || flag10 == false || flag11 == false || flag12 == false
				|| flag13 == false || flag14 == false || flag15 == false || flag16 == false
				|| flag17 == false || flag18 == false || flag19 == false || flag20 == false
				|| flag21 == false || flag22 == false || flag23 == false || flag24 == false
				|| flag25 == false || flag26 == false || flag27 == false || flag28 == false
				|| flag29 == false) {
				score += 20;
			}
		}
		if (flag31 == false) {
			if (flag == true && flag2 == true && flag3 == true && flag4 == true
				&& flag5 == true && flag6 == true && flag7 == true && flag8 == true
				&& flag9 == true && flag10 == true && flag11 == true && flag12 == true
				&& flag13 == true && flag14 == true && flag15 == true && flag16 == true
				&& flag17 == true && flag18 == true && flag19 == true && flag20 == true
				&& flag21 == true && flag22 == true && flag23 == true && flag24 == true
				&& flag25 == true && flag26 == true && flag27 == true && flag28 == true
				&& flag29 == true && flag30 == true) {
				score = +50;
			}
			if (flag == false || flag2 == false || flag3 == false || flag4 == false
				|| flag5 == false || flag6 == false || flag7 == false || flag8 == false
				|| flag9 == false || flag10 == false || flag11 == false || flag12 == false
				|| flag13 == false || flag14 == false || flag15 == false || flag16 == false
				|| flag17 == false || flag18 == false || flag19 == false || flag20 == false
				|| flag21 == false || flag22 == false || flag23 == false || flag24 == false
				|| flag25 == false || flag26 == false || flag27 == false || flag28 == false
				|| flag29 == false || flag30 == false) {
				score += 50;
			}
		}
		if (flag32 == false) {
			if (flag == true && flag2 == true && flag3 == true && flag4 == true
				&& flag5 == true && flag6 == true && flag7 == true && flag8 == true
				&& flag9 == true && flag10 == true && flag11 == true && flag12 == true
				&& flag13 == true && flag14 == true && flag15 == true && flag16 == true
				&& flag17 == true && flag18 == true && flag19 == true && flag20 == true
				&& flag21 == true && flag22 == true && flag23 == true && flag24 == true
				&& flag25 == true && flag26 == true && flag27 == true && flag28 == true
				&& flag29 == true && flag30 == true && flag31 == true) {
				score = +50;
			}
			if (flag == false || flag2 == false || flag3 == false || flag4 == false
				|| flag5 == false || flag6 == false || flag7 == false || flag8 == false
				|| flag9 == false || flag10 == false || flag11 == false || flag12 == false
				|| flag13 == false || flag14 == false || flag15 == false || flag16 == false
				|| flag17 == false || flag18 == false || flag19 == false || flag20 == false
				|| flag21 == false || flag22 == false || flag23 == false || flag24 == false
				|| flag25 == false || flag26 == false || flag27 == false || flag28 == false
				|| flag29 == false || flag30 == false || flag31 == false) {
				score += 50;
			}
		}
		if (flag33 == false) {
			if (flag == true && flag2 == true && flag3 == true && flag4 == true
				&& flag5 == true && flag6 == true && flag7 == true && flag8 == true
				&& flag9 == true && flag10 == true && flag11 == true && flag12 == true
				&& flag13 == true && flag14 == true && flag15 == true && flag16 == true
				&& flag17 == true && flag18 == true && flag19 == true && flag20 == true
				&& flag21 == true && flag22 == true && flag23 == true && flag24 == true
				&& flag25 == true && flag26 == true && flag27 == true && flag28 == true
				&& flag29 == true && flag30 == true && flag31 == true && flag32 == true) {
				score = +20;
			}
			if (flag == false || flag2 == false || flag3 == false || flag4 == false
				|| flag5 == false || flag6 == false || flag7 == false || flag8 == false
				|| flag9 == false || flag10 == false || flag11 == false || flag12 == false
				|| flag13 == false || flag14 == false || flag15 == false || flag16 == false
				|| flag17 == false || flag18 == false || flag19 == false || flag20 == false
				|| flag21 == false || flag22 == false || flag23 == false || flag24 == false
				|| flag25 == false || flag26 == false || flag27 == false || flag28 == false
				|| flag29 == false || flag30 == false || flag31 == false || flag32 == false) {
				score += 20;
			}
		}
		if (flag34 == false) {
			if (flag == true && flag2 == true && flag3 == true && flag4 == true
				&& flag5 == true && flag6 == true && flag7 == true && flag8 == true
				&& flag9 == true && flag10 == true && flag11 == true && flag12 == true
				&& flag13 == true && flag14 == true && flag15 == true && flag16 == true
				&& flag17 == true && flag18 == true && flag19 == true && flag20 == true
				&& flag21 == true && flag22 == true && flag23 == true && flag24 == true
				&& flag25 == true && flag26 == true && flag27 == true && flag28 == true
				&& flag29 == true && flag30 == true && flag31 == true && flag32 == true
				&& flag33 == true) {
				score = +35;
			}
			if (flag == false || flag2 == false || flag3 == false || flag4 == false
				|| flag5 == false || flag6 == false || flag7 == false || flag8 == false
				|| flag9 == false || flag10 == false || flag11 == false || flag12 == false
				|| flag13 == false || flag14 == false || flag15 == false || flag16 == false
				|| flag17 == false || flag18 == false || flag19 == false || flag20 == false
				|| flag21 == false || flag22 == false || flag23 == false || flag24 == false
				|| flag25 == false || flag26 == false || flag27 == false || flag28 == false
				|| flag29 == false || flag30 == false || flag31 == false || flag32 == false
				|| flag33 == false) {
				score += 35;
			}
		}
		if (flag35 == false) {
			if (flag == true && flag2 == true && flag3 == true && flag4 == true
				&& flag5 == true && flag6 == true && flag7 == true && flag8 == true
				&& flag9 == true && flag10 == true && flag11 == true && flag12 == true
				&& flag13 == true && flag14 == true && flag15 == true && flag16 == true
				&& flag17 == true && flag18 == true && flag19 == true && flag20 == true
				&& flag21 == true && flag22 == true && flag23 == true && flag24 == true
				&& flag25 == true && flag26 == true && flag27 == true && flag28 == true
				&& flag29 == true && flag30 == true && flag31 == true && flag32 == true
				&& flag33 == true && flag34 == true) {
				score = +20;
			}
			if (flag == false || flag2 == false || flag3 == false || flag4 == false
				|| flag5 == false || flag6 == false || flag7 == false || flag8 == false
				|| flag9 == false || flag10 == false || flag11 == false || flag12 == false
				|| flag13 == false || flag14 == false || flag15 == false || flag16 == false
				|| flag17 == false || flag18 == false || flag19 == false || flag20 == false
				|| flag21 == false || flag22 == false || flag23 == false || flag24 == false
				|| flag25 == false || flag26 == false || flag27 == false || flag28 == false
				|| flag29 == false || flag30 == false || flag31 == false || flag32 == false
				|| flag33 == false || flag34 == false) {
				score += 20;
			}
		}
		if (flag36 == false) {
			if (flag == true && flag2 == true && flag3 == true && flag4 == true
				&& flag5 == true && flag6 == true && flag7 == true && flag8 == true
				&& flag9 == true && flag10 == true && flag11 == true && flag12 == true
				&& flag13 == true && flag14 == true && flag15 == true && flag16 == true
				&& flag17 == true && flag18 == true && flag19 == true && flag20 == true
				&& flag21 == true && flag22 == true && flag23 == true && flag24 == true
				&& flag25 == true && flag26 == true && flag27 == true && flag28 == true
				&& flag29 == true && flag30 == true && flag31 == true && flag32 == true
				&& flag33 == true && flag34 == true && flag35 == true) {
				score = +50;
			}
			if (flag == false || flag2 == false || flag3 == false || flag4 == false
				|| flag5 == false || flag6 == false || flag7 == false || flag8 == false
				|| flag9 == false || flag10 == false || flag11 == false || flag12 == false
				|| flag13 == false || flag14 == false || flag15 == false || flag16 == false
				|| flag17 == false || flag18 == false || flag19 == false || flag20 == false
				|| flag21 == false || flag22 == false || flag23 == false || flag24 == false
				|| flag25 == false || flag26 == false || flag27 == false || flag28 == false
				|| flag29 == false || flag30 == false || flag31 == false || flag32 == false
				|| flag33 == false || flag34 == false || flag35 == false) {
				score += 50;
			}
		}
		if (flag37 == false) {
			if (flag == true && flag2 == true && flag3 == true && flag4 == true
				&& flag5 == true && flag6 == true && flag7 == true && flag8 == true
				&& flag9 == true && flag10 == true && flag11 == true && flag12 == true
				&& flag13 == true && flag14 == true && flag15 == true && flag16 == true
				&& flag17 == true && flag18 == true && flag19 == true && flag20 == true
				&& flag21 == true && flag22 == true && flag23 == true && flag24 == true
				&& flag25 == true && flag26 == true && flag27 == true && flag28 == true
				&& flag29 == true && flag30 == true && flag31 == true && flag32 == true
				&& flag33 == true && flag34 == true && flag35 == true && flag36 == true) {
				score = +20;
			}
			if (flag == false || flag2 == false || flag3 == false || flag4 == false
				|| flag5 == false || flag6 == false || flag7 == false || flag8 == false
				|| flag9 == false || flag10 == false || flag11 == false || flag12 == false
				|| flag13 == false || flag14 == false || flag15 == false || flag16 == false
				|| flag17 == false || flag18 == false || flag19 == false || flag20 == false
				|| flag21 == false || flag22 == false || flag23 == false || flag24 == false
				|| flag25 == false || flag26 == false || flag27 == false || flag28 == false
				|| flag29 == false || flag30 == false || flag31 == false || flag32 == false
				|| flag33 == false || flag34 == false || flag35 == false || flag36 == false) {
				score += 20;
			}
		}
		if (flag38 == false) {
			if (flag == true && flag2 == true && flag3 == true && flag4 == true
				&& flag5 == true && flag6 == true && flag7 == true && flag8 == true
				&& flag9 == true && flag10 == true && flag11 == true && flag12 == true
				&& flag13 == true && flag14 == true && flag15 == true && flag16 == true
				&& flag17 == true && flag18 == true && flag19 == true && flag20 == true
				&& flag21 == true && flag22 == true && flag23 == true && flag24 == true
				&& flag25 == true && flag26 == true && flag27 == true && flag28 == true
				&& flag29 == true && flag30 == true && flag31 == true && flag32 == true
				&& flag33 == true && flag34 == true && flag35 == true && flag36 == true
				&& flag37 == true) {
				score = +35;
			}
			if (flag == false || flag2 == false || flag3 == false || flag4 == false
				|| flag5 == false || flag6 == false || flag7 == false || flag8 == false
				|| flag9 == false || flag10 == false || flag11 == false || flag12 == false
				|| flag13 == false || flag14 == false || flag15 == false || flag16 == false
				|| flag17 == false || flag18 == false || flag19 == false || flag20 == false
				|| flag21 == false || flag22 == false || flag23 == false || flag24 == false
				|| flag25 == false || flag26 == false || flag27 == false || flag28 == false
				|| flag29 == false || flag30 == false || flag31 == false || flag32 == false
				|| flag33 == false || flag34 == false || flag35 == false || flag36 == false
				|| flag37 == false) {
				score += 35;
			}
		}
		if (flag39 == false) {
			if (flag == true && flag2 == true && flag3 == true && flag4 == true
				&& flag5 == true && flag6 == true && flag7 == true && flag8 == true
				&& flag9 == true && flag10 == true && flag11 == true && flag12 == true
				&& flag13 == true && flag14 == true && flag15 == true && flag16 == true
				&& flag17 == true && flag18 == true && flag19 == true && flag20 == true
				&& flag21 == true && flag22 == true && flag23 == true && flag24 == true
				&& flag25 == true && flag26 == true && flag27 == true && flag28 == true
				&& flag29 == true && flag30 == true && flag31 == true && flag32 == true
				&& flag33 == true && flag34 == true && flag35 == true && flag36 == true
				&& flag37 == true && flag38 == true) {
				score = +20;
			}
			if (flag == false || flag2 == false || flag3 == false || flag4 == false
				|| flag5 == false || flag6 == false || flag7 == false || flag8 == false
				|| flag9 == false || flag10 == false || flag11 == false || flag12 == false
				|| flag13 == false || flag14 == false || flag15 == false || flag16 == false
				|| flag17 == false || flag18 == false || flag19 == false || flag20 == false
				|| flag21 == false || flag22 == false || flag23 == false || flag24 == false
				|| flag25 == false || flag26 == false || flag27 == false || flag28 == false
				|| flag29 == false || flag30 == false || flag31 == false || flag32 == false
				|| flag33 == false || flag34 == false || flag35 == false || flag36 == false
				|| flag37 == false || flag38 == false) {
				score += 20;
			}
		}
		if (flag40 == false) {
			if (flag == true && flag2 == true && flag3 == true && flag4 == true
				&& flag5 == true && flag6 == true && flag7 == true && flag8 == true
				&& flag9 == true && flag10 == true && flag11 == true && flag12 == true
				&& flag13 == true && flag14 == true && flag15 == true && flag16 == true
				&& flag17 == true && flag18 == true && flag19 == true && flag20 == true
				&& flag21 == true && flag22 == true && flag23 == true && flag24 == true
				&& flag25 == true && flag26 == true && flag27 == true && flag28 == true
				&& flag29 == true && flag30 == true && flag31 == true && flag32 == true
				&& flag33 == true && flag34 == true && flag35 == true && flag36 == true
				&& flag37 == true && flag38 == true && flag39 == true) {
				score = +50;
			}
			if (flag == false || flag2 == false || flag3 == false || flag4 == false
				|| flag5 == false || flag6 == false || flag7 == false || flag8 == false
				|| flag9 == false || flag10 == false || flag11 == false || flag12 == false
				|| flag13 == false || flag14 == false || flag15 == false || flag16 == false
				|| flag17 == false || flag18 == false || flag19 == false || flag20 == false
				|| flag21 == false || flag22 == false || flag23 == false || flag24 == false
				|| flag25 == false || flag26 == false || flag27 == false || flag28 == false
				|| flag29 == false || flag30 == false || flag31 == false || flag32 == false
				|| flag33 == false || flag34 == false || flag35 == false || flag36 == false
				|| flag37 == false || flag38 == false || flag39 == false) {
				score += 50;
			}
		}
		if (flag41 == false) {
			if (flag == true && flag2 == true && flag3 == true && flag4 == true
				&& flag5 == true && flag6 == true && flag7 == true && flag8 == true
				&& flag9 == true && flag10 == true && flag11 == true && flag12 == true
				&& flag13 == true && flag14 == true && flag15 == true && flag16 == true
				&& flag17 == true && flag18 == true && flag19 == true && flag20 == true
				&& flag21 == true && flag22 == true && flag23 == true && flag24 == true
				&& flag25 == true && flag26 == true && flag27 == true && flag28 == true
				&& flag29 == true && flag30 == true && flag31 == true && flag32 == true
				&& flag33 == true && flag34 == true && flag35 == true && flag36 == true
				&& flag37 == true && flag38 == true && flag39 == true && flag40 == true) {
				score = +20;
			}
			if (flag == false || flag2 == false || flag3 == false || flag4 == false
				|| flag5 == false || flag6 == false || flag7 == false || flag8 == false
				|| flag9 == false || flag10 == false || flag11 == false || flag12 == false
				|| flag13 == false || flag14 == false || flag15 == false || flag16 == false
				|| flag17 == false || flag18 == false || flag19 == false || flag20 == false
				|| flag21 == false || flag22 == false || flag23 == false || flag24 == false
				|| flag25 == false || flag26 == false || flag27 == false || flag28 == false
				|| flag29 == false || flag30 == false || flag31 == false || flag32 == false
				|| flag33 == false || flag34 == false || flag35 == false || flag36 == false
				|| flag37 == false || flag38 == false || flag39 == false || flag40 == false) {
				score += 20;
			}
		}
		if (flag42 == false) {
			if (flag == true && flag2 == true && flag3 == true && flag4 == true
				&& flag5 == true && flag6 == true && flag7 == true && flag8 == true
				&& flag9 == true && flag10 == true && flag11 == true && flag12 == true
				&& flag13 == true && flag14 == true && flag15 == true && flag16 == true
				&& flag17 == true && flag18 == true && flag19 == true && flag20 == true
				&& flag21 == true && flag22 == true && flag23 == true && flag24 == true
				&& flag25 == true && flag26 == true && flag27 == true && flag28 == true
				&& flag29 == true && flag30 == true && flag31 == true && flag32 == true
				&& flag33 == true && flag34 == true && flag35 == true && flag36 == true
				&& flag37 == true && flag38 == true && flag39 == true && flag40 == true
				&& flag41 == true) {
				score = +35;
			}
			if (flag == false || flag2 == false || flag3 == false || flag4 == false
				|| flag5 == false || flag6 == false || flag7 == false || flag8 == false
				|| flag9 == false || flag10 == false || flag11 == false || flag12 == false
				|| flag13 == false || flag14 == false || flag15 == false || flag16 == false
				|| flag17 == false || flag18 == false || flag19 == false || flag20 == false
				|| flag21 == false || flag22 == false || flag23 == false || flag24 == false
				|| flag25 == false || flag26 == false || flag27 == false || flag28 == false
				|| flag29 == false || flag30 == false || flag31 == false || flag32 == false
				|| flag33 == false || flag34 == false || flag35 == false || flag36 == false
				|| flag37 == false || flag38 == false || flag39 == false || flag40 == false
				|| flag41 == false) {
				score += 35;
			}
		}
		if (flag43 == false) {
			if (flag == true && flag2 == true && flag3 == true && flag4 == true
				&& flag5 == true && flag6 == true && flag7 == true && flag8 == true
				&& flag9 == true && flag10 == true && flag11 == true && flag12 == true
				&& flag13 == true && flag14 == true && flag15 == true && flag16 == true
				&& flag17 == true && flag18 == true && flag19 == true && flag20 == true
				&& flag21 == true && flag22 == true && flag23 == true && flag24 == true
				&& flag25 == true && flag26 == true && flag27 == true && flag28 == true
				&& flag29 == true && flag30 == true && flag31 == true && flag32 == true
				&& flag33 == true && flag34 == true && flag35 == true && flag36 == true
				&& flag37 == true && flag38 == true && flag39 == true && flag40 == true
				&& flag41 == true && flag42 == true) {
				score = +20;
			}
			if (flag == false || flag2 == false || flag3 == false || flag4 == false
				|| flag5 == false || flag6 == false || flag7 == false || flag8 == false
				|| flag9 == false || flag10 == false || flag11 == false || flag12 == false
				|| flag13 == false || flag14 == false || flag15 == false || flag16 == false
				|| flag17 == false || flag18 == false || flag19 == false || flag20 == false
				|| flag21 == false || flag22 == false || flag23 == false || flag24 == false
				|| flag25 == false || flag26 == false || flag27 == false || flag28 == false
				|| flag29 == false || flag30 == false || flag31 == false || flag32 == false
				|| flag33 == false || flag34 == false || flag35 == false || flag36 == false
				|| flag37 == false || flag38 == false || flag39 == false || flag40 == false
				|| flag41 == false || flag42 == false) {
				score += 20;
			}
		}
		if (flag44 == false) {
			if (flag == true && flag2 == true && flag3 == true && flag4 == true
				&& flag5 == true && flag6 == true && flag7 == true && flag8 == true
				&& flag9 == true && flag10 == true && flag11 == true && flag12 == true
				&& flag13 == true && flag14 == true && flag15 == true && flag16 == true
				&& flag17 == true && flag18 == true && flag19 == true && flag20 == true
				&& flag21 == true && flag22 == true && flag23 == true && flag24 == true
				&& flag25 == true && flag26 == true && flag27 == true && flag28 == true
				&& flag29 == true && flag30 == true && flag31 == true && flag32 == true
				&& flag33 == true && flag34 == true && flag35 == true && flag36 == true
				&& flag37 == true && flag38 == true && flag39 == true && flag40 == true
				&& flag41 == true && flag42 == true && flag43 == true) {
				score = +50;
			}
			if (flag == false || flag2 == false || flag3 == false || flag4 == false
				|| flag5 == false || flag6 == false || flag7 == false || flag8 == false
				|| flag9 == false || flag10 == false || flag11 == false || flag12 == false
				|| flag13 == false || flag14 == false || flag15 == false || flag16 == false
				|| flag17 == false || flag18 == false || flag19 == false || flag20 == false
				|| flag21 == false || flag22 == false || flag23 == false || flag24 == false
				|| flag25 == false || flag26 == false || flag27 == false || flag28 == false
				|| flag29 == false || flag30 == false || flag31 == false || flag32 == false
				|| flag33 == false || flag34 == false || flag35 == false || flag36 == false
				|| flag37 == false || flag38 == false || flag39 == false || flag40 == false
				|| flag41 == false || flag42 == false || flag43 == false) {
				score += 50;
			}
		}
		if (flag45 == false) {
			if (flag == true && flag2 == true && flag3 == true && flag4 == true
				&& flag5 == true && flag6 == true && flag7 == true && flag8 == true
				&& flag9 == true && flag10 == true && flag11 == true && flag12 == true
				&& flag13 == true && flag14 == true && flag15 == true && flag16 == true
				&& flag17 == true && flag18 == true && flag19 == true && flag20 == true
				&& flag21 == true && flag22 == true && flag23 == true && flag24 == true
				&& flag25 == true && flag26 == true && flag27 == true && flag28 == true
				&& flag29 == true && flag30 == true && flag31 == true && flag32 == true
				&& flag33 == true && flag34 == true && flag35 == true && flag36 == true
				&& flag37 == true && flag38 == true && flag39 == true && flag40 == true
				&& flag41 == true && flag42 == true && flag43 == true && flag44 == true) {
				score = +20;
			}
			if (flag == false || flag2 == false || flag3 == false || flag4 == false
				|| flag5 == false || flag6 == false || flag7 == false || flag8 == false
				|| flag9 == false || flag10 == false || flag11 == false || flag12 == false
				|| flag13 == false || flag14 == false || flag15 == false || flag16 == false
				|| flag17 == false || flag18 == false || flag19 == false || flag20 == false
				|| flag21 == false || flag22 == false || flag23 == false || flag24 == false
				|| flag25 == false || flag26 == false || flag27 == false || flag28 == false
				|| flag29 == false || flag30 == false || flag31 == false || flag32 == false
				|| flag33 == false || flag34 == false || flag35 == false || flag36 == false
				|| flag37 == false || flag38 == false || flag39 == false || flag40 == false
				|| flag41 == false || flag42 == false || flag43 == false || flag44 == false) {
				score += 20;
			}
		}
		if (flag46 == false) {
			if (flag == true && flag2 == true && flag3 == true && flag4 == true
				&& flag5 == true && flag6 == true && flag7 == true && flag8 == true
				&& flag9 == true && flag10 == true && flag11 == true && flag12 == true
				&& flag13 == true && flag14 == true && flag15 == true && flag16 == true
				&& flag17 == true && flag18 == true && flag19 == true && flag20 == true
				&& flag21 == true && flag22 == true && flag23 == true && flag24 == true
				&& flag25 == true && flag26 == true && flag27 == true && flag28 == true
				&& flag29 == true && flag30 == true && flag31 == true && flag32 == true
				&& flag33 == true && flag34 == true && flag35 == true && flag36 == true
				&& flag37 == true && flag38 == true && flag39 == true && flag40 == true
				&& flag41 == true && flag42 == true && flag43 == true && flag44 == true
				&& flag45 == true) {
				score = +35;
			}
			if (flag == false || flag2 == false || flag3 == false || flag4 == false
				|| flag5 == false || flag6 == false || flag7 == false || flag8 == false
				|| flag9 == false || flag10 == false || flag11 == false || flag12 == false
				|| flag13 == false || flag14 == false || flag15 == false || flag16 == false
				|| flag17 == false || flag18 == false || flag19 == false || flag20 == false
				|| flag21 == false || flag22 == false || flag23 == false || flag24 == false
				|| flag25 == false || flag26 == false || flag27 == false || flag28 == false
				|| flag29 == false || flag30 == false || flag31 == false || flag32 == false
				|| flag33 == false || flag34 == false || flag35 == false || flag36 == false
				|| flag37 == false || flag38 == false || flag39 == false || flag40 == false
				|| flag41 == false || flag42 == false || flag43 == false || flag44 == false
				|| flag45 == false) {
				score += 35;
			}
		}
		if (flag47 == false) {
			if (flag == true && flag2 == true && flag3 == true && flag4 == true
				&& flag5 == true && flag6 == true && flag7 == true && flag8 == true
				&& flag9 == true && flag10 == true && flag11 == true && flag12 == true
				&& flag13 == true && flag14 == true && flag15 == true && flag16 == true
				&& flag17 == true && flag18 == true && flag19 == true && flag20 == true
				&& flag21 == true && flag22 == true && flag23 == true && flag24 == true
				&& flag25 == true && flag26 == true && flag27 == true && flag28 == true
				&& flag29 == true && flag30 == true && flag31 == true && flag32 == true
				&& flag33 == true && flag34 == true && flag35 == true && flag36 == true
				&& flag37 == true && flag38 == true && flag39 == true && flag40 == true
				&& flag41 == true && flag42 == true && flag43 == true && flag44 == true
				&& flag45 == true && flag46 == true) {
				score = +20;
			}
			if (flag == false || flag2 == false || flag3 == false || flag4 == false
				|| flag5 == false || flag6 == false || flag7 == false || flag8 == false
				|| flag9 == false || flag10 == false || flag11 == false || flag12 == false
				|| flag13 == false || flag14 == false || flag15 == false || flag16 == false
				|| flag17 == false || flag18 == false || flag19 == false || flag20 == false
				|| flag21 == false || flag22 == false || flag23 == false || flag24 == false
				|| flag25 == false || flag26 == false || flag27 == false || flag28 == false
				|| flag29 == false || flag30 == false || flag31 == false || flag32 == false
				|| flag33 == false || flag34 == false || flag35 == false || flag36 == false
				|| flag37 == false || flag38 == false || flag39 == false || flag40 == false
				|| flag41 == false || flag42 == false || flag43 == false || flag44 == false
				|| flag45 == false || flag46 == false) {
				score += 20;
			}
		}
		if (flag48 == false) {
			if (flag == true && flag2 == true && flag3 == true && flag4 == true
				&& flag5 == true && flag6 == true && flag7 == true && flag8 == true
				&& flag9 == true && flag10 == true && flag11 == true && flag12 == true
				&& flag13 == true && flag14 == true && flag15 == true && flag16 == true
				&& flag17 == true && flag18 == true && flag19 == true && flag20 == true
				&& flag21 == true && flag22 == true && flag23 == true && flag24 == true
				&& flag25 == true && flag26 == true && flag27 == true && flag28 == true
				&& flag29 == true && flag30 == true && flag31 == true && flag32 == true
				&& flag33 == true && flag34 == true && flag35 == true && flag36 == true
				&& flag37 == true && flag38 == true && flag39 == true && flag40 == true
				&& flag41 == true && flag42 == true && flag43 == true && flag44 == true
				&& flag45 == true && flag46 == true && flag47 == true) {
				score = +50;
			}
			if (flag == false || flag2 == false || flag3 == false || flag4 == false
				|| flag5 == false || flag6 == false || flag7 == false || flag8 == false
				|| flag9 == false || flag10 == false || flag11 == false || flag12 == false
				|| flag13 == false || flag14 == false || flag15 == false || flag16 == false
				|| flag17 == false || flag18 == false || flag19 == false || flag20 == false
				|| flag21 == false || flag22 == false || flag23 == false || flag24 == false
				|| flag25 == false || flag26 == false || flag27 == false || flag28 == false
				|| flag29 == false || flag30 == false || flag31 == false || flag32 == false
				|| flag33 == false || flag34 == false || flag35 == false || flag36 == false
				|| flag37 == false || flag38 == false || flag39 == false || flag40 == false
				|| flag41 == false || flag42 == false || flag43 == false || flag44 == false
				|| flag45 == false || flag46 == false || flag47 == false) {
				score += 50;
			}
		}
		if (flag49 == false) {
			if (flag == true && flag2 == true && flag3 == true && flag4 == true
				&& flag5 == true && flag6 == true && flag7 == true && flag8 == true
				&& flag9 == true && flag10 == true && flag11 == true && flag12 == true
				&& flag13 == true && flag14 == true && flag15 == true && flag16 == true
				&& flag17 == true && flag18 == true && flag19 == true && flag20 == true
				&& flag21 == true && flag22 == true && flag23 == true && flag24 == true
				&& flag25 == true && flag26 == true && flag27 == true && flag28 == true
				&& flag29 == true && flag30 == true && flag31 == true && flag32 == true
				&& flag33 == true && flag34 == true && flag35 == true && flag36 == true
				&& flag37 == true && flag38 == true && flag39 == true && flag40 == true
				&& flag41 == true && flag42 == true && flag43 == true && flag44 == true
				&& flag45 == true && flag46 == true && flag47 == true && flag48 == true) {
				score = +20;
			}
			if (flag == false || flag2 == false || flag3 == false || flag4 == false
				|| flag5 == false || flag6 == false || flag7 == false || flag8 == false
				|| flag9 == false || flag10 == false || flag11 == false || flag12 == false
				|| flag13 == false || flag14 == false || flag15 == false || flag16 == false
				|| flag17 == false || flag18 == false || flag19 == false || flag20 == false
				|| flag21 == false || flag22 == false || flag23 == false || flag24 == false
				|| flag25 == false || flag26 == false || flag27 == false || flag28 == false
				|| flag29 == false || flag30 == false || flag31 == false || flag32 == false
				|| flag33 == false || flag34 == false || flag35 == false || flag36 == false
				|| flag37 == false || flag38 == false || flag39 == false || flag40 == false
				|| flag41 == false || flag42 == false || flag43 == false || flag44 == false
				|| flag45 == false || flag46 == false || flag47 == false || flag48 == false) {
				score += 20;
			}
		}
		if (flag50 == false) {
			if (flag == true && flag2 == true && flag3 == true && flag4 == true
				&& flag5 == true && flag6 == true && flag7 == true && flag8 == true
				&& flag9 == true && flag10 == true && flag11 == true && flag12 == true
				&& flag13 == true && flag14 == true && flag15 == true && flag16 == true
				&& flag17 == true && flag18 == true && flag19 == true && flag20 == true
				&& flag21 == true && flag22 == true && flag23 == true && flag24 == true
				&& flag25 == true && flag26 == true && flag27 == true && flag28 == true
				&& flag29 == true && flag30 == true && flag31 == true && flag32 == true
				&& flag33 == true && flag34 == true && flag35 == true && flag36 == true
				&& flag37 == true && flag38 == true && flag39 == true && flag40 == true
				&& flag41 == true && flag42 == true && flag43 == true && flag44 == true
				&& flag45 == true && flag46 == true && flag47 == true && flag48 == true
				&& flag49 == true) {
				score = +35;
			}
			if (flag == false || flag2 == false || flag3 == false || flag4 == false
				|| flag5 == false || flag6 == false || flag7 == false || flag8 == false
				|| flag9 == false || flag10 == false || flag11 == false || flag12 == false
				|| flag13 == false || flag14 == false || flag15 == false || flag16 == false
				|| flag17 == false || flag18 == false || flag19 == false || flag20 == false
				|| flag21 == false || flag22 == false || flag23 == false || flag24 == false
				|| flag25 == false || flag26 == false || flag27 == false || flag28 == false
				|| flag29 == false || flag30 == false || flag31 == false || flag32 == false
				|| flag33 == false || flag34 == false || flag35 == false || flag36 == false
				|| flag37 == false || flag38 == false || flag39 == false || flag40 == false
				|| flag41 == false || flag42 == false || flag43 == false || flag44 == false
				|| flag45 == false || flag46 == false || flag47 == false || flag48 == false
				|| flag49 == false) {
				score += 35;
			}
		}
		if (flag51 == false) {
			if (flag == true && flag2 == true && flag3 == true && flag4 == true
				&& flag5 == true && flag6 == true && flag7 == true && flag8 == true
				&& flag9 == true && flag10 == true && flag11 == true && flag12 == true
				&& flag13 == true && flag14 == true && flag15 == true && flag16 == true
				&& flag17 == true && flag18 == true && flag19 == true && flag20 == true
				&& flag21 == true && flag22 == true && flag23 == true && flag24 == true
				&& flag25 == true && flag26 == true && flag27 == true && flag28 == true
				&& flag29 == true && flag30 == true && flag31 == true && flag32 == true
				&& flag33 == true && flag34 == true && flag35 == true && flag36 == true
				&& flag37 == true && flag38 == true && flag39 == true && flag40 == true
				&& flag41 == true && flag42 == true && flag43 == true && flag44 == true
				&& flag45 == true && flag46 == true && flag47 == true && flag48 == true
				&& flag49 == true && flag50 == true) {
				score = +20;
			}
			if (flag == false || flag2 == false || flag3 == false || flag4 == false
				|| flag5 == false || flag6 == false || flag7 == false || flag8 == false
				|| flag9 == false || flag10 == false || flag11 == false || flag12 == false
				|| flag13 == false || flag14 == false || flag15 == false || flag16 == false
				|| flag17 == false || flag18 == false || flag19 == false || flag20 == false
				|| flag21 == false || flag22 == false || flag23 == false || flag24 == false
				|| flag25 == false || flag26 == false || flag27 == false || flag28 == false
				|| flag29 == false || flag30 == false || flag31 == false || flag32 == false
				|| flag33 == false || flag34 == false || flag35 == false || flag36 == false
				|| flag37 == false || flag38 == false || flag39 == false || flag40 == false
				|| flag41 == false || flag42 == false || flag43 == false || flag44 == false
				|| flag45 == false || flag46 == false || flag47 == false || flag48 == false
				|| flag49 == false || flag50 == false) {
				score += 20;
			}
		}
		if (flag52 == false) {
			if (flag == true && flag2 == true && flag3 == true && flag4 == true
				&& flag5 == true && flag6 == true && flag7 == true && flag8 == true
				&& flag9 == true && flag10 == true && flag11 == true && flag12 == true
				&& flag13 == true && flag14 == true && flag15 == true && flag16 == true
				&& flag17 == true && flag18 == true && flag19 == true && flag20 == true
				&& flag21 == true && flag22 == true && flag23 == true && flag24 == true
				&& flag25 == true && flag26 == true && flag27 == true && flag28 == true
				&& flag29 == true && flag30 == true && flag31 == true && flag32 == true
				&& flag33 == true && flag34 == true && flag35 == true && flag36 == true
				&& flag37 == true && flag38 == true && flag39 == true && flag40 == true
				&& flag41 == true && flag42 == true && flag43 == true && flag44 == true
				&& flag45 == true && flag46 == true && flag47 == true && flag48 == true
				&& flag49 == true && flag50 == true && flag51 == true) {
				score = +20;
			}
			if (flag == false || flag2 == false || flag3 == false || flag4 == false
				|| flag5 == false || flag6 == false || flag7 == false || flag8 == false
				|| flag9 == false || flag10 == false || flag11 == false || flag12 == false
				|| flag13 == false || flag14 == false || flag15 == false || flag16 == false
				|| flag17 == false || flag18 == false || flag19 == false || flag20 == false
				|| flag21 == false || flag22 == false || flag23 == false || flag24 == false
				|| flag25 == false || flag26 == false || flag27 == false || flag28 == false
				|| flag29 == false || flag30 == false || flag31 == false || flag32 == false
				|| flag33 == false || flag34 == false || flag35 == false || flag36 == false
				|| flag37 == false || flag38 == false || flag39 == false || flag40 == false
				|| flag41 == false || flag42 == false || flag43 == false || flag44 == false
				|| flag45 == false || flag46 == false || flag47 == false || flag48 == false
				|| flag49 == false || flag50 == false || flag51 == false) {
				score += 20;
			}
		}
		if (flag53 == false) {
			if (flag == true && flag2 == true && flag3 == true && flag4 == true
				&& flag5 == true && flag6 == true && flag7 == true && flag8 == true
				&& flag9 == true && flag10 == true && flag11 == true && flag12 == true
				&& flag13 == true && flag14 == true && flag15 == true && flag16 == true
				&& flag17 == true && flag18 == true && flag19 == true && flag20 == true
				&& flag21 == true && flag22 == true && flag23 == true && flag24 == true
				&& flag25 == true && flag26 == true && flag27 == true && flag28 == true
				&& flag29 == true && flag30 == true && flag31 == true && flag32 == true
				&& flag33 == true && flag34 == true && flag35 == true && flag36 == true
				&& flag37 == true && flag38 == true && flag39 == true && flag40 == true
				&& flag41 == true && flag42 == true && flag43 == true && flag44 == true
				&& flag45 == true && flag46 == true && flag47 == true && flag48 == true
				&& flag49 == true && flag50 == true && flag51 == true && flag52 == true) {
				score = +20;
			}
			if (flag == false || flag2 == false || flag3 == false || flag4 == false
				|| flag5 == false || flag6 == false || flag7 == false || flag8 == false
				|| flag9 == false || flag10 == false || flag11 == false || flag12 == false
				|| flag13 == false || flag14 == false || flag15 == false || flag16 == false
				|| flag17 == false || flag18 == false || flag19 == false || flag20 == false
				|| flag21 == false || flag22 == false || flag23 == false || flag24 == false
				|| flag25 == false || flag26 == false || flag27 == false || flag28 == false
				|| flag29 == false || flag30 == false || flag31 == false || flag32 == false
				|| flag33 == false || flag34 == false || flag35 == false || flag36 == false
				|| flag37 == false || flag38 == false || flag39 == false || flag40 == false
				|| flag41 == false || flag42 == false || flag43 == false || flag44 == false
				|| flag45 == false || flag46 == false || flag47 == false || flag48 == false
				|| flag49 == false || flag50 == false || flag51 == false || flag52 == false) {
				score += 20;
			}
		}
		if (flag54 == false) {
			if (flag == true && flag2 == true && flag3 == true && flag4 == true
				&& flag5 == true && flag6 == true && flag7 == true && flag8 == true
				&& flag9 == true && flag10 == true && flag11 == true && flag12 == true
				&& flag13 == true && flag14 == true && flag15 == true && flag16 == true
				&& flag17 == true && flag18 == true && flag19 == true && flag20 == true
				&& flag21 == true && flag22 == true && flag23 == true && flag24 == true
				&& flag25 == true && flag26 == true && flag27 == true && flag28 == true
				&& flag29 == true && flag30 == true && flag31 == true && flag32 == true
				&& flag33 == true && flag34 == true && flag35 == true && flag36 == true
				&& flag37 == true && flag38 == true && flag39 == true && flag40 == true
				&& flag41 == true && flag42 == true && flag43 == true && flag44 == true
				&& flag45 == true && flag46 == true && flag47 == true && flag48 == true
				&& flag49 == true && flag50 == true && flag51 == true 
				&& flag53 == true) {
				score = +35;
			}
			if (flag == false || flag2 == false || flag3 == false || flag4 == false
				|| flag5 == false || flag6 == false || flag7 == false || flag8 == false
				|| flag9 == false || flag10 == false || flag11 == false || flag12 == false
				|| flag13 == false || flag14 == false || flag15 == false || flag16 == false
				|| flag17 == false || flag18 == false || flag19 == false || flag20 == false
				|| flag21 == false || flag22 == false || flag23 == false || flag24 == false
				|| flag25 == false || flag26 == false || flag27 == false || flag28 == false
				|| flag29 == false || flag30 == false || flag31 == false || flag32 == false
				|| flag33 == false || flag34 == false || flag35 == false || flag36 == false
				|| flag37 == false || flag38 == false || flag39 == false || flag40 == false
				|| flag41 == false || flag42 == false || flag43 == false || flag44 == false
				|| flag45 == false || flag46 == false || flag47 == false || flag48 == false
				|| flag49 == false || flag50 == false || flag51 == false || flag52 == false
				|| flag53 == false) {
				score += 35;
			}
		}
		if (flag55 == false) {
			if (flag == true && flag2 == true && flag3 == true && flag4 == true
				&& flag5 == true && flag6 == true && flag7 == true && flag8 == true
				&& flag9 == true && flag10 == true && flag11 == true && flag12 == true
				&& flag13 == true && flag14 == true && flag15 == true && flag16 == true
				&& flag17 == true && flag18 == true && flag19 == true && flag20 == true
				&& flag21 == true && flag22 == true && flag23 == true && flag24 == true
				&& flag25 == true && flag26 == true && flag27 == true && flag28 == true
				&& flag29 == true && flag30 == true && flag31 == true && flag32 == true
				&& flag33 == true && flag34 == true && flag35 == true && flag36 == true
				&& flag37 == true && flag38 == true && flag39 == true && flag40 == true
				&& flag41 == true && flag42 == true && flag43 == true && flag44 == true
				&& flag45 == true && flag46 == true && flag47 == true && flag48 == true
				&& flag49 == true && flag50 == true && flag51 == true
				&& flag53 == true && flag54 == true) {
				score = +35;
			}
			if (flag == false || flag2 == false || flag3 == false || flag4 == false
				|| flag5 == false || flag6 == false || flag7 == false || flag8 == false
				|| flag9 == false || flag10 == false || flag11 == false || flag12 == false
				|| flag13 == false || flag14 == false || flag15 == false || flag16 == false
				|| flag17 == false || flag18 == false || flag19 == false || flag20 == false
				|| flag21 == false || flag22 == false || flag23 == false || flag24 == false
				|| flag25 == false || flag26 == false || flag27 == false || flag28 == false
				|| flag29 == false || flag30 == false || flag31 == false || flag32 == false
				|| flag33 == false || flag34 == false || flag35 == false || flag36 == false
				|| flag37 == false || flag38 == false || flag39 == false || flag40 == false
				|| flag41 == false || flag42 == false || flag43 == false || flag44 == false
				|| flag45 == false || flag46 == false || flag47 == false || flag48 == false
				|| flag49 == false || flag50 == false || flag51 == false || flag52 == false
				|| flag53 == false || flag54 == false) {
				score += 35;
			}
		}
		if (flag56 == false) {
			if (flag == true && flag2 == true && flag3 == true && flag4 == true
				&& flag5 == true && flag6 == true && flag7 == true && flag8 == true
				&& flag9 == true && flag10 == true && flag11 == true && flag12 == true
				&& flag13 == true && flag14 == true && flag15 == true && flag16 == true
				&& flag17 == true && flag18 == true && flag19 == true && flag20 == true
				&& flag21 == true && flag22 == true && flag23 == true && flag24 == true
				&& flag25 == true && flag26 == true && flag27 == true && flag28 == true
				&& flag29 == true && flag30 == true && flag31 == true && flag32 == true
				&& flag33 == true && flag34 == true && flag35 == true && flag36 == true
				&& flag37 == true && flag38 == true && flag39 == true && flag40 == true
				&& flag41 == true && flag42 == true && flag43 == true && flag44 == true
				&& flag45 == true && flag46 == true && flag47 == true && flag48 == true
				&& flag49 == true && flag50 == true && flag51 == true
				&& flag53 == true && flag54 == true && flag55 == true) {
				score = +35;
			}
			if (flag == false || flag2 == false || flag3 == false || flag4 == false
				|| flag5 == false || flag6 == false || flag7 == false || flag8 == false
				|| flag9 == false || flag10 == false || flag11 == false || flag12 == false
				|| flag13 == false || flag14 == false || flag15 == false || flag16 == false
				|| flag17 == false || flag18 == false || flag19 == false || flag20 == false
				|| flag21 == false || flag22 == false || flag23 == false || flag24 == false
				|| flag25 == false || flag26 == false || flag27 == false || flag28 == false
				|| flag29 == false || flag30 == false || flag31 == false || flag32 == false
				|| flag33 == false || flag34 == false || flag35 == false || flag36 == false
				|| flag37 == false || flag38 == false || flag39 == false || flag40 == false
				|| flag41 == false || flag42 == false || flag43 == false || flag44 == false
				|| flag45 == false || flag46 == false || flag47 == false || flag48 == false
				|| flag49 == false || flag50 == false || flag51 == false || flag52 == false
				|| flag53 == false || flag54 == false || flag55 == false) {
				score += 35;
			}
		}
		if (flag57 == false) {
			if (flag == true && flag2 == true && flag3 == true && flag4 == true
				&& flag5 == true && flag6 == true && flag7 == true && flag8 == true
				&& flag9 == true && flag10 == true && flag11 == true && flag12 == true
				&& flag13 == true && flag14 == true && flag15 == true && flag16 == true
				&& flag17 == true && flag18 == true && flag19 == true && flag20 == true
				&& flag21 == true && flag22 == true && flag23 == true && flag24 == true
				&& flag25 == true && flag26 == true && flag27 == true && flag28 == true
				&& flag29 == true && flag30 == true && flag31 == true && flag32 == true
				&& flag33 == true && flag34 == true && flag35 == true && flag36 == true
				&& flag37 == true && flag38 == true && flag39 == true && flag40 == true
				&& flag41 == true && flag42 == true && flag43 == true && flag44 == true
				&& flag45 == true && flag46 == true && flag47 == true && flag48 == true
				&& flag49 == true && flag50 == true && flag51 == true && flag52 == true
				&& flag53 == true && flag54 == true && flag55 == true && flag56 == true) {
				score = +50;
			}
			if (flag == false || flag2 == false || flag3 == false || flag4 == false
				|| flag5 == false || flag6 == false || flag7 == false || flag8 == false
				|| flag9 == false || flag10 == false || flag11 == false || flag12 == false
				|| flag13 == false || flag14 == false || flag15 == false || flag16 == false
				|| flag17 == false || flag18 == false || flag19 == false || flag20 == false
				|| flag21 == false || flag22 == false || flag23 == false || flag24 == false
				|| flag25 == false || flag26 == false || flag27 == false || flag28 == false
				|| flag29 == false || flag30 == false || flag31 == false || flag32 == false
				|| flag33 == false || flag34 == false || flag35 == false || flag36 == false
				|| flag37 == false || flag38 == false || flag39 == false || flag40 == false
				|| flag41 == false || flag42 == false || flag43 == false || flag44 == false
				|| flag45 == false || flag46 == false || flag47 == false || flag48 == false
				|| flag49 == false || flag50 == false || flag51 == false || flag52 == false
				|| flag53 == false || flag54 == false || flag55 == false || flag56 == false) {
				score += 50;
			}
		}
		if (flag58 == false) {
			if (flag == true && flag2 == true && flag3 == true && flag4 == true
				&& flag5 == true && flag6 == true && flag7 == true && flag8 == true
				&& flag9 == true && flag10 == true && flag11 == true && flag12 == true
				&& flag13 == true && flag14 == true && flag15 == true && flag16 == true
				&& flag17 == true && flag18 == true && flag19 == true && flag20 == true
				&& flag21 == true && flag22 == true && flag23 == true && flag24 == true
				&& flag25 == true && flag26 == true && flag27 == true && flag28 == true
				&& flag29 == true && flag30 == true && flag31 == true && flag32 == true
				&& flag33 == true && flag34 == true && flag35 == true && flag36 == true
				&& flag37 == true && flag38 == true && flag39 == true && flag40 == true
				&& flag41 == true && flag42 == true && flag43 == true && flag44 == true
				&& flag45 == true && flag46 == true && flag47 == true && flag48 == true
				&& flag49 == true && flag50 == true && flag51 == true && flag52 == true
				&& flag53 == true && flag54 == true && flag55 == true && flag56 == true
				&& flag57 == true) {
				score = +50;
			}
			if (flag == false || flag2 == false || flag3 == false || flag4 == false
				|| flag5 == false || flag6 == false || flag7 == false || flag8 == false
				|| flag9 == false || flag10 == false || flag11 == false || flag12 == false
				|| flag13 == false || flag14 == false || flag15 == false || flag16 == false
				|| flag17 == false || flag18 == false || flag19 == false || flag20 == false
				|| flag21 == false || flag22 == false || flag23 == false || flag24 == false
				|| flag25 == false || flag26 == false || flag27 == false || flag28 == false
				|| flag29 == false || flag30 == false || flag31 == false || flag32 == false
				|| flag33 == false || flag34 == false || flag35 == false || flag36 == false
				|| flag37 == false || flag38 == false || flag39 == false || flag40 == false
				|| flag41 == false || flag42 == false || flag43 == false || flag44 == false
				|| flag45 == false || flag46 == false || flag47 == false || flag48 == false
				|| flag49 == false || flag50 == false || flag51 == false || flag52 == false
				|| flag53 == false || flag54 == false || flag55 == false || flag56 == false 
				|| flag57 == false) {
				score += 50;
			}
		}
		if (flag59 == false) {
			if (flag == true && flag2 == true && flag3 == true && flag4 == true
				&& flag5 == true && flag6 == true && flag7 == true && flag8 == true
				&& flag9 == true && flag10 == true && flag11 == true && flag12 == true
				&& flag13 == true && flag14 == true && flag15 == true && flag16 == true
				&& flag17 == true && flag18 == true && flag19 == true && flag20 == true
				&& flag21 == true && flag22 == true && flag23 == true && flag24 == true
				&& flag25 == true && flag26 == true && flag27 == true && flag28 == true
				&& flag29 == true && flag30 == true && flag31 == true && flag32 == true
				&& flag33 == true && flag34 == true && flag35 == true && flag36 == true
				&& flag37 == true && flag38 == true && flag39 == true && flag40 == true
				&& flag41 == true && flag42 == true && flag43 == true && flag44 == true
				&& flag45 == true && flag46 == true && flag47 == true && flag48 == true
				&& flag49 == true && flag50 == true && flag51 == true && flag52 == true
				&& flag53 == true && flag54 == true && flag55 == true && flag56 == true
				&& flag57 == true && flag58 == true) {
				score = +50;
			}
			if (flag == false || flag2 == false || flag3 == false || flag4 == false
				|| flag5 == false || flag6 == false || flag7 == false || flag8 == false
				|| flag9 == false || flag10 == false || flag11 == false || flag12 == false
				|| flag13 == false || flag14 == false || flag15 == false || flag16 == false
				|| flag17 == false || flag18 == false || flag19 == false || flag20 == false
				|| flag21 == false || flag22 == false || flag23 == false || flag24 == false
				|| flag25 == false || flag26 == false || flag27 == false || flag28 == false
				|| flag29 == false || flag30 == false || flag31 == false || flag32 == false
				|| flag33 == false || flag34 == false || flag35 == false || flag36 == false
				|| flag37 == false || flag38 == false || flag39 == false || flag40 == false
				|| flag41 == false || flag42 == false || flag43 == false || flag44 == false
				|| flag45 == false || flag46 == false || flag47 == false || flag48 == false
				|| flag49 == false || flag50 == false || flag51 == false || flag52 == false
				|| flag53 == false || flag54 == false || flag55 == false || flag56 == false
				|| flag57 == false || flag58 == false) {
				score += 50;
			}
		}
		if (flag60 == false) {
			if (flag == true && flag2 == true && flag3 == true && flag4 == true
				&& flag5 == true && flag6 == true && flag7 == true && flag8 == true
				&& flag9 == true && flag10 == true && flag11 == true && flag12 == true
				&& flag13 == true && flag14 == true && flag15 == true && flag16 == true
				&& flag17 == true && flag18 == true && flag19 == true && flag20 == true
				&& flag21 == true && flag22 == true && flag23 == true && flag24 == true
				&& flag25 == true && flag26 == true && flag27 == true && flag28 == true
				&& flag29 == true && flag30 == true && flag31 == true && flag32 == true
				&& flag33 == true && flag34 == true && flag35 == true && flag36 == true
				&& flag37 == true && flag38 == true && flag39 == true && flag40 == true
				&& flag41 == true && flag42 == true && flag43 == true && flag44 == true
				&& flag45 == true && flag46 == true && flag47 == true && flag48 == true
				&& flag49 == true && flag50 == true && flag51 == true && flag52 == true
				&& flag53 == true && flag54 == true && flag55 == true && flag56 == true
				&& flag57 == true && flag58 == true && flag59 == true) {
				score = +50;
			}
			if (flag == false || flag2 == false || flag3 == false || flag4 == false
				|| flag5 == false || flag6 == false || flag7 == false || flag8 == false
				|| flag9 == false || flag10 == false || flag11 == false || flag12 == false
				|| flag13 == false || flag14 == false || flag15 == false || flag16 == false
				|| flag17 == false || flag18 == false || flag19 == false || flag20 == false
				|| flag21 == false || flag22 == false || flag23 == false || flag24 == false
				|| flag25 == false || flag26 == false || flag27 == false || flag28 == false
				|| flag29 == false || flag30 == false || flag31 == false || flag32 == false
				|| flag33 == false || flag34 == false || flag35 == false || flag36 == false
				|| flag37 == false || flag38 == false || flag39 == false || flag40 == false
				|| flag41 == false || flag42 == false || flag43 == false || flag44 == false
				|| flag45 == false || flag46 == false || flag47 == false || flag48 == false
				|| flag49 == false || flag50 == false || flag51 == false || flag52 == false
				|| flag53 == false || flag54 == false || flag55 == false || flag56 == false
				|| flag57 == false || flag58 == false || flag59 == false) {
				score += 50;
			}
		}
		if (flag61 == false) {
			if (flag == true && flag2 == true && flag3 == true && flag4 == true
				&& flag5 == true && flag6 == true && flag7 == true && flag8 == true
				&& flag9 == true && flag10 == true && flag11 == true && flag12 == true
				&& flag13 == true && flag14 == true && flag15 == true && flag16 == true
				&& flag17 == true && flag18 == true && flag19 == true && flag20 == true
				&& flag21 == true && flag22 == true && flag23 == true && flag24 == true
				&& flag25 == true && flag26 == true && flag27 == true && flag28 == true
				&& flag29 == true && flag30 == true && flag31 == true && flag32 == true
				&& flag33 == true && flag34 == true && flag35 == true && flag36 == true
				&& flag37 == true && flag38 == true && flag39 == true && flag40 == true
				&& flag41 == true && flag42 == true && flag43 == true && flag44 == true
				&& flag45 == true && flag46 == true && flag47 == true && flag48 == true
				&& flag49 == true && flag50 == true && flag51 == true && flag52 == true
				&& flag53 == true && flag54 == true && flag55 == true && flag56 == true
				&& flag57 == true && flag58 == true && flag59 == true && flag60 == true) {
				score = -20;
			}
			if (flag == false || flag2 == false || flag3 == false || flag4 == false
				|| flag5 == false || flag6 == false || flag7 == false || flag8 == false
				|| flag9 == false || flag10 == false || flag11 == false || flag12 == false
				|| flag13 == false || flag14 == false || flag15 == false || flag16 == false
				|| flag17 == false || flag18 == false || flag19 == false || flag20 == false
				|| flag21 == false || flag22 == false || flag23 == false || flag24 == false
				|| flag25 == false || flag26 == false || flag27 == false || flag28 == false
				|| flag29 == false || flag30 == false || flag31 == false || flag32 == false
				|| flag33 == false || flag34 == false || flag35 == false || flag36 == false
				|| flag37 == false || flag38 == false || flag39 == false || flag40 == false
				|| flag41 == false || flag42 == false || flag43 == false || flag44 == false
				|| flag45 == false || flag46 == false || flag47 == false || flag48 == false
				|| flag49 == false || flag50 == false || flag51 == false || flag52 == false
				|| flag53 == false || flag54 == false || flag55 == false || flag56 == false
				|| flag57 == false || flag58 == false || flag59 == false || flag60 == false) {
				score -= 20;
			}
		}
		if (flag62 == false) {
			if (flag == true && flag2 == true && flag3 == true && flag4 == true
				&& flag5 == true && flag6 == true && flag7 == true && flag8 == true
				&& flag9 == true && flag10 == true && flag11 == true && flag12 == true
				&& flag13 == true && flag14 == true && flag15 == true && flag16 == true
				&& flag17 == true && flag18 == true && flag19 == true && flag20 == true
				&& flag21 == true && flag22 == true && flag23 == true && flag24 == true
				&& flag25 == true && flag26 == true && flag27 == true && flag28 == true
				&& flag29 == true && flag30 == true && flag31 == true && flag32 == true
				&& flag33 == true && flag34 == true && flag35 == true && flag36 == true
				&& flag37 == true && flag38 == true && flag39 == true && flag40 == true
				&& flag41 == true && flag42 == true && flag43 == true && flag44 == true
				&& flag45 == true && flag46 == true && flag47 == true && flag48 == true
				&& flag49 == true && flag50 == true && flag51 == true && flag52 == true
				&& flag53 == true && flag54 == true && flag55 == true && flag56 == true
				&& flag57 == true && flag58 == true && flag59 == true && flag60 == true
				&& flag61 == true) {
				score = -20;
			}
			if (flag == false || flag2 == false || flag3 == false || flag4 == false
				|| flag5 == false || flag6 == false || flag7 == false || flag8 == false
				|| flag9 == false || flag10 == false || flag11 == false || flag12 == false
				|| flag13 == false || flag14 == false || flag15 == false || flag16 == false
				|| flag17 == false || flag18 == false || flag19 == false || flag20 == false
				|| flag21 == false || flag22 == false || flag23 == false || flag24 == false
				|| flag25 == false || flag26 == false || flag27 == false || flag28 == false
				|| flag29 == false || flag30 == false || flag31 == false || flag32 == false
				|| flag33 == false || flag34 == false || flag35 == false || flag36 == false
				|| flag37 == false || flag38 == false || flag39 == false || flag40 == false
				|| flag41 == false || flag42 == false || flag43 == false || flag44 == false
				|| flag45 == false || flag46 == false || flag47 == false || flag48 == false
				|| flag49 == false || flag50 == false || flag51 == false || flag52 == false
				|| flag53 == false || flag54 == false || flag55 == false || flag56 == false
				|| flag57 == false || flag58 == false || flag59 == false || flag60 == false
				|| flag61 == false) {
				score -= 20;
			}
		}
		if (flag63 == false) {
			if (flag == true && flag2 == true && flag3 == true && flag4 == true
				&& flag5 == true && flag6 == true && flag7 == true && flag8 == true
				&& flag9 == true && flag10 == true && flag11 == true && flag12 == true
				&& flag13 == true && flag14 == true && flag15 == true && flag16 == true
				&& flag17 == true && flag18 == true && flag19 == true && flag20 == true
				&& flag21 == true && flag22 == true && flag23 == true && flag24 == true
				&& flag25 == true && flag26 == true && flag27 == true && flag28 == true
				&& flag29 == true && flag30 == true && flag31 == true && flag32 == true
				&& flag33 == true && flag34 == true && flag35 == true && flag36 == true
				&& flag37 == true && flag38 == true && flag39 == true && flag40 == true
				&& flag41 == true && flag42 == true && flag43 == true && flag44 == true
				&& flag45 == true && flag46 == true && flag47 == true && flag48 == true
				&& flag49 == true && flag50 == true && flag51 == true && flag52 == true
				&& flag53 == true && flag54 == true && flag55 == true && flag56 == true
				&& flag57 == true && flag58 == true && flag59 == true && flag60 == true
				&& flag61 == true && flag62 == true) {
				score = -20;
			}
			if (flag == false || flag2 == false || flag3 == false || flag4 == false
				|| flag5 == false || flag6 == false || flag7 == false || flag8 == false
				|| flag9 == false || flag10 == false || flag11 == false || flag12 == false
				|| flag13 == false || flag14 == false || flag15 == false || flag16 == false
				|| flag17 == false || flag18 == false || flag19 == false || flag20 == false
				|| flag21 == false || flag22 == false || flag23 == false || flag24 == false
				|| flag25 == false || flag26 == false || flag27 == false || flag28 == false
				|| flag29 == false || flag30 == false || flag31 == false || flag32 == false
				|| flag33 == false || flag34 == false || flag35 == false || flag36 == false
				|| flag37 == false || flag38 == false || flag39 == false || flag40 == false
				|| flag41 == false || flag42 == false || flag43 == false || flag44 == false
				|| flag45 == false || flag46 == false || flag47 == false || flag48 == false
				|| flag49 == false || flag50 == false || flag51 == false || flag52 == false
				|| flag53 == false || flag54 == false || flag55 == false || flag56 == false
				|| flag57 == false || flag58 == false || flag59 == false || flag60 == false
				|| flag61 == false || flag62 == false) {
				score -= 20;
			}
		}
		if (flag64 == false) {
			if (flag == true && flag2 == true && flag3 == true && flag4 == true
				&& flag5 == true && flag6 == true && flag7 == true && flag8 == true
				&& flag9 == true && flag10 == true && flag11 == true && flag12 == true
				&& flag13 == true && flag14 == true && flag15 == true && flag16 == true
				&& flag17 == true && flag18 == true && flag19 == true && flag20 == true
				&& flag21 == true && flag22 == true && flag23 == true && flag24 == true
				&& flag25 == true && flag26 == true && flag27 == true && flag28 == true
				&& flag29 == true && flag30 == true && flag31 == true && flag32 == true
				&& flag33 == true && flag34 == true && flag35 == true && flag36 == true
				&& flag37 == true && flag38 == true && flag39 == true && flag40 == true
				&& flag41 == true && flag42 == true && flag43 == true && flag44 == true
				&& flag45 == true && flag46 == true && flag47 == true && flag48 == true
				&& flag49 == true && flag50 == true && flag51 == true && flag52 == true
				&& flag53 == true && flag54 == true && flag55 == true && flag56 == true
				&& flag57 == true && flag58 == true && flag59 == true && flag60 == true
				&& flag61 == true && flag62 == true && flag63 == true) {
				score = -20;
			}
			if (flag == false || flag2 == false || flag3 == false || flag4 == false
				|| flag5 == false || flag6 == false || flag7 == false || flag8 == false
				|| flag9 == false || flag10 == false || flag11 == false || flag12 == false
				|| flag13 == false || flag14 == false || flag15 == false || flag16 == false
				|| flag17 == false || flag18 == false || flag19 == false || flag20 == false
				|| flag21 == false || flag22 == false || flag23 == false || flag24 == false
				|| flag25 == false || flag26 == false || flag27 == false || flag28 == false
				|| flag29 == false || flag30 == false || flag31 == false || flag32 == false
				|| flag33 == false || flag34 == false || flag35 == false || flag36 == false
				|| flag37 == false || flag38 == false || flag39 == false || flag40 == false
				|| flag41 == false || flag42 == false || flag43 == false || flag44 == false
				|| flag45 == false || flag46 == false || flag47 == false || flag48 == false
				|| flag49 == false || flag50 == false || flag51 == false || flag52 == false
				|| flag53 == false || flag54 == false || flag55 == false || flag56 == false
				|| flag57 == false || flag58 == false || flag59 == false || flag60 == false
				|| flag61 == false || flag62 == false || flag63 == false) {
				score -= 20;
			}
		}
		if (flag65 == false) {
			if (flag == true && flag2 == true && flag3 == true && flag4 == true
				&& flag5 == true && flag6 == true && flag7 == true && flag8 == true
				&& flag9 == true && flag10 == true && flag11 == true && flag12 == true
				&& flag13 == true && flag14 == true && flag15 == true && flag16 == true
				&& flag17 == true && flag18 == true && flag19 == true && flag20 == true
				&& flag21 == true && flag22 == true && flag23 == true && flag24 == true
				&& flag25 == true && flag26 == true && flag27 == true && flag28 == true
				&& flag29 == true && flag30 == true && flag31 == true && flag32 == true
				&& flag33 == true && flag34 == true && flag35 == true && flag36 == true
				&& flag37 == true && flag38 == true && flag39 == true && flag40 == true
				&& flag41 == true && flag42 == true && flag43 == true && flag44 == true
				&& flag45 == true && flag46 == true && flag47 == true && flag48 == true
				&& flag49 == true && flag50 == true && flag51 == true && flag52 == true
				&& flag53 == true && flag54 == true && flag55 == true && flag56 == true
				&& flag57 == true && flag58 == true && flag59 == true && flag60 == true
				&& flag61 == true && flag62 == true && flag63 == true && flag64 == true) {
				score = -20;
			}
			if (flag == false || flag2 == false || flag3 == false || flag4 == false
				|| flag5 == false || flag6 == false || flag7 == false || flag8 == false
				|| flag9 == false || flag10 == false || flag11 == false || flag12 == false
				|| flag13 == false || flag14 == false || flag15 == false || flag16 == false
				|| flag17 == false || flag18 == false || flag19 == false || flag20 == false
				|| flag21 == false || flag22 == false || flag23 == false || flag24 == false
				|| flag25 == false || flag26 == false || flag27 == false || flag28 == false
				|| flag29 == false || flag30 == false || flag31 == false || flag32 == false
				|| flag33 == false || flag34 == false || flag35 == false || flag36 == false
				|| flag37 == false || flag38 == false || flag39 == false || flag40 == false
				|| flag41 == false || flag42 == false || flag43 == false || flag44 == false
				|| flag45 == false || flag46 == false || flag47 == false || flag48 == false
				|| flag49 == false || flag50 == false || flag51 == false || flag52 == false
				|| flag53 == false || flag54 == false || flag55 == false || flag56 == false
				|| flag57 == false || flag58 == false || flag59 == false || flag60 == false
				|| flag61 == false || flag62 == false || flag63 == false || flag64 == false) {
				score -= 20;
			}
		}
		if (flag66 == false) {
			if (flag == true && flag2 == true && flag3 == true && flag4 == true
				&& flag5 == true && flag6 == true && flag7 == true && flag8 == true
				&& flag9 == true && flag10 == true && flag11 == true && flag12 == true
				&& flag13 == true && flag14 == true && flag15 == true && flag16 == true
				&& flag17 == true && flag18 == true && flag19 == true && flag20 == true
				&& flag21 == true && flag22 == true && flag23 == true && flag24 == true
				&& flag25 == true && flag26 == true && flag27 == true && flag28 == true
				&& flag29 == true && flag30 == true && flag31 == true && flag32 == true
				&& flag33 == true && flag34 == true && flag35 == true && flag36 == true
				&& flag37 == true && flag38 == true && flag39 == true && flag40 == true
				&& flag41 == true && flag42 == true && flag43 == true && flag44 == true
				&& flag45 == true && flag46 == true && flag47 == true && flag48 == true
				&& flag49 == true && flag50 == true && flag51 == true && flag52 == true
				&& flag53 == true && flag54 == true && flag55 == true && flag56 == true
				&& flag57 == true && flag58 == true && flag59 == true && flag60 == true
				&& flag61 == true && flag62 == true && flag63 == true && flag64 == true
				&& flag65 == true) {
				score = -20;
			}
			if (flag == false || flag2 == false || flag3 == false || flag4 == false
				|| flag5 == false || flag6 == false || flag7 == false || flag8 == false
				|| flag9 == false || flag10 == false || flag11 == false || flag12 == false
				|| flag13 == false || flag14 == false || flag15 == false || flag16 == false
				|| flag17 == false || flag18 == false || flag19 == false || flag20 == false
				|| flag21 == false || flag22 == false || flag23 == false || flag24 == false
				|| flag25 == false || flag26 == false || flag27 == false || flag28 == false
				|| flag29 == false || flag30 == false || flag31 == false || flag32 == false
				|| flag33 == false || flag34 == false || flag35 == false || flag36 == false
				|| flag37 == false || flag38 == false || flag39 == false || flag40 == false
				|| flag41 == false || flag42 == false || flag43 == false || flag44 == false
				|| flag45 == false || flag46 == false || flag47 == false || flag48 == false
				|| flag49 == false || flag50 == false || flag51 == false || flag52 == false
				|| flag53 == false || flag54 == false || flag55 == false || flag56 == false
				|| flag57 == false || flag58 == false || flag59 == false || flag60 == false
				|| flag61 == false || flag62 == false || flag63 == false || flag64 == false
				|| flag65 == false) {
				score -= 20;
			}
		}
		if (flag67 == false) {
			if (flag == true && flag2 == true && flag3 == true && flag4 == true
				&& flag5 == true && flag6 == true && flag7 == true && flag8 == true
				&& flag9 == true && flag10 == true && flag11 == true && flag12 == true
				&& flag13 == true && flag14 == true && flag15 == true && flag16 == true
				&& flag17 == true && flag18 == true && flag19 == true && flag20 == true
				&& flag21 == true && flag22 == true && flag23 == true && flag24 == true
				&& flag25 == true && flag26 == true && flag27 == true && flag28 == true
				&& flag29 == true && flag30 == true && flag31 == true && flag32 == true
				&& flag33 == true && flag34 == true && flag35 == true && flag36 == true
				&& flag37 == true && flag38 == true && flag39 == true && flag40 == true
				&& flag41 == true && flag42 == true && flag43 == true && flag44 == true
				&& flag45 == true && flag46 == true && flag47 == true && flag48 == true
				&& flag49 == true && flag50 == true && flag51 == true && flag52 == true
				&& flag53 == true && flag54 == true && flag55 == true && flag56 == true
				&& flag57 == true && flag58 == true && flag59 == true && flag60 == true
				&& flag61 == true && flag62 == true && flag63 == true && flag64 == true
				&& flag65 == true && flag66 == true) {
				score = -20;
			}
			if (flag == false || flag2 == false || flag3 == false || flag4 == false
				|| flag5 == false || flag6 == false || flag7 == false || flag8 == false
				|| flag9 == false || flag10 == false || flag11 == false || flag12 == false
				|| flag13 == false || flag14 == false || flag15 == false || flag16 == false
				|| flag17 == false || flag18 == false || flag19 == false || flag20 == false
				|| flag21 == false || flag22 == false || flag23 == false || flag24 == false
				|| flag25 == false || flag26 == false || flag27 == false || flag28 == false
				|| flag29 == false || flag30 == false || flag31 == false || flag32 == false
				|| flag33 == false || flag34 == false || flag35 == false || flag36 == false
				|| flag37 == false || flag38 == false || flag39 == false || flag40 == false
				|| flag41 == false || flag42 == false || flag43 == false || flag44 == false
				|| flag45 == false || flag46 == false || flag47 == false || flag48 == false
				|| flag49 == false || flag50 == false || flag51 == false || flag52 == false
				|| flag53 == false || flag54 == false || flag55 == false || flag56 == false
				|| flag57 == false || flag58 == false || flag59 == false || flag60 == false
				|| flag61 == false || flag62 == false || flag63 == false || flag64 == false
				|| flag65 == false || flag66 == false) {
				score -= 20;
			}
		}
		if (flag68 == false) {
			if (flag == true && flag2 == true && flag3 == true && flag4 == true
				&& flag5 == true && flag6 == true && flag7 == true && flag8 == true
				&& flag9 == true && flag10 == true && flag11 == true && flag12 == true
				&& flag13 == true && flag14 == true && flag15 == true && flag16 == true
				&& flag17 == true && flag18 == true && flag19 == true && flag20 == true
				&& flag21 == true && flag22 == true && flag23 == true && flag24 == true
				&& flag25 == true && flag26 == true && flag27 == true && flag28 == true
				&& flag29 == true && flag30 == true && flag31 == true && flag32 == true
				&& flag33 == true && flag34 == true && flag35 == true && flag36 == true
				&& flag37 == true && flag38 == true && flag39 == true && flag40 == true
				&& flag41 == true && flag42 == true && flag43 == true && flag44 == true
				&& flag45 == true && flag46 == true && flag47 == true && flag48 == true
				&& flag49 == true && flag50 == true && flag51 == true && flag52 == true
				&& flag53 == true && flag54 == true && flag55 == true && flag56 == true
				&& flag57 == true && flag58 == true && flag59 == true && flag60 == true
				&& flag61 == true && flag62 == true && flag63 == true && flag64 == true
				&& flag65 == true && flag66 == true && flag67 == true) {
				score = -20;
			}
			if (flag == false || flag2 == false || flag3 == false || flag4 == false
				|| flag5 == false || flag6 == false || flag7 == false || flag8 == false
				|| flag9 == false || flag10 == false || flag11 == false || flag12 == false
				|| flag13 == false || flag14 == false || flag15 == false || flag16 == false
				|| flag17 == false || flag18 == false || flag19 == false || flag20 == false
				|| flag21 == false || flag22 == false || flag23 == false || flag24 == false
				|| flag25 == false || flag26 == false || flag27 == false || flag28 == false
				|| flag29 == false || flag30 == false || flag31 == false || flag32 == false
				|| flag33 == false || flag34 == false || flag35 == false || flag36 == false
				|| flag37 == false || flag38 == false || flag39 == false || flag40 == false
				|| flag41 == false || flag42 == false || flag43 == false || flag44 == false
				|| flag45 == false || flag46 == false || flag47 == false || flag48 == false
				|| flag49 == false || flag50 == false || flag51 == false || flag52 == false
				|| flag53 == false || flag54 == false || flag55 == false || flag56 == false
				|| flag57 == false || flag58 == false || flag59 == false || flag60 == false
				|| flag61 == false || flag62 == false || flag63 == false || flag64 == false
				|| flag65 == false || flag66 == false || flag67 == false) {
				score -= 20;
			}
		}
		if (flag69 == false) {
			if (flag == true && flag2 == true && flag3 == true && flag4 == true
				&& flag5 == true && flag6 == true && flag7 == true && flag8 == true
				&& flag9 == true && flag10 == true && flag11 == true && flag12 == true
				&& flag13 == true && flag14 == true && flag15 == true && flag16 == true
				&& flag17 == true && flag18 == true && flag19 == true && flag20 == true
				&& flag21 == true && flag22 == true && flag23 == true && flag24 == true
				&& flag25 == true && flag26 == true && flag27 == true && flag28 == true
				&& flag29 == true && flag30 == true && flag31 == true && flag32 == true
				&& flag33 == true && flag34 == true && flag35 == true && flag36 == true
				&& flag37 == true && flag38 == true && flag39 == true && flag40 == true
				&& flag41 == true && flag42 == true && flag43 == true && flag44 == true
				&& flag45 == true && flag46 == true && flag47 == true && flag48 == true
				&& flag49 == true && flag50 == true && flag51 == true && flag52 == true
				&& flag53 == true && flag54 == true && flag55 == true && flag56 == true
				&& flag57 == true && flag58 == true && flag59 == true && flag60 == true
				&& flag61 == true && flag62 == true && flag63 == true && flag64 == true
				&& flag65 == true && flag66 == true && flag67 == true && flag68 == true) {
				score = -20;
			}
			if (flag == false || flag2 == false || flag3 == false || flag4 == false
				|| flag5 == false || flag6 == false || flag7 == false || flag8 == false
				|| flag9 == false || flag10 == false || flag11 == false || flag12 == false
				|| flag13 == false || flag14 == false || flag15 == false || flag16 == false
				|| flag17 == false || flag18 == false || flag19 == false || flag20 == false
				|| flag21 == false || flag22 == false || flag23 == false || flag24 == false
				|| flag25 == false || flag26 == false || flag27 == false || flag28 == false
				|| flag29 == false || flag30 == false || flag31 == false || flag32 == false
				|| flag33 == false || flag34 == false || flag35 == false || flag36 == false
				|| flag37 == false || flag38 == false || flag39 == false || flag40 == false
				|| flag41 == false || flag42 == false || flag43 == false || flag44 == false
				|| flag45 == false || flag46 == false || flag47 == false || flag48 == false
				|| flag49 == false || flag50 == false || flag51 == false || flag52 == false
				|| flag53 == false || flag54 == false || flag55 == false || flag56 == false
				|| flag57 == false || flag58 == false || flag59 == false || flag60 == false
				|| flag61 == false || flag62 == false || flag63 == false || flag64 == false
				|| flag65 == false || flag66 == false || flag67 == false || flag68 == false) {
				score -= 20;
			}
		}
		if (flag70 == false) {
			if (flag == true && flag2 == true && flag3 == true && flag4 == true
				&& flag5 == true && flag6 == true && flag7 == true && flag8 == true
				&& flag9 == true && flag10 == true && flag11 == true && flag12 == true
				&& flag13 == true && flag14 == true && flag15 == true && flag16 == true
				&& flag17 == true && flag18 == true && flag19 == true && flag20 == true
				&& flag21 == true && flag22 == true && flag23 == true && flag24 == true
				&& flag25 == true && flag26 == true && flag27 == true && flag28 == true
				&& flag29 == true && flag30 == true && flag31 == true && flag32 == true
				&& flag33 == true && flag34 == true && flag35 == true && flag36 == true
				&& flag37 == true && flag38 == true && flag39 == true && flag40 == true
				&& flag41 == true && flag42 == true && flag43 == true && flag44 == true
				&& flag45 == true && flag46 == true && flag47 == true && flag48 == true
				&& flag49 == true && flag50 == true && flag51 == true && flag52 == true
				&& flag53 == true && flag54 == true && flag55 == true && flag56 == true
				&& flag57 == true && flag58 == true && flag59 == true && flag60 == true
				&& flag61 == true && flag62 == true && flag63 == true && flag64 == true
				&& flag65 == true && flag66 == true && flag67 == true && flag68 == true
				&& flag69 == true) {
				score = -20;
			}
			if (flag == false || flag2 == false || flag3 == false || flag4 == false
				|| flag5 == false || flag6 == false || flag7 == false || flag8 == false
				|| flag9 == false || flag10 == false || flag11 == false || flag12 == false
				|| flag13 == false || flag14 == false || flag15 == false || flag16 == false
				|| flag17 == false || flag18 == false || flag19 == false || flag20 == false
				|| flag21 == false || flag22 == false || flag23 == false || flag24 == false
				|| flag25 == false || flag26 == false || flag27 == false || flag28 == false
				|| flag29 == false || flag30 == false || flag31 == false || flag32 == false
				|| flag33 == false || flag34 == false || flag35 == false || flag36 == false
				|| flag37 == false || flag38 == false || flag39 == false || flag40 == false
				|| flag41 == false || flag42 == false || flag43 == false || flag44 == false
				|| flag45 == false || flag46 == false || flag47 == false || flag48 == false
				|| flag49 == false || flag50 == false || flag51 == false || flag52 == false
				|| flag53 == false || flag54 == false || flag55 == false || flag56 == false
				|| flag57 == false || flag58 == false || flag59 == false || flag60 == false
				|| flag61 == false || flag62 == false || flag63 == false || flag64 == false
				|| flag65 == false || flag66 == false || flag67 == false || flag68 == false
				|| flag69 == false) {
				score -= 20;
			}
		}
		if (flag71 == false) {
			if (flag == true && flag2 == true && flag3 == true && flag4 == true
				&& flag5 == true && flag6 == true && flag7 == true && flag8 == true
				&& flag9 == true && flag10 == true && flag11 == true && flag12 == true
				&& flag13 == true && flag14 == true && flag15 == true && flag16 == true
				&& flag17 == true && flag18 == true && flag19 == true && flag20 == true
				&& flag21 == true && flag22 == true && flag23 == true && flag24 == true
				&& flag25 == true && flag26 == true && flag27 == true && flag28 == true
				&& flag29 == true && flag30 == true && flag31 == true && flag32 == true
				&& flag33 == true && flag34 == true && flag35 == true && flag36 == true
				&& flag37 == true && flag38 == true && flag39 == true && flag40 == true
				&& flag41 == true && flag42 == true && flag43 == true && flag44 == true
				&& flag45 == true && flag46 == true && flag47 == true && flag48 == true
				&& flag49 == true && flag50 == true && flag51 == true && flag52 == true
				&& flag53 == true && flag54 == true && flag55 == true && flag56 == true
				&& flag57 == true && flag58 == true && flag59 == true && flag60 == true
				&& flag61 == true && flag62 == true && flag63 == true && flag64 == true
				&& flag65 == true && flag66 == true && flag67 == true && flag68 == true
				&& flag69 == true && flag70 == true) {
				score = -20;
			}
			if (flag == false || flag2 == false || flag3 == false || flag4 == false
				|| flag5 == false || flag6 == false || flag7 == false || flag8 == false
				|| flag9 == false || flag10 == false || flag11 == false || flag12 == false
				|| flag13 == false || flag14 == false || flag15 == false || flag16 == false
				|| flag17 == false || flag18 == false || flag19 == false || flag20 == false
				|| flag21 == false || flag22 == false || flag23 == false || flag24 == false
				|| flag25 == false || flag26 == false || flag27 == false || flag28 == false
				|| flag29 == false || flag30 == false || flag31 == false || flag32 == false
				|| flag33 == false || flag34 == false || flag35 == false || flag36 == false
				|| flag37 == false || flag38 == false || flag39 == false || flag40 == false
				|| flag41 == false || flag42 == false || flag43 == false || flag44 == false
				|| flag45 == false || flag46 == false || flag47 == false || flag48 == false
				|| flag49 == false || flag50 == false || flag51 == false || flag52 == false
				|| flag53 == false || flag54 == false || flag55 == false || flag56 == false
				|| flag57 == false || flag58 == false || flag59 == false || flag60 == false
				|| flag61 == false || flag62 == false || flag63 == false || flag64 == false
				|| flag65 == false || flag66 == false || flag67 == false || flag68 == false
				|| flag69 == false || flag70 == false) {
				score -= 20;
			}
		}
		if (flag72 == false) {
			if (flag == true && flag2 == true && flag3 == true && flag4 == true
				&& flag5 == true && flag6 == true && flag7 == true && flag8 == true
				&& flag9 == true && flag10 == true && flag11 == true && flag12 == true
				&& flag13 == true && flag14 == true && flag15 == true && flag16 == true
				&& flag17 == true && flag18 == true && flag19 == true && flag20 == true
				&& flag21 == true && flag22 == true && flag23 == true && flag24 == true
				&& flag25 == true && flag26 == true && flag27 == true && flag28 == true
				&& flag29 == true && flag30 == true && flag31 == true && flag32 == true
				&& flag33 == true && flag34 == true && flag35 == true && flag36 == true
				&& flag37 == true && flag38 == true && flag39 == true && flag40 == true
				&& flag41 == true && flag42 == true && flag43 == true && flag44 == true
				&& flag45 == true && flag46 == true && flag47 == true && flag48 == true
				&& flag49 == true && flag50 == true && flag51 == true && flag52 == true
				&& flag53 == true && flag54 == true && flag55 == true && flag56 == true
				&& flag57 == true && flag58 == true && flag59 == true && flag60 == true
				&& flag61 == true && flag62 == true && flag63 == true && flag64 == true
				&& flag65 == true && flag66 == true && flag67 == true && flag68 == true
				&& flag69 == true && flag70 == true && flag71 == true) {
				score = -20;
			}
			if (flag == false || flag2 == false || flag3 == false || flag4 == false
				|| flag5 == false || flag6 == false || flag7 == false || flag8 == false
				|| flag9 == false || flag10 == false || flag11 == false || flag12 == false
				|| flag13 == false || flag14 == false || flag15 == false || flag16 == false
				|| flag17 == false || flag18 == false || flag19 == false || flag20 == false
				|| flag21 == false || flag22 == false || flag23 == false || flag24 == false
				|| flag25 == false || flag26 == false || flag27 == false || flag28 == false
				|| flag29 == false || flag30 == false || flag31 == false || flag32 == false
				|| flag33 == false || flag34 == false || flag35 == false || flag36 == false
				|| flag37 == false || flag38 == false || flag39 == false || flag40 == false
				|| flag41 == false || flag42 == false || flag43 == false || flag44 == false
				|| flag45 == false || flag46 == false || flag47 == false || flag48 == false
				|| flag49 == false || flag50 == false || flag51 == false || flag52 == false
				|| flag53 == false || flag54 == false || flag55 == false || flag56 == false
				|| flag57 == false || flag58 == false || flag59 == false || flag60 == false
				|| flag61 == false || flag62 == false || flag63 == false || flag64 == false
				|| flag65 == false || flag66 == false || flag67 == false || flag68 == false
				|| flag69 == false || flag70 == false || flag72 == false) {
				score -= 20;
			}
		}
		if (flag73 == false) {
			if (flag == true && flag2 == true && flag3 == true && flag4 == true
				&& flag5 == true && flag6 == true && flag7 == true && flag8 == true
				&& flag9 == true && flag10 == true && flag11 == true && flag12 == true
				&& flag13 == true && flag14 == true && flag15 == true && flag16 == true
				&& flag17 == true && flag18 == true && flag19 == true && flag20 == true
				&& flag21 == true && flag22 == true && flag23 == true && flag24 == true
				&& flag25 == true && flag26 == true && flag27 == true && flag28 == true
				&& flag29 == true && flag30 == true && flag31 == true && flag32 == true
				&& flag33 == true && flag34 == true && flag35 == true && flag36 == true
				&& flag37 == true && flag38 == true && flag39 == true && flag40 == true
				&& flag41 == true && flag42 == true && flag43 == true && flag44 == true
				&& flag45 == true && flag46 == true && flag47 == true && flag48 == true
				&& flag49 == true && flag50 == true && flag51 == true && flag52 == true
				&& flag53 == true && flag54 == true && flag55 == true && flag56 == true
				&& flag57 == true && flag58 == true && flag59 == true && flag60 == true
				&& flag61 == true && flag62 == true && flag63 == true && flag64 == true
				&& flag65 == true && flag66 == true && flag67 == true && flag68 == true
				&& flag69 == true && flag70 == true && flag71 == true && flag72 == true) {
				score = -20;
			}
			if (flag == false || flag2 == false || flag3 == false || flag4 == false
				|| flag5 == false || flag6 == false || flag7 == false || flag8 == false
				|| flag9 == false || flag10 == false || flag11 == false || flag12 == false
				|| flag13 == false || flag14 == false || flag15 == false || flag16 == false
				|| flag17 == false || flag18 == false || flag19 == false || flag20 == false
				|| flag21 == false || flag22 == false || flag23 == false || flag24 == false
				|| flag25 == false || flag26 == false || flag27 == false || flag28 == false
				|| flag29 == false || flag30 == false || flag31 == false || flag32 == false
				|| flag33 == false || flag34 == false || flag35 == false || flag36 == false
				|| flag37 == false || flag38 == false || flag39 == false || flag40 == false
				|| flag41 == false || flag42 == false || flag43 == false || flag44 == false
				|| flag45 == false || flag46 == false || flag47 == false || flag48 == false
				|| flag49 == false || flag50 == false || flag51 == false || flag52 == false
				|| flag53 == false || flag54 == false || flag55 == false || flag56 == false
				|| flag57 == false || flag58 == false || flag59 == false || flag60 == false
				|| flag61 == false || flag62 == false || flag63 == false || flag64 == false
				|| flag65 == false || flag66 == false || flag67 == false || flag68 == false
				|| flag69 == false || flag70 == false || flag72 == false || flag73 == false) {
				score -= 20;
			}
		}
		if (flag74 == false) {
			if (flag == true && flag2 == true && flag3 == true && flag4 == true
				&& flag5 == true && flag6 == true && flag7 == true && flag8 == true
				&& flag9 == true && flag10 == true && flag11 == true && flag12 == true
				&& flag13 == true && flag14 == true && flag15 == true && flag16 == true
				&& flag17 == true && flag18 == true && flag19 == true && flag20 == true
				&& flag21 == true && flag22 == true && flag23 == true && flag24 == true
				&& flag25 == true && flag26 == true && flag27 == true && flag28 == true
				&& flag29 == true && flag30 == true && flag31 == true && flag32 == true
				&& flag33 == true && flag34 == true && flag35 == true && flag36 == true
				&& flag37 == true && flag38 == true && flag39 == true && flag40 == true
				&& flag41 == true && flag42 == true && flag43 == true && flag44 == true
				&& flag45 == true && flag46 == true && flag47 == true && flag48 == true
				&& flag49 == true && flag50 == true && flag51 == true && flag52 == true
				&& flag53 == true && flag54 == true && flag55 == true && flag56 == true
				&& flag57 == true && flag58 == true && flag59 == true && flag60 == true
				&& flag61 == true && flag62 == true && flag63 == true && flag64 == true
				&& flag65 == true && flag66 == true && flag67 == true && flag68 == true
				&& flag69 == true && flag70 == true && flag71 == true && flag72 == true
				&& flag73 == true) {
				score = -20;
			}
			if (flag == false || flag2 == false || flag3 == false || flag4 == false
				|| flag5 == false || flag6 == false || flag7 == false || flag8 == false
				|| flag9 == false || flag10 == false || flag11 == false || flag12 == false
				|| flag13 == false || flag14 == false || flag15 == false || flag16 == false
				|| flag17 == false || flag18 == false || flag19 == false || flag20 == false
				|| flag21 == false || flag22 == false || flag23 == false || flag24 == false
				|| flag25 == false || flag26 == false || flag27 == false || flag28 == false
				|| flag29 == false || flag30 == false || flag31 == false || flag32 == false
				|| flag33 == false || flag34 == false || flag35 == false || flag36 == false
				|| flag37 == false || flag38 == false || flag39 == false || flag40 == false
				|| flag41 == false || flag42 == false || flag43 == false || flag44 == false
				|| flag45 == false || flag46 == false || flag47 == false || flag48 == false
				|| flag49 == false || flag50 == false || flag51 == false || flag52 == false
				|| flag53 == false || flag54 == false || flag55 == false || flag56 == false
				|| flag57 == false || flag58 == false || flag59 == false || flag60 == false
				|| flag61 == false || flag62 == false || flag63 == false || flag64 == false
				|| flag65 == false || flag66 == false || flag67 == false || flag68 == false
				|| flag69 == false || flag70 == false || flag71 == false || flag72 == false
				|| flag73 == false) {
				score -= 20;
			}
		}
		if (flag75 == false) {
			if (flag == true && flag2 == true && flag3 == true && flag4 == true
				&& flag5 == true && flag6 == true && flag7 == true && flag8 == true
				&& flag9 == true && flag10 == true && flag11 == true && flag12 == true
				&& flag13 == true && flag14 == true && flag15 == true && flag16 == true
				&& flag17 == true && flag18 == true && flag19 == true && flag20 == true
				&& flag21 == true && flag22 == true && flag23 == true && flag24 == true
				&& flag25 == true && flag26 == true && flag27 == true && flag28 == true
				&& flag29 == true && flag30 == true && flag31 == true && flag32 == true
				&& flag33 == true && flag34 == true && flag35 == true && flag36 == true
				&& flag37 == true && flag38 == true && flag39 == true && flag40 == true
				&& flag41 == true && flag42 == true && flag43 == true && flag44 == true
				&& flag45 == true && flag46 == true && flag47 == true && flag48 == true
				&& flag49 == true && flag50 == true && flag51 == true && flag52 == true
				&& flag53 == true && flag54 == true && flag55 == true && flag56 == true
				&& flag57 == true && flag58 == true && flag59 == true && flag60 == true
				&& flag61 == true && flag62 == true && flag63 == true && flag64 == true
				&& flag65 == true && flag66 == true && flag67 == true && flag68 == true
				&& flag69 == true && flag70 == true && flag71 == true && flag72 == true
				&& flag73 == true && flag74 == true) {
				score = -20;
			}
			if (flag == false || flag2 == false || flag3 == false || flag4 == false
				|| flag5 == false || flag6 == false || flag7 == false || flag8 == false
				|| flag9 == false || flag10 == false || flag11 == false || flag12 == false
				|| flag13 == false || flag14 == false || flag15 == false || flag16 == false
				|| flag17 == false || flag18 == false || flag19 == false || flag20 == false
				|| flag21 == false || flag22 == false || flag23 == false || flag24 == false
				|| flag25 == false || flag26 == false || flag27 == false || flag28 == false
				|| flag29 == false || flag30 == false || flag31 == false || flag32 == false
				|| flag33 == false || flag34 == false || flag35 == false || flag36 == false
				|| flag37 == false || flag38 == false || flag39 == false || flag40 == false
				|| flag41 == false || flag42 == false || flag43 == false || flag44 == false
				|| flag45 == false || flag46 == false || flag47 == false || flag48 == false
				|| flag49 == false || flag50 == false || flag51 == false || flag52 == false
				|| flag53 == false || flag54 == false || flag55 == false || flag56 == false
				|| flag57 == false || flag58 == false || flag59 == false || flag60 == false
				|| flag61 == false || flag62 == false || flag63 == false || flag64 == false
				|| flag65 == false || flag66 == false || flag67 == false || flag68 == false
				|| flag69 == false || flag70 == false || flag71 == false || flag72 == false
				|| flag73 == false || flag74 == false) {
				score -= 20;
			}
		}
		if (flag76 == false) {
			if (flag == true && flag2 == true && flag3 == true && flag4 == true
				&& flag5 == true && flag6 == true && flag7 == true && flag8 == true
				&& flag9 == true && flag10 == true && flag11 == true && flag12 == true
				&& flag13 == true && flag14 == true && flag15 == true && flag16 == true
				&& flag17 == true && flag18 == true && flag19 == true && flag20 == true
				&& flag21 == true && flag22 == true && flag23 == true && flag24 == true
				&& flag25 == true && flag26 == true && flag27 == true && flag28 == true
				&& flag29 == true && flag30 == true && flag31 == true && flag32 == true
				&& flag33 == true && flag34 == true && flag35 == true && flag36 == true
				&& flag37 == true && flag38 == true && flag39 == true && flag40 == true
				&& flag41 == true && flag42 == true && flag43 == true && flag44 == true
				&& flag45 == true && flag46 == true && flag47 == true && flag48 == true
				&& flag49 == true && flag50 == true && flag51 == true && flag52 == true
				&& flag53 == true && flag54 == true && flag55 == true && flag56 == true
				&& flag57 == true && flag58 == true && flag59 == true && flag60 == true
				&& flag61 == true && flag62 == true && flag63 == true && flag64 == true
				&& flag65 == true && flag66 == true && flag67 == true && flag68 == true
				&& flag69 == true && flag70 == true && flag71 == true && flag72 == true
				&& flag73 == true && flag74 == true && flag75 == true) {
				score = -0;
			}
			if (flag == false || flag2 == false || flag3 == false || flag4 == false
				|| flag5 == false || flag6 == false || flag7 == false || flag8 == false
				|| flag9 == false || flag10 == false || flag11 == false || flag12 == false
				|| flag13 == false || flag14 == false || flag15 == false || flag16 == false
				|| flag17 == false || flag18 == false || flag19 == false || flag20 == false
				|| flag21 == false || flag22 == false || flag23 == false || flag24 == false
				|| flag25 == false || flag26 == false || flag27 == false || flag28 == false
				|| flag29 == false || flag30 == false || flag31 == false || flag32 == false
				|| flag33 == false || flag34 == false || flag35 == false || flag36 == false
				|| flag37 == false || flag38 == false || flag39 == false || flag40 == false
				|| flag41 == false || flag42 == false || flag43 == false || flag44 == false
				|| flag45 == false || flag46 == false || flag47 == false || flag48 == false
				|| flag49 == false || flag50 == false || flag51 == false || flag52 == false
				|| flag53 == false || flag54 == false || flag55 == false || flag56 == false
				|| flag57 == false || flag58 == false || flag59 == false || flag60 == false
				|| flag61 == false || flag62 == false || flag63 == false || flag64 == false
				|| flag65 == false || flag66 == false || flag67 == false || flag68 == false
				|| flag69 == false || flag70 == false || flag71 == false || flag72 == false
				|| flag73 == false || flag74 == false || flag75 == false) {
				score -= 0;
			}
		}
 
		
		if (POS2Y > 850) {
			Novice::DrawSprite(0, 0, owari, 1.0f, 1.0f, 0.0f, WHITE);
		}
		}

		if (POS2Y > 850 && keys[DIK_SPACE] && preKeys[DIK_SPACE]) {
			next = 2;
		}

if(next==0){
Novice::DrawSprite(0,  0,taitoru,1.0f,1.0f, 0.0f, WHITE);}

if(next==3){
Novice::DrawSprite(0,  0,taitoru,1.0f,1.0f, 0.0f, WHITE);}



if (next == 0) {
	if(!keys[DIK_SPACE] && preKeys[DIK_SPACE]) {
	next = 1;
    }
}

if (next == 2) {
if(!keys[DIK_SPACE] && preKeys[DIK_SPACE]){
	next=3;
	
}







if (next == 3) {

	speed = 6;
	posX = 500;
	posY = 630;


	POSX = 795;
	POSY = -2050;

	POS2X = 585;
	POS2Y = -2590;

	POS3X = 645;
	POS3Y = -3150;

	POS4X = 735;
	POS4Y = -3780;

	POS5X = 785;
	POS5Y = -4430;

	POS6X = 525;
	POS6Y = -4850;

	POS7X = 755;
	POS7Y = -5209;

	POS8X = 795;
	POS8Y = -5820;

	POS9X = 515;
	POS9Y = -6430;

	POS10X = 935;
	POS10Y = -7050;

	POS11X = 675;
	POS11Y = -7480;

	POS12X = 375;
	POS12Y = -8050;

	POS13X = 945;
	POS13Y = -8650;

	POS14X = 615;
	POS14Y = -9250;

	POS15X = 795;
	POS15Y = -9780;

	POS16X = 445;
	POS16Y = -10350;

	POS17X = 555;
	POS17Y = -10790;

	POS18X = 925;
	POS18Y = -11300;

	POS19X = 795;
	POS19Y = -11780;

	POS20X = 845;
	POS20Y = -12250;


	POS21X = 445;
	POS21Y = -23770;

	POS22X = 765;
	POS22Y = -28150;

	POS23X = 555;
	POS23Y = -14580;

	POS24X = 365;
	POS24Y = -24590;

	POS25X = 808;
	POS25Y = -28800;

	POS26X = 695;
	POS26Y = -14950;

	POS27X = 545;
	POS27Y = -30290;

	POS28X = 455;
	POS28Y = -24960;

	POS29X = 678;
	POS29Y = -25480;

	POS30X = 345;
	POS30Y = -15480;

	POS31X = 335;
	POS31Y = -30760;

	POS32X = 725;
	POS32Y = -31250;

	POS33X = 485;
	POS33Y = -15950;

	POS34X = 805;
	POS34Y = -25990;

	POS35X = 395;
	POS35Y = -16240;

	POS36X = 555;
	POS36Y = -31850;

	POS37X = 475;
	POS37Y = -16620;

	POS38X = 777;
	POS38Y = -26410;

	POS39X = 666;
	POS39Y = -17130;

	POS40X = 444;
	POS40Y = -32250;


	POS41X = 565;
	POS41Y = -17680;
	POS42X = 675;
	POS42Y = -26830;

	POS43X = 345;
	POS43Y = -18020;

	POS44X = 435;
	POS44Y = -32650;

	POS45X = 765;
	POS45Y = -18480;

	POS46X = 435;
	POS46Y = -27280;

	POS47X = 396;
	POS47Y = -18900;

	POS48X = 795;
	POS48Y = -33090;

	POS49X = 666;
	POS49Y = -19500;

	POS50X = 555;
	POS50Y = -27850;

	POS51X = 495;
	POS51Y = -19993;

	POS52X = 615;
	POS52Y = -20450;

	POS53X = 395;
	POS53Y = -20942;

	POS54X = 721;
	POS54Y = -28340;

	POS55X = 365;
	POS55Y = -28870;

	POS56X = 415;
	POS56Y = -29360;

	POS57X = 665;
	POS57Y = -33450;

	POS58X = 585;
	POS58Y = -33830;

	POS59X = 395;
	POS59Y = -34220;

	POS60X = 735;
	POS60Y = -34750;


	POS61X = 366;
	POS61Y = -15400;

	POS62X = 634;
	POS62Y = -15920;

	POS63X = 456;
	POS63Y = -16250;

	POS64X = 344;
	POS64Y = -16750;

	POS65X = 705;
	POS65Y = -17315;

	POS66X = 567;
	POS66Y = -17840;

	POS67X = 555;
	POS67Y = -18280;

	POS68X = 666;
	POS68Y = -18660;

	POS69X = 333;
	POS69Y = -18990;

	POS70X = 777;
	POS70Y = -16560;

	POS71X = 444;
	POS71Y = -17530;

	POS72X = 578;
	POS72Y = -18280;

	POS73X = 785;
	POS73Y = -17900;

	POS74X = 345;
	POS74Y = -19356;

	POS75X = 678;
	POS75Y = -19920;


	POS76X = 315;
	POS76Y = -6450;


	POS77X = 415;
	POS77Y = -100;


	flag = true;
	flag2 = true;
	flag3 = true;
	flag4 = true;
	flag5 = true;
	flag6 = true;
	flag7 = true;
	flag8 = true;
	flag9 = true;
	flag10 = true;
	flag11 = true;
	flag12 = true;
	flag13 = true;
	flag14 = true;
	flag15 = true;
	flag16 = true;
	flag17 = true;
	flag18 = true;
	flag19 = true;
	flag20 = true;


	flag21 = true;
	flag22 = true;
	flag23 = true;
	flag24 = true;
	flag25 = true;
	flag26 = true;
	flag27 = true;
	flag28 = true;
	flag29 = true;
	flag30 = true;
	flag31 = true;
	flag32 = true;
	flag33 = true;
	flag34 = true;
	flag35 = true;
	flag36 = true;
	flag37 = true;
	flag38 = true;
	flag39 = true;
	flag40 = true;


	flag41 = true;
	flag42 = true;
	flag43 = true;
	flag44 = true;
	flag45 = true;
	flag46 = true;
	flag47 = true;
	flag48 = true;
	flag49 = true;
	flag50 = true;
	flag51 = true;
	flag52 = true;
	flag53 = true;
	flag54 = true;
	flag55 = true;
	flag56 = true;
	flag57 = true;
	flag58 = true;
	flag59 = true;
	flag60 = true;


	flag61 = true;
	flag62 = true;
	flag63 = true;
	flag64 = true;
	flag65 = true;
	flag66 = true;
	flag67 = true;
	flag68 = true;
	flag69 = true;
	flag70 = true;
	flag71 = true;
	flag72 = true;
	flag73 = true;
	flag74 = true;
	flag75 = true;
}
}

Novice::DrawSprite(0, 0, hidari, 1.0f, 1.0f, 0.0f, WHITE);
Novice::DrawSprite(1015, 0, migi, 1.0f, 1.0f, 0.0f, WHITE);

Novice::ScreenPrintf(30, 160, "SCORE:%d", score);
//Novice::ScreenPrintf(30, 260, "modoru:%d", modoru);
Novice::ScreenPrintf(30, 60, "next:%d", next);

		///
		/// ↑描画処理ここまで
		///

		// フレームの終了
		Novice::EndFrame();

		// ESCキーが押されたらループを抜ける
		if (preKeys[DIK_ESCAPE] == 0 && keys[DIK_ESCAPE] != 0) {
			break;
		}
	}

	// ライブラリの終了
	Novice::Finalize();
	return 0;
}
