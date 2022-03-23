#include <iostream>
using namespace std;

char const LEFT_UP    = '*';
char const RIGHT_UP   = '*';
char const LEFT_DOWN  = '*';
char const RIGHT_DOWN = '*';
char const HORIZONT   = '-';
char const VERTICAL   = '|';

char const EMPTY = '.';

int const MIN_SIZE = 3;
int const MAX_SIZE = 15;

int main()
{
    int house_size {};
    do
    {
        cout << "Input size of house: ";
        cin >> house_size;
    } while (house_size < MIN_SIZE || house_size > MAX_SIZE);

    int const LEFT_WINDOW =  house_size / 4;
    int const RIGHT_WINDOW = house_size / 2;

    int const UP_WINDOW =  house_size / 5;
    int const DOWN_WINDOW = house_size / 2 + house_size / 6;

    for (int row = 0; row < house_size; ++row)
    {
        for (int col = 0; col < house_size; ++col)
        {
            if ((row == 0 && col == 0))
            {
                cout << LEFT_UP;
            }
            else if ((row == 0 && col == house_size - 1))
            {
                cout << RIGHT_UP;
            }
            else if ((row == house_size - 1 && col == 0))
            {
                cout << LEFT_DOWN;
            }
            else if ((row == house_size - 1 && col == house_size - 1))
            {
                cout << RIGHT_DOWN;
            }
            else if ((row > 0 && row < house_size - 1 && (col == 0 || col == house_size - 1)))
            {
                cout << VERTICAL;
            }
            else if (((row == 0 || row == house_size - 1 ) && col > 0 && col < house_size - 1))
            {
                cout << HORIZONT;
            }
            else if ( (row == UP_WINDOW  && col  == LEFT_WINDOW) )
            {
                cout << LEFT_UP;
            }
            else if ( (row == UP_WINDOW  && col  == RIGHT_WINDOW) )
            {
                cout << RIGHT_UP;
            }
            else if ( (row == DOWN_WINDOW && col  == LEFT_WINDOW) )
            {
                cout << LEFT_DOWN;
            }
            else if ( (row == DOWN_WINDOW && col  == RIGHT_WINDOW) )
            {
                cout << RIGHT_DOWN;
            }
            else
            {
                cout << EMPTY;
            }
        }
        cout << endl;
    }
    return 0;
}
