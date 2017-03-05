#include <iostream>
using namespace std;

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
		if(isPrime(i)==true){
			finalPrime++;
		}
		
	}
	cout << "The 10,001st prime number is: " << i << endl;
}