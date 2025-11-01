#include <stdio.h>

char* winner(char* p1, char* p2) {
	if (strcmp(p1, p2) == 0) {
		return "Draw";
	}
	if (strcmp(p1, "Rock") == 0 && strcmp(p2, "Scissors") == 0) {
		return "Player1";
	}
	if (strcmp(p1, "Scissors") == 0 && strcmp(p2, "Paper") == 0) {
		return "Player1";
	}
	if (strcmp(p1, "Paper") == 0 && strcmp(p2, "Rock") == 0) {
		return "Player1";
	}
	if (strcmp(p1, "Scissors") == 0 && strcmp(p2, "Rock") == 0) {
		return "Player2";
	}
	return "";
}

int main() {
	return 0;
}