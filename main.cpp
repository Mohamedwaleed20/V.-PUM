#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int x = 4*n ;
    for(int i = 1 ; i<=x  ; i++ )
    {

        if(i%4==0)
        {
            cout<< "PUM" << endl ;
        }
        else
        {
            cout << i  << " ";
        }
    }
    return 0;
}
