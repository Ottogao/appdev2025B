#pragma once
enum COLORS{BLACK=30, RED, GEEN, YELLOW, BLUE, MAGENTA, CYAN, WHITE};
// function declaration
void clearScreen(void);
void gotoXY(int x, int y);
void setFGcolor(int c);
void resetColor(void);
void setBGcolor(int c);