#include<stdio.h>
int main()
{
     long long int T,M,N,X,Y;
     while(scanf("%lld",&T)==1)
     {
          if(T==0)
            break;
          scanf("%lld%lld",&M,&N);
          while (T++)
          {
              scanf("%lld%lld",&X,&Y);

              if (X==M || Y==N)
               {printf("divisa\n");}
              else if (X>M && Y>N)
               {printf("NE\n");}
           else  if (X<M && Y>N)
                {printf("NO\n");}
           else  if(X<M && Y<N)
                {printf("SO\n");}
            else
                printf("SE\n");
          }
     } return 0;
}
