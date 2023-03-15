//Calcular velocidad en olimpiada
#include<stdio.h>
int main(){
    float dis, cen, seg, min, TSE, VMS, VKH;
    printf("\nDa el valor de la distancia :");
    scanf("%f", &dis);
    printf("\nDa el valor de las centenas: ");
    scanf("%f", &cen);
    printf("\nDa el valor en segundos: ");
    scanf("%f", &seg);
    printf("\nDan el valor en minutos:");
    scanf("%f", &min);
    TSE = (min*60+seg+cen)/100;
    VMS = dis/TSE;
    VKH= VMS*3600/1000;
    printf("\nLa velocidad es: %f KM/HR", VKH);

    return 0;
}