#include<stdio.h>

enum day {monday,tuesday,wednesday ,frinday,saturday,sunday};
// typedef can be used with enum :
typedef enum dynamic memory_allocation
{malloc,calloc,realloc,free}DMA ;
int main(){
       enum day today= monday;
       enum day tomarrow=tuesday;
       enum day yestarday=sunday;

    printf("Today is : %d\n",monday);
    printf("Yestarday was :%d\n",sunday);
    printf("Tomarrow is : %d\n",tuesday);

    enum DMA 1 = malloc ;
    enum DMA 2 = calloc ;
    enum DMA 3 = realloc ;
    enum DMA 4 = free ;

    printf("DMA 01 : %d", DMA);
    printf("DMA 02 : %d", DMA);
    printf("DMA 03 : %d", DMA);
    printf("DMA 04 : %d", DMA);

    return 0;
}