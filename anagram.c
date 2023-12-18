#include<stdio.h>
int main()
{
	char s[] = "anagram";
	char t[] = "nagaram";
	int frqs[26] = {0};
	int frqt[26] = {0};
	for(int i =0;s[i]!=0;i++)
	{
		frqs[s[i]-'a']++;
	}
	for(int i=0;t[i]!=0;i++)
	{
		frqt[t[i]-'a']++;
	}
	if(frqs==frqt)
	{
		printf("TRUE");
	}
	else
	{
		printf("FALSE");
	}
}
	