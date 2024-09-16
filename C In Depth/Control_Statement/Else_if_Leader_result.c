#include<stdio.h>
int main(void){
    int m1,m2,m3,m4,total;
    char grade;
    float per;
    printf("Enter the marks of 4 subj : ");
    scanf("%d%d%d%d",&m1,&m2,&m3,&m4);
    total=m1=m2+m3+m4;
    per=total/4;
    
    if (per>=85)
    {
        grade='A';
    }
    else if (per>=70)
    {
        grade='B';
    }
      else if (per>=55)
    {
        grade='C';
    }
      else if (per>=40)
    {
        grade='D';
    }
      else
    {
        grade='E';
    }
    
    printf("Total=%d,Percentage=%f,Grade=%c",total,per,grade);
    return 0;
    
}