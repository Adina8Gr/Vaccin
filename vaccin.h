#ifndef VACCIN_H_INCLUDED
#define VACCIN_H_INCLUDED
#include <stdbool.h>
typedef struct vaccin *VACCIN;
VACCIN newVacc();
VACCIN newVaccin(char *nume, char *tip, int eficacitate,int doze,int tempStocare,int cost,double persVaccinate);
char *getNume(VACCIN v);
char *getTip(VACCIN v);
int getEfic(VACCIN v);
int getNrDoze(VACCIN v);
int getTempStoc(VACCIN v);
int getCostPerDoza(VACCIN v);
int getPersVaccinate(VACCIN v);
void setNume(VACCIN v,char *nume);
void setTip(VACCIN v,char *tip);
void setEfic(VACCIN v, int eficacitate);
void setNrDoze(VACCIN v,int doze);
void setTempStoc(VACCIN v,int tempStocare);
void setCostPerDoza(VACCIN v, int cost);
void setPersVaccinate(VACCIN v,double persVaccinate);
bool VaccPref(v,w);
bool VaccCost(v,w);
int difEfic(v,w);
int difTemp(v,w);
int procentajDinTotal(v,total);
int procentajCost(v,w);
int medieCost(v,w);
char *toStringVacc(VACCIN v,char *zona);
void deleteVacc(VACCIN v);
#endif // VACCIN_H_INCLUDED
