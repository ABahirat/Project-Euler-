#include <iostream>
using namespace std;


int main(){
	bool sMult = false;
	int value = 0;

	while(!sMult){
		value++;
		
		if(value % 1 == 0 && value % 2 == 0 && value % 3 == 0 && value % 4 == 0 &&
		value % 5 == 0 && value % 6 == 0 && value % 7 == 0 && value % 8 == 0 && 
		value % 9 == 0 && value % 10 == 0 && value % 11 == 0 && value % 12 == 0 &&
		value % 13 == 0 && value % 14 == 0 && value % 15 == 0 && value % 16 == 0 &&
		value % 17 == 0 && value % 18 == 0 && value % 19 == 0 && value % 20 == 0){
			sMult = true;
		}
		
		
	}

	cout << "The smallest multiple is: " << value << endl;
}