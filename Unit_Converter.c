#include "units.h"
void main(){
    int ch;
    char choice[7][50]={"Length", "Mass", "Pressure", "Speed", "Temperature", "Fuel Economy", "Exit"};
    system("cls");
    while(1)
    {
        printf("Choose the type of Converter you want to use:\n");
        for(int i=0;i<=6;i++)
        {
            printf("%d\t->\t%s\n",i+1, choice[i]);
        }
        printf("Enter your Choice:\t");
        scanf("%d",&ch);
        system("cls");
        switch(ch){
            case 1:
                length();
                break;
            case 2:
                mass();
                break;
            case 3:
                pressure();
                break;
            case 4:
                speed();
                break;
            case 5:
                temperature();
                break;
            case 6:
                fuel();
                break;
            case 7:
                exitting();
                break;
            default:
                printf("Wrong input, Program terminating!");
                exit(0);
                break;
        }
        system("pause");
        system("cls");
    }
}
