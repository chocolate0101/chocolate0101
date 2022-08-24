#include <stdio.h>

int main() {
    int n, m, flag = 1;
    while(scanf("%d %d", &n, &m)) { 
        int div_num[10000] = {0};
        if (m == 0 || m == 1) {
        	printf("Boring!");
        	flag = 0;
		}
		int times = 0;
		int first_num = n;
		if (flag) {
			for (int i = 0; n > 1; i++) {
        		div_num[i] = n / m;
        		if (n % m != 0 || div_num[i] <= div_num[i+1]) {
        			printf("Boring!");
        			flag = 0;
        			break;
        		}
            	n /= m;
            	times++;
        	}
		}
        if (flag) {
        	printf("%d ", first_num);
        	for (int i = 0; i < times; i++) {
        		if (i == times - 1) {
        			printf("%d", div_num[i]);
        			break;
        		}
        		printf("%d ", div_num[i]);
			}
		}
        flag = 1;
        for (int i = 0; i < times; i++) {
        	div_num[i] = 0;
		}
		printf("\n");
    }
    return 0;
}
