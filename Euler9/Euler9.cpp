#include <iostream> 
#include <math.h>

using namespace std;

//There exists exactly one Pythagorean triplet for which a + b + c = 1000. Find the product abc.

int main(){

	int product;
	int a, b, c;

	for(int a = 1; a < 1000; a++){
		for(int b = 1; b < 1000; b++){


			int c = 1000-a-b;

			if (a*a + b*b == c*c && a + b + c == 1000){
				product = a * b * c;
				break;
			}
		}
	}
	cout << a << b << c << endl;

	cout << product << endl;

}