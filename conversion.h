#include <math.h>

//Lengths

double kiloToMeter(double l){
    return l * 1000;
}
double centiToMeter(double l){
    return l * 0.01;
}
double miliToMeter(double l){
    return l * 0.001;
}
double microToMeter(double l){
    return l * 0.000001;
}
double nanoToMeter(double l){
    return l * pow(1, -9);
}
double mileToMeter(double l){
    return l * 1609.34;
}
double yardToMeter(double l){
    return l * 0.9144;
}
double footToMeter(double l){
    return l * 0.3048;
}
double inchToMeter(double l){
    return l * 0.0254;
}
double nMileToMeter(double l){
    return l * 1852;
}
double meterToMeter(double l){
    return l;
}
double meterToKilo(double l){
    return l * 0.001;
}
double meterToCenti(double l){
    return l * 100;
}
double meterTomili(double l){
    return l * 1000;
}
double meterTomicro(double l){
    return l * pow(10,6);
}
double meterToNano(double l){
    return l * pow(10, 9);
}
double meterToMile(double l){
    return l * 0.000621371;
}
double meterToYard(double l){
    return l * 1.09361;
}
double meterToFoot(double l){
    return l * 3.28084;
}
double meterToInce(double l){
    return l * 39.3701;
}
double meterToNMile(double l){
    return l * 0.000539957;
}

//Weights

double tonToGram(double w){
    return w*pow(10, 6);
}
double kiloToGram(double w){
    return w * 1000;
}
double miliToGram(double w){
    return w * 0.001;
}
double microToGram(double w){
    return w * pow(10, -6);
}
double USTonToGram(double w){
    return w * 907185;
}
double stoneToGram(double w){
    return w * 6350.29;
}
double poundToGram(double w){
    return w * 453.592;
}
double ounceToGram(double w){
    return w * 28.3495;
}
double gramToGram(double w){
    return w;
}
double gramToTon(double w){
    return w * pow(10, -6);
}
double gramToKilo(double w){
    return w * 0.001;
}
double gramToMili(double w){
    return w * 1000;
}
double gramToMicro(double w){
    return w * pow(10, 6);
}
double gramToUSTon(double w){
    return w / 907185;
}
double gramToStone(double w){
    return w * 0.000157473;
}
double gramToPound(double w){
    return w * 0.00220462;
}
double gramToOunce(double w){
    return w * 0.035274;
}

//Pressure

double BarToPascal(double t){
    return t * 100000;
}
double poundToPascal(double t){
    return t * 6894.76;
}
double StdAtmToPascal(double t){
    return t * 101325;
}
double TorrToPascal(double t){
    return t * 133.322;
}
double pascalToPascal(double t){
    return t;
}
double PascalToBar(double t){
    return t * pow(10, -5);
}
double PascalToPound(double t){
    return t * 0.000145038;
}
double PascalToStdAtm(double t){
    return t / 101325;
}
double PascalToTorr(double t){
    return t * 0.00750062;
}

//Speed

double mphToMmph(double s){
    return s / 2.237;
}
double fphToMmph(double s){
    return s * 0.3048;
}
double kmphToMmph(double s){
    return s / 3.6;
}
double knotToMmph(double s){
    return s / 1.944;
}
double mmphToMmph(double s){
    return s;
}
double mmphToMph(double s){
    return s * 2.237;
}
double mmphToFph(double s){
    return s * 3.28084;
}
double mmphToKmph(double s){
    return s * 3.6;
}
double mmphToKnot(double s){
    return s * 1.94384;
}

//Temperature

double CelToKel(double t){
    return (t+273.15);
}
double fahToKel(double t){
    return (t-32)*5/9+273.15;
}
double kelToKel(double t){
    return t;
}
double KelToCel(double t){
    return (t-273.15);
}
double KelToFah(double t){
    return (t-273.15)*9/5+32;
}

//Fuel Consumption

double mileToKmpL(double a)
{
    return a / 2.352;
}
double impMileToKmpL(double a)
{
    return a / 2.825;
}
double literToKmpL(double a)
{
    return a * 100;
}
double kmpLToKmpL(double a)
{
    return a;
}
double kmpLToMile(double a)
{
    return a * 2.352;
}
double kmpLToImpMile(double a)
{
    return a * 2.825;
}
double kmpLToLiter(double a)
{
    return a * 100;
}

