#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int num,n,i=1,inverse=0;
    cout<<"Enter a number which can include digits from 1\
    till the length of that number with no digit repeating";
    cin>>num;
    while(num!=0){
        n=num%10;
        num=num/10;
        int id=i;
        int ip=n;
        inverse=inverse+id*int(pow(10,ip-1));
        i++;
    }
    cout<<"the inverse of a number is "<<inverse;
    return 0;

    
}
