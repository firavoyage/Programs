#include <iostream>
using namespace std;
int main(){
	int n,r=0;cin>>n;
	for(int i=1;i<=n;i++){
		if(n%i==0) r+=i; 
	}
	cout<<r;
	return 0;
}

