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
//	printf("������%s\n", pa->xingqin);
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
//printf("���p=%s", *p);
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
//			printf("����Ҫ�ϰ࣡\n"); break;
//		case sat:
//		case sun:
//			printf("������Ϣ!\n"); break;
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
	printf("1.�����µ���ϵ��\n");
	printf("2.����������ϵ��\n");
	printf("3.����������ϵ��\n");
	printf("4.ɾ��������ϵ��\n");
	printf("5.��ʾ��ǰͨѶ¼\n");
	printf("6.�˳���ǰͨѶ¼\n");
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