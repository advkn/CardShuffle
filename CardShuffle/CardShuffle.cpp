//Card Shuffle
/*
1. Create and initialize a cards array and set the seed value for the rand() function using srand().

2. For EACH array index, generate a random index, then swap the elements.

3. Out put the cards array.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {

	int cards[52];	//initialize the cards array
	srand(time(0));	//set the seed value for the rand() function

	//intitialize the array of cards
	for(int i = 0; i < 52; i++) {
		cards[i] = i+1;	//i+1 is necessary because there is no such thing as a 0 suit
	}

	//shuffle
	for(int i = 0; i < 52; i++) {
		int index = rand() % 52;	//generate a random index
		//swap
		int tmp = cards[i];
		cards[i] = cards[index];
		cards[index] = tmp;
	}

	//print the new deck
	for(int& i : cards) {
		cout << i << " ";
	}

	cout << endl;
	getchar();
	return 0;
}