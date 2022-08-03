#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
  * main - main
  * @argc: number of lines arguments
  * @argv: array of elements
  * Return: 0
  */
int main(int argc, char *argv[])
{
	int Ret;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	Ret = (*get_op_func(argv[2]))(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", Ret);
	return (0);
}
