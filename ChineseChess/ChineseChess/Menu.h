#pragma once
#include <iostream>
#include <conio.h>
#include <Windows.h>
using namespace std;

class Menu
{
public:
	void printMenu();
	void printWord(int y);
	void EnterOne();//繼續遊戲
	void EnterTwo();//重新開始
	void EnterThree();//回主選單
	void EnterFour();//離開遊戲
private:
	const int MenuWidth = 16, MenuHeight = 12;
	char command;
	HANDLE hin;
};