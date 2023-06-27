#define _CRT_SECURE_NO_WARNINGS 0
#include<stdio.h>

int main()
{
	struct student {
		char name[20];
		char class[20];
		char num[20];
		char phone[20];
		float score;
	}student1;
	scanf("%s %s %s %s %f", &student1.name, &student1.class,
		&student1.num, &student1.phone, &student1.score);
	printf("name:%s\nclass:%s\nnum:%s\nphone:%s\nscore:%f", student1.name, student1.class,
		student1.num, student1.phone, student1.score);
	return 0;
}
