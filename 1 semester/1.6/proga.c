#include <stdio.h>
#include <windows.h>

int main(){
HANDLE hout = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(hout, FOREGROUND_GREEN);
void gotoxy(int x, int y){
COORD Pos = {x,y};
SetConsoleCursorPosition(hout, Pos);
printf("*");
Sleep(1);
}
for (int i = 0; i <= 40; i++){
    for (int j = 24; j >= 0; j--){
        gotoxy(40 - i, i%2 == 0 ? j : 24 - j);
        gotoxy(41 + i, i%2 == 0 ? 24 - j : j);
    }
}
  return 0;
};
