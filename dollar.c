/**
 * Author: Will Cook
 * Date: 2020/8/25
 *
 * This program will convert US dollars to British Pounds and Japanese JPY.
 * 10% of total dollars will be taken as an exchange fee.
 * Half of the remaining dollars will be converted to pounds and the other half to JPY.
 */
 #include <stdlib.h>
 #include <stdio.h>
 
 int main(int argc, char **argv) {
     
        double usDollars = 0;
        printf("Please type the total amount of US Dollars and hit ENTER.");
        scanf("%lf", &usDollars);
        
        double remainingDollars = (usDollars * .9);
        double jpy = (remainingDollars / 2) * 76.8;
        double pounds = (remainingDollars / 2) * .6;
        
        printf("You get %lf British Pounds and %lf Japanese JPY", pounds, jpy);
 }