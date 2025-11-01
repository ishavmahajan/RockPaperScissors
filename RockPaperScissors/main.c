#include <stdio.h>

char* winner(char* p1, char* p2) {
	if (strcmp(p1, p2) == 0) {
		return "Draw";
	}
	return "";
}

int main() {
	return 0;
}