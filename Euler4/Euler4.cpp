#include <iostream> 
#include <string.h>

using namespace std;

int main(){

	
	int max = 0;

	for(int i = 100; i < 1000; i++){
		for(int j = 100; j < 1000; j++){

			bool palindrome = true;

			int product = i * j;
			string possiblity = to_string(product);
			int n = possiblity.length()-1;
			int m = 0;

			while(m < possiblity.length() && n >= 0){
				if(possiblity[m] == possiblity[n]){
					m++;
					n--;
				}
				else{
					palindrome = false;
					break;
				}
			}

			if(palindrome == true && product > max){
				max = product;
			}
		}
	}

	cout << max << endl;
	
}