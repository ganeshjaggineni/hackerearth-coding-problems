/*
You are conducting a contest at your college. This contest consists of two problems and n
 participants. You know the problem that a candidate will solve during the contest.

You provide a balloon to a participant after he or she solves a problem. There are only green and purple-colored balloons available in a market. Each problem must have a balloon associated with it as a prize for solving that specific problem. You can distribute balloons to each participant by performing the following operation:

Use green-colored balloons for the first problem and purple-colored balloons for the second problem
Use purple-colored balloons for the first problem and green-colored balloons for the second problem
You are given the cost of each balloon and problems that each participant solve. Your task is to print the minimum price that you have to pay while purchasing balloons.

Input format

First line: T that denotes the number of test cases (1<=t<=10)
For each test case: 
First line: Cost of green and purple-colored balloons 
Second line: n that denotes the number of participants (1<=n<=10)

Next n lines: Contain the status of users. For example, if the value of the jth integer in the ith row is 0, then it depicts that the ith participant has not solved the jth problem. Similarly, if the value of the jth integer in the ith row is 1, then it depicts that the ith  participant has solved the jth problem.

Output format
For each test case, print the minimum cost that you have to pay to purchase balloons.

SAMPLE INPUT

2
9 6
10
1 1
1 1
0 1
0 0
0 1
0 0
0 1
0 1
1 1
0 0
1 9
10
0 1
0 0
0 0
0 1
1 0
0 1
0 1
0 0
0 1
0 0

SAMPLE OUTPUT

69
14

*/
//CODING

#include<stdio.h>
int main()
{
	int test_cases,green,purple,participants,low_baloon,high_baloon;
	scanf("%d",&test_cases);
	for(int i=0;i<test_cases;i++)
	{
		
		scanf("%d %d",&green,&purple);
		scanf("%d",&participants);
		int prob[participants][2];
		int first_count=0,second_count=0,ans=0;
		for(int j=0;j<participants;j++)
		{
			for(int k=0;k<2;k++)
			{
				scanf("%d",&prob[j][k]);
			}
		}
	
	
	
	 for(int i=0;i<participants;i++)
  {
		if(prob[i][0]==1)
			first_count++;
		
		if(prob[i][1]==1)
			second_count++;
		}
	
	  
	 if(green<purple)
	 {
		low_baloon=green;
		high_baloon=purple;
	 }
	 else if(green>purple)
	 {	
		low_baloon=purple;
		high_baloon=green;
	 }
	 
	 else
	 {
		low_baloon=green;
		high_baloon=green;
	 }
	//  printf("\nlowbaloon%d\thighbaloon%d",low_baloon,high_baloon);
	 if(first_count<second_count)
	 {
		ans=(first_count*high_baloon)+(second_count*low_baloon);
		// printf("\n1 %d",ans);
		
	 }
	 else if(first_count>second_count)
	 {
		ans=(first_count*low_baloon)+(second_count*high_baloon);
		// printf("\n2 %d",ans);
	 }
	 else
	 {
				ans=(first_count*low_baloon)+(second_count*high_baloon);

	 }
	//  printf("\nfirst_count=%d\tsecond_coun=%d",first_count,second_count);
	 printf("%d\n",ans);
    
	}
	return 0;
}
