#include<iostream>
using namespace std;
int main()
{
    int l,u,i,num,count=0;
    cout<<"Enter lower limit";
    cin>>l;
    cout<<endl;
    cout<<"Enter upper limit";
    cin>>u;
    cout<<endl;

    for(i=l;i<=u;i++){
        for(int j=2;j<i;j++){
            if (i%j==0){
                count=1;
                break;
            }
        count=0;
        }
        if (count==0){
            cout<<i<<endl;
        }
    }
    return 0;
}
