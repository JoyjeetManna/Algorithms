// Online C compiler to run C program online
#include<stdio.h>
#include<math.h>

int main()
{
  int n,i;
  float l,u,f;
  float sfx=0,sf=0;
  float mean,sd,sum=0;

  printf("Enter the number of classes: ");
  scanf("%d",&n);

  float mid[n], freq[n];

  for(i=0;i<n;i++)
  {
    printf("Enter the lower ,upper ,frequency: ");
    scanf("%f %f %f",&l,&u,&f);

    mid[i]=(l+u)/2;
    freq[i]=f;
    sfx+= mid[i]*freq[i];
    sf+=freq[i];
  }

  mean=sfx/sf;

  for(i=0;i<n;i++)
  {
    sum+=freq[i]*pow((mid[i]-mean),2);
  }

  sd=sqrt(sum/sf);

  printf("\nMean: %.2f",mean);
  printf("\nSD: %.2f",sd);

  return 0;
}
