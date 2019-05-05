﻿#pragma once
#include "Chess.h"
#include <vector>
#include <string>
#include <Windows.h>
using namespace std;

class Board
{
public:
	typedef struct ChessPos {
		ChessPos();
		Chess Chess;
		POINT Point;
	} ChessPos;

	Board();
	static int ChessSteps;
	static Board CurrentBoard;
	static POINT ConvertToBoardPoint();
	static COORD ConvertToConsolePoint(int x, int y);

	void PrintMap();
	void ReadFile(string path);
	void WriteFile(string FileName, string FolderName);
	wstring GetGraphicStr(int x, int y);
	
	vector<Chess>& operator[](int row);
	Chess& GetChessByPoint(int x, int y);
	vector<ChessPos> SearchByChessName(int ID);
private:
	const int BoardWidth = 17, BoardHeight = 19, WindowWidth = 80, WindowHeight = 25;
	vector<vector<Chess>> chessMap;
	vector<vector<wstring>> boardMap;
};