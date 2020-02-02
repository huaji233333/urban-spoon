#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    float x1,x2;
    printf(" ‰»Î a b c \n");
    scanf("%d %d %d",&a,&b,&c);
    int temp = b * b - 4 * a * c;
    if (temp < 0){
        printf("ŒﬁΩ‚");
    } else if (temp == 0)
    {
        printf("x1 = x2 = %f", -1 * (b * 1.0) / (2 * a));
    } else {
       printf("x1=%f,x2=%f",(-1 * b + sqrt(temp))/(2 * a),(-1 * b - sqrt(temp))/(2 * a));
    }
    
    return 0;
}
