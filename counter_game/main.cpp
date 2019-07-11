#include <iostream>

using namespace std;

long sumXor(long n) {
    long count=0;
    for(long i=0;i<=n;++i){
            cout<<i<<endl;
        if((n+i)==(n^i)) count++;
    }
    return count;
}


int main(){
	cout<<sumXor(3434444444333)<<endl;
	return 0;
}
