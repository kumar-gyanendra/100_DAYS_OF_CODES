/* 🔀 Q22 (Conditional Statements)
Write a program to find profit or loss percentage given cost price and selling price. */

#include <stdio.h>

int main(){
    float Profit, Loss, SellingPrice, CostPrice;
    
    printf("Enter CP(Cost Price): ");
    scanf("%f", &CostPrice);
    printf("Enter SP(Selling Price): ");
    scanf("%f", &SellingPrice);
    
    Profit=SellingPrice-CostPrice;               
    Loss= CostPrice-SellingPrice;

    if(SellingPrice>CostPrice){
     printf("Profit_Percent : %.2f\n", (Profit/CostPrice)*100);
    }
    else if(CostPrice>SellingPrice){
        printf("Loss_Percent : %.2f\n", (Loss/CostPrice)*100);
    } else{
        printf("No profit, no loss since Selling Price is equal to Cost Price");
    }
    return 0;
    }
    