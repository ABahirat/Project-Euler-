#include <iostream>
#include <math.h>

using namespace std;

//Find the sum of all the primes below two million.


bool isPrime(long number){

	for(int i = 2; i <= sqrt(number); i++){
		if(number % i == 0){
			return false;
		}
	}
	return true;
}


int main(){
	unsigned long long sum = 0;

	for(long i = 2; i < 2000000; i++){
		if(isPrime(i)){
			sum = sum + i;
		}
	}

	cout << sum << endl;

}