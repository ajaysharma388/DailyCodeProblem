#include <iostream>
using namespace std;
int findBit(int n,int bit_no){
	return (n & (1<<bit_no))!=0 ? 1 : 0;
}
int flipBit(int n,int bit_no){
	if(findBit(n,bit_no))
		return (n ^ (1<<bit_no));
	return (n|(1<<bit_no));
}
int main() {
	// your code goes here
	cout<<flipBit(13,0)<<endl;
	return 0;
}
