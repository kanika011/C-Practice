//Pointer Manipulation
//Sum of even numbers in array using pointer manipulation




#include <iostream>
using namespace std;

int main() {
	int arr[]={2,3,4,5,6,7,8};
	int *ptr;
	ptr=arr;
	int sum = 0;
	for(int i = 0;i<7;i++){
		if(*ptr%2 == 0){
			cout<<*(ptr)<<"\n";
			sum+=*ptr;
		}
		ptr=ptr+1;
	}
	
	cout<<sum;
	// your code goes here
	return 0;
}