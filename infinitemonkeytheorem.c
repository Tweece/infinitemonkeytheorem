#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void randomizeAndFind(char **pointersToPartitions, float numberOfGigs, char *phrase) {
	int phraseLength = 1, i;
	char* layout = "QDRWBJFUPASHTGYNEOIZXMCVKL ,.?!";
	while(*(++phrase) != '\0') { // checking the length of the phrase 
		phraseLength++; 
	} 
	for(i = 1; i < phraseLength; i++) { // generating first phraseLength-1 cause we are checking backwards and we don't want to go before the start of the array
		**pointersToPartitions = layout[rand()%31];
		*pointersToPartitions++;
	}
	while(*(++(*pointersToPartitions)) != '\0') {	
		// stuff needs to ge here
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
