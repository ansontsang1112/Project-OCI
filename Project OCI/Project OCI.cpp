// Otaku_Calc_vs.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//CP >? cl /EHsc <sources>.cpp  

#include "pch.h"
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <ctime>
#include <fstream>

using namespace std;

int num = 1, marks = 0, number = 0, num2 = 49;
char agreement_r; //Agreement convert Syntax
char* dt_display; //Display the day and time for documents 
string r_rpy; //Rank call back Relpy

void basic() //程式基本資料
{
	string led = "2018/10/03";
	system("title Otaku Calculation Index");
	cout << "版本號 : Alpha 1.0" << endl;
	cout << "作者 : Anson Tsang" << endl;
	cout << "最後修改 : " << led << endl;
};

void info() //測試資料
{
	system("cls");
	cout << "OCI 測試進行中 ... 請勿關閉本程式，否則將有機會導致運算或程式錯誤。" << endl;
	cout << "" << endl;
	cout << "選項提示 : 有 -> Y | 沒有 -> N (請務必注意大小寫 || Y =/= y)" << endl;
	cout << "" << endl;
	cout << "選項提示 : 請注意題目上的要求 (必須注意是輸入數字還是 Y / N)" << endl;
	cout << "" << endl;
	cout << "題目總數 : 50" << endl;
	cout << "" << endl;
};

int tos() //Term of Services
{
	cout << "服務條款 (TOS) :" << endl;
	cout << "1. 程式所計算的結果只是根據對照表編譯出來的，任何人不能接受結果的投訴將不會受理。\n" << endl;
	char agreement;
	cout << "請同意服務條款再繼續進行 OCI 測試 (Y = 同意 | N = 不同意) : ";
	cin >> agreement;
	agreement_r = agreement;
	switch (agreement) {
	case 'Y':
		system("cls");
		basic();
		break;
	case 'T':
		break;
	case 'N':
		system("cls");
		cout << "你必須同意服務條款才可以開始進行測試 !!" << endl;
		cout << "你可以輸入 'Y' 進入測試頁面" << endl;
		cout << "請輸入 'Y' : ";
		cin >> agreement;
		if (agreement == 'Y')
		{
			break;
		}
		else {
			exit(0);
		}
	default:
		cout << "所有其他輸入將會重新返回服務條款頁面，請稍候。" << endl;
		system("timeout 5");
		return tos();
	}
};

void question()
{
	char choose;
	//Question 1
	info();
	cout << "現在正處於測試第 " << num << " 條" << endl;
	num += 1;
	cout << "" << endl;
	cout << "現在還有 " << num2 << " 條未作答" << endl;
	num2 -= 1;
	cout << "" << endl;
	cout << "請問你有沒有購買動漫 DVD / BDs ? : ";
	cin >> choose;
	if (choose == 'Y')
	{
		cout << "請問你大約購入了多少 DVD / BDs ? : ";
		cin >> number;
		marks = 50 * number;
	}

	//Question 2
	info();
	cout << "現在正處於測試第 " << num << " 條" << endl;
	num += 1;
	cout << "" << endl;
	cout << "現在還有 " << num2 << " 條未作答" << endl;
	num2 -= 1;
	cout << "" << endl;
	cout << "你有沒有下載動漫到你的流動裝置中呢 ? : ";
	cin >> choose;
	switch (choose)
	{
	case 'Y':
		marks = marks + 250;
		break;
	default:
		break;
	}
	//Question 3
	info();
	cout << "現在正處於測試第 " << num << " 條" << endl;
	num += 1;
	cout << "" << endl;
	cout << "現在還有 " << num2 << " 條未作答" << endl;
	num2 -= 1;
	cout << "" << endl;
	cout << "你大約瀏覽了多少套動漫 ? ";
	cin >> number;
	if (number >= 1000)
	{
		marks += 7000;
	} if (number < 1000 && number > 600)
	{
		marks += 6000;
	} if (number <= 600 || number > 400)
	{
		marks += 4500;
	} if (number <= 400 || number > 200)
	{
		marks += 3000;
	} if (number <= 200 || number > 100)
	{
		marks += 1500;
	} if (number <= 100 || number > 50)
	{
		marks += 1000;
	} if (number <= 50 || number > 0)
	{
		marks += 500;
	}
	else {
		marks += 0;
	}
	//Question 4
	info();
	cout << "現在正處於測試第 " << num << " 條" << endl;
	num += 1;
	cout << "" << endl;
	cout << "現在還有 " << num2 << " 條未作答" << endl;
	num2 -= 1;
	cout << "" << endl;
	cout << "請問你有沒有毒 / 宅的朋友 ? ";
	cin >> choose;
	switch (choose)
	{
	case 'Y':
		cout << "請問你現實中認識他嗎 ? ";
		cin >> choose;
		switch (choose) {
		case 'Y':
			marks += 750;
			break;
		case 'N':
			marks += 500;
			break;
		default:
			cout << "選項錯誤" << endl;
			marks += 0;
			system("pause");
			break;
		}
	case 'N':
		break;
	}
	//Question 5
	info();
	cout << "現在正處於測試第 " << num << " 條" << endl;
	num += 1;
	cout << "" << endl;
	cout << "現在還有 " << num2 << " 條未作答" << endl;
	num2 -= 1;
	cout << "" << endl;
	cout << "請問你會購入漫畫嗎 ? ";
	cin >> choose;
	if (choose == 'Y')
	{
		cout << "你大約購買了多少漫畫 ? ";
		cin >> number;
		marks += number * 20;
	}
	//Question 6
	info();
	cout << "現在正處於測試第 " << num << " 條" << endl;
	num += 1;
	cout << "" << endl;
	cout << "現在還有 " << num2 << " 條未作答" << endl;
	num2 -= 1;
	cout << "" << endl;
	cout << "請問你有下載或閱讀網上漫畫嗎 ? ";
	cin >> choose;
	if (choose == 'Y')
	{
		marks += 250;
	}
	//Question 7
	info();
	cout << "現在正處於測試第 " << num << " 條" << endl;
	num += 1;
	cout << "" << endl;
	cout << "現在還有 " << num2 << " 條未作答" << endl;
	num2 -= 1;
	cout << "" << endl;
	cout << "請問你會閱讀輕小說嗎 ? ";
	cin >> choose;
	if (choose == 'Y') {
		marks += 250;
	}
	//Question 8
	info();
	cout << "現在正處於測試第 " << num << " 條" << endl;
	num += 1;
	cout << "" << endl;
	cout << "現在還有 " << num2 << " 條未作答" << endl;
	num2 -= 1;
	cout << "" << endl;
	cout << "請問你會閱讀小說嗎 (小說不等於輕小說) ? ";
	cin >> choose;
	if (choose == 'Y') {
		marks += 250;
	}
	//Question 9
	info();
	cout << "現在正處於測試第 " << num << " 條" << endl;
	num += 1;
	cout << "" << endl;
	cout << "現在還有 " << num2 << " 條未作答" << endl;
	num2 -= 1;
	cout << "" << endl;
	cout << "請問你會聆聽動漫的 OP / ED (Opening / Ending) ? ";
	cin >> choose;
	if (choose == 'Y') {
		cout << "你會在哪個地方聆聽這些音樂呢 ? (公眾地方 -> P | 沒有人看到的地方 -> R) ";
		cin >> choose;
		if (choose == 'P') {
			marks += 250;
		}
		else {
			marks += 50;
		}
	}
	//Question 10
	info();
	cout << "現在正處於測試第 " << num << " 條" << endl;
	num += 1;
	cout << "" << endl;
	cout << "現在還有 " << num2 << " 條未作答" << endl;
	num2 -= 1;
	cout << "" << endl;
	cout << "請問你會下載動畫 / 漫畫的圖片嗎 ? : ";
	cin >> choose;
	if (choose == 'Y')
	{
		cout << "你大約下載了多少 GB 的圖片呢 ? : ";
		cin >> number;
		marks = 50 * number;
	}
	//Question 11
	info();
	cout << "現在正處於測試第 " << num << " 條" << endl;
	num += 1;
	cout << "" << endl;
	cout << "現在還有 " << num2 << " 條未作答" << endl;
	num2 -= 1;
	cout << "" << endl;
	cout << "請問你會經常使用動漫的圖片作為桌布嗎 ? ";
	cin >> choose;
	if (choose == 'Y') {
		marks += 250;
	}
	//Question 12
	info();
	cout << "現在正處於測試第 " << num << " 條" << endl;
	num += 1;
	cout << "" << endl;
	cout << "現在還有 " << num2 << " 條未作答" << endl;
	num2 -= 1;
	cout << "" << endl;
	cout << "請問你會使用動漫的圖片作為手機桌布嗎 ? ";
	cin >> choose;
	if (choose == 'Y') {
		marks += 250;
	}
	//Question 13
	info();
	cout << "現在正處於測試第 " << num << " 條" << endl;
	num += 1;
	cout << "" << endl;
	cout << "現在還有 " << num2 << " 條未作答" << endl;
	num2 -= 1;
	cout << "" << endl;
	cout << "請問你擁有異性的 パンティー (內褲) 嗎 ? ";
	cin >> choose;
	if (choose == 'Y') {
		marks += 1000;
	}
	//Question 14
	info();
	cout << "現在正處於測試第 " << num << " 條" << endl;
	num += 1;
	cout << "" << endl;
	cout << "現在還有 " << num2 << " 條未作答" << endl;
	num2 -= 1;
	cout << "" << endl;
	cout << "請問你會穿著動漫 T-Shirt 嗎 ? ";
	cin >> choose;
	if (choose == 'Y') {
		cout << "承上題，你會在公眾場合穿這些 T-Shirt 嗎 ? ";
		cin >> choose;
		if (choose == 'Y')
		{
			marks += 750;
		}
		else {
			marks += 250;
		}
	}
	//Question 15
	info();
	cout << "現在正處於測試第 " << num << " 條" << endl;
	num += 1;
	cout << "" << endl;
	cout << "現在還有 " << num2 << " 條未作答" << endl;
	num2 -= 1;
	cout << "" << endl;
	cout << "你會製作動漫 / 漫畫的相片集嗎 ? ";
	cin >> choose;
	if (choose == 'Y') {
		marks += 1500;
	}
	//Question 16
	info();
	cout << "現在正處於測試第 " << num << " 條" << endl;
	num += 1;
	cout << "" << endl;
	cout << "現在還有 " << num2 << " 條未作答" << endl;
	num2 -= 1;
	cout << "" << endl;
	cout << "你會使用動漫 / 漫畫的相片作為社交媒體的大頭照嗎 ? ";
	cin >> choose;
	if (choose == 'Y') {
		marks += 1000;
	}
	//Question 17
	info();
	cout << "現在正處於測試第 " << num << " 條" << endl;
	num += 1;
	cout << "" << endl;
	cout << "現在還有 " << num2 << " 條未作答" << endl;
	num -= 1;
	cout << "" << endl;
	cout << "你會在功課上或文件上使用動漫的檔案夾嗎 ? ";
	cin >> choose;
	if (choose == 'Y') {
		marks += 1000;
	}
	//Question 18
	info();
	cout << "現在正處於測試第 " << num << " 條" << endl;
	num += 1;
	cout << "" << endl;
	cout << "現在還有 " << num2 << " 條未作答" << endl;
	num2 -= 1;
	cout << "" << endl;
	cout << "你擁有動漫攬枕嗎 ? ";
	cin >> choose;
	if (choose == 'Y') {
		cout << "請問你擁有多少個呢 ? ";
		cin >> number;
		marks += number * 500;
	}
	//Question 19
	info();
	cout << "現在正處於測試第 " << num << " 條" << endl;
	num += 1;
	cout << "" << endl;
	cout << "現在還有 " << num2 << " 條未作答" << endl;
	num2 -= 1;
	cout << "" << endl;
	cout << "你擁有動漫 Figures 嗎 ? ";
	cin >> choose;
	if (choose == 'Y') {
		cout << "請問你擁有多少個呢 ? ";
		cin >> number;
		marks += number * 150;
	}
	//Question 20
	info();
	cout << "現在正處於測試第 " << num << " 條" << endl;
	num += 1;
	cout << "" << endl;
	cout << "現在還有 " << num2 << " 條未作答" << endl;
	num2 -= 1;
	cout << "" << endl;
	cout << "你有製作動漫模型嗎 (包括機動戰士) ? ";
	cin >> choose;
	if (choose == 'Y') {
		cout << "請問你擁有多少個呢 ? ";
		cin >> number;
		marks += number * 100;
	}
	//Question 21
	info();
	cout << "現在正處於測試第 " << num << " 條" << endl;
	num += 1;
	cout << "" << endl;
	cout << "現在還有 " << num2 << " 條未作答" << endl;
	num2 -= 1;
	cout << "" << endl;
	cout << "你擁有大量的動漫 / 漫畫週邊產品嗎 ? ";
	cin >> choose;
	if (choose == 'Y') {
		marks += 500;
	}
	//Question 22
	info();
	cout << "現在正處於測試第 " << num << " 條" << endl;
	num += 1;
	cout << "" << endl;
	cout << "現在還有 " << num2 << " 條未作答" << endl;
	num2 -= 1;
	cout << "" << endl;
	cout << "你沉醉在二次元 (2D) 世界嗎 ? ";
	cin >> choose;
	if (choose == 'Y') {
		cout << "你會公開表示你沉醉嗎 ? ";
		cin >> choose;
		if (choose == 'Y')
		{
			marks += 1250;
		}
		else {
			marks += 250;
		}
	}
	//Question 22
	info();
	cout << "現在正處於測試第 " << num << " 條" << endl;
	num += 1;
	cout << "" << endl;
	cout << "現在還有 " << num2 << " 條未作答" << endl;
	num2 -= 1;
	cout << "" << endl;
	cout << "你討厭三次元 (3D) 嗎 ? ";
	cin >> choose;
	if (choose == 'Y') {
		cout << "你會公開表示你討厭三次元嗎 ? ";
		cin >> choose;
		if (choose == 'Y')
		{
			marks += 4000;
		}
		else {
			marks += 2000;
		}
	}
	//Question 23
	info();
	cout << "現在正處於測試第 " << num << " 條" << endl;
	num += 1;
	cout << "" << endl;
	cout << "現在還有 " << num2 << " 條未作答" << endl;
	num2 -= 1;
	cout << "" << endl;
	cout << "你在網絡上有加入動漫社群嗎 ? ";
	cin >> choose;
	if (choose == 'Y') {
		cout << "你大約加入了多少呢 (必須是常有交流) ? ";
		cin >> number;
		marks += number * 100;
	}
	//Question 24
	info();
	cout << "現在正處於測試第 " << num << " 條" << endl;
	num += 1;
	cout << "" << endl;
	cout << "現在還有 " << num2 << " 條未作答" << endl;
	num2 -= 1;
	cout << "" << endl;
	cout << "你有編寫動漫的 Fanfiction 嗎 ? ";
	cin >> choose;
	if (choose == 'Y') {
		marks += 250;
	}
	//Question 25
	info();
	cout << "現在正處於測試第 " << num << " 條" << endl;
	num += 1;
	cout << "" << endl;
	cout << "現在還有 " << num2 << " 條未作答" << endl;
	num2 -= 1;
	cout << "" << endl;
	cout << "你會觀看 BL / GL 的視頻嗎 ? ";
	cin >> choose;
	if (choose == 'Y') {
		cout << "你會公開觀看這些視頻嗎 ? ";
		cin >> choose;
		if (choose == 'Y')
		{
			marks += 750;
		}
		else {
			marks += 250;
		}
	}
	//Question 26
	info();
	cout << "現在正處於測試第 " << num << " 條" << endl;
	num += 1;
	cout << "" << endl;
	cout << "現在還有 " << num2 << " 條未作答" << endl;
	num2 -= 1;
	cout << "" << endl;
	cout << "請問你擁有男 / 女朋友嗎 ? ";
	cin >> choose;
	if (choose == 'Y') {
		marks = marks - 1000;
	}
	//Question 27
	info();
	cout << "現在正處於測試第 " << num << " 條" << endl;
	num += 1;
	cout << "" << endl;
	cout << "現在還有 " << num2 << " 條未作答" << endl;
	num2 -= 1;
	cout << "" << endl;
	cout << "請問你觀看 '萌 / 帥' 動漫嗎 ? ";
	cin >> choose;
	if (choose == 'Y') {
		marks += 250;
	}
	//Question 28
	info();
	cout << "現在正處於測試第 " << num << " 條" << endl;
	num += 1;
	cout << "" << endl;
	cout << "現在還有 " << num2 << " 條未作答" << endl;
	num2 -= 1;
	cout << "" << endl;
	cout << "請問你可以完整地唱出其中一套動漫的 OP / ED 嗎 ? ";
	cin >> choose;
	if (choose == 'Y') {
		marks += 250;
	}
	//Question 29
	info();
	cout << "現在正處於測試第 " << num << " 條" << endl;
	num += 1;
	cout << "" << endl;
	cout << "現在還有 " << num2 << " 條未作答" << endl;
	num2 -= 1;
	cout << "" << endl;
	cout << "請問你可以完整地把 OP / ED 動漫內的舞蹈跳出來嗎 ? ";
	cin >> choose;
	if (choose == 'Y') {
		marks += 1000;
	}
	//Question 30
	info();
	cout << "現在正處於測試第 " << num << " 條" << endl;
	num += 1;
	cout << "" << endl;
	cout << "現在還有 " << num2 << " 條未作答" << endl;
	num2 -= 1;
	cout << "" << endl;
	cout << "你可以辨認出大部分的聲優 (你有觀看的動畫) 嗎 (只有聲音沒有畫面) ? ";
	cin >> choose;
	if (choose == 'Y') {
		marks += 500;
	}
	//Question 31
	info();
	cout << "現在正處於測試第 " << num << " 條" << endl;
	num += 1;
	cout << "" << endl;
	cout << "現在還有 " << num2 << " 條未作答" << endl;
	num2 -= 1;
	cout << "" << endl;
	cout << "你有曾經進行過 Otaku 測試嗎 ? ";
	cin >> choose;
	if (choose == 'Y') {
		marks += 500;
	}
	//Question 32
	info();
	cout << "現在正處於測試第 " << num << " 條" << endl;
	num += 1;
	cout << "" << endl;
	cout << "現在還有 " << num2 << " 條未作答" << endl;
	num2 -= 1;
	cout << "" << endl;
	cout << "你有曾經被其他人形容過你是 宅男 / 宅女嗎 ? ";
	cin >> choose;
	if (choose == 'Y') {
		marks += 500;
	}
	//Question 33
	info();
	cout << "現在正處於測試第 " << num << " 條" << endl;
	num += 1;
	cout << "" << endl;
	cout << "現在還有 " << num2 << " 條未作答" << endl;
	num2 -= 1;
	cout << "" << endl;
	cout << "請問你有遊玩過 Anime Based 的遊戲嗎 ? ";
	cin >> choose;
	if (choose == 'Y') {
		marks += 500;
	}
	//Question 34
	info();
	cout << "現在正處於測試第 " << num << " 條" << endl;
	num += 1;
	cout << "" << endl;
	cout << "現在還有 " << num2 << " 條未作答" << endl;
	num2 -= 1;
	cout << "" << endl;
	cout << "你喜歡引用動畫內角色的對白嗎 ? ";
	cin >> choose;
	if (choose == 'Y') {
		cout << "你引用的頻率是 ? (經常 -> A | 有時候 -> S) ";
		cin >> choose;
		if (choose == 'A') {
			marks += 500;
		} if (choose == 'S') {
			marks += 350;
		}
		else {
			marks += 0;
		}
	}
	//Question 35
	info();
	cout << "現在正處於測試第 " << num << " 條" << endl;
	num += 1;
	cout << "" << endl;
	cout << "現在還有 " << num2 << " 條未作答" << endl;
	num2 -= 1;
	cout << "" << endl;
	cout << "你喜愛模仿動漫 / 動畫內的人物角色嗎 ? ";
	cin >> choose;
	if (choose == 'Y') {
		marks += 100;
	}
	//Question 36
	info();
	cout << "現在正處於測試第 " << num << " 條" << endl;
	num += 1;
	cout << "" << endl;
	cout << "現在還有 " << num2 << " 條未作答" << endl;
	num2 -= 1;
	cout << "" << endl;
	cout << "你會希望與那一些角色墮入愛河嗎 ? ";
	cin >> choose;
	if (choose == 'Y') {
		cout << "你會希望把他介紹給其他人嗎 ?";
		cin >> choose;
		if (choose == 'Y') {
			marks += 1500;
		}
		else {
			marks += 500;
		}
	}
	//Question 37
	info();
	cout << "現在正處於測試第 " << num << " 條" << endl;
	num += 1;
	cout << "" << endl;
	cout << "現在還有 " << num2 << " 條未作答" << endl;
	num2 -= 1;
	cout << "" << endl;
	cout << "你有曾經製作你自己的動漫嗎 ? ";
	cin >> choose;
	if (choose == 'Y') {
		marks += 250;
	}
	//Question 38
	info();
	cout << "現在正處於測試第 " << num << " 條" << endl;
	num += 1;
	cout << "" << endl;
	cout << "現在還有 " << num2 << " 條未作答" << endl;
	num2 -= 1;
	cout << "" << endl;
	cout << "你有曾經為動漫內的人物慶祝生日嗎 ? ";
	cin >> choose;
	if (choose == 'Y') {
		marks += 1000;
	}
	//Question 39
	info();
	cout << "現在正處於測試第 " << num << " 條" << endl;
	num += 1;
	cout << "" << endl;
	cout << "現在還有 " << num2 << " 條未作答" << endl;
	num2 -= 1;
	cout << "" << endl;
	cout << "你有進行 Cosplay 嗎 ? ";
	cin >> choose;
	if (choose == 'Y') {
		cout << "是經常嗎 ? ";
		cin >> choose;
		if (choose == 'Y') {
			marks += 2000;
		}
		else {
			marks += 500;
		}
	}
	//Question 40
	info();
	cout << "現在正處於測試第 " << num << " 條" << endl;
	num += 1;
	cout << "" << endl;
	cout << "現在還有 " << num2 << " 條未作答" << endl;
	num2 -= 1;
	cout << "" << endl;
	cout << "你有為你自己的 Cosplay 並上載到網上嗎 ? (假設有) ";
	cin >> choose;
	if (choose == 'Y') {
		cout << "是經常嗎 ? ";
		cin >> choose;
		if (choose == 'Y') {
			marks += 2500;
		}
		else {
			marks += 500;
		}
	}
	//Question 41
	info();
	cout << "現在正處於測試第 " << num << " 條" << endl;
	num += 1;
	cout << "" << endl;
	cout << "現在還有 " << num2 << " 條未作答" << endl;
	num2 -= 1;
	cout << "" << endl;
	cout << "你曾經中二病 (Chu Uni Byou) 過嗎 ? ";
	cin >> choose;
	if (choose == 'Y') {
		marks += 250;
	}
	//Question 42
	info();
	cout << "現在正處於測試第 " << num << " 條" << endl;
	num += 1;
	cout << "" << endl;
	cout << "現在還有 " << num2 << " 條未作答" << endl;
	num2 -= 1;
	cout << "" << endl;
	cout << "你曾經有幻想過自己是動漫人物並且擁有他的能力嗎 ? ";
	cin >> choose;
	if (choose == 'Y') {
		marks += 350;
	}
	//Question 43
	info();
	cout << "現在正處於測試第 " << num << " 條" << endl;
	num += 1;
	cout << "" << endl;
	cout << "現在還有 " << num2 << " 條未作答" << endl;
	num2 -= 1;
	cout << "" << endl;
	cout << "你有留意每季度 (Quarter) 的 動畫新番嗎? ";
	cin >> choose;
	if (choose == 'Y') {
		marks += 250;
	}
	//Question 44
	info();
	cout << "現在正處於測試第 " << num << " 條" << endl;
	num += 1;
	cout << "" << endl;
	cout << "現在還有 " << num2 << " 條未作答" << endl;
	num2 -= 1;
	cout << "" << endl;
	cout << "若果有朋友邀請你出門遊玩，你會選擇拒絕留在家中，還是決定出門與朋友遊玩 ? ";
	cout << "" << endl;
	cout << "可用選項：A / B" << endl;
	cout << "A: 選擇接受邀請，出門與朋友遊玩" << endl;
	cout << "B: 拒絕邀請，並決定留在家中" << endl;
	cout << "" << endl;
	cout << "你的決定是：(請輸入相應的大楷英文字母)：";
	cin >> choose;
	switch (choose) {
	case 'A':
		marks -= 150;
		break;
	case 'B':
		marks += 1000;
		break;
	default:
		break;
	}
	//Question 45
	info();
	cout << "現在正處於測試第 " << num << " 條" << endl;
	num += 1;
	cout << "" << endl;
	cout << "現在還有 " << num2 << " 條未作答" << endl;
	num2 -= 1;
	cout << "" << endl;
	cout << "你討厭人群，討厭喧囂，喜歡獨自一人安靜地呆在安全的地方嗎 ? ";
	cin >> choose;
	if (choose == 'Y') {
		marks += 750;
	}
	//Question 46
	info();
	cout << "現在正處於測試第 " << num << " 條" << endl;
	num += 1;
	cout << "" << endl;
	cout << "現在還有 " << num2 << " 條未作答" << endl;
	num2 -= 1;
	cout << "" << endl;
	cout << "你開啟社交應用程式的頻率多嗎 ? ";
	cin >> choose;
	if (choose == 'Y') {
		marks += 350;
	}
	//Question 47
	info();
	cout << "現在正處於測試第 " << num << " 條" << endl;
	num += 1;
	cout << "" << endl;
	cout << "現在還有 " << num2 << " 條未作答" << endl;
	num2 -= 1;
	cout << "" << endl;
	cout << "你依賴電子用品嗎 (包括：電腦，手提電話，平板電腦) ? ";
	cin >> choose;
	if (choose == 'Y') {
		marks += 1000;
	}
	//Question 48
	info();
	cout << "現在正處於測試第 " << num << " 條" << endl;
	num += 1;
	cout << "" << endl;
	cout << "現在還有 " << num2 << " 條未作答" << endl;
	num2 -= 1;
	cout << "" << endl;
	cout << "你知道什麼事 ACGs 嗎 ? ";
	cin >> choose;
	if (choose == 'Y') {
		marks += 300;
	}
	//Question 49
	info();
	cout << "現在正處於測試第 " << num << " 條" << endl;
	num += 1;
	cout << "" << endl;
	cout << "現在還有 " << num2 << " 條未作答" << endl;
	num2 -= 1;
	cout << "" << endl;
	cout << "你會在口中會自然地掛著 '愚蠢的人類' 等等奇怪 & 厭世嫉妒的句子嗎 ? ";
	cin >> choose;
	if (choose == 'Y') {
		marks += 2000;
	}
	//Question 50
	info();
	cout << "現在正處於測試第 " << num << " 條" << endl;
	num += 1;
	cout << "" << endl;
	cout << "現在還有 " << num2 << " 條未作答" << endl;
	num2 -= 1;
	cout << "" << endl;
	cout << "你會認為人類是萬惡的一個種族嗎 ? ";
	cin >> choose;
	if (choose == 'Y') {
		marks += 10000;
	}
};

void otkprt() {
	cout << "" << endl;
	cout << "宅宅指數 : " << marks << endl;
}

void level()
{
	if (marks > 0 && marks < 500) {
		r_rpy = "你不是宅男 / 宅女哦，恭喜恭喜";
	} if (marks >= 500 && marks < 3000) {
		r_rpy = "你有傾向想墮入 宅男 / 宅女 的圈子，這是你祈求的答案嗎？";
	} if (marks >= 3000 && marks < 4000) {
		r_rpy = "新手宅男 / 宅女入門";
	} if (marks >= 4000 && marks < 8000) {
		r_rpy = "中階宅男 / 宅女學徒";
	} if (marks >= 8000 && marks < 11000) {
		r_rpy = "Over 8000 !! 根本就是宅男 / 宅女";
	} if (marks >= 11000 && marks < 14000) {
		r_rpy = "你已經徘徊了在宅男 / 宅女的圈子太久，已經晉升到另一不同層次 (高級宅男 / 宅女)";
	} if (marks >= 15000 && marks < 20000) {
		r_rpy = "親愛的老司機，你已經無辦法離開這一個宅男 / 宅女的圈子！";
	} if (marks >= 20000 && marks < 25000) {
		r_rpy = "你已經過於嚮往二次元世界，不能自拔！";
	} if (marks >= 25000 && marks < 30000) {
		r_rpy = "你對二次元 / 動漫世界的愛，已經不能用文字去解釋了！";
	} if (marks > 30000) {
		r_rpy = "只能用一個英語去說 'Forever-Alone.jpg'！";
	}
};

void result() {
	level();
	cout << "分析結果： " << r_rpy << endl;
	otkprt();
}

void output() {
	system("CLS");
	cout << "OCI 結果運算進行中 ... 請勿關閉本程式，否則將有機會導致運算或程式錯誤。\n\n" << endl;
	system("timeout 10");
	system("cls");
	cout << "結果如下：\n\n" << endl;
	result();
	system("pause");
};

void file() {
	ofstream result;
	result.open("result.txt");
	result << "OCI 測試結果檔案：\n" << endl;
	result << "測試日期： " << dt_display << endl;
	result << "測試分數： " << marks << "\n" << endl;
	result << "測試結果： " << r_rpy << "\n" << endl;
	result.close();
};

int testmode() {
	char test_choose;
	system("CLS");
	cout << "***\t測試模組進行中 | Test Mode is on going\t***" << endl;
	cout << "" << endl;
	cout << "請輸入預設分數數值，以方便進行除錯測試：";
	cin >> marks;
	cout << "" << endl;
	cout << "你所預設的數值為 " << marks << endl;
	cout << "" << endl;
	cout << "測試模式選單 Test Mode Menu：" << endl;
	cout << "" << endl;
	cout << "A: 使用預設模式進行展示" << endl;
	cout << "B: 使用正常模式進行展示" << endl;
	cout << "C: 使用正常模式進行展示 & File Steam" << endl;
	cout << "" << endl;
	cout << "請輸入閣下的選項： ";
	cin >> test_choose;
	switch (test_choose) {
	case 'A':
		cout << "十秒後 / 按下任意鍵將會自動進行將會進行運算" << endl;
		system("timeout 10");
		cout << "" << endl;
		result();
		cout << "" << endl;
		system("pause");
		return testmode();
	case 'B':
		cout << "十秒後 / 按下任意鍵將會自動進行將會進行運算" << endl;
		system("timeout 10");
		output();
		system("pause");
		return testmode();
	case 'C':
		cout << "十秒後 / 按下任意鍵將會自動進行將會進行運算" << endl;
		system("timeout 10");
		result();
		file();
		return testmode();
	}

};

void dt() {
	time_t now = time(0);
	char* dt = ctime(&now);
	dt = dt_display;
};

void prograss() {
	basic(); //Initate the Program Status
	cout << "" << endl;
	tos(); // Call back Term of Services
	if (agreement_r == 'T') {
		testmode();
	}
	cout << "" << endl;
	//Initate the Quiz
	cout << "測試即將開始 ... " << endl;
	question();
};

int main() {
	prograss();
	output();
	file();
	return 0;
}
