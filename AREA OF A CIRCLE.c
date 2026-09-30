#include <stdio.h>
#include <stdlib.h>

int main()
{

    double radius;
    const float pi=3.142;
    float area;
    printf("Please enter the radius\n");
    scanf("%lf",&radius);
    area=(pi*radius*radius);
    printf(" THE AREA IS %lf\n", area);

    return 0;

}
