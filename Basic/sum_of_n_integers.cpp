#include <iostream>
using namespace std;
int main()
{
    int n,sum;
    cin>>n;
    int i=1;
    sum=0;
    while(i<=n){
        sum+=i;
        i+=1;
    }
    cout<<"Sum of N integers is "<<sum;
    return 0;
}
