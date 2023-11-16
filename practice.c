#include<stdio.h>
int main(){
    const float ADULT_RATE= 40000.0;
    const float CHILD_RATE=20000.0;
    const float SENIOR_RATE= 30000.0;
    int choice;
    int months;
    float charges;
    printf('Health Club Membership Menu\n');
    printf('1.Standard Adult Membership\n');
    printf("2.Child Membership\n");
    printf("3.Senior Citizen Membershio\n");
    printf("4.Quit the program\n");

    printf("Enter name of choice:");
    scanf("%d",&choice);

    if(choice==1){
        printf("\nFor how many months?");
        scanf("%d",&months);
        charges=months*ADULT_RATE;
        printf("The total charges are UGX%f",charges);
        }else if(choice==2)
        {
            printf("\nFor how many months?");
            scanf("%d",&months);
            charges=months*CHILD_RATE;
        }else if(choice==3){
            printf("For how many months?");
            scanf("%f",&months);
            charges=months*SENIOR_RATE;
            printf("The total charges are UGX%f",charges);

        }else if(choice !=4){
            printf("The valid choices are 1 through 4.Run the\n program again and select one of those.\n");

        }
        return 0;



}