#include <iostream>
using namespace std;

bool queen2(int x1, int y1, int x2, int y2)
{
    bool flag = false;

    if ((x1 == x2 or y1 == y2) or (abs(x1 - x2) == abs(y1 - y2)))
    {
        flag = true;
    }

    return flag;
}

bool queen3(int x1, int y1, int x2, int y2, int x3, int y3)
{
    bool flag = false;

    if (queen2(x1, y1, x2, y2) and queen2(x1, y1, x3, y3) and queen2(x2, y2, x3, y3))
    {
        flag = true;
    }

    return flag;
}

bool valid_input(int x)
{

    if (x > 8 or x < 1)
    {
        return false;
    }

    return true;
}

int main()
{

    int x1;
    int y1;
    int x2;
    int y2;
    int x3;
    int y3;
    cout << "Enter coordinates 1.Queen (1 >= x,y <= 8): ";
    cin >> x1 >> y1;
    if (!valid_input(x1) or !valid_input(y1))
    {
        cout << "Incorrect input";
        return 0;
    }
    cout << "Enter coordinates 2.Queen (1 >= x,y <= 8): ";
    cin >> x2 >> y2;
    if (!valid_input(x2) or !valid_input(y2))
    {
        cout << "Incorrect input";
        return 0;
    }
    cout << "Enter coordinates 3.Queen (1 >= x,y <= 8): ";
    cin >> x3 >> y3;
    if (!valid_input(x3) or !valid_input(y3))
    {
        cout << "Incorrect input";
        return 0;
    }
    if (queen3(x1, y1, x2, y2, x3, y3))
    {
        cout << "all 3 queens under threat";
    }
    else if (queen2(x1, y1, x2, y2))
    {
        cout << "queens 1 and 2 under threat";
    }
    else if (queen2(x2 ,y2, x3, y3))
    {
        cout << "queens 2 and 3 under threat";
    }
    else if (queen2(x1 ,y1, x3, y3))
    {
        cout << "queens 1 and 3 under threat";
    }    
    else
    {
        cout << "no threats";
    }
    return 0;
}