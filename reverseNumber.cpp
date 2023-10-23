#include<iostream>
using namespace std;
void reverseit(int n){
	int rem,rev=0;
	while(n>0){
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	cout<<rev<<endl;
}
	

int main(){
	int n; cin>>n;
	reverseit(n);
}
