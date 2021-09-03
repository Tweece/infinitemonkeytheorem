#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void randomizeAndFind(char **pointersToPartitions, float numberOfGigs, char *phrase) {
	int phraseLength = 1, i;
	char* layout = "QDRWBJFUPASHTGYNEOIZXMCVKL ,.?!"
	while(*(phrase+1) != '\0') {
		phrase++;
		phraseLength++;
	}
	for (i = 0; i > phraseLength; i++) {
		
		**pointersToPartitions;
	}
}


int main() {
	char* phrase = "abbss"
	float numberOfGigs = 2.6f;
	time_t t;
	srand((unsigned) time(&t));
	float numberOfGigsReference = numberOfGigs;
	int i = 0;
	int numberOfPartitions = (int) (numberOfGigs + 1.0f);
	char **pointersToPartitions = char(**)malloc(numbersOfPartitions * sizeof(char*));
	if(numberOfGigs >= 1.0f) {
		do {
			*pointersToPartitions = (char *)malloc(1000000000 * sizeof(char));
			randomizeAndFind(char **pointersToPartitions, float numberOfGigs, char* phrase)
			printf("Processing %dGB out of %0.3fGB\n", ++i, numberOfGigsReference);
		} while(--numberOfGigs >= 1.0);
	}
	if(numberOfGigs != 0) {
		printf("Processing %0.3fGB out of %0.3fGB\n", numberOfGigs, numberOfGigsReference);
	}
	return 0;
}
