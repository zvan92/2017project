// Draws various shapes in a console program

#include <iostream>

using namespace std;

void drawRectangle()
{
    cout << "***************";
    cout << "*             *";
    cout << "*             *";
    cout << "***************";
}

void drawTriangle()
{
    cout << "   *   ";
    cout << "  * *  ";
    cout << " *   * ";
    cout << "*******";
}

void drawSquare()
{
    cout << "**********";
    cout << "*        *";
    cout << "*        *";
    cout << "*        *";
    cout << "*        *";
    cout << "**********";
}

int main()
{
    drawRectangle();
    drawTriangle();
    drawSquare();

    return 0;
}
