#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		int s=n-i,b=i;//space,block
		for(int j=0;j<s;j++){
			cout<<' ';
		}
		for(int j=0;j<b;j++){
			cout<<'*'<<' ';
		}
		cout<<endl;
	}	
	return 0;
}
