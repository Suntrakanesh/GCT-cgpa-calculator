#include <stdio.h>

int main()
{
    int n , i;
    printf("Enter the number of Subject:");
    scanf("%d",&n);
    float credit[n], grade_point[n],cgpa= 0.0 , numerator =0.0 , denumerator = 0.0;
    for(i=0;i<n;i++)
    {
        printf("Enter the credits and grade points of Subject %d :",i+1);
        scanf("%f%f",&credit[i],&grade_point[i]);
        numerator += credit[i]*grade_point[i];
        denumerator += credit[i];
    }
    
    cgpa = numerator /  denumerator ;
    printf("%.2f",cgpa);

    return 0;
}
