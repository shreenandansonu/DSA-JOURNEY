#include <iostream>
using namespace std;
int main()
{
    int c,r,n;
    cin>>n;
   /* while(r<=n){
        c=1;
        while(c<=n){
            cout<<"* ";
            c+=1;
        }
        cout<<endl;
        r+=1;
    }
    return 0;*/
        r=1;
    while(r<=n){
        c=1;
        while(c<=n){
            cout<<r<<" ";
            c+=1;
        }
        cout<<endl;
        r+=1;
    }
    return 0;

}