#include <iostream>
using namespace std;
int main ()

{ 
	int j = 8;
	for (int ind = 8; ind >= 1; ind--) {
		for (int v = j-ind; v > 0; v--)
			cout << "  ";
		for (int in = ind; in > 0; in--) {
			cout << "# ";
			
			
		}cout << endl;
	}
	
	return 0;
}