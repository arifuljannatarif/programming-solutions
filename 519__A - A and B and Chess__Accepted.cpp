#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[8][8];
    int b=0,w=0;
    for(int i=0; i<8; i++)
    {
        for(int j=0; j<8; j++)
        {
            scanf(" %c",&a[i][j]);
               switch(a[i][j])
                {
                    case 'q':b+=9;break;
                    case 'r':b+=5;break;
                    case 'b':b+=3;break;
                    case 'n':b+=3;break;
                    case 'p':b+=1;break;


                    case 'Q':w+=9;break;
                    case 'R':w+=5;break;
                    case 'B':w+=3;break;
                    case 'N':w+=3;break;
                    case 'P':w+=1;break;
                }


        }
    }
    if(w>b)
    printf("White\n");
    else if(w<b)
    printf("Black\n");
    else
        printf("Draw\n");
    return 0;
}