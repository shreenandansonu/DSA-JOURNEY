/*
1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16
*/

#include <iostream>
using namespace std;
int main()
{
    int n,c,r,i;
    cin>>n;
    r=1;
    i=1;
    while(r<=n){
        c=1;
        while(c<=n){
            cout<<i<<" ";
            c+=1;
            i+=1;
        }
        cout<<endl;
        r+=1;
    }
    return 0;
}