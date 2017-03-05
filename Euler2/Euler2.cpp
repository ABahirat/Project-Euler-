#include <iostream>

using namespace std;


int main(){
	int sum = 0;
	int x = 1;
	int y = 2;
	int z;
	//cout << x << " , " << y << " , " << endl;

	for(int i = 0; i < 100; i++){
		z = x + y;
		x = y;
		y = z;
		//cout << z << endl;
		if( z % 2 == 0 && z <= 4000000){
			sum += z;
		}
		if(z > 4000000){
			break;
		}

	}
	cout << "the sum is: " << sum + 2 << endl;

}