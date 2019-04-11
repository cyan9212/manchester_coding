#include<stdio.h>
#include<string.h>
#define BUFSIZE 32
int main()
{
	char input[BUFSIZE];
	int i,flag = 0;
	printf("Input: ");
	scanf("%s",input);
	int length = strlen(input);
	for(i=0;i<length;i++)
	{
		if(i == 0)
		{
			if(input[i] == '0')
			{
				if(flag == 0)
					printf("─┐ ");
				else
					printf(" └─");
			}
			if(input[i] == '1')
			{
				if(flag == 0)
					printf(" ┌─");
				else
					printf("─┘ ");
			}
		}
		else
		{
			if(input[i-1] == '0')
			{
				if(input[i] == '0')
				{
					if(flag == 0)
						printf("┌─┐ ");
					else
						printf("┘ └─");
						
					
				}
				else
				{
					if(flag == 0)
						printf(" ┌─");
					else
						printf("─┘ ");
					
				}
			}
			if(input[i-1] == '1')
			{
				if(input[i] == '0')
				{
					if(flag == 0)
						printf("─┐ ");
					else
						printf(" └─");
				}
				else
				{
					if(flag == 0)
						printf("┐ ┌─");
					else
						printf("└─┘ ");
						
				}
			}
		}
		if(i == length-1)
		{
			if(flag == 0)
			{
				flag = 1;
				i = -1;
				printf("\n");
			}
			else
				break;
		}
	}
	return 0;
}
	
