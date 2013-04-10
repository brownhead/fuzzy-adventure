#include <iostream>

using namespace std;


int main(){

	int numbers[10][10];
	int r = 0;
	int c = 0;
	for(int r = 0; r < 10; ++r)
	{
		for(c = 0; c < 10; ++c)
		{
			cout << numbers[r][c] << " ";
		}
		cout << endl;
	}
	cout << "Welcome to Fuzzy Adventure!" << endl;
	return 0;
}