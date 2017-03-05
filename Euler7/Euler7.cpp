#include <iostream>
using namespace std;

//What is the 10001st prime number?

bool isPrime(int number){
	for(int i = 2; i < number; i++){
		if(number % i == 0){
			return false;
		}
	}
	return true;
}

int main(){
	int finalPrime = 0;
	int i = 0;
	while(finalPrime <= 10001){
		i++;
		if(isPrime(i)){
			finalPrime++;
		}
		
	}
	cout << "The 10,001st prime number is: " << i << endl;
}