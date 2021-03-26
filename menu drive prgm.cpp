#include<stdio.h>
#include<conio.h>

int main()
{
	int i, j, prime, n,choice, min=2, max=n;
	int f1=0, f2=1, f3;
	char c='y';
	while(c='y')
	{
		printf("\nFibonacie series-->1 \nPrime number-->2 \n");
		printf(" Enter the choice:");
		scanf("%d", &choice);
		switch(choice)
		
			case 1: 
			         printf(" Enter the number:");
			         scanf("%d", &n);
			         
			         for (i=0; i<=n; i++)
			         {
			         	printf("%d\n", i);
			         	f1=f2;
			         	f2=f3;
					 }printf("\n");
					 break;
					 
			case 2: 
			        printf(" Enter the last number:");
                    	scanf("%d",&n);
	                  printf("\n");
	               for(i=min; i<=n; i++)
	               {
	                      	prime=1;
		                    for(j=min; j<i; j++)
		                    {
		                     	if(i %j==0)
		                        	{
			                        	prime=0;
				                       break;
			                        }
		                   }
		             if(prime)
		                   {
			                 printf(" %d\t",i);
	                     	}		 
	                  	}printf("\n");
	                  	 break;
	                  	 
	                  	
	printf(" Do you go proceed : Y / N ");
	c=getch();
          } 
		  getch();
}
