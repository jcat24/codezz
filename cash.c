#include <stdio.h>
#include <cs50.h>
#include <math.h>


float eff();

int main(void)
{
    eff();
 return 0;
}

float eff() {

    float money = get_float("Money, please: "); //Constant variable
    float moneyh = round( money * 100);
    int moneyi = (int)moneyh;
    int quarter = 0;
    int dime = 0;
    int nickel = 0;
    int penny = 0;
    int change = moneyi;
    int coins = 0;

    if (money < 0) {
        return eff();
    }

    else if (moneyi == 0) {
        printf("%i\n", moneyi);
    }

    else {
        if (change > 24) {
            for (quarter = 0; (quarter + 1) * 25 <= moneyi; quarter++) {
                    change = change - 25;
            }
        } int changeq = change;
        if (change < 25) {
            for (dime = 0; (dime + 1) * 10 <= changeq; dime++) {
                change = change - 10;
            }
        } int changed = change;
        if (change < 10) {
            for (nickel = 0; (nickel + 1) * 5 <= changed; nickel++) {
                change = change - 5;
            }
        }
        if (change < 5) {
            penny = change;
        }
        coins = quarter + dime + nickel + penny;

        printf("%i\n", coins);
    }
    return 0;
}
