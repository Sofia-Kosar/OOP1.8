#include "Payment.h"
#include <Windows.h>
#include <iostream>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Payment g;
    cout << " Payment: " << endl;
    g.Read();
    cout << " ========================================================================= ";
    g.Display();
    Payment::Money s;
    cout << " ========================================================================= " << endl;
    cout << " Money: " << endl;
    s.Read();
    cout << " ========================================================================= ";
    s.Display();
    cout << " \n ";
    s.Comparison();
    return 0;
}