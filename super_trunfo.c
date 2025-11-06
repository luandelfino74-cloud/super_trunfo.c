#include <stdio.h>

int main()
{
    char sim[5];
    char sim2[5];
    
    printf("\n\n\n\n");
    printf("Criado por, Luan Araujo, estudante de G.T.I!!!\n\n\n");

    printf("██████████╗ ██████  ██╗   ██╗ ███╗   ██╗ ███████╗   █████   \n");
    printf("    ██╔═══╝██╔══██╗ ██║   ██║ ████╗  ██║ ██╔════╝ ██╔═══██╗ \n");
    printf("    ██║    ██║  ██║ ██║   ██║ ██╔██╗ ██║ ██║      ██║   ██║ \n");
    printf("    ██║    ██║  ██║ ██║   ██║ ██║╚██╗██║ █████╗   ██║   ██║ \n");
    printf("    ██║    ██████╔╝ ██║   ██║ ██║ ╚████║ ██║      ╚██████╔╝ \n");
    printf("    ╚═╝    ╚═╝  ╚═╝  ╚═════╝  ╚═╝  ╚═══╝ ╚═╝       ╚═════╝  \n\n");

    printf("████████   ██████ ████████    █    ██████    ██████   ██████ \n");
    printf("██        ██         ██      █ █   ██   ██  ██    ██ ██      \n");
    printf("███████   ███████    ██     █   █  ██    ██ ██    ██ ███████ \n");
    printf("██             ██    ██    ███████ ██   ██  ██    ██      ██ \n");
    printf("████████  ██████     ██    █     █ ██████    ██████  ██████  \n\n\n\n");

    printf("            O jogo Trunfo Estados e um jogo de cartas \n");
    printf("    educativo que compara os dados das capitais brasileiras como,\n");
    printf("a populacao, o PIB, área e o número de pontos tursticos de um capital. \n\n");

    printf("Além disso, você também calculará e adicionará propriedades derivadas ao jogo, \n");
    printf("           como densidade populacional e PIB per capita, assim,\n");
    printf("     enriquecendo as informações estratégicas de cada carta e do jogo.\n\n");

    printf("      Para aprender Geográfia de forma intuitiva e criativa!!!\n\n\n");

    printf("COMO JOGAR!!!\n\n");

    printf("Caro Jogador, neste primeiro nível, seu objetivo e construir\n");
    printf("        a base do nosso jogo Super Trunfo: Estados...\n\n");

    printf("Vamos montar um sistema para cadastrar as cartas\n");
    printf("com informações sobre os Estados e suas Capitais.\n\n");

    printf("Devemos começar inserindo as informações das cartas do Super Trunfo: Estados\n\n");

    printf("Para cada carta, o usuário deverá fornecer as seguintes informações:\n\n");

    printf("O Estado, o Código da Carta, o Nome da Capital, a População\n\n");
    printf("a Área em km², o PIB e o Número de Pontos Turísticos\n\n");

    printf("Entendeu como jogar?\n\n");
    printf("digite sim!!!\n");
    scanf("%4s", sim); 

    printf("\n\n\nINFORMAÇÕES BÁSICAS!!!\n\n");

    printf("- Para cada Estado do Brasil, devemos atribuir uma letra do alfabeto. Ex. Bahia - B.\n\n");
    printf("- O Código da Carta, deverá ter a letra do estado seguida\n");
    printf("de um número de 01 a 27 (ex: A01, B03).\n\n");
    printf("- Para deixar mais informativo o jogo, devemos colocar o Nome da Capital do Estado.\n\n");
    printf("- Inserindo a População, sendo o número de habitantes da Capital.\n\n");
    printf("- A Área em quilômetros quadrados km² das Capitais.\n\n");
    printf("Para um complemento maior das características das capitais, devemos informar:\n\n");
    printf("- O PIB, O Produto Interno Bruto da Capital.\n\n");
    printf("- E por fim, o Número de Pontos Turísticos, sendo a\n");
    printf("quantidade de pontos turísticos na Capital.\n\n\n");

    printf("Muita informação? KKKK...\n\n");
    printf("Agora que sabemos todas essas informações, podemos iniciar o Jogo?\n\n");
    printf("digite sim, para iniciar!!!\n");
    scanf("%4s\n\n\n", sim2); 


    // Variáveis da 1ª carta
    char nomeestado[20];
    char estado0[3];
    char codcarta0[5];
    char nomecapital0[20];
    unsigned long int populacao0;
    float area0;
    float PIB0;
    int pontoturistico0;
    float densidadepopulacional0;
    float PIBpercapita0;
    float superpoder0;

    // Entrada de dados

    printf("Para iniciarmos o jogo, vamos criar a 1º Carta do Super Trunfo: Estados\n\n");
    printf("------------- 1º CARTA -------------\n\n");

    printf("Digite o nome do estado:\n\n");
    scanf("%19s\n\n" , nomeestado);

    printf("Digite a Letra para o nome do Estado:\n\n");
    scanf("%2s\n\n", estado0);

    printf("Digite o Código da Carta:\n");
    scanf("%4s\n\n", codcarta0);

    printf("Digite o Nome da Capital:\n");
    scanf("%19s\n\n", nomecapital0);

    printf("Digite o número da População:\n");
    scanf("%lu\n\n", &populacao0);

    printf("Digite a Área em km²:\n");
    scanf("%f\n\n", &area0);

    printf("Digite o número do PIB - Prudoto Interno Bruto:\n");
    scanf("%f\n\n", &PIB0);

    printf("Digite o número de Pontos Turísticos:\n");
    scanf("%d\n\n", &pontoturistico0);

   
    densidadepopulacional0 = populacao0 / area0;
    PIBpercapita0 = PIB0 / populacao0;
    superpoder0 = (float)(populacao0) + (float)(area0) + (float)(PIB0) +
                  (float)(pontoturistico0) + (float)(PIBpercapita0) +
                  (float)(1.0 / densidadepopulacional0);
   
    // Variáveis da 2ª carta

    char nomeestado1[20];
    char estado1[3];
    char codcarta1[5];
    char nomecapital1[20];
    int populacao1;
    float area1;
    float PIB1;
    int pontoturistico1;
    float densidadepopulacional1;
    float PIBpercapita1;
    float superpoder1;

    printf("Agora que já criamos a primera carta, podemos seguir para a criação da 2º Carta do Super Trunfo: Estados\n\n");
    printf("------------- 2º CARTA -------------\n\n");

    printf("Digite o nome do estado:\n\n");
    scanf("%19s\n\n" , nomeestado);

    printf("Digite a Letra para o nome do Estado:\n");
    scanf("%2s\n\n", estado1);

    printf("Digite o Código da Carta:\n");
    scanf("%4s\n\n", codcarta1);

    printf("Digite o Nome da Capital:\n");
    scanf("%19s\n\n", nomecapital1);

    printf("Digite o número da População:\n");
    scanf("%d\n\n", &populacao1);

    printf("Digite a Área em km²:\n");
    scanf("%f\n\n", &area1);

    printf("Digite o número do PIB - Prudoto Interno Bruto:\n");
    scanf("%f\n\n", &PIB1);

    printf("Digite o número de Pontos Turísticos:\n");
    scanf("%d\n\n", &pontoturistico1);

    
    densidadepopulacional1 = populacao1 / area1;
    PIBpercapita1 = PIB1 / populacao1;
    superpoder1 = (float)(populacao1) + (float)(area1) + (float)(PIB1) +
                  (float)(pontoturistico1) + (float)(PIBpercapita1) +
                  (float)(1.0 / densidadepopulacional1);
                  
    // Exibindo a primeira carta

    printf("------------- 1º CARTA -------------\n\n");
    
    printf("Código da Carta: %s\n\n", codcarta0);
    printf("Nome da Capital: %s\n\n", nomecapital0);

    printf("Número da População: %lu\n\n", populacao0);
    if(populacao0 > populacao1)
        printf("1º Carta Venceu!!!\n");
        else
            printf("2º Carta Venceu!!!\n\n");

    printf("Área em km²: %.2f\n\n", area0);
    if(area0 > area1)
        printf("1º Carta Venceu!!!\n\n");
        else
            printf("2º Carta Venceu!!!\n\n");

    printf("PIB - Prudoto Interno Bruto: %.2f\n\n", PIB0);
    if(PIB0 > PIB1)
        printf("1º Carta Venceu!!!\n\n");
        else
            printf("2º Carta Venceu!!!\n\n");

    printf("Número de Pontos Turísticos: %d\n\n", pontoturistico0);
    if(pontoturistico0   > pontoturistico1)
        printf("1º Carta Venceu!!!\n\n");
        else
            printf("2º Carta Venceu!!!\n\n");

    printf("Densidade Populacional: %.2f habitantes/km²\n", densidadepopulacional0);
    if(densidadepopulacional0 > densidadepopulacional1)
        printf("1º Carta Venceu!!!\n\n");
        else
            printf("2º Carta Venceu!!!\n\n");

    printf("PIB per Capita: %.2f\n\n", PIBpercapita0);
    if(PIBpercapita0 > PIBpercapita1)
        printf("1º Carta Venceu!!!\n");
        else
            printf("2º Carta Venceu!!!\n\n");

    printf("PIB per Capita: %.2f\n\n", superpoder0);
    if(superpoder0 > superpoder1)
        printf("1º Carta Venceu!!!\n");
        else
            printf("2º Carta Venceu!!!\n\n");



    //Exibindo a segunda carta

    printf("------------- 2º CARTA -------------\n\n");
    
    printf("Estado: %s\n\n", estado1);
    printf("Código da Carta: %s\n\n", codcarta1);
    
     printf("Número da População: %lu\n\n", populacao1);
    if(populacao1 > populacao0)
        printf("2º Carta Venceu!!!\n\n");
        else
            printf("1º Carta Venceu!!!\n\n");

    printf("Área em km²: %.2f\n\n", area1);
    if(area1 > area0)
        printf("2º Carta Venceu!!!\n\n");
        else
            printf("1º Carta Venceu!!!\n\n");

    printf("PIB - Prudoto Interno Bruto: %.2f\n\n", PIB1);
    if(PIB1 > PIB0)
        printf("2º Carta Venceu!!!\n\n");
        else
            printf("1º Carta Venceu!!!\n\n");

    printf("Número de Pontos Turísticos: %d\n\n", pontoturistico1);
    if(pontoturistico1   > pontoturistico0)
        printf("2º Carta Venceu!!!\n\n");
        else
            printf("1º Carta Venceu!!!\n\n");

    printf("Densidade Populacional: %.2f habitantes/km²\n", densidadepopulacional1);
    if(densidadepopulacional1 > densidadepopulacional0)
        printf("2º Carta Venceu!!!\n\n");
        else
            printf("1º Carta Venceu!!!\n\n");

    printf("PIB per Capita: %.2f\n\n", PIBpercapita1);
    if(PIBpercapita1 > PIBpercapita0)
        printf("2º Carta Venceu!!!\n");
        else
            printf("1º Carta Venceu!!!\n\n");

    printf("PIB per Capita: %.2f\n\n", superpoder1);
    if(superpoder1 > superpoder0)
        printf("2º Carta Venceu!!!\n");
        else
            printf("1º Carta Venceu!!!\n\n");

    

      

    return 0;
}
