/*
4 3 2 1 
4 3 2 1 
4 3 2 1 
4 3 2 1 
*/
#include <iostream>
using namespace std;
int main()
{
    int c, r, n;
    cin >> n;
/*    r = 1;
    while (r <= n)
    {
        c = 1;
        while (c <= n)
        {
            cout << c << " ";
            c += 1;
        }
        cout << endl;
        r += 1;
    }
    return 0;*/

        r = 1;
    while (r <= n)
    {
        c = 1;
        while (c <= n)
        {
            cout << (n-c+1) << " ";
            c += 1;
        }
        cout << endl;
        r += 1;
    }
}