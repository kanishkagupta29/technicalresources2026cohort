#include<iostream>
using namespace std;
int main()
{
    int a,b,i,j,big,small;
    cout<<"enter one number";
    cin>>a;
    cout<<endl;
    cout<<"enter another number";
    cin>>b;
    cout<<endl;
    if(a>b){
        small=b;
        big=a;
    }
    else{
        big=b;
        small=a;
    }
    for(i=small;i>0;i--){
        if((a%i==0) && (b%i==0)){
            cout<<"the hcf of 2 numbers is "<<i<<endl;
            break;
        }
    }
    for(j=big;j!=0;j++){
        if((j%a==0) && (j%b==0)){
            cout<<"the lcm of 2 numbers is "<<j;
            break;
        }
    }
    return 0;
}
