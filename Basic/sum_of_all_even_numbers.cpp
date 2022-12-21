#include <iostream>
using namespace std;
int main()
{
    int i,n,sum;
    cin>>n;
    i=2;
    sum=0;
    while(i<=n){
        sum+=i;
        i+=2;
    }
    cout<<"Sum of even numbers from 1 to N is "<<sum;
    return 0;
}