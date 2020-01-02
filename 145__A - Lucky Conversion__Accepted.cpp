#include<cstdio>
main()
{
    int i,s1(0),s2(0);
    char A[100005],B[100005];
    scanf("%s %s",A,B);
    for(i = 0; A[i]!='\0'; i++)
    {
        if(A[i]!=B[i])
        {

            if(A[i]=='4')
                s1++;
            else
                s2++;
        }

    }
    if(s1>s2)
    printf("%d\n",s1);
    else
        printf("%d\n",s2);
    return 0;
}