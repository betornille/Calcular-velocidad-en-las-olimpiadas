//Calcular velocidad en olimpiada
#include<stdio.h>
int main(){
    int dis, cen, seg, min, TSE, VMS, VKH;
    printf("\nDa el valor de la distancia :");
    scanf("%d", &dis);
    printf("\nDa el valor de las centenas: ");
    scanf("%d", &cen);
    printf("\nDa el valor en segundos: ");
    scanf("%d", &seg);
    printf("\nDan el valor en minutos:");
    scanf("%d", &min);
    TSE = (min*60+seg+cen)/100;
    VMS = dis/TSE;
    VKH= VMS*3600/1000;
    printf("\nLa velocidad es: %d KM/HR", VKH);

    return 0;
}
