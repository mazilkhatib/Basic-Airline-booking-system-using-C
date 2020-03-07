#include<stdio.h>
#include<conio.h>
int main()
{
    int ch,age,mob_no,flight_details,book,seat_no, a_no,a;
    char name_p[50],location[50],n[50],date[20];
    printf("Enter your choice:\n1.Admin\n2.Passenger\n");
    scanf("%d",&ch);
    printf("your choice is %d",ch);
    switch (ch)
    {
        case 1:
	        printf("flight details:\n");
	        printf("Enter your choice :\n 1.Pilot name\n2.Flight number\n");
	        scanf("%d",& flight_details);
	        printf("%d is your choice\n",flight_details);
	        switch (flight_details)
	        {
	            case 1:
		            printf("Enter pilot name : \n");
		            scanf("%s",&n);
		            printf("%s",n);
		            break;
	            case 2:
		            printf("Enter aeroplane number:\n");
		            scanf("%d",&a_no);
		            printf("%d",a_no);
		            break;
	            default:
	            	printf("Your choice is not valid\n");
	        }
	        break;
        case 2:
        	printf("\nEnter location:from where to where\n");
	        scanf("%s",&location);
	        printf("\nPassenger details:\n");
	        printf("\nEnter your name:\n");
	        scanf("%s",&name_p);
	        printf("%s",name_p);
	        printf("\nEnter your mobile number:\n");
	        scanf("%d",&mob_no);
	        printf("%d",mob_no);
	        printf("\nEnter your age:\n");
	        scanf("%d",&age);
	        printf("%d",age);
	        printf("\nEnter date when will you flight\n");
	        scanf("%s",&date);
	        printf("%s",date);

	      
	        
			printf("Enter your choice:\n1.Ticket booking\n2.Ticket cancle\n");
	        scanf("%d",&book);
	        switch(book)
	        {
	            printf("Booking details:\n");
	            case 1:
		            printf("For booking the ticket:\n");
		          	if(a!=seat_no)
	           	    { 
					   printf("Choose seat number\n");
		               scanf("%d",&seat_no);
		               printf("%d\n",seat_no);
	                }
		            else
		            {
		                printf("seat is already booked");
		            }
		            printf("If you can book the ticket press enter key\n");
		            break;
	            case 2:
		            printf("Booking cancle\n");
		            printf("Enter your name:\n");
		            scanf("%s",&name_p);
		            printf("%s\n",name_p);
		            printf("Enter your mobile number\n");
		            scanf("%d",&mob_no);
		            printf("To cancle ticket press enter key\n");
		            break;
	            default:
	            	printf("Not valid\n");
             }
             break;
        default:
      		printf("Not valid\n");
        }
    getch();
    return 0;
}