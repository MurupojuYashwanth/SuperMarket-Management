
//Super market Billing System 
#include<stdio.h>
#include<string.h>
#include<time.h>
int price = 0;
int bill[10];
char name[20][20];
float q[10];
float i = 0;
int length[10];
int k=1,j,x;
int meat(int k);
FILE *f,*f1;
struct smarket
{
	char c_name[30];
	unsigned long long int phno;
}sm;
main()
{
	struct smarket sm;
	time_t t;
    time(&t);
	int choice;
	system("cls");
	printf("\n====================================================");	
	printf("\n                   SR SUPER MARKET                    ");
	printf("\n====================================================");
	printf("\n\n     1 %c Vegetables and Fruits ",16);
	printf("\n\n     2 %c Dairy ",16);
	printf("\n\n     3 %c Meat ",16);
	printf("\n====================================================");
	printf("\n\nEnter Your Choice : ");
	scanf("%d",&choice);
	switch(choice)
	{

case 1: 	system("cls");
	printf("\n====================================================");	
	printf("\n               VEGETABLES AND FRUITS                    ");	
	printf("\n====================================================");
	printf("\n\n     1 %c Tomatoes      ======  60rs/kg ",16);
	printf("\n\n     2 %c Potatoes      ======  30rs/kg ",16);
	printf("\n\n     3 %c Brinjal       ======  40rs/kg ",16);
	printf("\n\n     4 %c Cabbage       ======  50rs/kg ",16);
	printf("\n\n     5 %c Bottlegourd   ======  30rs/kg ",16);
	printf("\n\n     6 %c Carrot        ======  80rs/kg ",16);
	printf("\n\n     7 %c Lady's Finger ======  70rs/kg ",16);
	printf("\n\n     8 %c Banana        ======  50rs/Dzn",16);
	printf("\n\n     9 %c Apples        ======  100rs/kg",16);
	printf("\n\n     10 %c Mango        ======  100rs/kg",16);
	printf("\n\n     11 %c Papaya       ======  50rs/kg ",16);
	printf("\n\n     12 %c DragonFruit  ======  100rs/kg",16);
	printf("\n\n     13 %c Avacado      ======  100rs/kg",16);
	printf("\n\n     14 %c Fig          ======  200rs/kg",16);
	printf("\n\n     15 %c Grapes       ======  100rs/kg",16);
	printf("\n\n     16 %c WaterMelon   ======  100rs/kg",16);
	printf("\n\n     17 %c Back     ",16);
	printf("\n\n     Enter Your Choice : ");
	scanf("%d",&choice);
	if(choice == 17)
	{
		main();	
	}
	printf("\n\n     Enter Quantity : ");
	scanf("%f",&i);
	


switch(choice)
		{
			
	case 1: price += 60*i;
			bill[k]=60*i;
			q[k]=i;
			strcpy(name[k],"Tomatoes");
			break;
						
			
case 2: price += 30*i;
			bill[k]=30*i;
			q[k]=i;
			strcpy(name[k],"Potatoes");
			break;
								
			case 3: price += 40*i;
			bill[k]=40*i;
			q[k]=i;
			strcpy(name[k],"Brinjal");
			break;
			
			case 4: price += 50*i;
			bill[k]=50*i;
			q[k]=i;
			strcpy(name[k],"Cabbage");
			break;
			
			case 5: price += 30*i;
			bill[k]=30*i;
			q[k]=i;
			strcpy(name[k],"Bottlegourd");
			break;
			
			case 6: price += 80*i;
			bill[k]=80*i;
			q[k]=i;
			strcpy(name[k],"Carrot");
			break;
			
			case 7: price += 70*i;
			bill[k]=70*i;
			q[k]=i;
			strcpy(name[k],"Lady's Finger");
			break;
							
			case 8: price += 50*i;
			bill[k]=50*i;
			q[k]=i;
			strcpy(name[k],"Banana");
			break;
								
			case 9: price += 100*i;
			bill[k]=100*i;
			q[k]=i;
			strcpy(name[k],"Apples"); 
			break;
			
			case 10: price += 100*i;
			bill[k]=100*i;
			q[k]=i;
			strcpy(name[k],"Mango");
			break;
			
			case 11: price += 50*i;
			bill[k]=50*i;
			q[k]=i;
			strcpy(name[k],"Papaya");
			break;
			
			case 12: price += 100*i;
			bill[k]=100*i;
			q[k]=i;
			strcpy(name[k],"DragonFruit");
			break;
			
			case 13: price += 100*i;
			bill[k]=100*i;
			q[k]=i;
			strcpy(name[k],"Avacado");
			break;
			
			case 14: price += 200*i;
			bill[k]=200*i;
			q[k]=i;
			strcpy(name[k],"Fig");
			break;
			
			case 15: price += 100*i;
			bill[k]=100*i;
			q[k]=i;
			strcpy(name[k],"Grapes");
			break;
			
			case 16: price += 100*i;
			bill[k]=100*i;
			q[k]=i;
			strcpy(name[k],"WaterMelon");
			break;
								
			case 17: main();
						
	            }
	break;
				
	
				
case 2: 	
	
 	system("cls");
	printf("\n====================================================");	
	printf("\n                      DAIRY                    ");
	printf("\n====================================================");
	printf("\n\n     1 %c Milk         ======  75rs/ltr ",16);
	printf("\n\n     2 %c Curd         ======  90rs/kg ",16);
	printf("\n\n     3 %c Ghee         ======  500rs/kg ",16);

	printf("\n\n     4 %c Butter       ======  100rs/250g ",16);
	printf("\n\n     5 %c Paneer       ======  150rs/kg ",16);
	printf("\n\n     6 %c Cheese       ======  110rs/kg ",16);
	printf("\n\n     7 %c Fresh Cream  ======  80rs/kg ",16);
	printf("\n\n     8 %c ButterScotch ======  400rs/kg ",16);
	printf("\n\n     9 %c Vanilla      ======  350rs/kg ",16);
	printf("\n\n     10 %c Chocolate   ======  450rs/kg ",16);
	printf("\n\n     11 %c Pista       ======  380rs/kg ",16);
	printf("\n\n     12 %c Back     ",16);
	printf("\n\n     Enter Your Choice : ");
	scanf("%d",&choice);
	
if(choice == 12)
	{
		main();	
	}
	printf("\n\n     Enter Quantity : ");
	scanf("%f",&i);
					
	switch(choice)
	{
		

case 1: price += 75*i;
		bill[k]=75*i;

		q[k]=i;
		strcpy(name[k],"Milk");
		break;
						
		case 2: price += 90*i;
		bill[k]=90*i;
		q[k]=i;
		strcpy(name[k],"Curd");
		break;
								
		case 3: price += 500*i;
		bill[k]=500*i;
		q[k]=i;
		strcpy(name[k],"Ghee");
		break;
														
		case 4: price += 100*i;
		bill[k]=100*i;
		q[k]=i;
		strcpy(name[k],"Butter");
		break;
		
		case 5: price += 150*i;
		bill[k]=150*i;
		q[k]=i;
		strcpy(name[k],"Paneer");
		break;
		
		case 6: price += 110*i;
		bill[k]=110*i;
		q[k]=i;
		strcpy(name[k],"Cheese");
		break;
		
		case 7: price += 80*i;
		bill[k]=80*i;
		q[k]=i;
		strcpy(name[k],"Fresh Cream");
		break;
		
		case 8: price += 400*i;
		bill[k]=400*i;
		q[k]=i;
		strcpy(name[k],"ButterScotch");
		break;
		
		case 9: price += 350*i;
		bill[k]=350*i;
		q[k]=i;
		strcpy(name[k],"Vanilla");
		break;
		
		case 10: price += 450*i;
		bill[k]=450*i;
		q[k]=i;
		strcpy(name[k],"Chocolate");
		break;
		
		case 11: price += 380*i;
		bill[k]=380*i;
		q[k]=i;
		strcpy(name[k],"Pista");
		break;
								
		case 12: main();
						
		} //switch
		break;
	
					
	case 3: 
	
system("cls");
						

meat(k);


break;
}
	
	printf("\n\n     1 %c Continue shopping ",16);
	printf("\n\n     2 %c Return Bill ",16);




	scanf("%d",&choice);
	
	


if(choice ==1)
	{	k++;
		main();
	}
	


else
		{
		f=fopen("yash_supermarket.txt","a");	
		system("cls");
		printf("Enter Customer Name : ");
		fscanf(stdin,"%s",sm.c_name);
		fprintf(f,"%s\n",sm.c_name);
		printf("Enter Mobile Number: ");
		fscanf(stdin,"%llu",&sm.phno);
		fprintf(f,"%llu\n",sm.phno);
		system("cls");
		
		for(j=1;j<=k;j++)
		{
			length[j] = strlen(name[j]);
		}
		fprintf(f,"---------------------------------------------------------------------------------\n");
		fprintf(f,"                           SR SUPERMARKET\n");
		fprintf(f,"                            Jubilee Hills\n");
		fprintf(f,"                             Yash Pvt Ltd\n");
		fprintf(f,"              ROAD N0:14 Jubilee Hills,Hyderabad,Telangana - 500033\n");
		fprintf(f,"---------------------------------------------------------------------------------");
		fprintf(f,"\nCustomer Name : %s                       Mobile Number :%llu\n",sm.c_name,sm.phno);
		fprintf(f,"\n--------------------------------------------------------------------------------\n");
		fprintf(f,"%s", ctime(&t));
		fprintf(f,"                                                                         Cashier");
		fprintf(f,"\n--------------------------------------------------------------------------------\n");
		fprintf(f,"\nDescription                      Quantity                            Price   ");
		fprintf(f,"\n--------------------------------------------------------------------------------");
		for(j=1;j<=k;j++)
		{
		fprintf(f,"\n\n%d.%s                   %*f kg/ltr                          Rs.%d.00",j,name[j],20-length[j],q[j],bill[j]);
		}
		fprintf(f,"\n--------------------------------------------------------------------------------");
		fprintf(f,"\nYour Total Payable Amount is :                                         Rs.%d.00",price);
		fprintf(f,"\n--------------------------------------------------------------------------------\n");
		fprintf(f,"                          GST No    : 33D3TREYGUG8\n");
		fprintf(f,"                          CIN No    : UE723TIUDWEBCIHIUH\n");
		fprintf(f,"                          FSSAI No  : 7682349237938263963896\n");
		fprintf(f,"                          VAT No    : 385744484897793\n");
		fprintf(f,"                          SAC       : 677648\n");
		fprintf(f,"\tReg Office Address:SR Nivas,Besides HP Petrol Pump,\n\tIndira Nagar,Gachibowli,Telanagana - 500032\n");
		fprintf(f,"*******************************************************************************\n");
		fprintf(f,"                          Thank You..Visit Again %c\n",2);
		fprintf(f,"-------------------------------------------------------------------------------\n");
		fprintf(f,"%c\t%c\t%c\t%c\t%c\t%c\t%c\t%c\n",2,3,4,5,6,120,112,9);
		fprintf(f,"-------------------------------------------------------------------------------\n");
		fprintf(f,"-------------------------------------------------------------------------------\n");
		fprintf(f,"-------------------------------------------------------------------------------\n");
		
		
		
		fclose(f);
		
		
		printf("BILL\n");
		
		printf("Customer Name : ");
		printf("%s\n",sm.c_name);
		printf("Mobile Number: ");
		printf("%llu\n",sm.phno);
		system("cls");
		
		for(j=1;j<=k;j++)
		{
			length[j] = strlen(name[j]);
		}
		printf("---------------------------------------------------------------------------------\n");
		printf("                           SR SUPERMARKET\n");
		printf("                            Jubilee Hills\n");
		printf("                             Yash Pvt Ltd\n");
		printf("              ROAD N0:14 Jubilee Hills,Hyderabad,Telangana - 500033\n");
		printf("---------------------------------------------------------------------------------");
		printf("\nCustomer Name : %s                   Mobile Number :%llu\n",sm.c_name,sm.phno);
		printf("\n--------------------------------------------------------------------------------\n");
		printf("%s", ctime(&t));
		printf("                                                                         Cashier");
		printf("\n--------------------------------------------------------------------------------\n");
		printf("\nDescription                      Quantity                            Price   ");
		printf("\n--------------------------------------------------------------------------------");
		for(j=1;j<=k;j++)
		{
		printf("\n\n%d.%s                   %*f kg/ltr                        Rs.%d.00",j,name[j],20-length[j],q[j],bill[j]);
		}
		printf("\n--------------------------------------------------------------------------------");
		printf("\nYour Total Payable Amount is :                                         Rs.%d.00",price);
		printf("\n--------------------------------------------------------------------------------\n");
		printf("                          GST No    : 33D3TREYGUG8\n");
		printf("                          CIN No    : UE723TIUDWEBCIHIUH\n");
		printf("                          FSSAI No  : 7682349237938263963896\n");
		printf("                          VAT No    : 385744484897793\n");
		printf("                          SAC       : 677648\n");
		printf("\tReg Office Address:SR Nivas,Besides HP Petrol Pump,\n\tIndira Nagar,Gachibowli,Telanagana - 500032\n");
		printf("*******************************************************************************\n");
		printf("                          Thank You..Visit Again %c\n",2);
		printf("-------------------------------------------------------------------------------\n");
		printf("%c\t%c\t%c\t%c\t%c\t%c\t%c\t%c\n",2,3,4,5,6,120,2,3);
		printf("-------------------------------------------------------------------------------\n");
}

}//for loop
int meat(int k)
{
	int choice,i;
	printf("\n====================================================");	
	
	printf("\n                       MEAT                         ");
	printf("\n====================================================");
	

	printf("\n\n     1 %c Frozen Chicken  ======  250rs/kg ",16);
	printf("\n\n     2 %c Frozen Mutton   ======  500rs/kg ",16);
	printf("\n\n     3 %c Frozen Fish     ======  300rs/kg ",16);
	printf("\n\n     4 %c Egg             ======  7rs/egg ",16);
	printf("\n\n     5 %c Prawns          ======  350rs/kg ",16);
	printf("\n\n     6 %c Shrimp          ======  400rs/kg ",16);
	printf("\n\n     7 %c Back     ",16);
	printf("\n\n     Enter Your Choice : ");
	scanf("%d",&choice);
	if(choice == 7)
	{
		main();	
	}
	printf("\n\n     Enter Quantity : ");
	scanf("%f",&i);
	switch(choice)
	{
		case 1: price += 250*i;
			bill[k]=250*i;
			q[k]=i;
			strcpy(name[k],"Chicken");
			break;
							
		

		case 2: price += 500*i;
			bill[k]=500*i;
			q[k]=i;
			strcpy(name[k],"Mutton");
			break;
									
		case 3: price += 500*i;
			bill[k]=500*i;
			q[k]=i;
			strcpy(name[k],"Fish");
			break;
		
		case 4: price += 7*i;
			bill[k]=7*i;
			q[k]=i;
			strcpy(name[k],"Egg");
			break;
			
		case 5: price += 350*i;
			bill[k]=350*i;
			q[k]=i;
			strcpy(name[k],"Prawns");
			break;
			
		case 6: price += 400*i;
			bill[k]=400*i;
			q[k]=i;
			strcpy(name[k],"Shrimp");
			break;
									
		case 7: main();
			break;				
		}
		
}

