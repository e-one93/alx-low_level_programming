#include <stdio.h>
#include <stdlib.h>
/** 
 * main - programs that multiplies two numbers.
 * @agrc: number of command line arguments.
 * @agrv: arrays that contains the program command line arguments.
 * Return: 0 - success
 */
int main(int agrc, char *agrv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	print("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
