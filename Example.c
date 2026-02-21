#include <stdio.h>



int main(){
  printf(" Welcome to our cafe \n");
  printf("Kindly select your order\n");
  printf("-----------------------------------------\n");
  printf("01.pizza\n02.Burger\n03.Cold Drinks\n04.Chilli Potato\n05.Noodles\n");

  int Item;
  printf("Please select your food item from (01-05):");
  scanf("%d , &Item");
  switch (Item){
  case 01:printf("Pizza\n");
    break;
  case 02:printf("Burger\n");
    break;
  case 03:printf("Cold Drink\n");
    break;
  case 04:printf("Chilli Potato\n");
    break;
  case 05:printf("Noodles\n");
    break;
  case 06:printf("No more food items");
    break;
  default:printf("Food is not in our menu:");
 }
 printf("-------------------------------------\n");
  printf("If you want more food please select or press 6 to exit:");
  scanf("%d , &Item");
  switch (Item){
  case 01:printf("Pizza\n");
    break;
  case 02:printf("Burger\n");
    break;
  case 03:printf("Cold Drink\n");
    break;
  case 04:printf("Chilli Potato\n");
    break;
  case 05:printf("Noodles\n");
    break;
  case 06:printf("No more food items");
    break;
  default:printf("Food is not in our menu:");
 }
    return 0;
}