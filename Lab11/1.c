#include <stdio.h>
#include <string.h>
struct oraganization
{
    char name[20];
    char type[20];
    float price;
    int quantity;
};

void addGift(struct oraganization *gifts,int *count){
    if (*count>100){
        printf("Storage is full\n");
        return;
    }
    printf("Enter gift name ");
    scanf(" %[^\n]s",gifts[*count].name);
    printf("Enter gift type ");
    scanf(" %[^\n]s",gifts[*count].type);
    printf("Enter gift price ");
    scanf("%f",&gifts[*count].price);
    printf("Enter gift quantity ");
    scanf("%d",&gifts[*count].quantity);

    (*count)++;

}

void displayGift(struct oraganization *gifts,int count){
    if (count==0)
    {
        printf("No gifts\n");
    }
    
    printf("Name \t Type \t Price \t Quantity\n");
    for (int i = 0; i < count; i++)
    {
        printf("%s \t %s \t %.2f \t %d\n",gifts[i].name,gifts[i].type,gifts[i].price,gifts[i].quantity);
    }
    
}

void expensiveGift(struct oraganization *gifts,int count,float price){
    int flagExp=0;

    printf("Price > %.2f",price);
    for (int i = 0; i < count; i++)
    {
        if(gifts[i].price > price){
            printf("%s \t %s \t %.2f \t %d\n",gifts[i].name,gifts[i].type,gifts[i].price,gifts[i].quantity);
            flagExp=1;
        }
    }
    if (flagExp==0)
    {
        printf("No gift with this price range\n");
    }
}

void largeGift(struct oraganization *gifts, int count, int quantity) {
    int flagLarge = 0;
    printf("\nGifts with quantity >= %d:\n", quantity);
    for(int i = 0; i < count; i++) {
        if(gifts[i].quantity >= quantity) {
            printf("%s \t %s \t %.2f \t %d\n",gifts[i].name,gifts[i].type,gifts[i].price,gifts[i].quantity);
            flagLarge = 1;
        }
    }
    if(!flagLarge) printf("No gift with this quantity range\n");
}


int main(){
    struct oraganization gifts[100];
    int count=0;
    int choice;
    float price;
    int quantity;

    do
    {
        printf("1.Add gifts\n2.Display Gifts\n3.Find Expensive gifts\n4.Gifts with large quantity\n5.Exit\n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            addGift(gifts,&count);
            break;
        case 2:
            displayGift(gifts,count);
            break;
        case 3:
            printf("Enter price\n");
            scanf("%f",&price);
            expensiveGift(gifts,count,price);
            break;
        case 4:
            printf("Enter quantity\n");
            scanf("%d",&quantity);
            largeGift(gifts,count,quantity);
            break;
        case 5:
            return-1;
        default:
            printf("Plz enter correct no");
            break;
        }
    } while (choice!=5);
    
}