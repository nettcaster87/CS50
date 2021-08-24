#include <cs50.h>
#include <stdio.h>
#include <unistd.h>


// //INTERGER OVERFLOW

// int main(void)
// {
// 	for(int i =1;;i *=2)
// 	{
// 		printf("%i\n", i);
// 		sleep(1);
// 	}
// }

// //FLOATING-POINT IMPERCISION
// int main(void)
// {
// 	float x = get_float("x: ");
// 	float y = get_float("y: ");

// 	printf("x / y = %.50f\n", x/y);
// }


// //TWO DIMENSIONAL BLOCK

// int main(void)
// {
// 	int n;
// 	do
// 	{
// 		n = get_int("Size: ");
// 	}
// 	while (n < 1);
// 	for (int i = 0; i < n; i++)
// 	{
// 		for (int j = 0; j < n; j++)
// 		{
// 			printf("#");
// 		}
// 		printf("\n");
// 	}
// }


// //PRINT QUESTION MARKS WITH INPUT
// int main(void)
// {
// 	int n;
// 	do
// 	{
// 		n = get_int("Width: ");
// 	}
// 	while (n < 1);
// 	for (int i = 0; i < n; i++)
// 	{
// 		printf("?");
// 	}
// 	printf("\n");
// }


// //PRINT QUESTION MARKS

// int main(void)
// {
// 	printf("???\n");
// }
