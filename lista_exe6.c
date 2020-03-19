#include<stdio.h>
void ordena(double vet[], int n);
void imprime(double v[],int n);
double media(double vet[], int n, int *i);

int main(int argc, char const *argv[])
{
    int n=6,prox;
    double v[]={0, 3.2 ,5,6,15,2 },m;//declara o vetor
    imprime(v,n); //imprime o vetor ordenado

    m = media(v,n,&prox); //m recebe a media

    printf("A media para o vetor = %.2lf\n",m);//imprime a média
    printf("O valor mais proximo da media = %d\n",prox);// imprime o valor do vetor mais proximo da media
    
    return 0;
}


void ordena(double vet[], int n){
    //funcao ordena vetor
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
    //funcao imprime vetor
    int i;
    for(i=0 ; i< n; i++){
        printf("%.2lf\n",v[i]);
    }
    printf("\n");
}
double media(double vet[], int n, int *i){
   double x=0,media;
   
   int j,mediana;
   if (n%2==0)//verifica de mediana é par ou impar
   {
       mediana = n/2;
   }else
   {
       mediana = (n+1)/2;// se mediana for impar soma mais 1
   }    
   
   *i=vet[mediana];
   
   ordena(vet,n);//ordena o vetor em ordem crescente

   for(j=0; j<n;j++){
       x = x +vet[j];
   }
    media = x/n;//calcula a média dos valores do vetor

   for(j=0; j<n; j++){
       if (vet[mediana]-media > vet[mediana+j]-media)//verifica qual o valor em torno da mediana esta mais próximo da média
       {
           *i=vet[mediana];
       }else
       {
          *i=vet[mediana+j];
       }
       
       
   }
   
   
   
   return media;
}