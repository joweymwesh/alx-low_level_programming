#include <stdio.h>
/**
* main - prints program name followed by a new line
* @argc: the number of arguments supplied to program
* @argv: an array of pointers to the arguments
* Return: always 0
*/
int main(int __attribute__((__unused__)) argc, char *argv[])
{
printf("%s\n", argv[0]);
return (0);
}
