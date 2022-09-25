#include <stdio.h>
#include <stdlib.h>
#include <string.h>

double main(){
    char name[100], email[150],telephone[30];
    
    
    printf("Escreva o seu nome:");
    gets(name);
    
    printf("Agora digite o seu e-mail:");
    gets(email);
    
    printf("E por fim, seu telephone:");
    gets(telephone);
    
    printf("Nome = %zu\n",strlen(name));
    printf("E-mail = %zu\n",strlen(email));
    printf("Telefone = %zu\n",strlen(telephone));
    
    
    return 0;
}