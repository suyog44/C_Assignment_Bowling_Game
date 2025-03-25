/*
* Author: Suyog Buradkar
* Reference: https://www.bowlinggenius.com/#
* Above ref used to understand the actual working
*/

#include <stdio.h>
#define MAX_FRAMES 10

int calculate_score(int rolls[], int num_rolls) {
	int score = 0;
	int roll_index = 0;
	int frame = 0;

	// Loop through frames 0 to 8 (9 frames total)
	while (frame < 9) {
		// If the roll is a strike (10 pins knocked down)
		if (rolls[roll_index] == 10) { // Strike
			// Add 10 + the next two rolls for a strike
			score += 10 + rolls[roll_index + 1] + rolls[roll_index + 2];
			// Move to the next roll after the strike
			roll_index++;
		} else {
			// If it's a spare (sum of two rolls in a frame equals 10)
			if (rolls[roll_index] + rolls[roll_index + 1] == 10) { // Spare
				// Add 10 + the next roll for a spare
				score += 10 + rolls[roll_index + 2];
			} else {
				// If neither a strike nor a spare, add the sum of the two rolls
				score += rolls[roll_index] + rolls[roll_index + 1];
			}
			// Move to the next frame (two rolls per frame)
			roll_index += 2;
		}
		frame++;
	}

	// For the 10th frame (the last frame), add the first two rolls
	score += rolls[roll_index] + rolls[roll_index + 1];

	// Check if the last frame has a strike or spare
	if (rolls[roll_index] + rolls[roll_index + 1] >= 10) {
		// If it's a strike or spare, add the final roll if necessary
		score += rolls[roll_index + 2];
	}

	// Return the total score
	return score;
}


int main() {
	int rolls[] = {1,4,4,5,6,4,5,5,10,0,1,7,3,6,4,10,2,8,6};
	int num_rolls = sizeof(rolls) / sizeof(rolls[0]);

	printf("Calculating score for game:\n");
	for (int i = 0; i < num_rolls; i++) {
		printf("%d ", rolls[i]);
	}

	printf("\nFinal Score: %d", calculate_score(rolls, num_rolls));
	return 0;
}