#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

/**
 * infinite_while - infinite while loop
 * Return: 0
 */

int infinite_while(void)
{
	while (1)
	{
		sleep(1);
	}
	return (0);
}

/**
 * main - create 5 zombie processes
 * Return: Always 0.
 */

int main(void)
{
	pid_t pid;
	char i;

	for (i = 0; i < 5; i++)
	{
		pid = fork();
		if (pid == 0)
			exit(0);
		else
			printf("Zombie process created, PID: %i\n", pid());
	}
	return (infinite_while());
}
