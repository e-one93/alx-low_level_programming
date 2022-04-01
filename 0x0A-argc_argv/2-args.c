#include <stdio.h>
/** main - prints all arguments it receives.
 * @agrc: number of command line arguments.
 * @agrv: arrays that contains the program command line arguments.
 * Return: (0) - success.
 */
int main(int agrc, char* agrv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", agrv[i]);
	return (0);
}
