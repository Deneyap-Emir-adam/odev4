#include <iostream>
using namespace std;

int islem (int sayi)
{
    if (sayi%2!=0)
        return sayi*sayi;
    else
        return sayi/2;
}

int main()
{
    cout << islem(12);
    cout << islem(3);
}
