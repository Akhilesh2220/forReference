#include<iostream>
using namespace std;
void staircase(int n){
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n-1;j++){
			cout<<" ";
		}
		for(int k=1;k<=i;k++){
			cout<<"#";
		}
		cout<<endl;
	}
}
int main(){
	int n; cin>>n;
	staircase(n);	
}
//    #
//   ##
//  ###
// ####
//#####
