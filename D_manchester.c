#include<stdio.h>
#include<string.h>
#define BUFSIZE 32
int main()
{
	int state = 1;
	int flag = 0;
	char input[BUFSIZE];
	printf("Input: ");
	scanf("%s",input);
	int i,length = strlen(input);
	for(i=0;i<length;i++)
	{
		if(input[i] == '0')
		{
			if(state == 0)
			{
				if(flag == 0)
					printf(" ┌─┐");
				else
					printf("─┘ └");
			}
			else
			{
				if(flag == 0)
					printf("─┐ ┌");
				else
					printf(" └─┘");
			}
		}
		if(input[i] == '1')
		{
			if(state == 0)
			{
				if(flag == 0)
					printf(" ┌─");
				else
					printf("─┘ ");
				state = 1;
			}
			else
			{
				if(flag == 0)
					printf("─┐ ");
				else
					printf(" └─");
				state = 0;
			}
		}
		if(i == length - 1)
		{
			if(flag == 0)
			{
				flag = 1;
				i = -1;
				state = 1;
				printf("\n");
			}
			else
				break;
		}
	}
	return 0;
}	
