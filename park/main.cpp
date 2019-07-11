#include <iostream>

using namespace std;

int main()
{
    int m,n,k,s;
    cin>>n>>m>>k>>s;
    char arr[n][m];
    for(int i=0;i<n;++i)
        for(int j=0;j<m;++j)
            cin>>arr[i][j];
    for(int i=0;i<n;++i){
        for(int j=0;arr[i][j]!='#' && s>=k && j<m ;++j){
            if(arr[i][j] == '.')
                s-=2;
            if(arr[i][j] == '*')
                s+=5;
            s--;
            cout<<arr[i][j]<<" ";
        }
    }
    if(s>=k)
        cout<<"Yes\n"<<s<<endl;
    else
        cout<<"No"<<endl;
    return 0;
}
