  #include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,no,k,i,t,j,num,count=0;
    cout<<"enter a number";
    cin>>no;
    n=no;
    cout<<endl;
    cout<<"enter no of times number is to be rotated";
    cin>>k;
    cout<<endl;
    while(n>0)
    {
        num=n%10;
        n=n/10;
        count=count+1;

    }
    for(i=1;i<=k;i++)
    {
        t=no%10;
        no=no/10;
        no=t*pow(10,count-1)+no;
    }
    cout<<no;
    return 0;
} 
