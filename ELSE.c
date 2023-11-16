#include<stdio.h>
int main(){
 	int option;
    int num_of_digits;
    int digit;
 	int menu=1;

 	while(menu==1){
 	printf("\n1.initialise an array");
 	printf("\n2.Print the array");
 	printf("\n3.Find the maximum element in the array");
 	printf("\n4.Find the minimum element in the array");
 	printf("\n5.Calculate the sum of all elements in the array");
 	printf("\n6.Calculate the average of all elements in the array");
 	printf("\n7.Search for a specific element in the array");
 	printf("\n8.Exit the program");
 	printf("\nEnter your option: ");
 	scanf("%d",&option);

 	if(option==1){
 	  
 	        printf("Enter the number of digits that you want in the array: ");
 			scanf("%d",&num_of_digits);
 			int array[num_of_digits];
			printf("Enter your integer array: ");
 			for(int i=0;i<num_of_digits;i++){		
 				scanf("%d",&array[i]);
			 }		
 	    
 			 
	 }
	 
	 
 	else if (option==2){
			printf("Enter the number of digits that you want in the array: ");
 			scanf("%d",&num_of_digits);
 			int array[num_of_digits];
			printf("Enter your integer array: ");
 			for(int i=0;i<num_of_digits;i++){		
 				scanf("%d",&array[i]);
 				printf("%d  ",array[i]);
			 }
	 }

 	
	else if(option==3){
	 	printf("Enter the number of digits that you want in the array: ");
 			scanf("%d",&num_of_digits);
 			int array[num_of_digits];
			printf("Enter your integer array: ");
 			for(int i=0;i<num_of_digits;i++){
			 scanf("%d",&array[i]);		 	
			 }
			 int max=0;
			 for(int i=0;i<num_of_digits;i++){
			 	if(array[i]>max){
			 		max=array[i];
				 }
			 }
			 printf("The maximum value is %d",max);		 
	 }
	 
	 
    else if(option==4){
	 	printf("Enter the number of digits that you want in the array: ");
 			scanf("%d",&num_of_digits);
 			int array[num_of_digits];
			printf("Enter your integer array: ");
 			for(int i=0;i<num_of_digits;i++){
			 scanf("%d",&array[i]);		 	
			 }
			 int min=array[0];
			 for(int i=0;i<num_of_digits;i++){
			 	if(array[i]<min){
			 		min=array[i];
				 }
			 }
			 printf("The minimum value is %d",min);	 
	 }
	 
	 
    else if(option==5){
     	int sum=0;
     	printf("Enter the number of digits that you want in the array: ");
 			scanf("%d",&num_of_digits);
 			int array[num_of_digits];
			printf("Enter your integer array: ");
 			for(int i=0;i<num_of_digits;i++){		
 				scanf("%d",&array[i]);
 				 sum+=array[i];
			 }
			 
			 printf("The sum of all elements is: %d",sum);		
	 }
	 
	 
    else if(option==6){
     	int sum=0;
     	printf("Enter the number of digits that you want in the array: ");
 			scanf("%d",&num_of_digits);
 			int array[num_of_digits];
			printf("Enter your integer array: ");
 			for(int i=0;i<num_of_digits;i++){		
 				scanf("%d",&array[i]);
 				 sum+=array[i];
			 }
			 double average=sum/2;
			 
			 printf("The average of your elements is: %.2f",average);		 
	 }
	 
	 
	else if(option==7){
     	printf("Enter the number of digits that you want in the array: ");
 			scanf("%d",&num_of_digits);
 			int array[num_of_digits];
			printf("Enter your integer array: ");
		
 			for(int i=0;i<num_of_digits;i++){		[.]
 				scanf("%d",&array[i]);				 	 
			}
			printf("Which digit do you want to search for: ");
			scanf("%d",&digit);
			for(int i=0;i<num_of_digits;i++){
 				if(digit==array[i]){
 				printf("%d is in your array at position of %d",digit,i+1);
 				return 0;	
				}				
 			}
 			printf("Ooops!! my system cannot find %d from your array",digit);
			}
	else if(option==8){
		printf("The system is closing.... ");
		return 0;
	}
 	else{
 		printf("Ooops! Invalid input!!");
 		return 0;
	 }	
 		
 		
 		printf("\n\n1. Main menu, (0) exit: ");
 		scanf("%d",&menu);
	 }
 	
		
 	return 0;
 }
 
 
 