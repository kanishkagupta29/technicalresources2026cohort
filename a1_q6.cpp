#include<iostream>
using namespace std;
int main(){
    int num,n,sum=0;
    cout<<"enter a number";
    cin>>num;
    while(n>0){
    n=num%10;
    num=num/10;
    sum=sum+n;
    }
    cout<<"the sum of a number is"<<sum;
    return 0;
}
