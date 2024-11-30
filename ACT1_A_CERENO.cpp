#include <iostream>
using namespace std;
int main ()

{ 
	int row = 8; // 8
	int col = 4; // 4
	
	for (int index = 0; index < row ;index ++) {
		for (int index2 = 0; index2 < col; index2++) {
			// Print '#'
			if ((index + index2) & 2 == 0)
			{ cout << "# * ";
			} else { 
				cout << "# * ";
			}
		}cout << endl;
	}
	
	return 0;
}