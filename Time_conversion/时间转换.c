#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	long q = 0;
	long w = 0;
	int e = 0;
	int r = 0;
	scanf("%d", &q);
	w = q / 3600;//–° ±
	e = (q - w * 3600) / 60;//∑÷÷”
	r = (q - (w * 3600 + e * 60));//√Î
	printf("%d %d %d\n", w, e, r);
	return 0;
}