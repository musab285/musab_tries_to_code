#include <stdio.h>
int main() {
	int a, b, c;
	int largest;
	printf("enter a, b and c: ");
	scanf("%d%d%d", &a, &b, &c);
	if (a > b) {
			if (a > c) {
				largest = a;
			} else{
				largest = c;
			}
		}else {
			if (b> c) {
				largest = b;
			} else {
				largest = c;
			}
		}
	printf("Largest: %d", largest);	
	return 0;
}
