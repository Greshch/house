#include <iostream>
using namespace std;

char const LEFT_UP    = '*';
char const RIGHT_UP   = '*';
char const LEFT_DOWN  = '*';
char const RIGHT_DOWN = '*';
char const HORIZONT   = '-';
char const VERTICAL   = '|';

char const EMPTY = ' ';

int const MIN_SIZE = 5;
int const MAX_SIZE = 20;

int const scale = 2;

int main()
{
    int house_size {};

    do
    {
        cout << "Input size of house: ";
        cin >> house_size;
    } while (house_size < MIN_SIZE || house_size > MAX_SIZE);
    int horizont_size = house_size * scale;
    int vertical_size = house_size;

    int const LEFT_WINDOW =  horizont_size / 6 == 0 ? 1 : horizont_size / 6;
    int const RIGHT_WINDOW = LEFT_WINDOW + horizont_size / 2 - horizont_size / 6;

    int const UP_WINDOW =  vertical_size / 6 == 0 ? 1 : vertical_size / 6;
    int const DOWN_WINDOW = UP_WINDOW + vertical_size / 2 - vertical_size / 6;

    for (int row = 0; row < vertical_size; ++row)
    {
        for (int col = 0; col < horizont_size; ++col)
        {
            if ((row == 0 && col == 0))
            {
                cout << LEFT_UP;
            }
            else if ((row == 0 && col == horizont_size - 1))
            {
                cout << RIGHT_UP;
            }
            else if ((row == vertical_size - 1 && col == 0))
            {
                cout << LEFT_DOWN;
            }
            else if ((row == vertical_size - 1 && col == horizont_size - 1))
            {
                cout << RIGHT_DOWN;
            }
            else if ((row > 0 && row < vertical_size - 1 && (col == 0 || col == horizont_size - 1)))
            {
                cout << VERTICAL;
            }
            else if (((row == 0 || row == vertical_size - 1 ) && col > 0 && col < horizont_size - 1))
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
            else if ( ((row > UP_WINDOW && row < DOWN_WINDOW) && col  == LEFT_WINDOW) )
            {
                cout << VERTICAL;
            }
            else if ( ((row > UP_WINDOW && row < DOWN_WINDOW) && col  == RIGHT_WINDOW) )
            {
                cout << VERTICAL;
            }
            else if ( ((row == UP_WINDOW) && (col > LEFT_WINDOW && col < RIGHT_WINDOW)) )
            {
                cout << HORIZONT;
            }
            else if ( ((row == DOWN_WINDOW) && (col > LEFT_WINDOW && col < RIGHT_WINDOW)) )
            {
                cout << HORIZONT;
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
