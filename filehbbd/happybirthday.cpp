#include <iostream>
#include <windows.h>
#include <thread>
#include <chrono>
#include <string>

using namespace std;

// Function declarations
void introduce();
void build_border();
void build_cat();
void chat_box();
void text_box_1();
void frog_up();
void timeautorun();
void chat_box_2();
void joke();
void emoji_frog_and_cat();
void birthdaytext();
void canh_cut();
void happy_text();
void simpsons();
void fire_works();
void cakebirthday();
void pac_man();
void the_end();
void gotoxy(int x, int y);


// Set cursor position in the console
void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

// Main function
int main(){
    system("cls"); // Clear the console
    introduce();
    build_border();
    build_cat();
    chat_box();
    text_box_1();
    frog_up();
    chat_box_2();
    timeautorun();
    emoji_frog_and_cat();
    birthdaytext();
    joke();
    cakebirthday();
    fire_works();
    simpsons();
    pac_man();
    system("cls");
    canh_cut();
    gotoxy(75, 25); 
    cout << "---The end---";
    Sleep(20000); // Wait for 10 seconds before closing
    return 0;
}

// Introduce sender and receiver
void introduce(){
    string sender = "from:    Nguyen Duc Hoang";
    string receiver = "to:      Dang Sy Tung (Tung beng)";
    gotoxy(69, 1);

    for (char c : sender) 
    {
        cout << c;
        Sleep(100);
    }
    Sleep(300);
    gotoxy(69, 2);

    for (char c : receiver)
    {
        cout << c;
        Sleep(100);
    }
    Sleep(300);
}

// Build border of the console
void build_border(){
    const int width = 150;        
    const int height = 26;

    char row_wall = 205;          
    char column_wall = 186;      
    char fold_up_left = 201;      
    char fold_up_right = 187;     
    char fold_down_left = 200;    
    char fold_down_right = 188;   

    for (int i = 1; i <= width; i++)
    {
        gotoxy(i + 4, 4); cout << row_wall; // Top wall
        gotoxy(width - i + 5, height + 3); cout << row_wall; // Bottom wall
        Sleep(20);
    }

    for (int i = 1; i <= height; i++)
    {
        gotoxy(width + 4, 3 + i); cout << column_wall; // Right wall
        gotoxy(5, height - i + 4); cout << column_wall; // Left wall
        Sleep(20);
    }

    gotoxy(5, 4); cout << fold_up_left;
    gotoxy(width + 4, 4); cout << fold_up_right;
    gotoxy(width + 4, height + 3); cout << fold_down_right;
    gotoxy(5, height + 3); cout << fold_down_left;

    Sleep(2000);
}

// Build cat ASCII art
void build_cat(){
    UINT originalCP = GetConsoleOutputCP();
    SetConsoleOutputCP(CP_UTF8);

    gotoxy(6, 21); cout << "        ／＞----フ"; Sleep(50);
    gotoxy(6, 22); cout << "        | 　_　_|"; Sleep(50);
    gotoxy(6, 23); cout << "      ／` ミ＿xノ"; Sleep(50);
    gotoxy(6, 24); cout << "     /　　　　 |"; Sleep(50);
    gotoxy(6, 25); cout << "    /　 ヽ　　 ﾉ"; Sleep(50);
    gotoxy(6, 26); cout << "    │　　|　|　|"; Sleep(50);
    gotoxy(6, 27); cout << "／￣|　　|　|　|"; Sleep(50);
    gotoxy(6, 28); cout << "(￣ヽ＿_ヽ_)__)"; Sleep(50);
    gotoxy(6, 29); cout << "＼二)"; Sleep(50);

    for (int i = 1; i <= 15; i++)
    {
        gotoxy(6 + 2*i, 29); cout << "二)";
        Sleep(100);
    }
    Sleep(50);
    gotoxy(6, 29); cout << "＼二二二二二二二二二二二二二二二＿)"; Sleep(75); 

    // Drawing the legs
    for (int i = 0; i < 7; i++)
    {
        gotoxy(38, 28 - i); cout << "/ \\"; Sleep(75);
        gotoxy(38, 28 - i); cout << "| |"; Sleep(75);
    }
    Sleep(30);

    SetConsoleOutputCP(originalCP);
}

// Create chat box
void chat_box(){
    const int width_box = 70;
    const int height_box = 10;

    char row_wall = 205;          
    char column_wall = 186;      
    char fold_up_left = 201;      
    char fold_up_right = 187;     
    char fold_down_left = 200;    
    char fold_down_right = 188;   

    gotoxy(38, 21); cout << "\\ /";

    for (int i = 1; i <= width_box; i++)
    {
        gotoxy(35 + i, 10); cout << "_"; // Top wall
        Sleep(25);
    }

    for (int i = 1; i <= 67; i++)
    {
        gotoxy(37 + i, 9); cout << "_"; // Top wall
        Sleep(25);
    }
    
    for (int i = 1; i <= 65; i++)
    {
        gotoxy(40+i, 20); cout << "_"; // Bottom wall
        Sleep(25);
    }

    for (int i = 1; i <= height_box; i++)
    {
        gotoxy(width_box + 35, 10 + i); cout << column_wall; // Right wall
        gotoxy(36, 20 - i); cout << column_wall; // Left wall
        Sleep(25);
    }

    // Corners of the chat box
    gotoxy(36, 10); cout << "//";
    gotoxy(35 + width_box, 10); cout << "\\";
    gotoxy(36, 20); cout << "\\";
    gotoxy(width_box - 1 + 36, 20); cout << "/";
    Sleep(2000);
}



// frog ASCII art animation
void frog_up(){
    short x = 122; 
    short y = 29;

    string d0 = "   @..@";
    string d1 = "  (----)";
    string d2 = "(  >__<  )";
    string d3 = "( ^^  ^^ )";
    string d4 = "(_)(_)";

    gotoxy(x+2, y); cout << d4; Sleep(500);
    gotoxy(x, y - 1); cout << d0; Sleep(500);
    gotoxy(x, y - 1); cout << d1; gotoxy(x, y - 2); cout << d0; Sleep(500);
    gotoxy(x, y - 1); cout << d2; gotoxy(x, y - 2); cout << d1; gotoxy(x, y - 3); cout << d0; Sleep(500); 
    gotoxy(x, y - 1); cout << d3; gotoxy(x, y - 2); cout << d2; gotoxy(x, y - 3); cout << d1; gotoxy(x, y - 4); cout << d0; Sleep(500);
}

// Display a joke
void joke(){
    string text_box_12 = "Dua thoi sinh nhat nha thg em vv:))";
    gotoxy(40, 13);

    for (char c : text_box_12)
    {
        cout << c;
        Sleep(50);
    }
    Sleep(2000);
}

void chat_box_2(){
    short x = 118; 
    short y = 28;

    gotoxy(x-2, y-11);cout<<"  ======     ======"; Sleep(50);
    gotoxy(x-2, y-10);cout<<"///      \\\\//     \\\\";Sleep(50);
    gotoxy(x-2, y-9);cout<<"\\\\                //";Sleep(50);
    gotoxy(x-2, y-8);cout<<"   \\\\           //";Sleep(50);
    gotoxy(x-2, y-7);cout<<"      \\\\     //";Sleep(50);
    gotoxy(x-2, y-6);cout<<"         \\\\//"  ;Sleep(50);
    Sleep(50);
}

void timeautorun(){
    int d = 8,m=8;
    int r,i=1;

    short x = 119; 
    short y = 28;

    while(i <= 960)
    {
        r++;
        i++;
        gotoxy(x+3, y-9);cout<<d<<"/"<<m<<"/"<<i+1045;
        if (r%94==0)
        {
           d++; Sleep(100);
        }
        if (r%300==0)
        {
            m++; Sleep(100);
        }
        if (i>=980)
        {
            Sleep(200);
        }
    }

    Sleep(100);
}

void birthdaytext(){
    int x=39,y=14;
    gotoxy(x,y);cout<<"            _     _      _   _         _                ";Sleep(50);
    gotoxy(x,y+1);cout<<"           | |__ (_)_ __| |_| |__   __| | __ _ _   _ ___ ";Sleep(50);
    gotoxy(x,y+2);cout<<"           | '_ \\| | '__| __| '_ \\ / _` |/ _` | | | / __|";Sleep(50);
    gotoxy(x,y+3);cout<<"           | |_) | | |  | |_| | | | (_| | (_| | |_| \\__ \\";Sleep(50);
    gotoxy(x,y+4);cout<<"           |_.__/|_|_|   \\__|_| |_|\\__,_|\\__,_|\\__, |___/";Sleep(50);
    gotoxy(x,y+5);cout<<"                                               |___/     ";Sleep(50);
    Sleep(200);


}

void canh_cut(){

    UINT originalCP = GetConsoleOutputCP();
    SetConsoleOutputCP(CP_UTF8);

    gotoxy(50, 5);cout<<"                             ░░▒▒▓▓▒▒░░░"; 
    gotoxy(50, 6);cout<<"                          ░░▒▒▓█████▓▓▒▒░░░   "; 
    gotoxy(50, 7);cout<<"                      ░░▓██████████████████▓░░   "; 
    gotoxy(50, 8);cout<<"                    ░▒████████████████████████▓░░  "; 
    gotoxy(50, 9);cout<<"                   ▒██████▓▓▓▓▓▓▓▓▓███████▓▓▓███▓░  "; 
    gotoxy(50, 10);cout<<"                ░▒███▓▒░░░░▒▓▓▓▓▓▓▓▓▒▒▒▒▒▒██████▓░ "; 
    gotoxy(50, 11);cout<<"                ░███▒░░░▒▒░░░░▓▓▓▓▓▓▓▒▒▒▒▒▒██████▓ "; 
    gotoxy(50, 12);cout<<"                ▓██▒░░▓█▒▓█▒░░░▓▓▓▓▓▓▒▒▒▒▒▒▓██████░  "; 
    gotoxy(50, 13);cout<<"               ░███▒░░█████▓░░░▓▓▓▓▓▓▓▒▒▒▒▒▒██████▒ "; 
    gotoxy(50, 14);cout<<"             ░░▒▓███░░▓████▒░░░░▓▓▓▓▓▓▒▒▒▒▒▓██████▒     "; 
    gotoxy(50, 15);cout<<"           ░▒▒▒▒▒▒███▒░░░░░░░░░░▓▓▓▓▓▓▓▒▒▒▓███████▒ "; 
    gotoxy(50, 16);cout<<"         ░▒▒▒▒▒▒▒▒▒███▒░░░░░░░░░▒▓▓▓▓▓█▓██████████░  "; 
    gotoxy(50, 17);cout<<"        ░▒▒▒▒▒▒▒▒▓▒██▓▒░░░░░░░░░▒▓▓███████████████░   "; 
    gotoxy(50, 18);cout<<"         ░▓▓▓▓▓▓▒▒▒▓▓██▒▒░░░░░░░░▒████████████████░    ";
    gotoxy(50, 19);cout<<"         ░░░░▒▓▓▓▓▓▓▓██▒▒▒▒▒▒░░░░▓██████████████▓░  ";
    gotoxy(50, 20);cout<<"                    ░▓▒▒▒▒▒▒▒▒▒▒▓████████████▒░  ";
    gotoxy(50, 21);cout<<"                    ░▒▒▒▒▒▒▒▒▓█████████▓▒░   ";
    gotoxy(50, 22);cout<<"                        ░░░░░██████░░░░   ";

    SetConsoleOutputCP(originalCP);

}


void simpsons(){
    int x=31, y=6;
    gotoxy(x-20,y+1);cout<<" |\\/\\/\\/\\/\\/|";Sleep(50);
    gotoxy(x-20,y+2);cout<<" |          |";Sleep(50);
    gotoxy(x-20,y+3);cout<<" |    __  __|";Sleep(50);
    gotoxy(x-20,y+4);cout<<" |   /  \\/  \\";Sleep(50);
    gotoxy(x-20,y+5);cout<<" |  (o   )o  ) ";Sleep(50);
    gotoxy(x-20,y+6);cout<<" /c  \\__/ --.";Sleep(50);
    gotoxy(x-20,y+7);cout<<" \\_   ,     -'";Sleep(50);
    gotoxy(x-20,y+8);cout<<"  |  '\\_______)";Sleep(50);
    gotoxy(x-20,y+9);cout<<"  |      _)";Sleep(50);
    gotoxy(x-20,y+10);cout<<"  |      |";Sleep(50);
    gotoxy(x-20,y+11);cout<<" /`-----'\\";Sleep(50);
    gotoxy(x-20,y+12);cout<<"/_________\\";Sleep(50);
    Sleep(1000);
    
    string happy = "----------|---------------------------> Happybirthday";
    for (int i=0; i<=happy.length();i++){
        gotoxy(x-20+i+15,y+5);
        cout<<happy[i];
        Sleep(40);
    }
    Sleep(500);
}

void cakebirthday(){
    int x = 130, y = 3;
    gotoxy(x-20,y+2);cout<<"            ,   ,   ,   ,";Sleep(200);
    gotoxy(x-20,y+3);cout<<"          , |_,_|_,_|_,_| ,";Sleep(200);
    gotoxy(x-20,y+4);cout<<"      _,-=|;  |,  |,  |,  |;=-_";Sleep(200);
    gotoxy(x-20,y+5);cout<<"     .-_| , | , | , | , | , |  _-.";Sleep(200);
    gotoxy(x-20,y+6);cout<<"     |:  -|:._|___|___|__.|:=-  :|";Sleep(200);
    gotoxy(x-20,y+7);cout<<"     ||*:  :    .     .    :  |*||";Sleep(200);
    gotoxy(x-20,y+8);cout<<"     || |  | *  |  *  |  * |  | ||";Sleep(200);
    gotoxy(x-20,y+9);cout<<" _.-=|:*|  |    |     |    |  |*:|=-._";Sleep(200);
    gotoxy(x-20,y+10);cout<<"-   `._:  | *  |  *  |  * |  :_.'    -";Sleep(200);
    gotoxy(x-20,y+11);cout<<" =_     -=:.___:_____|___.: =-     _=";Sleep(200);
    gotoxy(x-20,y+12);cout<<"   - . _ __ ___  ___  ___ __ _ . -";Sleep(200);
    Sleep(1000);
    
}



void fire_works(){
    int x = 63,y =19;
    gotoxy(x-20,y+2);cout<<"                                   .''.       ";Sleep(200);
    gotoxy(x-20,y+3);cout<<"       .''.      .        *''*    :_\\/_:     . ";Sleep(200);
    gotoxy(x-20,y+4);cout<<"      :_\\/_:   _\\(/_  .:.*_\\/_*   : /\\ :  .'.:.'.";Sleep(200);
    gotoxy(x-20,y+5);cout<<" .''.: /\\ :   ./)\\   ':'* /\\ * :  '..'.  -=:o:=-";Sleep(200);
    gotoxy(x-20,y+6);cout<<":_\\/_:'.:::.    ' *''*    * '.\'/.' _\\(/_'.':'.'";Sleep(200);
    gotoxy(x-20,y+7);cout<<": /\\ : :::::     *_\\/_*     -= o =-  /)\\    '  *";Sleep(200);
    gotoxy(x-20,y+8);cout<<" '..'  ':::'     * /\\ *     .'/.\\'.   '";Sleep(200);
    gotoxy(x-20,y+9);cout<<"     *            *..*         :";Sleep(250);
}

void pac_man(){
    int x = 55 ,y = 3;
    gotoxy(x-20,y+2);cout<<" .-.   .-.     .--.                         ";Sleep(200);
    gotoxy(x-20,y+3);cout<<"| OO| | OO|   / _.-' .-.   .-.  .-.   .''.    END";Sleep(200);
    gotoxy(x-20,y+4);cout<<"|   | |   |   \\  '-. '-'   '-'  '-'   '..'";Sleep(200);
    gotoxy(x-20,y+5);cout<<"'^^^' '^^^'    '--'                       ";Sleep(200);
    gotoxy(x-20,y+2);cout<<"       .-.   .-.     .--.                   ";
    gotoxy(x-20,y+3);cout<<"      | OO| | OO|   / _.-' .-.  .-.   .''.    END";
    gotoxy(x-20,y+4);cout<<"      |   | |   |   \\  '-. '-'  '-'   '..'";
    gotoxy(x-20,y+5);cout<<"      '^^^' '^^^'    '--'                  ";Sleep(900);
    gotoxy(x-20,y+2);cout<<"            .-.   .-.     .--.              ";
    gotoxy(x-20,y+3);cout<<"           | OO| | OO|   / _.-' .-.   .''.    END";
    gotoxy(x-20,y+4);cout<<"           |   | |   |   \\  '-. '-'   '..'" ;
    gotoxy(x-20,y+5);cout<<"           '^^^' '^^^'    '--'              ";Sleep(700);
    gotoxy(x-20,y+2);cout<<"                 .-.   .-.     .--.              ";
    gotoxy(x-20,y+3);cout<<"                | OO| | OO|   / _.-'  .''.    END";
    gotoxy(x-20,y+4);cout<<"                |   | |   |   \\  '-.  '..'" ;
    gotoxy(x-20,y+5);cout<<"                '^^^' '^^^'    '--'              ";Sleep(700);
    gotoxy(x-20,y+2);cout<<"                       .-.   .-.     .--.              ";
    gotoxy(x-20,y+3);cout<<"                      | OO| | OO|   / _.-'      END";
    gotoxy(x-20,y+4);cout<<"                      |   | |   |   \\  '-.  " ;
    gotoxy(x-20,y+5);cout<<"                       '^^^' '^^^'    '--'              ";Sleep(450);
    gotoxy(x-16,y+2);cout<<"                       .-.   .-.     .--.              ";
    gotoxy(x-16,y+3);cout<<"                      | OO| | OO|   / _.-'      END";
    gotoxy(x-16,y+4);cout<<"                      |   | |   |   \\  '-.  " ;
    gotoxy(x-16,y+5);cout<<"                       '^^^' '^^^'    '--'              ";Sleep(450);
    gotoxy(x-12,y+2);cout<<"                       .-.   .-.     .--.              ";
    gotoxy(x-12,y+3);cout<<"                      | OO| | OO|   / _.-'      END";
    gotoxy(x-12,y+4);cout<<"                      |   | |   |   \\  '-.  " ;
    gotoxy(x-12,y+5);cout<<"                       '^^^' '^^^'    '--'              ";Sleep(450);
    gotoxy(x-8,y+2);cout<<"                       .-.   .-.     .--.              ";
    gotoxy(x-8,y+3);cout<<"                      | OO| | OO|   / _.-'      END";
    gotoxy(x-8,y+4);cout<<"                      |   | |   |   \\  '-.  " ;
    gotoxy(x-8,y+5);cout<<"                       '^^^' '^^^'    '--'              ";Sleep(450);
    gotoxy(x-4,y+2);cout<<"                       .-.   .-.     .--.              ";
    gotoxy(x-4,y+3);cout<<"                      | OO| | OO|   / _.-'      END";
    gotoxy(x-4,y+4);cout<<"                      |   | |   |   \\  '-.  " ;
    gotoxy(x-4,y+5);cout<<"                       '^^^' '^^^'    '--'              ";Sleep(450);
    gotoxy(x,y+2);cout<<"                       .-.   .-.     .--.              ";
    gotoxy(x,y+3);cout<<"                      | OO| | OO|   / _.-'      END";
    gotoxy(x,y+4);cout<<"                      |   | |   |   \\  '-.  " ;
    gotoxy(x,y+5);cout<<"                       '^^^' '^^^'    '--'              ";Sleep(450);
    gotoxy(x,y+2);cout<<"                               .-.   .-.     .--.              ";
    gotoxy(x,y+3);cout<<"                              | OO| | OO|   / _.-'      ";
    gotoxy(x,y+4);cout<<"                              |   | |   |   \\  '-.  " ;
    gotoxy(x,y+5);cout<<"                              '^^^' '^^^'    '--'              ";Sleep(350);
    gotoxy(x,y+2);cout<<"                               .-.   .-.     .--.              ";
    gotoxy(x,y+3);cout<<"                              | OO| | OO|   / _o-'  goodbye";
    gotoxy(x,y+4);cout<<"                              |   | |   |   \\  '-.  " ;
    gotoxy(x,y+5);cout<<"                              '^^^' '^^^'    '--'              ";Sleep(650);
    
}

void emoji_frog_and_cat(){

    UINT originalCP = GetConsoleOutputCP();
    SetConsoleOutputCP(CP_UTF8); 
    
    short x = 122; 
    short y = 29;

    gotoxy(x+3, y - 4); cout <<"^--^";Sleep(10);
    gotoxy(x+3, y - 3); cout << "-0-";Sleep(10);

    gotoxy(6, 21); cout << "        ／＞////フ"; Sleep(10);
    gotoxy(6, 22); cout << "        | 　^　^|"; Sleep(10);
    gotoxy(6, 23); cout << "      ／` ミ＿0ノ"; Sleep(10);

    SetConsoleOutputCP(originalCP);

    Sleep(100);
    
}

void text_box_1(){
    string text_box_11 ="E, hom ni sinh nhat m ak?:v";
    string text_box_13 ="Co'";
    string text_box_14 ="Ko'";
    string text_box_15 ="Hmmmmmmmmmmmmmmmmmmmmmmmmmmmmm.";

    gotoxy(40, 12);

    for (char c : text_box_11)
    {
        cout << c;
        Sleep(50);
    }
    Sleep(2000);

    const int width_box = 10;
    const int height_box = 2;

    char row_wall = 205;          
    char column_wall = 186;      
    char fold_up_left = 201;      
    char fold_up_right = 187;     
    char fold_down_left = 200;    
    char fold_down_right = 188;   

    // Yes box
    for (int i = 1; i <= width_box; i++)
    {
        gotoxy(38 + i, 16); cout << row_wall; // Top wall
        gotoxy(width_box - i + 39, 18); cout << row_wall; // Bottom wall
        Sleep(50);
    }
    for (int i = 1; i <= height_box; i++)
    {
        gotoxy(width_box + 38, 15 + i); cout << column_wall; // Right wall
        gotoxy(39, 18 - i); cout << column_wall; // Left wall
        Sleep(50);
    }
    // Corners for YES box
    gotoxy(39, 16); cout << fold_up_left;
    gotoxy(38 + width_box, 16); cout << fold_up_right;
    gotoxy(38 + width_box, 18); cout << fold_down_right;
    gotoxy(39, 18); cout << fold_down_left;

    // NO box
    for (int i = 1; i <= width_box; i++)
    {
        gotoxy(50 + i, 16); cout << row_wall; // Top wall
        gotoxy(width_box - i + 51, 18); cout << row_wall; // Bottom wall
        Sleep(50);
    }
    for (int i = 1; i <= height_box; i++)
    {
        gotoxy(width_box + 50, 15 + i); cout << column_wall; // Right wall
        gotoxy(51, 18 - i); cout << column_wall; // Left wall
        Sleep(50);
    }
    // Corners for NO box
    gotoxy(51, 16); cout << fold_up_left;
    gotoxy(50 + width_box, 16); cout << fold_up_right;
    gotoxy(50 + width_box, 18); cout << fold_down_right;
    gotoxy(51, 18); cout << fold_down_left;

    // Display the options
    gotoxy(41, 17);
    for (char c : text_box_13)
    {
        cout << c;
        Sleep(50);
    }

    gotoxy(53, 17);
    for (char c : text_box_14)
    {
        cout << c;
        Sleep(50);
    }

    gotoxy(40, 13);
    for (char c : text_box_15)
    {
        cout << c;
        Sleep(50);
    }

    Sleep(600);
}



