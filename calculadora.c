// calculadora.c

#include <stdio.h>
#include <stdlib.h>

void separar();

int main(){

    int n1,n2,i=1,n=0,calc;
    float j=0,h[50];
    float soma1,soma2,soma=1,b;
    float multi1,multi2,div1,div2;
    int mod1,mod2;
    
    do
    {
        zero:
        printf("Digite 0 para sair\n\n");
        printf("Código da Operação:\n\n");
        printf("(1) Soma ou Subtração\n(2) Multiplicação\n(3) Divisão\n(4) Módulo\n\n");
        printf("Digite o (Código da Operação) desejada: ");
        scanf("%d",&calc);
        
        if(calc == 0){
               break;
        }
        
        if(calc > 5 || calc <1){
               separar();
               printf("Opção Incorreta, Digite novamente.");
               separar();
               printf("\n");
               goto zero;
        }
        
        if(calc == 1){
        
               printf("\n\nDigite 0 para sair\n\n");
            
               while(soma != 0){
           
                   n++;
                   printf("\n>>> Digite o %d° número: ",n);
                   scanf("%f",&soma);
            
                   j+=soma;
                   h[n]=soma;
                   
                   printf("\n");
                   for(i=1;i<=n;i++){
            
                           if(i==1){
                                printf("= %.2f ",h[i]);
                           }
                           if(i==n && soma==0){
                                break;
                           }
            
                           if(i>1 && i<=n){
                                printf("+ %.2f ",h[i]);
                           }
                   }
            
                printf("\n\nResultado: %.2f\n",j);
                
                if(soma != 0){
                    printf("\n--------------------------\n");
                } 
               }
                    
               separar();
                         }else{
                            if(calc == 2){
                                printf("\n\nDigite o 1° número: ");
                                scanf("%f",&multi1);
                                printf("\nDigite o 2° Número: ");
                                scanf("%f",&multi2);
            
                                printf("\n\n>>> %.2f * %.2f = %.2f\n",multi1,multi2,multi1*multi2);
                                separar();
                                printf("\n");
            
                                }else{
                                     if(calc == 3){
                                        printf("\nDigite o 1° Número: ");
                                        scanf("%f",&div1);
                                
                                        printf("\nDigite o 2° Número: ");
                                        scanf("%f",&div2);
                
                                        printf("\n\n>>> %.2f / %.2f = %.2f\n",div1,div2,div1/div2);
                                        separar();
                                        printf("\n");
            
                                        }else{
                                            if(calc == 4){
                                                printf("\n\nDigite o 1° número: ");
                                                scanf("%d",&mod1);
                                                printf("\nDigite o 2° Número: ");
                                                scanf("%d",&mod2);
            
                                                printf("\n\n>> %d %% %d = %d\n",mod1,mod2,mod1%mod2);
                                                separar();
                                                printf("\n");
                                        }    
                                }
                         }
                }
        
    }while( calc != 0 );
    
    printf("\n\n>>> Dê ENTER para sair...\n\n");
    
    return 0;
}

void separar(){
    printf("\n\n\n=====================================\n\n");
}
