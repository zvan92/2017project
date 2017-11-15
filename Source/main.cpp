// Draws various shapes in a console program

#include <iostream>

using namespace std;

void drawRectangle()
{
    cout << "***************" << endl;
    cout << "*             *" << endl;
    cout << "*             *" << endl;
    cout << "***************" << endl;
}

void drawTriangle()
{
    cout << "   *   " << endl;
    cout << "  * *  " << endl;
    cout << " *   * " << endl;
    cout << "*******" << endl;
}

void drawSquare()
{
    cout << "**********" << endl;
    cout << "*        *" << endl;
    cout << "*        *" << endl;
    cout << "*        *" << endl;
    cout << "*        *" << endl;
    cout << "**********" << endl;
}

int main()
{
    drawRectangle();
    drawTriangle();
    drawSquare();

    cin.get();
    return 0;
}
