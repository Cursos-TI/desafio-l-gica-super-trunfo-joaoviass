#include <stdio.h>

int main() {

    int opcao;

    printf("Menu Principal\n");
    printf("1. Iniciar Jogo\n");
    printf("2. Ver Regras\n");
    printf("3. Sair\n");
    printf("Escolha uma opção: \n");
    scanf("%d", &opcao);


    {
        switch (opcao)
        {

case 1:

    char codigo[4]; //CODIGO DA CARTA
    char nome[50]; //NOME DA CIDADE
    long int populacao; //POPULAÇÃO
    long double area; //ÁREA
    long double pib; //PIB
    long int pontos_turisticos; //PONTOS TURÍSTICOS
    char estado;  //ESTADO
        
        printf("Estado (A-H):\n");
        scanf(" %c", &estado); //O espaço antes do %c ajuda a ignorar espaços em branco que possam ficar no buffer.
    
        printf("Número da Carta (01-04):\n");
        scanf("%s", &codigo);
    
        printf("Nome da cidade: \n");
        scanf("%s", &nome);
    
        printf("População: \n");
        scanf("%ld", &populacao);
    
        printf("Área: \n");
        scanf("%Lf", &area);
    
        printf("PIB: \n");
        scanf("%Lf", &pib);
    
        printf("Numeros de pontos turísticos: \n");
        scanf("%ld", &pontos_turisticos);
    
        long double densidade = populacao / area; //CALCULANDO A DENSIDADE
        long double pibpercap = pib / populacao; //CALCULANDO O PIB PERCAPITA
        float superpoder = populacao + area + pib + pontos_turisticos + pibpercap + ( 1 / densidade );
    
    //ACIMA PEDI PARA A PESSOA COLOCAR AS IND=FORMAÇÕES NECESSARIAS PARA CADASTRAR A CARTA
    
        printf("\n Carta 1: \n");
        printf("Estado: %c\n", estado);
        printf("Código: %s\n", codigo);
        printf("Código da carta:");
        printf("%c", estado);
        printf("%s\n", codigo);
        printf("Cidade: %s\n", nome);
        printf("População: %ld\n", populacao);
        printf("Área: %.2Lf Km2 \n", area);
        printf("PIB: %.2Lf Bilhões \n", pib);
        printf("Pontos turísticos: %ld\n", pontos_turisticos);
        printf("Densidade Populacional: %.15Lf\n", densidade);
        printf("PIB per Capita: %.15Lf\n", pibpercap);
        printf("Super Poder: %f\n", superpoder);
    
        char codigoC2[4]; //APENAS ADICIONEI O C2 A FRENTE DE CADA VARIAVEL PARA CRIAR A CARTA 2
        char nomeC2[50];
        long int populacaoC2;
        long double areaC2;
        long double pibC2;
        long int pontos_turisticosC2;
        char estadoC2;
    
        printf("\n Estado (A-H):\n");
        scanf(" %c", &estadoC2); //O espaço antes do %c ajuda a ignorar espaços em branco que possam ficar no buffer.
    
        printf("Número da Carta (01-04):\n");
        scanf("%s", &codigoC2);
    
        printf("Nome da cidade: \n");
        scanf("%s", &nomeC2);
    
        printf("População: \n");
        scanf("%ld", &populacaoC2);
    
        printf("Área: \n");
        scanf("%Lf", &areaC2);
    
        printf("PIB: \n");
        scanf("%Lf", &pibC2);
    
        printf("Numeros de pontos turísticos: \n");
        scanf("%ld", &pontos_turisticosC2);
    
        long double densidadeC2 = populacaoC2 / areaC2;
        long double pibpercapc2 = pibC2 / populacaoC2;
        float superpoderC2 = populacaoC2 + areaC2 + pibC2 + pontos_turisticosC2 + pibpercapc2 + ( 1 / densidadeC2 );
    
        printf("\nCarta 2:\n");
        printf("Estado: %c\n", estadoC2);
        printf("Código: %s\n", codigoC2);
        printf("Código da carta:");
        printf("%c", estadoC2);
        printf("%s\n", codigoC2);
        printf("Cidade: %s\n", nomeC2);
        printf("População: %ld\n", populacaoC2);
        printf("Área: %.2Lf km2 \n", areaC2);
        printf("PIB: %.2Lf Bilhões \n", pibC2);
        printf("Pontos turísticos: %ld\n", pontos_turisticosC2);
        printf("Densidade Populacional: %.15Lf\n", densidadeC2);
        printf("PIB per Capita: %.15Lf\n", pibpercapc2);
        printf("Super Poder: %f\n", superpoderC2);
    
        /*Desafio tema 2*/

        char PrimeiroAtributo;
        char SegundoAtributo;
        int Resultado1, Resultado2;
        
        printf("\n Comparaçao de cartas: \n");

        printf("Escolha o primeiro atributo de comparação\n");
        printf("O - População\n");
        printf("A - Área\n");
        printf("P - PIB\n");
        printf("T - Pontos Turísticos\n");
        printf("I - PIB per capita\n");
        printf("D - Densidade Populacional\n");
        printf("S - Super Poder\n");

        printf("DIGITE:\n");
        scanf(" %c", &PrimeiroAtributo);

        switch (PrimeiroAtributo)
        {
        case 'O':
        case 'o':
            printf("Você escolheu População!\n");
            Resultado1 = populacao > populacaoC2 ? 1 : 0;
            
            break;

        case 'A':
        case 'a':
            printf("Você escolheu Área!\n");
            Resultado1 = area > areaC2 ? 1 : 0;
                
             break;

        case 'P':
        case 'p':
            printf("Você escolheu População!\n");
            Resultado1 = pib > pibC2 ? 1 : 0;
                    
            break;
                    
        case 'T':
        case 't':
            printf("Você escolheu Pontos Turísticos!\n");
            Resultado1 = pontos_turisticos > pontos_turisticosC2 ? 1 : 0;
                        
            break;        
        case 'I':
        case 'i':
            printf("Você escolheu PIB per capita!\n");
            Resultado1 = pibpercap > pibpercapc2 ? 1 : 0;
                             
            break;
        case 'D':
        case 'd':
            printf("Você escolheu Densidade!\n");
            Resultado1 = densidade < densidadeC2 ? 1 : 0;
                                  
            break;          
        case 'S':
        case 's':
            printf("Você escolheu Super Poder!\n");
            Resultado1 = superpoder > superpoderC2 ? 1 : 0;
                            
            break;
        default:
            printf("Opção Inválida!!!\n");
            break;
        }

        printf("Escolha o segundo atributo de comparação\n");
        printf("Devera ser diferente do primeiro\n");
        printf("O - População\n");
        printf("A - Área\n");
        printf("P - PIB\n");
        printf("T - Pontos Turísticos\n");
        printf("I - PIB per capita\n");
        printf("D - Densidade Populacional\n");
        printf("S - Super Poder\n");

        printf("DIGITE:\n");
        scanf(" %c", &SegundoAtributo);

        if (PrimeiroAtributo == SegundoAtributo)
        {
            printf("Você escolheu o mesmo atributo!!!\n");

        } else {
        
            switch (SegundoAtributo)
        {
        case 'O':
        case 'o':
            printf("Você escolheu População!\n");
            Resultado2 = populacao > populacaoC2 ? 1 : 0;
            
            break;

        case 'A':
        case 'a':
            printf("Você escolheu Área!\n");
            Resultado2 = area > areaC2 ? 1 : 0;
                
             break;

        case 'P':
        case 'p':
            printf("Você escolheu População!\n");
            Resultado2 = pib > pibC2 ? 1 : 0;
                    
            break;
                    
        case 'T':
        case 't':
            printf("Você escolheu Pontos Turísticos!\n");
            Resultado2 = pontos_turisticos > pontos_turisticosC2 ? 1 : 0;
                        
            break;        
        case 'I':
        case 'i':
            printf("Você escolheu PIB per capita!\n");
            Resultado2 = pibpercap > pibpercapc2 ? 1 : 0;
                             
            break;
        case 'D':
        case 'd':
            printf("Você escolheu Densidade!\n");
            Resultado2 = densidade < densidadeC2 ? 1 : 0;
                                  
            break;          
        case 'S':
        case 's':
            printf("Você escolheu Super Poder!\n");
            Resultado2 = superpoder > superpoderC2 ? 1 : 0;
                            
            break;
        default:
            printf("Opção Inválida!!!\n");
            break;
        }}

    if (Resultado1 && Resultado2) {

        printf("Você venceu!!!\n");
    }
    else if (Resultado1 != Resultado2)
    {
        printf("Empatou\n");
    }
    else 
    {
        printf("Você Perdeu!!!\n");

    }

break;

case 2:
        printf("REGRAS:\n");
        printf("Cada jogador forma um monte de cartas, de modo a ver apenas a carta de cima.\n");
        printf("O jogo começa com o jogador à esquerda do que distribuiu as cartas.\n");
        printf("O jogador inicial escolhe uma característica da sua carta e lê em voz alta.\n");
        printf("Os jogadores leem, na sua vez, o valor correspondente à característica escolhida.\n");
        printf("O jogador com o maior valor ganha a rodada.\n");
        printf("O vencedor da rodada recebe as cartas dos outros jogadores.\n");
        printf("A carta Super Trunfo vence todas as outras, exceto as marcadas com a letra A.\n");
        printf("Em caso de empate, os jogadores empatados decidem entre si quem ganha a rodada.\n");
        printf("O jogo termina quando um jogador ficar com todas as cartas do baralho.\n");

break;

case 3:

printf("Saindo...\n");

break;

default:

printf("Opção Invalida... Tente novamente!!!");
    
    break;
}



    return 0;
}}

