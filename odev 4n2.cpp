#include <iostream>
using namespace std;

void islem (int sayia,int sayib)
{
    for (int i=0;i<sayib;i++)
    {
        sayia+=2;
        cout << sayia << endl;
    }
}

int main()
{
    islem(13,7);
}
