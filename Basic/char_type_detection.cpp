#include <iostream>
using namespace std;
int main()
{
    char a;
    cin>>a;
    int b=a;
    cout<<b<<endl;
    if (a>=65 && a<=90){
        cout<<"UPPERCASE";
    }
    else if(a>=97 && a<=122){
        cout<<"lowercase";
    }
    else if(a>=48 && a<=57){
        cout<<"numerical";
    }
    return 0;
}