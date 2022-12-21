#include <iostream>
using namespace std;
int main()
{
    cout<<"Enter the value of the number";
    int a;
    cin>>a;
    /*
    if (a>0){
        cout<<"the number is posetive";
    }
    else{
        if (a<0){
            cout<<"the number is negative";
        }
        else{
            cout<<"the number is 0";
        }
    }
    */
   if(a>0){
    cout<<" a is posetive";
   }
   else if(a<0){
    cout<<"a is negative";
   }
   else{
    cout<<"its 0";
   }
    return 0;
}