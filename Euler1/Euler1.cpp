#include <iostream>
using namespace std;

//Didn't need an array, could just increase sum.....
int main(){
	int array[1000];
	int arrayLoc = 0;
	int sum = 0;

	for(int i = 0; i < 1000; i++){
		if(i % 5 == 0 || i % 3 == 0){
			array[arrayLoc] = i;
			arrayLoc++;
			
		}
	}

	for(int i = 0; i < arrayLoc; i++){
		sum = sum + array[i];

	}

	cout << "The sum is: " << sum << endl;

	//return;
}