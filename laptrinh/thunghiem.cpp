#include <iostream>
#include <windows.h>
#include <thread>
#include <chrono>
#include <string>

void build_cat();
using namespace std;

void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void build_cat(){
    UINT originalCP = GetConsoleOutputCP();
    SetConsoleOutputCP(CP_UTF8);
    

    
    


    gotoxy(10, 15); cout << "        ／＞----フ         ,"; Sleep(50);
    gotoxy(10, 16); cout << "        | 　_　_|        _/(_"; Sleep(50);
    gotoxy(10, 17); cout << "      ／` ミ＿xノ         {\\\\"; Sleep(50);
    gotoxy(10, 18); cout << "     /　 |     |           /;_)"; Sleep(50);
    gotoxy(10, 19); cout << "    /　 ヽ　　 ﾉ       <=='/ <===<<<"; Sleep(50);
    gotoxy(10, 20); cout << "    │　　|　|　|          \\__\\          "; Sleep(50);
    gotoxy(10, 21); cout << "／￣|　　|　|　|            ``"; Sleep(50);
    gotoxy(10, 22); cout << "(￣ヽ＿ _ヽ_)__) <'((((><     "; Sleep(50);
    gotoxy(10, 23); cout << "＼二)totoro         "; Sleep(50);
    Sleep(3000);
    SetConsoleOutputCP(originalCP);
    
}
int main ()
{
    system("cls");
    build_cat();
    Sleep(3000);
    return 0;
}