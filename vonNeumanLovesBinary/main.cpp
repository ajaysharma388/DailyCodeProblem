#include <iostream>
using namespace std;
char arr[32];
int main()
{
    int testCases;
    cin>>testCases;
    while(testCases--){
        cin>>arr;
        int val = 0,i;
        for(i = 0 ; arr[i]!='\0' ;++i){}
        for(int j = 0 ; j<i ;++j)
            if(arr[j] == '1')
                val += 1<<(i-j-1);
        cout<<val<<endl;
    }
    return 0;
}
