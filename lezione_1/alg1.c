#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	int a[] = { 4, 3, 2, 1 };
	int size = 4;
	int i, j, k;

	for(i = 0; i <= size - 2; i++)
	{
		for(j = i; j <= size - 2; j++)
		{
			if(a[j] > a[j + 1])
			{
				int tmp = a[j];
				a[j] = a[j+1];
				a[j+1] = tmp;
			}
					
		}
	}
	for(k = 0; k < size; k++) printf("a[%d] : %d\n", k, a[k]);

	return 0;

}
