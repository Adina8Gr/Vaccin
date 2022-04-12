#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "vaccin.h"
int main()
{
    printf("Vaccinuri\n");
    char zona[500];
    int i;
    VACCIN v[]={newVaccin("Oxford Uni-AstraZeneca","vector viral",60,2,5,4,158882),newVaccin("Pfizer-BioNTech","ARN",95,2,-80,20,1621701),newVaccin("Moderna","ARN",95,2,-20,33,156450)};
    int n=sizeof(v)/sizeof(VACCIN);
    for(i=0;i<n;i++)
    {
    printf("\n%d.%s\n\n",i+1,toStringVacc(v[i],zona));
    }
    printf("\nNumarul de persoane vaccinate cu AstraZeneca este %s decat cel cu Moderna\n",VaccPref(v[0],v[2])?"mai mare":"mai mic");
    printf("Costul vaccinului AstraZeneca este %s decat cel al lui Pfizer\n",VaccCost(v[0],v[1])?"mai mare":"mai mic");
    printf("Diferenta de eficacitate dintre AstraZeneca si Pfizer este de: %d%%\n",abs(difEfic(v[0],v[1])));
    printf("Diferenta de temperatura de stocare dintre Pfizer si Moderna este de %d grade C\n",difTemp(v[1],v[2]));
    int t=1937033;
    printf("Procentaj persoane vaccinate cu Moderna din total este de %d%%\n",procentajDinTotal(v[2],t));
    printf("Costul vaccinului Pfizer este %d%% din cel al vaccinului AstraZeneca\n",procentajCost(v[1],v[0]));
    printf("Medie pret Pfizer si Moderna: %d$\n\n",medieCost(v[1],v[2]));
    setPersVaccinate(v[0],264720);
    printf("Actualizare nr persoane vaccinate cu AstraZeneca: %d\n",getPersVaccinate(v[0]));
    printf("Vaccinul AstraZeneca este de tip %s\n",getTip(v[0]));
    for(i=0;i<n;i++)
    {deleteVacc(v[i]);
    }


}
