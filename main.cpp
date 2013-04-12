#include <iostream>

using namespace std;

char & at(char world[10][10], int x, int y) {
	return world[x][y];
}

void print_map(char world[10][10]) {
	for(int y = 0; y < 10; ++y)
	{
		for(int x = 0; x < 10; ++x)
		{
			cout << at(world, x, y) << " ";
		}
		cout << endl;
	}
}

void init_map(char world[10][10]) {
	for (int y = 0; y < 10; ++y)
	{
		for (int x = 0; x < 10; ++x)
		{
			at(world, x, y) = '.';
		}
	}
}

int main(){
	char numbers[10][10];

	init_map(numbers);

	at(numbers, 2, 5) = 'C';

	print_map(numbers);

	cout << "Welcome to Fuzzy Adventure!" << endl;
	return 0;
}