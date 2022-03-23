#include <iostream>
using namespace std;

char const LEFT_UP    = '*';
char const RIGHT_UP   = '*';
char const LEFT_DOWN  = '*';
char const RIGHT_DOWN = '*';
char const HORIZONT   = '-';
char const VERTICAL   = '|';

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
    
    return 0;
}
