#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <conio.c>
#include <time.h>
#define totCli 100
#define totPar 300

struct endereco{
       char logr [50]; //endereco
       char num [10]; //numero do endereco
       char cep [9];  //cep
       char cida [30]; //cidade
       char uf [3];  //uf
};

struct clientes{
       char nome[50]; //nome do cliente
       char codi[10]; //codigo do cliente
       char cpf [12]; //cpf do cliente (sem mascara)
       char rg [10]; //rg do cliente
       struct endereco ender;
};

//cliente
char nome[totCli][50]; //nome do cliente
char codi[totCli][10]; //codigo do cliente
char cpf [totCli][12]; //cpf do cliente (sem mascara)
char rg  [totCli][10]; //rg do cliente
char logr[totCli][50]; //endereco
char num [totCli][10]; //numero do endereco
char cep [totCli][9];  //cep
char cida[totCli][30]; //cidade
char uf  [totCli][3];  //uf
    
//parcelas
char  nume[totPar][10]; //numero do documento
char  codC[totPar][10]; //codigo do cliente
char  emis[totPar][10]; //data de emissao    dd/mm/aaaa
char  venc[totPar][10]; //data de vencimento dd/mm/aaaa
float  val[totPar];     //valor do documento
char  tcob[totPar];     //tipo de cobranca
char  pgto[totPar][10]; //data de pagamento  dd/mm/aaaa 
float valp[totPar];    //valor pago (recebido)
char  hist[totPar][60]; //historico
  
char tmpstr[200];
int x,y,contCli,contPar,impCli=0,impPar=0;
char tc;
//------------------------------------------------------------------------
void limpa(int ci, int li, int cf, int lf, int cor){
  textbackground(cor);
  for (x=ci; x<=cf; x++)
    for (y=li; y<=lf; y++){
      gotoxy(x,y); printf(" ");
    }  
}
//------------------------------------------------------------------------
void consultaCliente(){
  if (impCli==1){
     textbackground(0);
     textcolor(14);
     gotoxy(1,13);
     for (x=0;x<contCli;x++){ 
       //printf("%s \n",uf[x]);
       printf("%s %s %s %s \n",codi[x],nome[x],cpf[x],rg[x]);
       printf("%s %s %s %s %s \n\n",logr[x],num[x],cep[x],cida[x],uf[x]);
     } 
     tc=getch();
     limpa(1,13,78,25,0); 
     
  }     
}
//------------------------------------------------------------------------
int importaClientes(){
    int poscar;
    FILE *fileCli;
    fileCli = fopen("Clientes.txt", "r");
    
    if (fileCli == NULL){ //caso nao encontre o arquivo
      textcolor(15);
      textbackground(0);
      gotoxy(1,24); //o comando gotoxy utiliza parametros de COLUNA,LINHA para posicionar o cursor na tela
      printf("Arquivo (clientes.txt) nao pode ser aberto ");
      getchar();
      gotoxy(1,24);
      printf("                                           ");
      return(0);
    }
    contCli=0;
    while(fgets(tmpstr,200,fileCli)!=NULL){
       tmpstr[strlen(tmpstr)-1]='\0';
       //Codigo
       x=1; poscar=0;
       while (tmpstr[x]!='"') {
          codi[contCli][poscar]=tmpstr[x];
          poscar++;
          x++;    
       } 
       codi[contCli][strlen(codi[contCli])]='\0';
       //Nome
       x=x+3; poscar=0;
       while (tmpstr[x]!='"') {
          nome[contCli][poscar]=tmpstr[x];
          poscar++;
          x++;    
       } 
       nome[contCli][strlen(nome[contCli])]='\0';
       //cpf
       x=x+3; poscar=0;
       while (tmpstr[x]!='"') {
          cpf[contCli][poscar]=tmpstr[x];
          poscar++;
          x++;    
       } 
       cpf[contCli][strlen(cpf[contCli])]='\0';
       //rg
       x=x+3; poscar=0;
       while (tmpstr[x]!='"') {
          rg[contCli][poscar]=tmpstr[x];
          poscar++;
          x++;    
       } 
       rg[contCli][strlen(rg[contCli])]='\0';
       //logradouro
       x=x+3; poscar=0;
       while (tmpstr[x]!='"') {
          logr[contCli][poscar]=tmpstr[x];
          poscar++;
          x++;    
       } 
       logr[contCli][strlen(logr[contCli])]='\0';
       //Numero Logradoutro
       x=x+3; poscar=0;
       while (tmpstr[x]!='"') {
          num[contCli][poscar]=tmpstr[x];
          poscar++;
          x++;    
       } 
       num[contCli][strlen(num[contCli])]='\0';
       //cep
       x=x+3; poscar=0;
       while (tmpstr[x]!='"') {
          cep[contCli][poscar]=tmpstr[x];
          poscar++;
          x++;    
       } 
       cep[contCli][strlen(cep[contCli])]='\0';
       //Cidade
       x=x+3; poscar=0;
       while (tmpstr[x]!='"') {
          cida[contCli][poscar]=tmpstr[x];
          poscar++;
          x++;    
       } 
       cida[contCli][strlen(cida[contCli])]='\0';
       //uf
       x=x+3; poscar=0;
       while (tmpstr[x]!='"' && x<strlen(tmpstr)) {
          uf[contCli][poscar]=tmpstr[x];
          poscar++;
          x++;    
       } 
       uf[contCli][2]='\0'; //terceiro caracter com \0 (FIM DE STRING)
       contCli++;
      }                                               
    fclose(fileCli);
    return(1);
}
//----------------------------------------------------------------------
int importaParcelas(){
    FILE *filePar;
    filePar = fopen("Parcelas.txt", "r");
    
    if (filePar == NULL){ //caso nao encontre o arquivo
      textcolor(15);
      textbackground(0);
      gotoxy(1,24);  printf("Arquivo (parcelas.txt) nao pode ser aberto ");
      
      getchar();
      gotoxy(1,24);  printf("                                           ");
      return(0);
      
    }
    contPar=0;
    while(fgets(tmpstr,255,filePar)!=NULL){
        //
        contPar++;
      }                                               
    fclose(filePar);
    return(1);
}
//janela(10,5,25,15)
//----------------------------------------------------------------------
void janela(int ci, int li, int cf, int lf){
  for (x=ci+1; x<cf; x++){
      gotoxy(x,li); printf("%c",196); //linha inferior
      gotoxy(x,lf); printf("%c",196); //linha superior
      }
  for (x=li+1; x<lf; x++){
      gotoxy(ci,x); printf("%c",179); //coluna esquerda
      gotoxy(cf,x); printf("%c",179); //coluna direita
      }
  gotoxy(ci,li); printf("%c",218); //canto superior esquerdo
  gotoxy(ci,lf); printf("%c",192); //canto superior direito
  gotoxy(cf,li); printf("%c",191); //canto inferior esquerdo
  gotoxy(cf,lf); printf("%c",217); //canto inferior direito
  
}
//--------------------------------------------------------------------------
//OP??O INCLUIR ADICIONADA POR KENNY E LUIZ :D
int incluirCliente(){
    
    printf("\n\n\n\n\n\n");
    textbackground(0);
    textcolor(15);
    printf("----------------------------------------------------------------\n");
    textbackground(0);
    textcolor(15);
    struct clientes c;
    printf ("Informe o nome do cliente: ");
    gets(c.nome);
    fflush(stdin);
    printf ("Informe o codigo do cliente: ");
    gets(c.codi);
    fflush(stdin);
    printf ("Informe o CPF do cliente: ");
    gets(c.cpf);
    fflush(stdin);
    printf ("Informe o RG do cliente: ");
    gets(c.rg);
    fflush(stdin);
    printf ("Informe o logradouro do cliente: ");
    gets(c.ender.logr);
    fflush(stdin);
    printf ("Informe o numero do cliente: ");
    gets(c.ender.num);
    fflush(stdin);
    printf ("Informe o CEP do cliente: ");
    gets(c.ender.cep);
    fflush(stdin);
    printf ("Informe a cidade do cliente: ");
    gets(c.ender.cida);
    fflush(stdin);
    printf ("Informe a UF do cliente: ");
    gets(c.ender.uf);
    fflush(stdin);
    
    
    limpa(1,12,79,24,0);
    gotoxy(1, 12); 
    textcolor(10);
    printf("\nUsuario inserido com sucesso!\n");
    textcolor(10);
    system("pause");
    limpa(1,12,79,24,0);
    return 0;
    
    
    
}
//--------------------------------------------------------------------------
//OP??O INCLUIR ADICIONADA POR KENNY E LUIZ :)
void menuCliente(){  
  int pos2=1; 
  char opc;
  do{
     textcolor(15);
     textbackground(4);
     janela(18,5,30,11);
     
     gotoxy(19, 6); printf(" Incluir   ");
     gotoxy(19,7); printf(" Alterar   ");
     gotoxy(19,8); printf(" Excluir   ");
     gotoxy(19,9); printf(" Consultar ");
     gotoxy(19,10); printf(" Sair      ");
     textcolor(0);
     textbackground(15);
     
     switch (pos2){
       case 1: gotoxy(19, 6); printf(" Incluir   "); break;
       case 2: gotoxy(19, 7); printf(" Alterar   "); break;
       case 3: gotoxy(19, 8); printf(" Excluir   "); break;
       case 4: gotoxy(19, 9); printf(" Consultar "); break;
       case 5: gotoxy(19, 10); printf(" Sair      "); break;
     }
     opc=getch();
     if (opc==-32){ //tecla especial necessita pegar segundo valor
        opc=getch();
        switch (opc) {
          case 72:pos2--; break; //SETA PRA CIMA
          case 80:pos2++; break; //SETA PRA BAIXO
        }
     }
   if (pos2==0) pos2=5;
   if (pos2==6) pos2=1;
   if (opc == 13) //ENTER
     switch (pos2){
              case 1:
                   incluirCliente();
                   break;
              case 2:
                   break;
              case 3:
                   break;
              case 4:
                   consultaCliente();
                   break;
              case 5:
                   opc=27; //ESC
                   break;      
     }
 }
 while (opc!=27);
 textbackground(0);
 system("cls");
}
//----------------------------------------------------------------------
//MENU DAS PARCELAS CRIADA POR KENNY E LUIZ :)
void menuParcela(){
  int pos2=1; 
  char opc;
  do{
     textcolor(15);
     textbackground(4);
     janela(29,3,55,11);
     
     gotoxy(30,4); printf(" Incluir                 ");
     gotoxy(30,5); printf(" Alterar                 ");
     gotoxy(30,6); printf(" Excluir                 ");
     gotoxy(30,7); printf(" Lancar recebimento      ");
     gotoxy(30,8); printf(" Cancelar recebimento    ");
     gotoxy(30,9); printf(" Consultar               ");
     gotoxy(30,10); printf(" Sair                    ");
     textcolor(0);
     textbackground(15);
     
     switch (pos2){
       case 1: gotoxy(30, 4); printf(" Incluir                 "); break;
       case 2: gotoxy(30, 5); printf(" Alterar                 "); break;
       case 3: gotoxy(30, 6); printf(" Excluir                 "); break;
       case 4: gotoxy(30, 7); printf(" Lancar recebimento      "); break;
       case 5: gotoxy(30, 8); printf(" Cancelar recebimento    "); break;
       case 6: gotoxy(30, 9); printf(" Consultar               "); break;
       case 7: gotoxy(30, 10); printf(" Sair                    "); break;
     } 
     opc=getch();
     if (opc==-32){ //tecla especial necessita pegar segundo valor
        opc=getch();
        switch (opc) {
          case 72:pos2--; break; //SETA PRA CIMA
          case 80:pos2++; break; //SETA PRA BAIXO
        }
     }
   if (pos2==0) pos2=7;
   if (pos2==8) pos2=1;
   if (opc == 13) //ENTER
     switch (pos2){
              case 1:
                   break;
              case 2:
                   break;
              case 3:
                   break;
              case 4:
                   break;
              case 5:
                   break;
              case 6:
                   
                   break;
              case 7:
                   opc=27; //ESC
                   break;      
     }
 }
 while (opc!=27);
 textbackground(0);
 system("cls");
}
//----------------------------------------------------------------------
void menuPrincipal(){ //procedimento
  int pos1=1; 
  char opc;
  do{
     textcolor(15);
     textbackground(0);
     gotoxy(1,1); printf("Situacao importacao Clientes: %d",impCli); //0 nao importado | 1 importado
     gotoxy(1,2); printf("Situacao importacao Parcelas: %d",impPar); //0 nao importado | 1 importado
  
     textcolor(15);
     textbackground(1);
     janela(6,3,26,8);
     
     gotoxy(7, 4); printf(" Importar arquivos ");
     gotoxy(7, 5); printf(" Clientes          ");
     gotoxy(7, 6); printf(" Parcelas          ");
     gotoxy(7, 7); printf(" Fim               ");
     
     textcolor(0);
     textbackground(15);
     
     switch (pos1){
       case 1: gotoxy(7, 4); printf(" Importar arquivos "); break;
       case 2: gotoxy(7, 5); printf(" Clientes          "); break;
       case 3: gotoxy(7, 6); printf(" Parcelas          "); break;
       case 4: gotoxy(7, 7); printf(" Fim               "); break;
     }
     opc=getch();
     if (opc==-32){ //tecla especial necessita pegar segundo valor
        opc=getch();
        switch (opc) {
          case 72:pos1--; break; //SETA PRA CIMA
          case 80:pos1++; break; //SETA PRA BAIXO
        }
     }
   if (pos1==0) pos1=4;
   if (pos1==5) pos1=1;
   if (opc == 13) //ENTER
     switch (pos1){
              case 1:
                   impCli=importaClientes();
                   impPar=importaParcelas();
                   break;
              case 2:
                   menuCliente();
                   break;
              case 3:
                   menuParcela();
                   break;
              case 4:
                   opc=27;
                   break;      
     }
 }
 while (opc!=27);
}
//-----------------------------------------------------------------
int main(){
   menuPrincipal();
   
}
//INCLUIR CLIENTES (LINHA 212) KENNY E LUIZ 
//OBS PROCEDIMENTO DO MENU CLIENTE FOI CHAMADO NO CASE 1 O PROCEDIMENTO INCLUIR CLIENTE (LINHA 301)
