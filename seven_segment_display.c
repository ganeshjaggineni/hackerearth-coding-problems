/*
Alice got a number written in seven segment format where each segment was creatted used a matchstick.

Example: If Alice gets a number 123 so basically Alice used 12 matchsticks for this number.

Alice is wondering what is the numerically largest value that she can generate by using at most the matchsticks that she currently possess.Help Alice out by telling her that number.

 

Input Format:

First line contains T (test cases).

Next T lines contain a Number N.

Output Format:

Print the largest possible number numerically that can be generated using at max that many number of matchsticks which was used to generate N.

Constraints:
1<=T<=100
1<=length(N)<=100


Sample Input
2
1
0
Sample Output
1
111

Explanation
If you have 1 as your number that means you have 2 match sticks.You can generate 1 using this.

If you have 0 as your number that means you have 6 match sticks.You can generate 111 using this.
*/
//CODING
#include<stdio.h>
#include<string.h>
int main()
{
	int test_cases,sum=0,rem=0;
	char num[1000];
	scanf("%d",&test_cases);
	for(int i=0;i<test_cases;i++)//to run all test cases
	{
		sum=0;
		scanf("%s",num);
		int len=strlen(num);//to run loop throughout the number 
		for(int j=0;j<len;j++)
		{
		if(num[j]=='0')//counting segement matchsticks to represen number
			sum=sum+6;
		else if(num[j]=='1')
			sum=sum+2;
		else if(num[j]=='2')
			sum=sum+5;
		else if(num[j]=='3')
			sum=sum+5;
		else if(num[j]=='4')
			sum=sum+4;
		else if(num[j]=='5')
			sum=sum+5;
		else if(num[j]=='6')
			sum=sum+6;
		else if(num[j]=='7')
			sum=sum+3;
		else if(num[j]=='8')
			sum=sum+7;
		else if(num[j]=='9')
			sum=sum+6;
		
		}
	//to get larger number we choose larger length digit it is possible only by selecting a number which required  smallest no.of matchsticks
	//1 requires 2 which is smalles by using 1 we get highest length
	//7 is next smallest which requires 3 matchsticks
		
		if(sum%2==0)//ex:123 sum = 12 ;;small matchstick=2 by digit 1 2*6matchsticks=12  
		{
			for(int i=1;i<=sum/2;i++)
			{
				printf("%d",1);
			}
			printf("\n");
		}
		else if(sum%2!=0)
		{
			printf("%d",7);
			for(int i=1;i<=(sum-3)/2;i++)
			{
				printf("%d",1);
			}
			printf("\n");
		}
	}
	return 0;
}