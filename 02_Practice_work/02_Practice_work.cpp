#include <iostream>
#include <Windows.h>
using namespace std;
struct Coord {
    int CoordX;
    int CoordY;
};
class Rectanglee {
    int Width;
    int Height;
    char symbol;
    Coord XY;
public:
    Rectanglee()
    {
        Width = 10;
        Height = 5;
        symbol = '*';
    }
    Rectanglee(int Width)
    {
        this->Width = Width;
        Height = Width;
    }
    Rectanglee(int Width, int Height)
    {
        this->Width = Width;
        this->Height = Height;
    }
    Rectanglee(int Width, int Height, char symbol)
    {
        this->Width = Width;
        this->Height = Height;
        this->symbol = symbol;
    }
    void ShowFigure() {
        for (int i = 0; i < Height; i++)
        {
            for (int j = 0; j < Width; j++)
            {
                cout << "* ";
            }
            cout << endl;
        }
    }
    //setter

};
int main()
{
    Rectanglee rct1;
    rct1.ShowFigure();
}
