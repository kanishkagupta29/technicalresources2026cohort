#include<iostream>
using namespace std;
int main()
{
    int n,num,count=0;
    cout<<"Enter a number";
    cin>>n;
    cout<<endl;
    while (n>0){
        num=n%10;
        n=n/10;
        count=count+1;

    }
    cout<<"the no of digits is "<<count;

    
    return 0;
}
