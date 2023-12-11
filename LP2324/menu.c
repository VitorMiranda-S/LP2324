
#include "menu.h"

void login (){

    do {
        printf("*******MENU PRINCIPAL*******");

        printf("1. Acesso como ADMIN\n");
        printf("2. Acesso como UTILIZADOR\n");
        printf("3. Carregar dados do ficheiro\n");
        printf("4. Gravar dados no ficheiro\n");
        printf("5. Sair\n\n");

        printf("Escolha a opção desejada");
        scanf("%d", &option);

        switch (option) {
            case 1:
                printf("Menu Admin\n");
                menuAdmin();
                break;
            case 2:
                printf("Menu Utilizador\n");
                //TODO     //menuUser();
                break;
            case 3:
                printf("Carregf\n");
                //carregar;
                break;
            case 4:
                printf("Gravar\n");
                //guardar
                break;
            case 5:
                printf("Saindo do programa\n");
                exit(0);
            default:
                printf("Introduza um valor de 1 a 5\n");

        }
    } while (option != 5);
}

void menuAdmin() {
    do {
        printf("*******Conta ADMIN*******");

        printf("1. Gerir catálogos de empresas\n");
        printf("2.Gerir Ramos de Atividade\n");
        printf("3. Visualizar relatórios\n");
        printf("4. Voltar ao menu principal\n");

        printf("Escolha a opção desejada");
        scanf("%d", &option);

        switch (option) {
            case 1:
                gerirCatalogoEmpresas();
                break;
            case 2:
                gerirRamosAtividade();
                break;
            case 3:
                visualizarRelatorios();
            case 4:
                printf("A voltar para o Menu Inicial\n");
                login();
            default:
                printf("Inválido! Introduza um valor de 1 a 5\n");

        }
        
        }while (option != 4);
}


void menuUser(){
    
    do {
        
    }
}
