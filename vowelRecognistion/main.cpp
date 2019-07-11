#include <iostream>
#include <string>
using namespace std;

int main()
{
    int testCases;
    cin>>testCases;
    while(testCases--){
        string str;
        int vow = 0;
        cin>>str;
        int len = str.length();
        for(int i = 0 ; i < len-1 ;++i){
            for(int j = i;j < len;++j){
                for(int k = i ; k <= j ; ++k){
                    if(str.at(k) == 'a' || str.at(k) == 'A' || str.at(k) == 'e' || str.at(k) == 'E' || str.at(k) == 'i' || str.at(k) == 'I'
                       || str.at(k) == 'o' || str.at(k) == 'O' || str.at(k) == 'u' || str.at(k) == 'U')
                        vow++;
                }
            }
        }
        cout<<vow<<endl;
    }
    return 0;
}
