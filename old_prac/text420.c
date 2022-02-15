//#define MAX(x,y) ((x)>(y)?(x):(y))
//#include <stdio.h>
//int main()
//{
//	int a = 3, b = 5;
//	printf("%d\n",MAX(a,b));
//	return 0;
//}
//#include<stdio.h>
//int squar(int x)
//{
//	return x * x;
//}
//int main()
//{
//	int s, r = 5;
//	squar(6);
//	printf("%d",r);
//	return 0;
//}
//#include<stdio.h>
//char* get_s()
//{
//	char s[] = "ssss";
//	return s;
//}
//int main()
//{
//	printf("%s", get_s());
//	return 0;
//}
//#include<stdio.h>
//struct Data
//{
//	int year;
//	int month;
//	int day;
//	char xingqin[100];
//
//};
//int main()
//{
//	struct Data s = {2021,4,20,"happy" };
//	struct Data * pa = &s;
//	printf("%d-%d-%d\n", pa->year, pa->month, pa->day);
//	printf("心情是%s\n", pa->xingqin);
//	return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//char *p=NULL;
//p = (char*)malloc(100);
//memset(p, 0,100);
//scanf("%s", p);
//printf("输出p=%s", *p);
//free(p);
//return 0;
//}
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char arr[30];
//	char name[] = "mjj";
//	strcpy(arr, name);
//	printf("%s", arr);
//	return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//
//int main()
//{
//	enum Week
//	{
//		mon, tues,wens,thus,fri,sat,sun
//	};
//	enum Week today;
//	today = sat;
//	switch(today)
//	{
//		case mon:
//		case tues:
//		case wens:
//		case thus:
//		case fri:
//			printf("今天要上班！\n"); break;
//		case sat:
//		case sun:
//			printf("今天休息!\n"); break;
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a = 1, b = -1;
//	int c = a^b;
//	printf("%d\n", c);
//	return 0;
//}
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void addPerson() 
{


}
void findPerson()
{

}
void changePerson()
{

}
void delPerson()
{

}
void dispContacts()
{

}

int main()
{
	int ch;
	printf("1.输入新的联系人\n");
	printf("2.查找已有联系人\n");
	printf("3.更改已有联系人\n");
	printf("4.删除已有联系人\n");
	printf("5.显示当前通讯录\n");
	printf("6.退出当前通讯录\n");
	scanf("%d", &ch);
	switch (ch)
	{
	case 1:addPerson(); break;
	case 2:findPerson(); break;
	case 3:changePerson(); break;
	case 4:delPerson(); break;
	case 5:dispContacts(); break;
	case 6:return 0;
	default:printf("Invalid value\n");
	}
	return 0;
}