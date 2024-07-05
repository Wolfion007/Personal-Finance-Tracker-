#include <stdio.h>
#include <string.h>

struct expenses { // monthly
    int food;
    int travel;
    int gym;
    int rent;
    long int miscellaneous;
    long int totalexp;
};

struct savings {  // monthly
    long int banksavings;
    int investments;
    int personalsavings;
    long int totalsavings;
};

int main() {
    struct expenses exp;
    struct savings sav;
    long int Salary;
    int options;
    
    printf("----------------------------------------------------------------------------------\n");
    printf("Enter the Net Salary\n");  // with deductions
    scanf("%ld", &Salary);
    
    printf("Enter the Options: 1- Expenses 2- Savings 3- Total Finance Tracking\n");
    scanf("%d", &options);
    
    switch (options) {
        case 1: {
            printf("Enter expenses (food, travel, rent, gym, miscellaneous):\n");
            scanf("%d %d %d %d %ld", &exp.food, &exp.travel, &exp.rent, &exp.gym, &exp.miscellaneous);
            
            exp.totalexp = exp.food + exp.travel + exp.rent + exp.gym + exp.miscellaneous;
            printf("Salary after total Expenses: %ld\n", exp.totalexp);
            break;
        }
        
        case 2: {
            printf("Enter savings (bank savings, investments, personal savings):\n");
            scanf("%ld %d %d", &sav.banksavings, &sav.investments, &sav.personalsavings);
            
            sav.totalsavings = sav.banksavings + sav.investments + sav.personalsavings;
            printf(" Salary after total Savings: %ld\n", sav.totalsavings);
            break;
        }
        
        case 3: {
            printf("Enter expenses (food, travel, rent, gym, miscellaneous):\n");
            scanf("%d %d %d %d %ld", &exp.food, &exp.travel, &exp.rent, &exp.gym, &exp.miscellaneous);
            exp.totalexp = exp.food + exp.travel + exp.rent + exp.gym + exp.miscellaneous;
            
            printf("Enter savings (bank savings, investments, personal savings):\n");
            scanf("%ld %d %d", &sav.banksavings, &sav.investments, &sav.personalsavings);
            sav.totalsavings = sav.banksavings + sav.investments + sav.personalsavings;
            
            long int totalFinance = exp.totalexp + sav.totalsavings;
            printf("Total Finance Tracking Salary after (Expenses + Savings): %ld\n", totalFinance);
            break;
        }
        
        default:
            printf("Give the correct option\n");
    }
    
    return 0;
}
