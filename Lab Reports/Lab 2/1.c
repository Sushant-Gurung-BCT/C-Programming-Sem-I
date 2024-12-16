#include <stdio.h>
int main(){
    char name[20];
    int rollno,sub1,sub2,sub3,sub4,sub5;
    float percentage;
    printf("Enter name and roll number: ");
    scanf("%s %d",name,&rollno);
    printf("Enter marks obtained in 5 different subjects: ");
    scanf("%d%d%d%d%d",&sub1,&sub2,&sub3,&sub4,&sub5);
    percentage=(sub1+sub2+sub3+sub4+sub5)/5;
    printf("\nThe percentage obtained by %s is %.2f",name,percentage);
    return 0;
}