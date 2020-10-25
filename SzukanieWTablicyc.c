#include <stdio.h>


int main() {
	int tablica[] = { 1,2,3,4,5 };
	int szukana = 4;

	for (int i = 0; i < sizeof(tablica) / sizeof(tablica[0]); ++i) {
		if (tablica[i] == szukana) {
			printf("%d\n", tablica[i]);
		}
	}
	return 0;
}
