#include <iostream>
#include <cmath>
using namespace std;

int main(){

	//Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
	
	int sum1 = 0;

	for(int i = 0; i <= 100; i++){
		sum1 += i;

	}

	int sum2 = 0;
	for(int i = 0; i <=100; i++){
		sum2 += pow(i,2);
	}

	cout << "Square of the sum: " << pow(sum1, 2) << endl;
	cout << "Sum of the squares: " << sum2 << endl;

	cout << "Difference: " << pow(sum1, 2) - sum2 << endl;
}