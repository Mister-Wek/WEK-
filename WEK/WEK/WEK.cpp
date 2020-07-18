

#include <iostream>
#include "windows.h"
#include <string>
#include <time.h>
#include <fstream>
#include <stdio.h>


using namespace std;

void SetColor(int text, int background)
{
    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hStdOut, (WORD)((background << 4) | text));
}

string name;

string app;

string print;

string pointer = ":>>";

int splash_screen = 1;

char drawing[5][5];

int x = 0;
int y = 0;




int main()
{
    srand(time(NULL));

    

    setlocale(LC_ALL, "Russian");

    ifstream fin("splash_screen.txt"); // открыли файл для чтения

    fin >> splash_screen; 

    fin.close(); // закрываем файл



    cout << "start" << endl;
    Sleep(1000);
    system("cls");
    if (splash_screen == 1) {
        cout << "########              ########                    ###      ###" << endl;
        cout << "########              ########  ################  ###      ###" << endl;
        cout << "########              ########  ################  ###      ###" << endl;
        cout << "########     ####     ########  ###               ###    ###" << endl;
        cout << "########     ####     ########  ###               ########" << endl;
        cout << "########     ####     ########  ###               ########" << endl;
        cout << "########     ####     ########  ###########       ###    ###" << endl;
        cout << " ########    ####    ########   ###               ###      ###" << endl;
        cout << " ########    ####    ########   ###               ###        ###" << endl;
        cout << " ########    ####    ########   ###               ###        ###" << endl;
        cout << "    ######################      ################  ###        ### " << endl;
        cout << "     #########  #########       ################  ###        ###" << endl;
    }
    if (splash_screen == 2) {
        cout << "#  #                                               #  #" << endl;
        cout << " #  #                                             #  # " << endl;
        cout << "  #  #-------------------------------------------#  #  " << endl;
        cout << "   #  #       #         #         #   #         #  #   " << endl;
        cout << "    #  #      #         #   ###   #   #        #  #    " << endl;
        cout << "     #  #     #    #    #  #   #  ####        #  #     " << endl;
        cout << "      #  #    #    #    #  ####   #   #      #  #      " << endl;
        cout << "     #  #     #    #    #  #      #    #      #  #     " << endl;
        cout << "    #  #       #### ####    ###   #     #      #  #    " << endl;
        cout << "   #  #-----------------------------------------#  #   " << endl;
        cout << "  #  #                                           #  #  " << endl;
        cout << " #  #                                             #  # " << endl;
        cout << "#  #                                               #  #" << endl;
    }
    
    cout << endl;
    cout << "            _____________________________________" << endl;
    
    cout << "            ";
    SetColor(10, 10);
    Sleep(200);
    cout << "#";
    Sleep(200);
    cout << "#";
    Sleep(200);
    cout << "#";
    Sleep(200);
    cout << "#";
    Sleep(200);
    cout << "#";
    Sleep(200);
    cout << "#";
    Sleep(200);
    cout << "#";
    Sleep(200);
    cout << "#";
    Sleep(200);
    cout << "#";
    Sleep(100);
    cout << "#";
    Sleep(200);
    cout << "#";
    Sleep(200);
    cout << "#";
    Sleep(200);
    cout << "#";
    Sleep(200);
    cout << "#";
    Sleep(200);
    cout << "#";
    Sleep(200);
    cout << "#";
    Sleep(200);
    cout << "#";
    Sleep(200);
    cout << "#";
    Sleep(200);
    cout << "#";
    Sleep(200);
    cout << "#";
    Sleep(200);
    cout << "#";
    Sleep(200);
    cout << "#";
    Sleep(200);
    cout << "#";
    Sleep(200);
    cout << "#";
    Sleep(200);
    cout << "#";
    Sleep(200);
    cout << "#";
    Sleep(200);
    cout << "#";
    Sleep(200);
    cout << "#";
    Sleep(200);
    cout << "#";
    Sleep(200);
    cout << "#";
    Sleep(200);
    cout << "#";
    Sleep(200);
    cout << "#";
    Sleep(200);
    cout << "#";
    Sleep(200);
    cout << "#";
    Sleep(200);
    cout << "#";
    Sleep(200);
    cout << "#";
    Sleep(200);
    cout << "#" << endl;

    SetColor(7, 0);

    

    SetColor(15, 0);

    Sleep(7000);
    system("cls");
    cout << "Pleas, enter your name" << endl;
    cin >> name;
    cout << "Your Name * " << name << " *" << endl;
    Sleep(2000);
    system("cls");
    cout << "Hello, " << name << "!" << endl;
    Sleep(4000);
    system("cls");
    cout << "console / " << name << endl;
    while (true) {
        
     
        cout << app << ":" << endl;

        if (app == "help") { cout << "help, info, print, random, setname, splash_screen, custom_pointer, set_splash_screen" << endl;  }

        if (app == "info") { cout << "version 0.1, by in C++" << endl; }

        if (app == "print") { cout << "Enter You Message" << endl; cin >> print; cout << endl; SetColor(7, 0); cout << "[WEK]:" << endl; SetColor(8, 0); cout << print << endl; SetColor(15, 0);
        }

        if (app == "random") { cout << rand() << endl; }

        if (app == "setname") { cout << "Enter New Name" << endl; cin >> name; cout << endl; cout << "Name set successfully!" << endl; }

        if (app == "joper") { cout << "Ох, какие люди, а вы ведь когда то крышивали ОТСО" << endl; name = "joper"; pointer = ":>J>O>P>E>R>"; cout << endl;  cout << "Hahaha, you name is joper" << endl; }

        if (app == "set_splash_screen") { cout << "1 = classic, 2 = tracery, please enter number" << endl; cin >> splash_screen; 
        ofstream fout("splash_screen.txt"); 
        fout << splash_screen; 
        fout.close(); 
        cout << "done!"<<endl;
        }







        
        if (app == "splash_screen") {
            if (splash_screen == 1) {
                cout << "########              ########                    ###      ###" << endl;
                cout << "########              ########  ################  ###      ###" << endl;
                cout << "########              ########  ################  ###      ###" << endl;
                cout << "########     ####     ########  ###               ###    ###" << endl;
                cout << "########     ####     ########  ###               ########" << endl;
                cout << "########     ####     ########  ###               ########" << endl;
                cout << "########     ####     ########  ###########       ###    ###" << endl;
                cout << " ########    ####    ########   ###               ###      ###" << endl;
                cout << " ########    ####    ########   ###               ###        ###" << endl;
                cout << " ########    ####    ########   ###               ###        ###" << endl;
                cout << "    ######################      ################  ###        ### " << endl;
                cout << "     #########  #########       ################  ###        ###" << endl;
            }
            if (splash_screen == 2) {
                cout << "#  #                                               #  #" << endl;
                cout << " #  #                                             #  # " << endl;
                cout << "  #  #-------------------------------------------#  #  " << endl;
                cout << "   #  #       #         #         #   #         #  #   " << endl;
                cout << "    #  #      #         #   ###   #   #        #  #    " << endl;
                cout << "     #  #     #    #    #  #   #  ####        #  #     " << endl;
                cout << "      #  #    #    #    #  ####   #   #      #  #      " << endl;
                cout << "     #  #     #    #    #  #      #    #      #  #     " << endl;
                cout << "    #  #       #### ####    ###   #     #      #  #    " << endl;
                cout << "   #  #-----------------------------------------#  #   " << endl;
                cout << "  #  #                                           #  #  " << endl;
                cout << " #  #                                             #  # " << endl;
                cout << "#  #                                               #  #" << endl;
            }
        }

        if (app == "custom_pointer") { cout << "Enter New Pointer, for example ----->" << endl; cin >> pointer; }
        









        cout << endl;

        cout << "cons\\"<<name<<pointer;
        cin >> app;

        cout << endl;







        




    }






}


        