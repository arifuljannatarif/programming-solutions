#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
	int t,i,g;
	char word[105];
	scanf("%d",&t);
	for(i=1;i<=t;i++)
{
	scanf("%s",&word);
	g=strlen(word);
	if(g<=10)
{
	printf("%s\n",word);
	continue;
}
 printf("%c%d%c\n",word[0],g-2,word[g-1]);

}
	
	return 0;
}