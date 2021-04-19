//#include <stdio.h>
//#include "add.h"
//int main()
//{
//	int a = 3, b = 5;
//	printf("%d\n", add(a, b));
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	while (1)
//	{
//		malloc(1024);
//	}
//	return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS 
//
//#include <stdio.h>      /* printf, fopen */
//#include <stdlib.h>     /* exit, EXIT_FAILURE */
//int main()
//{
//	FILE * pFile;
//	pFile = fopen("myfile.txt", "r");
//	if (pFile == NULL)
//	{
//		printf("Error opening file");
// 		exit(2);
//	}
//	else
//	{
//		/* file operations here */
//	}
//	return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS 
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#define N 10
//int main()
//{
//	int* ptr = NULL;
//	int i;
//	ptr = (int *)malloc(N * sizeof(int));
//	memset(ptr, 0, N * sizeof(int));
//	for (i = 0; i < N; i++)
//	{
//		printf("%d\n", ptr[i]);
//	}
//	return 0;
//}
//
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	char a = 0;
	char c = 'a';
	int *p = (int*)&c;
	*p = 258;
	printf("a=%d,c=%d", a, c);
	return 0;
}
