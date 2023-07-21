/*
You have been given a String S. You need to find and print whether this string is a palindrome or not. If yes, print "YES" (without quotes), else print "NO" (without quotes).

Input Format
The first and only line of input contains the String S. The String shall consist of lowercase English alphabets only.

Output Format
Print the required answer on a single line.

Constraints 1<=|s|<=100

Note
String S consists of lowercase English Alphabets only.

Sample Input

aba
Sample Output

YES
*/
//OUTPUT

#include <stdio.h>
#include<string.h>
int main()
{
	char str[100],rev_str[100];
	int i=0,len=0,j=0,valid=0;
	scanf("%s",str);
	len=strlen(str);
	//reversing the string
	j=0;
	for(i=len-1;i>=0;i--)
	{
		rev_str[j]=str[i];
		j++;
	}
	for(i=0;i<len;i++)
	{
		if(str[i]==rev_str[i])
		{
			valid=1;
		}
		else
		{
			valid=0;
			break;
		}

	}
	if(valid==1)
	{
		printf("YES");
	}
	else
		printf("NO");
	return 0;
}