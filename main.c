#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,h;
    int base_area,lateral_area,total_area,volume;

    //Get dimensions from user
    printf("Enter values for a,b and h\n");
    scanf("%d%d%d",&a,&b,&h);

    //Calculate areas and vloume
    base_area=a*b;
    lateral_area=2*a*h+2*b*h;
    total_area=2*a*b+2*b*h+2*a*b;
    volume=a*b*h;

    //Print the results
    printf("Base area:%d\n",base_area);
    printf("Lateral area:%d\n",lateral_area);
    printf("Total area:%d\n",total_area);
    printf("Volume:%d\n",volume);


    return 0;
}
