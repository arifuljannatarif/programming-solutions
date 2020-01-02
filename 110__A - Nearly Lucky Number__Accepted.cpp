s=input()
n=int(s.count('4'))+int(s.count('7'))
if n==4 or n==7: print('YES')
else: print('NO')s=input()
cnt=int(0)
for i in range(0,len(s)):
    if s[i]=='4' or s[i]=='7':
        cnt+=1
if cnt==4 or cnt==7: print('YES')
else: print('NO')#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
	int a, g, i, count = 0;
	char x[19];
	scanf("%s", &x);
	g = strlen(x);


		for (i = 0; i <= g; i++)
		{
			if (x[i] == '4' || x[i] == '7')
			{
				count++;
			}

		}

	
	if (count == 7 || count== 4)
		printf("YES\n");
	else
		printf("NO\n");
		return 0;


}