#include <iostream>
using namespace std;
int main()
{
    int n,m = 1,counter = 0;
    cin>>n;
    while(n>m){
        int temp = m*4,d = 0;
        while(temp){
            temp/=10;
            d++;
        }
        int num = 3;
        temp=m*4;
        bool flag = false;
        for(int i = 0 ; i< d ;++i){
            cout<<temp<<" ";
            if(temp==n){
                flag = true;
                break;
            }
            temp+=num;
            counter++;
            num*=10;
        }
        //temp = m*4+num/10;
        num = 3;
        for(int i = 1 ; i<=d ;++i){
            cout<<temp<<" ";
            if(temp==n){
                flag = true;
                break;
            }
            temp+=num;
            counter++;
            num*=10;
        }
        if(flag)
            break;
        m = m*10+1;
    }
    cout<<endl;
    cout<<counter<<endl;
    return 0;
}
