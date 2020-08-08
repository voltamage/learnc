#include <stdio.h>

#define DEFPI 3.14

int main() {
	{
		printf("B A S I C   C O N C E P T S\n");
	}

	{
		printf("\n\nLesson: Hello, World!\n");
		printf("hello world!\n");
	}

	{
		printf("\n\nLesson: Data Types\n");
		{
			printf("DATA TYPES\n");
			printf("int: %ld \n", sizeof(int));
			printf("float: %ld \n", sizeof(float));
			printf("double: %ld \n", sizeof(double));
			printf("char: %ld \n", sizeof(char));
		}

		{
			printf("\nVARIABLES\n");
			int a = 8, b = 34;
			int int_sum = a + b;
			float salary = 56.23;
			char letter = 'Z';
			printf("int sum: %d \n", int_sum);
			printf("float: %f \n", salary);
			printf("char: %c \n", letter);
		}

		{
			printf("\nCONSTANTS\n");
			const double PI = 3.14;
			printf("const: %f \n", PI);
			printf("#define: %f \n", DEFPI);
		}
	}

	{
		printf("\n\nLesson: Input & Output\n");
		{
			printf("INPUT CHARACTER\n");
			printf("\ntype any character and hit enter:\n");
			char getinput = getchar();
			printf("you entered: %c \n", getinput);
		}

		{
			printf("INPUT STRING\n");
			printf("\ntype any string and hit enter:\n");
			char getstring[100];
			gets(getstring);
			printf("you entered: %s \n", getstring);
		}

		{
			printf("INPUT STORED IN ARRAY\n");
			printf("\ntype any string and hit enter:\n");
			int array;
			scanf("%d", &array);
			printf("you entered: %d \n", array);
		}
	}

return 0;
}
