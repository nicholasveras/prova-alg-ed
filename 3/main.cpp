#include <stdio.h>
#include <conio.h>
    
    int main() {
        
      int dia,mes,ano,a,b,c,d;
          
      
        printf("DIA DO NASCIMENTO:\n");
        scanf("%i",&dia);
        printf("MES DO NASCIMENTO:\n");
        scanf("%i",&mes);
        printf("ANO DO NASCMIENTO:\n");
        scanf("%i",&ano);
                      
        a=(dia*100+mes)+ano;
        b=(a/100) +(a % 100);
        c=b%5;
        
                       
        if(c==0) 
            printf("PERFIL TIMIDO");
            
        else if(c==1)
            printf("PERFIL SONHADOR");
            
        else if(c==2)
            printf("PERFIL PAQUERADOR");
            
        else if(c==3)
            printf("PERFIL ATRAENTE");
            
        else if (c==4)
            printf("PERFIL IRRESISTIVEL");
        
    return 0;
}