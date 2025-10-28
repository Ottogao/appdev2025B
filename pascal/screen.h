#pragma once
enum COLORS{BLACK=30, RED, GEEN, YELLOW, BLUE, MAGENTA, CYAN, WHITE};
#define SIZE 100
// function declaration
void clearScreen(void);
void gotoXY(int x, int y);
void setFGcolor(int c);
void resetColor(void);
void setBGcolor(int c);

// added by Visual Studio (local change)
// added from Github (remote change)
