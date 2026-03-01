#include<stdio.h>
int sum_array();
void find_max_min_array();
void reverse_array();
void find_vowel_consonant();
int two_d_array_sum();
int factorial();
void pelendrom_check();
void prime_number_check();
void shorting_array();
void fibonacchi();
void searching_element_array();

int main()
{
	
	int choice ,  result;
	char option;
	
    do {
       printf("\n\n --------- WELCOME --------\n ");
	   printf("THIS IS MENU DRIVEN PROGRAMME\n");
	
       printf("\n");
	   printf("MENU OPTION  \n");
	   
	   
	

	printf("\n 1.  sum of array \n");
	printf("\n 2.  maximum & minimum in array \n");
	printf("\n 3.  reverse array \n");
	printf("\n 4.  vowel & consonant count in string \n");
	printf("\n 5.  2d array sum \n");
	printf("\n 6.  factorial of number \n");
	printf("\n 7.  pelindrom check (number and string) \n");
	printf("\n 8.  prime number check \n");
	printf("\n 9.  shorting an array(assending or desending) \n");
	printf("\n 10. fibonacci series \n");
	printf("\n 11. searching in array \n");
	printf("\n 12. exit \n");
	
	printf("\n");
	
	printf("ENTER YOUR CHOICE OPTION FROM MENU : ");
	scanf("%d", &choice);
	
	if(choice < 1 || choice > 12)
	{
		printf("invallid input please enter 1 to 12 number from this menu !");
		continue;
	}
	
	
	printf("\n");
	
	switch(choice)
	{
		case 1 :  sum_array();  
		break;
		
		case 2 : find_max_min_array();
		break;
		
		case 3 :  reverse_array();
		break;
		
		case 4 : find_vowel_consonant();
		break;
		
		case 5 : two_d_array_sum();
		break;
		
		case 6 :  factorial();
		break;
		
		case 7 :  pelendrom_check();
		break;
		
		case 8 :  prime_number_check();
		break;
		
		case 9 : shorting_array();
		break;
		
		case 10  : fibonacchi();
		break;
		
		case 11 : searching_element_array();
		break;
		
		case 12 : printf("existing programme... \n");
		break;
		
		default : printf("invalid choice ! please try again .. ");

	}	
	
	 if( choice != 12)
		{
		   printf("\n\n do you want choose other option ? (y / n) : ");
		   scanf(" %c", &option);
		}
		
	
	
	} while(option == 'Y' || option == 'y');
	
       printf("Program ended.\n");
    
	return 0;
}
int sum_array(){
 
   int n  , sum = 0;
  printf(" enter size of an arrray : ");
  scanf("%d", &n);
  
  int arr[n];
  
  printf("enter %d elements of an array : \n", n);
  for(int i = 0 ; i < n ; i++)
  {
  	scanf("%d", &arr[i]);
  	sum = sum + arr[i];
  }
  
  
  printf("sum of an array element : %d", sum);
  return sum;
}
void find_max_min_array()
{
	int n;
	printf("enter size of an array : ");
	scanf("%d", &n);
	
	int  arr[n];
	
	printf("enter elements of an array : \n");
	for(int i = 0; i < n ; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	 int min = arr[0];
	 int max = arr[0];
	
	for(int i = 0 ; i < n ; i++)
	{
		if(arr[i] > max)
		{
			max = arr[i];
		}
		
		if(arr[i] < min)
		{
			min = arr[i];
		}
	}
	
	printf("largest element : %d " , max);
	printf("smallest element : %d", min);
	
}
void reverse_array()
{
	int n;
	printf("enter index of an array : ");
	scanf("%d", &n);
	
	int arr[n];
	
	printf("enter elements of an array : \n");
	for(int i = 0; i < n ; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	for(int i = 0 ; i < n/2 ; i++)
	{
		int temp = arr[i];
		arr[i] = arr[n - i - 1];
		arr[n - i - 1] = temp;
	}
	
	printf("reverse an array \n");
	for(int i = 0; i < n ; i++)
	{
		printf("%d ", arr[i]);
	}
}
void find_vowel_consonant()
{

 char str[200];
 int vowel = 0 , consonant = 0;
 
 printf("enter a string : ");
 
 getchar();
 
 fgets(str , 200 , stdin);
 
 for(int i = 0 ; str[i] != '\0' ;i++)
{
	
	char ch  = str[i];
 	if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
 {
 	if((ch == 'a' || ch =='A')||
	   (ch == 'e' || ch =='E')|| 
	   (ch == 'i' || ch == 'I')||
	   (ch == 'o' || ch =='O')||
	   (ch == 'u' || ch == 'U'))
	   
	   vowel++;
  else 
 	
 	consonant++;
 
 
 }

 }
 
 printf("number of vowels in string : %d\n", vowel);
 printf("number of consonant in string : %d", consonant);
 

}
int two_d_array_sum()
{
	int row , colm , sum = 0;
	
	printf("enter row of array : ");
	scanf("%d", &row);
	
	printf("enter column of array : ");
	scanf("%d", &colm);
	
	int arr[row][colm];
	
	for(int i = 0 ; i < row ; i++)
	{
		for(int j = 0 ; j < colm ; j++)
		{
			printf("enter element of array [%d][%d] : ", i , j);
			scanf("%d", &arr[i][j]);
			
		}
	}
	
	for(int i = 0; i < row ; i++)
	{
		for(int j = 0 ; j < colm ; j++)
		{
			printf("%d ", arr[i][j]);
			sum = sum + arr[i][j];
		}
		
		printf("\n");
	}
	 
	
	printf("sum of 2d array is : %d ", sum);
	return sum;
	
}
int factorial()
{
	int num ;
	
	printf("enter number for calculate fectorial : ");
	scanf("%d", &num);
	
	int fect = 1;
	
	for(int i =  1 ; i <= num ; i ++)
	{
		fect *= i;
	}
	 
	 printf("%d fectorial is : %d", num , fect);
	 return fect;

}
void pelendrom_check()
{
	
  while(1)
  {
  	
  	int choice;
    printf("enter your choice what  u want check (1 . string pelendrom check / 2 . number pelendrom check) : ");
    scanf("%d", &choice);
    
    if(choice == 1 )
  {
			
	char str[100];
    int len = 0 , i = 0 , flag = 1;
			
	printf("enter  string : ");
		
	getchar();
		         
	fgets(str , 100 , stdin);
		         
	while(str[i] != '\0')
    {
	  if(str[i] == '\n')     // for remove newline
	  {
		str[i] = '\0';
	  }				 
	 i++;
	}
				 
      i = 0;
		         
	while(str[i] != '\0')
   {
	 len++; 
	  i++;     // lenth count
	}
		         
		         
	int start = 0;
	int end = len - 1;
		         
	while(start < end)
	{
	  if (str[start] != str[end])
	{
	  flag = 0;
	  break;
	}
					 
	 start++;
	 end--;
	}
				 
	if(flag)
	{
	  printf("given string is pelendrom ");
	}
	else
    	{
				 	
	       printf("given string is not pelendrom ");
	    }
	    
	    break;
			
	}
	else if(choice == 2)
	{
      int num , reverse = 0;
			
	  printf("enter number : ");
	  scanf("%d", &num);
		         
	   int original = num;
		         
	   while(num > 0)
	  {
		int digit =  num % 10;
		reverse = reverse * 10 + digit;
		num = num /10;
	   }
		         
	 if(original == reverse)
	 {
		printf("given number is pelendrom number ");
	}
	else 
	{	
	printf("given number is not pelendrom number ");
    }
				 
	 break;
		        
	}
	
	else{
		
		printf("invalid input ! please enter 1 or 2 from this menu \n\n");
	 }
   }   	
}
void prime_number_check()
{
	
	int num , count = 0;
	
	printf("enter number : ");
	scanf("%d", &num);
	
	for(int i = 1 ; i <= num ; i++)
	{
		if(num % i == 0)
		{
			count++;
		}
	}
	
	if(count == 2)
	{
		printf("given number is prime number");
	}
	else {
		
		printf("given number is not prime number");
	}
	
}
void shorting_array()
{

  while (1)
  {
  	int choice;
  	
  	printf("enter 1 for array short assending order / enter 2 for short desending order :  ");
  	scanf("%d", &choice);
  	
  	if (choice == 1)
  {
  
  	  int n;
	
	 printf("enter size of an  array : ");
	 scanf("%d" , &n);
	
     int arr[n];
	
	 printf("\nenter element of an array : \n");
	 for(int i =  0 ; i < n ; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	for(int i =  0 ; i < n ; i++)
	{
		for(int j = i + 1 ; j < n ; j++)
		{
			if (arr[i] > arr[j])
			{
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	
	    printf("assending order of array\n ");
	
	    for(int i = 0;  i < n ; i++)
	    {
	    	printf("%d ", arr[i]);
		}
  		
  		break;
	}
	
	else if(choice == 2)
	{
	  int n;
	
	  printf("enter size of an  array : ");
	  scanf("%d" , &n);
	
      int arr[n];
	
	  printf("\nenter element of an array : \n");
	  for(int i =  0 ; i < n ; i++)
	 {
		scanf("%d", &arr[i]);
	 }
	
	 for(int i =  0 ; i < n ; i++)
	 {
		for(int j = i + 1 ; j < n ; j++)
		{
			if (arr[i] < arr[j])
			{
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	
	    printf("desending order of array\n ");
	
	    for(int i = 0;  i < n ; i++)
	    {
	    	printf("%d ", arr[i]);
		}
  		
  		break;
	   }
	     else
	   {
	   	  printf("\ninvalid input ! please enter 1 or  2 for shorting an array\n\n ");
	   }
	}
}
void fibonacchi()
{
	
	int t1 = 0  , t2 = 1 , next;
	int n;
	
	printf("enter term of fibonacchi series : ");
	scanf("%d", &n);
	
    for(int i = 1; i <= n ; i++)
    {
    	printf("%d ", t1);
    	next = t1 + t2;
    	t1 = t2;
    	t2 = next;
    		
	}

}
void searching_element_array()
{
	int n , key , found = 0;
	printf("enter size of an array : ");
	scanf("%d", &n);
	
	int arr[n];
	
	printf("enter %d element of an array: \n", n);
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	printf("enter element to search: ");
	scanf("%d", &key);
	
	for(int i = 0; i < n; i ++)
	{
		if(arr[i] == key)
		{
			printf("element of %d found at position :  %d\n ", key , i + 1);
			return;
		
		}
	}
	
	printf("element not found \n");
	
}

