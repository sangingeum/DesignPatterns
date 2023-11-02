#pragma once

#ifdef _WIN32
#include <windows.h>
#elif defined __unix__ || defined __APPLE__
#include <cstdlib>
#endif

void clearConsole() {
#ifdef _WIN32
	// Clear console on Windows
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD coord = { 0, 0 };
	DWORD count;
	CONSOLE_SCREEN_BUFFER_INFO csbi;
	GetConsoleScreenBufferInfo(hStdOut, &csbi);
	FillConsoleOutputCharacter(hStdOut, ' ', csbi.dwSize.X * csbi.dwSize.Y, coord, &count);
	SetConsoleCursorPosition(hStdOut, coord);
#elif defined __unix__ || defined __APPLE__
	// Clear console on POSIX systems
	std::system("clear");
#endif
}