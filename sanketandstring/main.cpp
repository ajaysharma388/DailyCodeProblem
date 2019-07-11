#include <iostream>
#include <string>
using namespace std;

int find(string s,int *arr,int n,int len,int num,char ch){
    int x=num;
    while(arr[x]!=0)
        x--;
    while(n){
        if(num<len-1 && s[num]!=ch){
            num++;
            n--;
        }else if(num<len-1 && s[num]==ch){
            num++;
        }
        else if(x>-1 && s[x]!=ch){
            x--;
            n--;
        }else if(x>-1 && s[x]==ch){
            x--;
        }
    }
    return num-x+1;
}
int main(){
    int n;string s;
    cin>>n>>s;
    int len = s.length();
    int arr[len];
    int max=0,min=0;
    for(int i=0;i<len;++i){
        if(s[i]=='a')
            arr[i]=-1;
        else
            arr[i]=1;
        arr[i]+=max;
        max=arr[i];
    }
    max=0;
    for(int i=1;i<len;i++){
        if(arr[max]<arr[i])
            max=i;
        if(arr[min]>arr[i])
            min=i;
    }
    int temp=min;
    if(-1*arr[temp]>arr[max])
        cout<<find(s,arr,n,len,min,'b')<<endl;
    else
        cout<<find(s,arr,n,len,max,'a')<<endl;
    return 0;
}


