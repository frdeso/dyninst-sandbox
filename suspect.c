#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void print(int a, short b,char c, char *d, int *e)
{
	printf("%d, %d, %c, %s, %d\n",a ,b ,c ,d, *e);
}

int getAnswer(int a, char b)
{
    	printf(".");
	return 42;
}

void awesome(char *a, char *b)
{
    	printf(".");
	return;
}

void __attribute__((noinline))
 quebec(int a)
{
    	printf("%d",a);
	return;
}
void beauce(int a, char *b)
{
    	printf(".");
	return;
}
void __attribute__((noinline))
 montreal(int a, char *b, char c)
{
    	printf(".");
	return;
}
void __attribute__((noinline))
sherbrook(int a, char *b, char c, void *d)
{
    	printf("%d .%s, %c, %p\n", a,b,c,d);
	return;
}

int main(int argc, char **argv)
{
	int i, var1 = 18, var2 = 19;
	volatile int a = 53;
	sleep(2);
	for(i = 0; i < 5; ++i)
	{
		if(argc < 2)
		{
			print(a, 86,'c', "Hello World",&var1 );
			sleep(1);
			quebec(a);
			getAnswer(18, 'a');
			awesome("Good Morning", "Good Night");
			beauce(24,"Life is like a box of chocolate");
			montreal(24,"Life is like a box of chocolate", 'p');
			sherbrook(24,"Life is like a box of chocolate", 'p', &var1);
			printf("\n");
		}
		else
		{
			int b = atoi(argv[1]);
			quebec(b);
			sherbrook(b,"Life is like a box of chocolates", 'a', (&var2)+b);
			sleep(1);
		}

	}
	return 0;
}
