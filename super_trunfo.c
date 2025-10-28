#include <stdio.h>

int main()

{
    // Variaveis para a resposta de entrada do usuário para falar SIM;
    char sim[5];
    char sim2[5];
    char sim3[15];

    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");

    // Apresentação do criador e do Jogo

    printf("Criado por, Luan Araujo, estudante de G.T.I!!!\n");
		
    printf("\n");
    printf("\n");
    printf("\n");

    printf("██████████╗ ██████  ██╗   ██╗ ███╗   ██╗ ███████╗   █████   \n");
    printf("    ██╔═══╝██╔══██╗ ██║   ██║ ████╗  ██║ ██╔════╝ ██╔═══██╗ \n");
    printf("    ██║    ██║  ██║ ██║   ██║ ██╔██╗ ██║ ██║      ██║   ██║ \n");
    printf("    ██║    ██║  ██║ ██║   ██║ ██║╚██╗██║ █████╗   ██║   ██║ \n");
    printf("    ██║    ██████╔╝ ██║   ██║ ██║╚██╗██║ ██╔══╝   ██║   ██║ \n");
    printf("    ██║    ██╔══██╗ ╚██████╔╝ ██║ ╚████║ ██║      ╚██████╔╝ \n");
    printf("    ╚═╝    ╚═╝  ╚═╝  ╚═════╝  ╚═╝  ╚═══╝ ╚═╝       ╚═════╝  \n");

    printf("\n");

    printf("████████   ██████ ████████    █    ██████    ██████   ██████ \n");
    printf("██        ██         ██      █ █   ██   ██  ██    ██ ██      \n");
    printf("███████   ███████    ██     █   █  ██    ██ ██    ██ ███████ \n");
    printf("██             ██    ██    ███████ ██   ██  ██    ██      ██ \n");
    printf("████████  ██████     ██    █     █ ██████    ██████  ██████  \n");

    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");

    printf("            O jogo Trunfo Estados e um jogo de cartas \n");
    printf("    educativo que compara os dados das capitais brasileiras como,\n");
    printf("a populacao, o PIB, área e o número de pontos tursticos de um capital. \n");

    printf("\n");
    printf("\n");

    printf("Além disso, você também calculará e adicionará propriedades derivadas ao jogo, \n");
    printf("           como densidade populacional e PIB per capita, assim,\n");
    printf("     enriquecendo as informações estratégicas de cada carta e do jogo.\n");

    printf("\n");
    printf("\n");

    printf("      Para aprender Geográfia de forma intuitiva e criativa!!!\n");

    printf("\n");
    printf("\n");
    printf("\n");

    // Regras do jogo

    printf("COMO JOGAR!!!\n");

    printf("\n");

    printf("Caro Jogador, neste primeiro nível, seu objetivo e construir\n");
    printf("        a base do nosso jogo Super Trunfo: Estados...\n");

    printf("\n");

    printf("Vamos montar um sistema para cadastrar as cartas\n");
    printf("com informações sobre os Estados e suas Capitais.\n");

    printf("\n");
    printf("\n");

    printf("Devemos começar inserindo as informações das cartas do Super Trunfo: Estados\n");

    printf("\n");

    printf("Para cada carta, o usuário deverá fornecer as seguintes informações:\n");

    printf("\n");
    printf("\n");

    printf("O Estado, o Código da Carta, o Nome da Capital, a População\n");

    printf("\n");

    printf("a Área em km², o PIB e o Número de Pontos Turísticos\n");

    printf("\n");

        // Pergunta para o usuário e resposta sim
        printf("Entendeu como jogar?\n");

        printf("\n");

        printf("digite sim!!!\n");
            scanf("%s", &sim);

    printf("\n");
    printf("\n");
    printf("\n");

    printf("INFORMAÇÕES BÁSICAS!!!\n");

    printf("\n");
    printf("\n");

    printf("- Para cada Estado do Brasil, devemos atribuir uma letra do alfabeto. Ex. Bahia - B.\n");

    printf("\n");
    printf("\n");
 
    printf("- O Código da Carta, deverá ter a letra do estado seguida\n");
    printf("de um número de 01 a 27 (ex: A01, B03).\n");

    printf("\n");
    printf("\n");
 
    printf("- Para deixar mais informativo o jogo, devemos colocar o Nome da Capital do Estado.\n");

    printf("\n");
    printf("\n");

    printf("- Inserindo a População, sendo o número de habitantes da Capital.\n");

    printf("\n");
    printf("\n");

 
    printf("- A Área em quilômetros quadrados km² das Capitais.\n");

    printf("\n");
    printf("\n");
 

    printf("Para um complemento maior das características das capitais, devemos informar:\n");

    printf("\n");
    printf("\n");

    printf("- O PIB, O Produto Interno Bruto da Capital.\n");
 
    printf("\n");
    printf("\n");

    printf("- E por fim, o Número de Pontos Turísticos, sendo a\n");
    printf("quantidade de pontos turísticos na Capital.\n");

    printf("\n");
    printf("\n");
    printf("\n");


        // Pergunta para o usuário e resposta sim
        printf("Muita informação? KKKK...\n");

        printf("\n");

        printf("Agora que sabemos todas essas informações, podemos iniciar o Jogo?");

        printf("\n");

        printf("digite sim, para iniciar!!!\n");
            scanf("%s", &sim2);


    printf("\n");
    printf("\n");
   

    printf("VAMOS INICIAR!!!\n");

    printf("\n");
    printf("\n");
   
        // Pergunta para o usuário e resposta sim
        printf("GRITAAA SIMMMM!!!! KKKK...\n");

        printf("\n");

        printf("Agora podemos iniciar O Super Trunfo: Estados!!!");

        printf("\n");

        printf("digite sim, para iniciar!!!\n");
            scanf("%s", &sim3);



    // Variaveis para a 1º CARTA

    char estado0[50];
    char codcarta0[50];
    char nomecapital0[50];
    int populacao0;
    float area0;
    float PIB0;
    int pontoturistico0;


    // Codígo de entrada de dados do usuário para a 1º CARTA

    printf("Para iniciarmos o jogo, vamos criar a 1º Carta do Super Trunfo: Estados\n");

    printf("\n");

    printf("------------- 1º CARTA -------------\n");

    printf("\n");
    printf("\n");

    printf("Digite a Letra para o nome do Estado: Acre\n");
    scanf("%s", &estado0);

    printf("\n");

    printf("Digite o Código da Carta:\n"); 
    scanf("%s", &codcarta0);

    printf("\n");

    printf("Digite o Nome da Capital:\n"); 
    scanf("%s", &nomecapital0); 

    printf("\n");

    printf("Digite o número da População:\n"); 
    scanf("%d", &populacao0); 

    printf("\n");

    printf("Digite a Área em km²:\n"); 
    scanf("%f", &area0); 

    printf("Digite o número do PIB - Prudoto Interno Bruto:\n");
    scanf("%f" , &PIB0);

    printf("Digite o número de Pontos Turísticos:\n");
    scanf("%d" , &pontoturistico0);

    //=================================================================

    // Variaveis para a 2º CARTA

    char estado1[50];
    char codcarta1[50];
    char nomecapital1[50];
    int populacao1;
    float area1;
    float PIB1;
    int pontoturistico1;


    // Codígo de entrada de dados do usuário para a 1º CARTA

    printf("Agora que já criamos a primera carta, podemos seguir para a criação da 2º Carta do Super Trunfo: Estados\n");

    printf("\n");

    printf("------------- 2º CARTA -------------\n");

    printf("\n");
    printf("\n");

    printf("Digite a Letra para o nome do Estado: Alagoas\n");
    scanf("%s", &estado1);

    printf("\n");

    printf("Digite o Código da Carta:\n"); 
    scanf("%s", &codcarta1);

    printf("\n");

    printf("Digite o Nome da Capital:\n"); 
    scanf("%s", &nomecapital1); 

    printf("\n");

    printf("Digite o número da População:\n"); 
    scanf("%d", &populacao1); 

    printf("\n");

    printf("Digite a Área em km²:\n"); 
    scanf("%f", &area1); 

    printf("Digite o número do PIB - Prudoto Interno Bruto:\n");
    scanf("%f" , &PIB1);

    printf("Digite o número de Pontos Turísticos:\n");
    scanf("%d" , &pontoturistico1);


    // Exibindo a carta

    printf("------------- 1º CARTA -------------\n");

    printf("\n");

    printf("Estado: %s\n" , estado0);
    printf("\n");
    printf("Código da Carta: %s\n" , codcarta0); 
    printf("\n");
    printf("Nome da Capital: %s\n" , nomecapital0); 
    printf("\n");
    printf("Número da População: %d\n" , populacao0); 
    printf("\n");
    printf("Área em km²: %f\n" , area0);
    printf("\n");
    printf("PIB - Prudoto Interno Bruto: %f\n" , PIB0);
    printf("\n");
    printf("Número de Pontos Turísticos: %d\n" , pontoturistico0);

    printf("\n");
    printf("\n");
    printf("\n");

    // Exibindo a carta

    printf("------------- 2º CARTA -------------\n");

    printf("\n");

    printf("Estado: %s\n" , estado1);
    printf("\n");
    printf("Código da Carta: %s\n" , codcarta1); 
    printf("\n");
    printf("Nome da Capital: %s\n" , nomecapital1); 
    printf("\n");
    printf("Número da População: %d\n" , populacao1); 
    printf("\n");
    printf("Área em km²: %f\n" , area0);
    printf("\n");
    printf("PIB - Prudoto Interno Bruto: %f\n" , PIB1);
    printf("\n");
    printf("Número de Pontos Turísticos: %d\n" , pontoturistico1);

    printf("\n");
    printf("\n");
    printf("\n");
    
    return 0;

    


}