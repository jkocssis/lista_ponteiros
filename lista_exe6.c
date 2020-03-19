#include<stdio.h>
void minimo(double vet[], int n);
void imprime(double v[],int n);
double media(double vet[], int n, int *i);

int main(int argc, char const *argv[])
{
    int n=6,prox;
    double v[]={0, 3.2 ,7,6,15,2 },m;//declara o vetor
    

    m = media(v,n,&prox); //m recebe a media, *i aponta para prox(valor mais proximo da media)
    
    imprime(v,n); //imprime o vetor 

    printf("A media para o vetor = %.2lf\n",m);//imprime a média
    printf("A posicao mais proxima da media = %d\n",prox);// imprime o valor do vetor mais proximo da media
    
    return 0;
}


void minimo(double vet[], int n){
    
    double minimo=vet[0];
    int i, j=0;
    for(i=0; i<n; i++){
        if (vet[i]<minimo)
        {
            j=i;
        }
        
    }
    printf("minimo=%d\n",j);
    
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
   double x=0,media, resto[n];
   
   int j;
    
    for(j=0; j<n;j++){
       x = x +vet[j];
   }
    media = x/n;//calcula a média dos valores do vetor
    for (j=0;j<n;j++){
        if (media-vet[j]<0)
        {
            resto[j]=vet[j]-media;
        }else
        {
            resto[j]=media-vet[j];
        }
    }
    double min=resto[0];

    for(j=0; j<n;j++){
        if (resto[j]<min)
        {
            min=j;
            
        }
        
    }
    *i=(int)min;

     
   return media;
}