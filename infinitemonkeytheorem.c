#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void randomizeAndFind(char **pointersToPartitions, float numberOfGigs, char *phraseBackwards) {
	int i, phraseLength = 1, counter;
	char* layout = "QDRWBJFUPASHTGYNEOIZXMCVKL ,.?!";
	char* temp1;
	char* temp2;
	while(*(++phraseBackwards) != '\0') phraseLength++; // checking the length of the phrase
	phraseBackwards--; // making it point to the last character of the array rather than the null byte
	for(i = 1; i < phraseLength; i++) { // generating the first phraseLength-1 number of characters cause we are checking backwards and we don't want to go before the start of the array
		**pointersToPartitions = layout[rand()%31];
		*pointersToPartitions++;
	}
	while(*(++(*pointersToPartitions)) != '\0') {
		**pointersToPartitions = layout[rand()%31]; 
		// initializing the backwards search
		if **pointersToPartitions == *phraseBackwards {
			// saving and changing pointers
			temp1 = *pointersToPartitions; temp2 = phraseBackwards; i = 1; (*pointersToPartitions)--; phraseBackwards--; counter = 1;
			// actual backwards search
			while(counter < phraseLength;) {
				if(**pointersToPartitions != *phraseBackwards) break;
				(*pointersToPartitions)--; phraseBackwards--; i++; counter++;
			}
			*pointersToPartitions = temp1; phraseBackwards = temp2;
			if(i==phraseLength) {} // save the address of *pointersToPartitons cause it found our phrase
		}
	}
}


int main() {
//// user input prototype ////
	char* phrase = "abbss"
	float numberOfGigs = 2.6f;
	float numberOfGigsRefrence = numberOfGigs;
//// randomization seed ////
	time_t t;
	srand((unsigned) time(&t));
//// partitioning system ////
	int i = 0;
	int numberOfPartitions = (int) (numberOfGigs + 0.999f); // getting the amount of partitions
	char **pointersToPartitions = char(**) malloc(numbersOfPartitions * sizeof(char*)); // allocating the partition array
	if(numberOfGigs >= 1.0f) { // check if a 1 gB partition can be assigned 
		do {
			*pointersToPartitions = (char *)malloc(1000000000 * sizeof(char)); // allocating space for a 1 gB partiion
			randomizeAndFind(char **pointersToPartitions, float numberOfGigs, char* phrase) // running the randomization and finiding 
			printf("Processing %dGB out of %0.3fGB\n", ++i, numberOfGigsReference); // loading indicator
		} while(--numberOfGigs >= 1.0); 
	}
	if(numberOfGigs != 0) { // creating a partition with the rest of the memory left
		printf("Processing %0.3fGB out of %0.3fGB\n", numberOfGigs, numberOfGigsReference); // another loading indicator
	}
//// partitioning ends ////
	return 0;
}
