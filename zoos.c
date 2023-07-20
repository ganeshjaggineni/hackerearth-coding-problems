/*
You are required to enter a word that consists of x and y that denote the number of Zs and Os respectively. The input word is considered similar to word zoo if 2 * x = y.

Determine if the entered word is similar to word zoo.

For example, words such as zzoooo and zzzoooooo are similar to word zoo but not the words such as zzooo and zzzooooo.

Input format

First line: A word that starts with several Zs and continues by several Os.
Note: The maximum length of this word must be 20.
Output format

Print Yes if the input word can be considered as the string zoo otherwise, print No.

Sample Input
zzzoooooo

Sample Output
Yes

*/
//coding

#include <stdio.h>
#include<string.h>

int main(){
	int z_count=0,o_count=0,i;
	char word[20];

	scanf("%s",word);

	for(i=0;i<strlen(word);i++)
	{
		if('z'==word[i])
		{
			z_count++;
		}
		else if('o'==word[i])
		{
			o_count++;
		}
	}
	if(2*z_count==o_count)
	{
		printf("Yes");
	}
	else
	{
		printf("No");
	}
}
