#include <iostream>
using namespace std;

//What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?


bool checkDivisibility(int number){

	bool divisble;

	for(int i = 1; i <= 20; i++){
		if(number % i != 0){
			return false;
		}
	}
	return true;
}

int main(){
	int value = 0;
	bool done = false;

	while(!done){
		value++;
		done = checkDivisibility(value);
	}

	cout << "The smallest multiple is: " << value << endl;
}