#include<stdio.h>
#include<windows.h>
#include<conio.h>

// Function to set cursor position
void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

// Function to set text color
void setTextColor(int color) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

// Function to set cursor visibility
void showCursor(int show) {
    CONSOLE_CURSOR_INFO cursorInfo;
    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);

    GetConsoleCursorInfo(handle, &cursorInfo);
    cursorInfo.bVisible = show;
    SetConsoleCursorInfo(handle, &cursorInfo);
}

int main()
{
    setTextColor(220);
    printf("Hello world");

    return 0;
}
