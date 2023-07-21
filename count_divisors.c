/*
You have been given 3 integers - l, r and k. Find how many numbers between l and r (both inclusive) are divisible by k. You do not need to print these numbers, you just have to find their count.

Input Format
The first and only line of input contains 3 space separated integers l, r and k.

Output Format
Print the required answer on a single line.

Constraints
1<=l<=r<=1000
1<=k<=1000

Sample Input
1 10 1
Sample Output
10

*/
//program

#include<stdio.h>
int main()
{
	int num1_l,num2_r,num3_k,count=0,i;
	scanf("%d%d%d",&num1_l,&num2_r,&num3_k);
	for(i=num1_l;i<=num2_r;i++)
	{
		if(i%num3_k == 0)
		{
			count++;
		}
	}
	printf("%d",count);
	return 0;
}