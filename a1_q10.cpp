#include<iostream>
using namespace std;
int main()
{
    int num,i=2;
    cout<<"enter a number";
    cin>>num;
    cout<<endl;
    cout<<"The prime factorization is"<<endl;
    while(i<=num){
        if(num%i==0){
            cout<<i<<"  ";
            num=num/i;
        }
        else{
            i++;
        }
    }
    return 0;
}
