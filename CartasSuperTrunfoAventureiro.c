#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    // --------------------------------------------------------------------------------------------------------------

    // Mensagens de inicio
    printf("\n");
    printf("Programa Super Trunfo de Paises\n");
    printf("Cadastre as cartas com informacoes sobre as cidades.\n");

    //Declaro as variaveis que iram guarda as informacoes das cartas.

    /*
        variavel que ira obter o estado de A a H (Se é uma cidade de primeiro mundo ou abaixo)
        declaro do tipo char --> caracteres
    */
    char estado,estado2;
    /*
        variavel que ira obter o codigo (depois do estado, saber o subgrupo dessa cidade)
        declaro do tipo char(mas vai ser uma array de caracteres) --> caracteres[limite de 4 caracteres e uma quebra de linha (\n)]
        coloquei limite [4]
    */
    char codigo[4],codigo2[4];
    /*
        essa variavel vai obter os nomes, com o limite de ate 50 caracteres
        declaro do tipo char(mas vai ser uma array de caracteres) --> caracteres[limite de 49 caracteres e uma quebra de linha (\n)]
    */
    char nome[50],nome2[50];
    /*
        essa variavel vai obter o numero da populacao da cidade (em numero inteiro)
        ela agora pode ter um armazenamento maior, mas apenas de numeros positivos e foi dobrado seu tamanho
    */
    unsigned long int populacao,populacao2;
    /*
        Declaro duas variaveis do mesmo tipo (float --> numero com ponto fluante)
        Iram guardar o valo da area em Km e PIB(Produto Interno Bruto)
    */
    float area,area2;
    float pib,pib2;
    /*
        E por fim uma variavel guardando o numero de pontos turisticos
    */
    int pontosTuristicos,pontosTuristicos2;

    float densidadePopulacional,densidadePopulacional2;
    float pibPerCapital,pibPerCapital2;

    // quebro duas linhas
    printf("\n\n");
    // começo perguntando a primeira carta
    printf("Carta 1\n");
    // Estado (A, B, C, D, F, G ou H)
    printf("Estado (A a H): ");
    scanf(" %c", &estado);
    // Código (01,02,03 OU 04)
    // Defino um limite de caracteres aserem lidos (%4s --> 4 caracteres de uma array)
    // Não coloco o & na variavel pois a variavel já é um ponteiro (index = 0,1,2,3,...)
    printf("Codigo(01 a 04): ");
    scanf(" %4s", codigo);
    // Coloco %[^\n] para na leitura do nome ela considerar os espaco ( ^ = considerar, \n = espaco )
    // ela só quebrara se aperta enter (\n) e não tab
    printf("Nome da cidade: ");
    scanf(" %[^\n]",nome);
    // Pedi a populacao (um numero inteiro, não considera os decimais)
    printf("Populacao: ");
    scanf(" %d", &populacao);
    // Pedi a area total (aqui considera os numeros com decimais)
    printf("Area: ");
    scanf("%f", &area);
    // Pedi o PIB (aqui considera os numeros com decimais)
    printf("PIB: ");
    scanf("%f", &pib);
    // Pedi o numero de pontos turisticos (um numero inteiro, não considera os decimais)
    printf("Pontos Turisticos: ");
    scanf("%d",&pontosTuristicos);
    // Calculando Densidade Populacional e PIB per Capita para Terceira Carta
    densidadePopulacional = populacao / area;
    pibPerCapital = pib / populacao;

    // quebro duas linhas
    printf("\n\n");
    // começo perguntando a segunda carta
    printf("Carta 2\n");
    // Estado (A, B, C, D, F, G ou H)
    printf("Estado(A a H): ");
    scanf(" %c", &estado2);
    // Código (01,02,03 OU 04)
    // Defino um limite de caracteres aserem lidos (%4s --> 4 caracteres de uma array)
    // Não coloco o & na variavel pois a variavel já é um ponteiro (index = 0,1,2,3,...)
    printf("Codigo(01 a 04): ");
    scanf(" %4s", codigo2);
    // Coloco %[^\n] para na leitura do nome ela considerar os espaco ( ^ = considerar, \n = espaco )
    // ela só quebrara se aperta enter (\n) e não tab
    printf("Nome da cidade: ");
    scanf(" %[^\n]",nome2);
    // Pedi a populacao (um numero inteiro, não considera os decimais)
    printf("Populacao: ");
    scanf(" %d", &populacao2);
    // Pedi a area total (aqui considera os numeros com decimais)
    printf("Area: ");
    scanf("%f", &area2);
    // Pedi o PIB (aqui considera os numeros com decimais)
    printf("PIB: ");
    scanf("%f", &pib2);
    // Pedi o numero de pontos turisticos (um numero inteiro, não considera os decimais)
    printf("Pontos Turisticos: ");
    scanf("%d",&pontosTuristicos2);
    // Calculando Densidade Populacional e PIB per Capita para segunda Carta
    densidadePopulacional2 = populacao2 / area2;
    pibPerCapital2 = pib2 / populacao2;

    // quebro duas linhas
    printf("\n\n");

    printf("Cartas Cadastradas com Sucesso...\n");
    printf("*******************************\n");
    printf("Cartas:");
    // quebro duas linhas
    printf("\n\n");
    // Apresentar primeira carta
    // um detalhe que coloco e que nas variaveis que guardam valores decimais (float), o sinal de %f mudei para %.2f, para exibir duas casas decimais
    printf("**Carta 1**\nCodigo: %c%s\nNome: %s\nPopulacao: %d\nArea: %.2f Km²\nPIB: %.2f bilhoes de reais\nPontos Turisticos: %d\nDensidade Populacional: %.2f hab/km²\nPIB per Capita: %.2f reais", estado,codigo,nome,populacao,area,pib,pontosTuristicos,densidadePopulacional,pibPerCapital);
    // quebro duas linhas
    printf("\n\n");
    // Apresentar segunda carta
    printf("**Carta 2**\nCodigo: %c%s\nNome: %s\nPopulacao: %d\nArea: %.2f Km²\nPIB: %.2f bilhoes de reais\nPontos Turisticos: %d\nDensidade Populacional: %.2f hab/km²\nPIB per Capita: %.2f reais\n", estado2,codigo2,nome2,populacao2,area2,pib2,pontosTuristicos2,densidadePopulacional2,pibPerCapital2);

    return 0;
}
