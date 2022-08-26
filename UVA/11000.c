#include <stdio.h>
#include <stdint.h> 

int main() {
	uint32_t Fbee[10000] = {0};
	uint32_t Mbee[10000] = {0};
	int year, i = 1;
	while (scanf("%d", &year)) {
		if (year == -1) {
			break;
		}
		Fbee[0] = 1;
		int j = i;
		for ( ; j <= year; i++, j++) {
			Mbee[i] = Mbee[i - 1] + Fbee[i - 1];
			Fbee[i] = 1 + Mbee[i - 1]; 
		}
		if (year == 0) {
			printf("%d %d\n", 0, 1);
		} else {
			printf("%u %u\n", Mbee[year], Mbee[year] + Fbee[year]);
		}
	}
	return 0;
}
