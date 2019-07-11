#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n){
    for(int i=2;i<=sqrt(n);++i)
        if(n%i==0)
            return false;
    return true;
}
void createPrimeList(int *sieve){
    sieve[0]=-1,sieve[1]=-1;
    int i=2,inc;
    while(i<=1000005){
        if(isPrime(i) && sieve[i]>-1){
            sieve[1] = 1;
            inc=2*i;
            while(inc<1000005){
                sieve[inc]=-1;
                inc+=i;
            }
        }
        i++;
    }
}


int main(){
    int n;
    cin>>n;
    int sieve[1000005] = {};
    createPrimeList(sieve);
    for(int i=2;i<1000005;++i)
        if(sieve[i]>-1)
        cout<<i<<" ";
    return 0;
}
