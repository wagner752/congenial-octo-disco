#include "cadastro.h"

using namespace std;

int cadastrarAnimal(){
   int selecao, escolha, auxiliar;

   cout << "\n===========================================================================" << endl;
   cout << "Cadastrar animal no sistema" << endl;
   cout << "===========================================================================\n\n" << endl;

   recarregar:
   cout << "Digite somente o ID do animal" << endl;
   cout << "Exemplo(12)" << endl;
   cin >> selecao;
 
   auxiliar = carregarDados(selecao, escolha = 1);
   if(auxiliar == 0){
      return 0;
   }
   //SAIR DA FUNÇÃO
   if (auxiliar == 1){
      goto recarregar;
   }
   if(auxiliar == 2){
      //CADASTRAR ANIMAL
      escreverArquivo(selecao);
   }
}