#include <stdio.h>
int main()
{
	int n, answer=1;
	scanf("%d", &n);
	for (int i=1; i<=n; i++){
		answer = answer * i;
	}
	printf("answer: %d", answer);
	return 0;
}
	