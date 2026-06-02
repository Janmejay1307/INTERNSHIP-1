#include<stdio.h>
#include<conio.h>

void main()
{
	int math,sci,eng,ss,hin;
	int total;
	float per;
	clrscr();
	printf("ENTER YOUR MARKS OF MATHS");
	scanf("%d",&math);
	printf("ENTER YOUR MARKS OF SCIECE");
	scanf("%d",&sci);
	printf("ENTER YOUR MARKS OF ENGLISH");
	scanf("%d",&eng);
	printf("ENTER YOUR MARKS OF SS");
	scanf("%d",&ss);
	printf("ENTER YOUR MARKS OF HINDI");
	scanf("%d",&hin);

	total=math+sci+eng+ss+hin;
	printf("TOTAL IS:%d\n",total);
	per=(total*100)/500;
	printf("YOUR PERSETENGE IS :%.2f\n",per);
	if(math>18 && sci>18 && eng>18 && ss>18 && hin>18)
	{
		if(per>85)
		{
			printf("Grade A");
		}
		else if(per>70)
		{
			printf("Grade B");
		}
		else
		{
			printf("BATTER LUCK NEXT TIME");
		}
	 }
	 else
	 {
		printf("YOU CODN'T MAKE IT");
	 }
	getch();
}