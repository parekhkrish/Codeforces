#include <iostream>
using namespace std;

bool digit(int year)
{
    int freq[10] = {0};

    while (year > 0)
    {
        int d = year % 10;
        freq[d]++;

        if (freq[d] > 1)   
            return false;

        year /= 10;
    }

    return true;  
}

int main()
{
    int y;
    cin >> y;

    for (int year = y + 1; ; year++)
    {
        if (digit(year))
        {
            cout << year << endl;
            break;
        }
    }

    return 0;
}