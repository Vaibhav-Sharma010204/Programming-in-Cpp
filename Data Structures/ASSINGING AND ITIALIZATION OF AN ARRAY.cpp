// ARRAY INITIALIZATION
#include<iostream>
using namespace std;
int main(){
	// 
	// invalid cheez ye hai - a[]; . size btana jaroori hai 
	// only in case of initialization we can skip the size 
	// int a[]= {1,2,3,4,5,};  // skipping the size // THESE BOTH ARE ITIALIZATION 
													// 
	//or 
	int a[5]={1,2,3,4,5};  // giving or defining size 
	int n=5;
	for(int i=0;i<n;++i)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
	
	return 0;
}
