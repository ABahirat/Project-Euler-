#include <iostream>
using namespace std;

//Find the sum of all the multiples of 3 or 5 below 1000.

int main(){
	int sum = 0;

	for(int i = 0; i < 1000; i++){
		if(i % 5 == 0 || i % 3 == 0){
			sum = sum + i;
		}
	}

	cout << "The sum is: " << sum << endl;

	//return;
}