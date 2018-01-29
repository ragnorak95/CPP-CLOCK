#include <iostream>
#include <ctime>
#include <windows.h>

using namespace std;

// to move back to the beginning and output again
void gotoxy (int x, int y)
{
    COORD coord; // coordinates
    coord.X = x; coord.Y = y; // X and Y coordinates
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
}

int main ()
{
    time_t now;
    while (true)
    {
        gotoxy (0,0);
        now = time(0);
        cout << "The time is now: " << ctime(&now);
        Sleep (60);
    }
    cin.get ();
    return EXIT_SUCCESS;
}
