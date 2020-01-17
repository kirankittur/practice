#include<stdio.h>
//#include<conio.h>
enum week{sun,mon,tue,wed,thur,fri,sat};
int main()
{
	enum week today;
	today=tue;
	printf("%d day\n",today+1);
}
