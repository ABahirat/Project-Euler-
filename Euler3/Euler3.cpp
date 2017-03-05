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
	const unsigned long long toFactor =  600851475143;
	unsigned long long i = 1;
	int max = 0;
	int factor = 0;

	while(i < 7000){
		if(toFactor % i == 0){
			factor = i;
			if(isPrime(factor) == true && factor > max){
				max = factor;

			}
		}
		cout << i << endl;
		//i++;
	}
	cout << "The max prime factor is: " << max << endl;
}