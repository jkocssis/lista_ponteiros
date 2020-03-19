#include<stdio.h>
double media(double vet[], int n, int *i){
   double x=0,media;
   int j;
   *i=vet[0];
   for(j=0; j<n;j++){
       x = x +vet[j];
   } media = x/n;
   for(j=0; j<n;j++){
       if (vet[0]>vet[j+1]){//ordena vetor
           vet[0]=vet[j+1];
       }
    for(j=0; j<n;j++){
       printf("%lf",vet[j]);//imprime o vetor
       }
   }
   return media;
}

int main(int argc, char const *argv[])
{
    int n=6,prox;
    double v[]={0,3.2,5,4,25.4,0.1},m;
    m = media(v,n,&prox);
    printf("%.2lf\n",m);
    printf("%d\n",prox);
    return 0;
}
