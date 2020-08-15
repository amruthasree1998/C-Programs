#include<stdio.h>
#include<string.h>
int main()
	{
		int i,j,flag=1;
		char s[100],c;
		printf("Enter the string: ");
		scanf("%[^\n]s",s);
		for(i=0;s[i]!='\0';i++)
			{
				for(j=i+1;s[j]!='\0';j++)
					{
						if(s[i]==s[j])
							{
								flag=0;
							}
					
							
					}
			if(flag==0)
				{
					printf("%c\n",s[i]);
					break;
				}
				
			}
		return 0;
	}
