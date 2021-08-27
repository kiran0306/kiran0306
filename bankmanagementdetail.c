#include<stdio.h>
#include<conio.h>
int list();
void diposite();
void last();
void transfer();
void withdrow();
void checkdetail();
int totalamount=1000,amount,amo,tr,totaldiposite=0,totalwith=0,totaltransfer=0,totaltr=0,totalwithdrow;
int acc;
char a[50];
void main()
{
	printf("\n enter your name:");
	gets(a);
	printf("\nenter your acc member:");
	scanf("%d",&acc);
while(1)
{
	switch(list())
	{
		case 1: 
		diposite();
		totaldiposite+=amount;
		break;
		case 2:
		 withdrow();
		if(amo<=totalamount)
		totalwith+=amo;
		break;
		case 3:
		 transfer();
		if(tr<=totalamount);
		totaltr+=tr;
		break;
		case 4:
		checkdetail();
		break;
		clrscr();
		case 5: 
		last();
		default:printf("\n invalid choice"); 
		   
	}
	getch();
}
}
int list ()
{
int ch;
printf("\n 1.dipositeamount:");
printf("\n 2.withdrowamount:");
printf("\n 3.transferamount :");
printf("\n 4.checkdetail:");
printf("\n enter your choice: ");
scanf("%d",&ch);
return(ch);
}
void diposite()
{
	printf("\n enter the amount you want to diposite:");
	scanf("%d",&amount);
	totalamount+=amount;
}
void withdrow()
{
	printf("\n enter the amount u wish to withdraw:");
	scanf("%d",&amo);
	if(amo<=totalamount)
	totalamount-=amo;
	else
	 printf("\n less amount withdrow is not possible:");
	 
}
void transfer()
{
	printf("\n enter the amount u want to transfer:");
	scanf("%d",&tr);
	 if(tr<=totalamount)
	 totalamount-=tr;
	else 
	printf("\n less amount transfer is no possibe:");
	
}
void checkdetail()
{
	printf("\n total amount%d",totalamount);
	printf("\n total diposite amount%d",totaldiposite);
	printf("\n total withdrow amount%d",totalwithdrow);
	printf("\n total  transfer amount%d",totaltransfer);
}
void last()
{
	printf("\n enter your name:%s",a);
	printf("\n enter your acc member:%d",acc);
	printf("\n total amount%d",totalamount);
	printf("\n total diposite amount%d",totaldiposite);
	printf("\n total withdrow amount%d",totalwithdrow);
	printf("\n total  transfer amount%d",totaltransfer);
}






























