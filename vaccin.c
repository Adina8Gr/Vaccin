#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include"vaccin.h"
struct vaccin
{
    char *nume;
    char *tip; //tip vaccin
    int eficacitate;
    int doze; //doze administrate
    int tempStocare; //temperatura stocare pe termen lung
    int cost;//cost per doza
    double persVaccinate; //persoane vaccinate cu a 2-a doza
};
VACCIN newVacc()
{
    VACCIN v=(VACCIN)calloc(1,sizeof(struct vaccin));
    assert(v!=NULL);
    return v;
}
VACCIN newVaccin(char *nume,char *tip,int eficacitate,int doze,int tempStocare,int cost,double persVaccinate)
{
    VACCIN v=newVacc();
    setNume(v,nume);
    setTip(v,tip);
    setEfic(v,eficacitate);
    setNrDoze(v,doze);
    setTempStoc(v,tempStocare);
    setCostPerDoza(v,cost);
    setPersVaccinate(v,persVaccinate);
    return v;
}
char *getNume(VACCIN v)
{
    assert(v!=NULL);
    return v->nume;
}
char *getTip(VACCIN v)
{
    assert(v!=NULL);
    return v->tip;
}
int getEfic(VACCIN v)
{
    assert(v!=NULL);
    return v->eficacitate;
}
int getNrDoze(VACCIN v)
{
    assert(v!=NULL);
    return v->doze;
}
int getTempStoc(VACCIN v)
{
    assert(v!=NULL);
    return v->tempStocare;
}
int getCostPerDoza(VACCIN v)
{
    assert(v!=NULL);
    return v->cost;
}
int getPersVaccinate(VACCIN v)
{
    assert(v!=NULL);
    return v->persVaccinate;
}
void setNume(VACCIN v,char *nume)
{
    assert (v!=NULL);
    v->nume=nume;
}
void setTip(VACCIN v,char *tip)
{
    assert (v!=NULL);
    v->tip=tip;
}
void setEfic(VACCIN v,int eficacitate)
{
    assert (v!=NULL);
    v->eficacitate=eficacitate;
}
void setNrDoze(VACCIN v,int doze)
{
    assert (v!=NULL);
    v->doze=doze;
}
void setTempStoc(VACCIN v,int tempStocare)
{
    assert (v!=NULL);
    v->tempStocare=tempStocare;
}
void setCostPerDoza(VACCIN v,int cost)
{
    assert (v!=NULL);
    v->cost=cost;
}
void setPersVaccinate(VACCIN v,double persVaccinate)
{
    assert (v!=NULL);
    v->persVaccinate=persVaccinate;
}
bool VaccPref(VACCIN v,VACCIN w)
{
    assert(v!=NULL && w!=NULL);
    return v->persVaccinate>w->persVaccinate;

}
bool VaccCost(VACCIN v,VACCIN w)
{
    assert(v!=NULL && w!=NULL);
    return v->cost>w->cost;

}
int difEfic(VACCIN v, VACCIN w)
{
    assert(v!=NULL && w!=NULL);
    int d;
    d=v->eficacitate-w->eficacitate;
    return d;
}
int difTemp(VACCIN v, VACCIN w)
{
    assert(v!=NULL && w!=NULL);
    return v->tempStocare-w->tempStocare;
}
int procentajDinTotal(VACCIN v,int total)
{
    assert(v!=NULL);
    assert(total!=0);
    int pr=(v->persVaccinate*100)/total;
    return pr;

}
int procentajCost(VACCIN v,VACCIN w)
{
    assert(v!=NULL && w!=NULL);
    assert(w->cost!=0);
    int diff=(v->cost*100)/w->cost;
    return diff;

}
int medieCost(VACCIN v,VACCIN w)
{
    assert(v!=NULL && w!=NULL);
    return (v->cost+w->cost)/2;

}
char *toStringVacc(VACCIN v, char *zona)
{
    assert(v!=NULL);
    sprintf(zona,"Nume: %s\n\tTip: %s\t\nEficacitate: %d%%\t\nDoze administrate: %d doze\t\nStocare termen lung: %d grade C\t\nCost per doza: %d $\t\nTotal persoane vaccinate: %g",v->nume,v->tip,v->eficacitate,v->doze,v->tempStocare,v->cost,v->persVaccinate);
    return zona;
}
void deleteVacc(VACCIN v)
{
    if(v!=NULL){
    free(v->nume);
    free(v->tip);
    free(v);
    }
}
