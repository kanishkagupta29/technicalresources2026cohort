#include<iostream>
using namespace std;
int main()
{
    int t,i,num,count=0;
    cout<<"Enter how many numbers to be tested";
    cin>>t;
    cout<<endl;

    for(i=1;i<=t;i++){
        cout<<"Enter number ";
        cin>>num;
        cout<<endl;
        if (num==0||num==1){
            count=1;
        }
        for(int j=2;j<num;j++){
            if (num%j==0){
                count=1;
                break;
            
            }
        }
        if (count==1){
        cout<<num<<" is not a prime number"<<endl;
    }
        else{
        cout<<num<<"is a prime number"<<endl;
    }
        
    }
    return 0;
}
