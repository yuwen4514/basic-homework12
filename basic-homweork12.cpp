#include<stdio.h>
#include<stdlib.h>

void show(int);
int main(void)
{
	int x;
	printf("�п�J�@�ӼƦr:\n");
	scanf("%d",&x);
	show(x);
}
void show(int x)
{
	int space;
	for(int i=x;i>0;i--)
	{
		space=x-i;
		if(space>0)
		{
			for(int k=0;k<space;k++)
			{
			printf(" ");
			}
		}

		for(int s=0;s<i;s++)
		{
			printf("%c",'*');
		}
		printf("\n");
	}

system("pause"); 
}

