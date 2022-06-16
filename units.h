#include <stdio.h>
#include <stdlib.h>
#include "conversion.h"
int display(char units[][50], int len,int choice){
    int ch;
    for(int i=0; i<len; i++){
        if(choice != i){
            printf("%d\t->\t%s\n",i+1, units[i]);
        }
    }
    do{
        printf("Enter the Choice:\t");
        scanf("%d", &ch);
        if(ch>len){
            printf("Wrong option selected.!!!\n");
        }
    }while(ch>len);
    system("cls");
    return ch-1;
}

double takingInput(char strr[]){
    double inp;
    printf("Enter the value (in %s):\t", strr);
    scanf("%lf", &inp);
    system("cls");
    return inp;
}

void print_Results(double (*toSIUnit[])(double), double (*SIUnitTo[])(double), char unit[][10], char units[][50], int ch1, int ch2){
    double inp=takingInput(units[ch1]);
    double result=SIUnitTo[ch2](toSIUnit[ch1](inp));
    printf("%0.02lf %s into %s is %0.2lf %s\n", inp, units[ch1], units[ch2], result, units[ch2]);
    printf("%0.02lf %s = %0.4lf %s\n", inp, unit[ch1], result, unit[ch2]);
}

void length(){
    char units[11][50]={"Kilometer","Meter", "Centimeter", "Milimeter", "Micrometer", "Nanometer", "Miles", "Yard", "Foot", "Inch", "Nautical-Mile"};
    char unit[11][10]={"km", "m", "cm", "mm", "mcm", "nm", "mi", "yd", "ft", "in", "nmi"};
    int ch1, ch2;
    printf("Length: Convert this:\n");
    ch1=display(units, 10, -1);
    printf("Length: Convert %s into:\n", units[ch1]);
    ch2=display(units, 10, ch1);
    double (*toSIUnit[11])(double)={kiloToMeter,meterToMeter, centiToMeter, miliToMeter, microToMeter, nanoToMeter, mileToMeter, yardToMeter, footToMeter, inchToMeter, nMileToMeter};
    double (*SIUnitTo[11])(double)={meterToKilo,meterToMeter, meterToCenti, meterTomili, meterTomicro, meterToNano, meterToMile, meterToYard, meterToFoot, meterToInce, meterToNMile};
    print_Results(toSIUnit, SIUnitTo, unit, units, ch1, ch2);
}

void mass(){
    char units[9][50]={"Tonne", "Kilogram","Gram", "Miligram", "Microgram", "US Tonne", "Stone", "Pound", "Ounce"};
    char unit[9][10]={"ton", "kg", "g", "mg", "mcg", "us-ton", "st", "lb", "oz"};
    int ch1, ch2;
    printf("Mass: Convert this:\n");
    ch1=display(units, 9, -1);
    printf("Mass: Convert %s into:\n", units[ch1]);
    ch2=display(units, 9, ch1);
    double (*toSIUnit[9])(double)={tonToGram, kiloToGram, gramToGram, miliToGram, microToGram, USTonToGram, stoneToGram, poundToGram, ounceToGram};
    double (*SIUnitTo[9])(double)={gramToTon, gramToKilo, gramToGram, gramToMili, gramToMicro, gramToUSTon, gramToStone, gramToPound, gramToOunce};
    print_Results(toSIUnit, SIUnitTo, unit, units, ch1, ch2);
}

void pressure(){
    char units[5][50]={"Bar", "Pascal", "Pound per sq Inch", "Standard Atmospheric", "Torr"};
    char unit[5][10]={"bar", "Pa", "psi", "atm", "torr"};
    int ch1, ch2;
    printf("Pressure: Convert this:\n");
    ch1=display(units, 5, -1);
    printf("Pressure: Convert %s into:\n", units[ch1]);
    ch2=display(units, 5, ch1);
    double (*toSIUnit[5])(double)={BarToPascal, pascalToPascal, poundToPascal, StdAtmToPascal, TorrToPascal};
    double (*SIUnitTo[5])(double)={PascalToBar, pascalToPascal, PascalToPound, PascalToStdAtm, PascalToTorr};
    print_Results(toSIUnit, SIUnitTo, unit, units, ch1, ch2);
}

void speed(){
    char units[5][50]={"Miles per Hour", "Foot per hour", "Meter per hour", "Kilometer per hour", "Knot"};
    char unit[5][10]={"mph", "fph", "m/h", "kmph", "kt"};
    int ch1, ch2;
    printf("Speed: Convert this:\n");
    ch1=display(units, 5, -1);
    printf("Speed: Convert %s into:\n", units[ch1]);
    ch2=display(units, 5, ch1);
    double (*toSIUnit[5])(double)={mphToMmph, fphToMmph, mphToMmph, kmphToMmph, knotToMmph};
    double (*SIUnitTo[5])(double)={mmphToMph, mmphToFph, mmphToMmph, mmphToKmph, mmphToKnot};
    print_Results(toSIUnit, SIUnitTo, unit, units, ch1, ch2);
}

void temperature()
{
    char units[3][50] = {"Celsius", "Fahrenheit", "Kelvin"};
    char unit[3][10] = {"C", "F", "K"};
    int ch1, ch2;
    printf("Temperature: Convert this:\n");
    ch1 = display(units, 3, -1);
    printf("Temperature: Convert %s into:\n", units[ch1]);
    ch2 = display(units, 3, ch1);
    double (*toSIUnit[3])(double) = {CelToKel, fahToKel, kelToKel};
    double (*SIUnitTo[3])(double) = {KelToCel, KelToFah, kelToKel};
    print_Results(toSIUnit, SIUnitTo, unit, units, ch1, ch2);
}

void fuel(){
    char units[4][50]={"Miles per gallon", "Miles per gallon (Imperial)", "Kilometer per liter", "Liter per 100 kilometers"};
    char unit[4][10]={"mpg", "mpg", "kmpl", "L/100km"};
    int ch1, ch2;
    printf("Area: Convert this:\n");
    ch1=display(units, 4, -1);
    printf("Area: Convert %s into:\n", units[ch1]);
    ch2=display(units, 4, ch1);
    double (*toSIUnit[4])(double)={mileToKmpL, impMileToKmpL, kmpLToKmpL, literToKmpL};
    double (*SIUnitTo[4])(double)={kmpLToMile, kmpLToImpMile, kmpLToKmpL, kmpLToLiter};
    print_Results(toSIUnit, SIUnitTo, unit, units, ch1, ch2);
}

void exitting()
{    
    system("cls");
    system("echo Thank you for using it...&pause>nul"); // Batch script command to print the output message with pause.
    exit(0);
}
