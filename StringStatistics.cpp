/*	
 *	Author: Caleb A. Payton
 *	Program takes a word of any length, returns the length of the word
 *	and the number of vowels in the word.
 */

#include <iostream>

using namespace std;

int main() 
{
	char readChar;
	const char vowels[6] = {'a', 'e', 'i', 'o', 'u', 'y'};
	int vowelCount = 0;
	
	cout << "Enter a word of any length: ";
	readChar = cin.get();
	
	switch(readChar)
	{
		case 'a': vowelCount = vowelCount + 1; break;
		case 'e': vowelCount = vowelCount + 1; break;
		case 'i': vowelCount = vowelCount + 1; break;
		case 'o': vowelCount = vowelCount + 1; break;
		case 'u': vowelCount = vowelCount + 1; break;
		case 'y': vowelCount = vowelCount + 1; break;
	}
	
	int length = 1;
	readChar = cin.get();
	while (readChar != 10)
	{
		length = length + 1;
		
		for (int i = 0; i < 6; i++)
		{
			if (readChar == vowels[i])
				vowelCount++;
		}
		
		readChar = cin.get();
	}
	
	cout << "The length of that word is: " << length << endl;
	cout << "That word has " << vowelCount << " vowel(s)." << endl;	
}
