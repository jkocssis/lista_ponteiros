#include<stdio.h>
void ordena(double vet[], int n){
    double aux;
    int i, j;
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            if (vet[i]<vet[j])
            {
                aux = vet[i];
                vet[i] = vet[j];
                vet[j] = aux;
            }
            
        }
    }
    
}
void imprime(double v[],int n){
    int i;
    for(i=0 ; i< n; i++){
        printf("%.2lf\n",v[i]);
    }
    printf("\n");
}

double media(double vet[], int n, int *i){
   double x=0,media;
   int j;
   *i=vet[0];
   ordena(vet,n);
   for(j=0; j<n;j++){
       x = x +vet[j];
   } media = x/n;
   
   
   
   return media;
}

int main(int argc, char const *argv[])
{
    int n=6,prox;
    double v[]={0, 3.2 ,5 ,4 ,25.4 ,0.1},m;
    ordena(v,n);
    imprime(v,n);
    m = media(v,n,&prox);
    printf("%.2lf\n",m);
    
    return 0;
}
