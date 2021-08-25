#include <stdio.h>
#include <cs50.h>

int main(void)
{
	int width, i, j, k;
	do
	{
		width = get_int("Width: ");
	} 
	while (width < 1|| width > 8);

	printf("\n");
	for (i = 0; i < width; i++)
	{
		//spaces
		for (j = 0; j < width - i - 1; j++)
			printf(" ");

		//bricks
		for (j = 0; j < i + 1; j++)
			printf("#");

		////right side of 2 sided
		// for (k = 0; k < 1; k++)
		// 	printf(" ");
		// for (j = 0; j < i + 1; j++)
		// 	printf("#");

		printf("\n");
	}
}
