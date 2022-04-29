#include<stdio.h>
#include<conio.h>
void main()
{
	int ch,n,Burger,Pizza,Juices,Fries,Cupcakes;
	printf("-----------MENU------------------\n");
	printf("1.BURGER\n2.PIZZA\n3.JUICES\n4.FRIES\n5.CUPCAKE\n");
	printf("---------------------------------\n");
	printf("Enter your choice:\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:printf("You selected the item:\n");
		       printf("BURGER\n");
		       printf("Price = 150\n");
               printf("Please select quantity:\n ");
               scanf("%d",&n);
               Burger = 150*n;
               printf("Your bill is %d",Burger);
        break;
        case 2:printf("You selected the item:\n");
		       printf("PIZZA\n");
		       printf("Price = 180\n"); 
			   printf("Please select quantity:\n ");
               scanf("%d",&n);
               Pizza = 180*n;
               printf("Your bill is %d",Pizza);
        break;
        case 3:printf("You selected the item:\n");
		       printf("Juices\n");
		       printf("Price = 110\n");
               printf("Please select quantity:\n ");
               scanf("%d",&n);
               Juices = 110*n;
               printf("Your bill is %d",Juices);
        break;
        case 4:printf("You selected the item:\n");
		       printf("FRIES\n");
		       printf("Price = 90\n");
               printf("Please select quantity:\n ");
               scanf("%d",&n);
               Fries = 90*n;
               printf("Your bill is %d", Fries);
        break;
        case 5:printf("You selected the item:\n");
		       printf("CUPCAKES\n");
		       printf("Price = 50\n");
               printf("Please select quantity:\n ");
               scanf("%d",&n);
               Cupcakes = 50*n;
               printf("Your bill is %d", Cupcakes);
        break;
        default:printf("Invalid Choice\n");
        break;
    }
	
}
