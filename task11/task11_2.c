#include<stdio.h>
#include<stireg.h>

typedef struct{
  char name[10];
  float price;
  float quantity;

} item;

item updating(item i ,float p ,float q);

int main(){

   item item_1 = {"xyz",20,20};
   item update;

   float pri;
   float qun;

   printf("Enter price increment :");
   scanf("%f" ,&pri);
   printf("Enter quantity increment :");
   scanf("%f" ,&qun);

   item_1 = updating(item_1 ,pri ,qun);



   printf("Updated values of item \n");
   printf("Name :%s\n",item_1.name);
   printf("price :%f\n",item_1.price);
   printf("quantity :%f\n",item_1.quantity);

   printf("value of the item= %f",(item_1.quantity * item_1.price));

  return 0;
}

 item updating(item i ,float p ,float q){
    item up;
    up.price = i.price + p;
    up.quantity = i.quantity +q;
    strcpy(up.name, i.name);
    return up ;
 }







