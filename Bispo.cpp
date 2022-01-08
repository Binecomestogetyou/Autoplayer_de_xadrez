/*

	Autor: Cícero Augusto Alcântara de Sousa
	Última edição: 08/01/2021

*/

#include"Bispo.h"
#include"Conjunto.h"
#include"Peca.h"

Bispo::Bispo(Posicao posicao, int cor) : Peca(posicao, cor) {}

/*******************************************************************************************************
********************************************************************************************************
*******************************************************************************************************/
		
void Bispo::gerarMovimentos(vector<Movimento *> *movimentos){

	this -> Peca::gerarMovimentosColaterais(movimentos);
}

/*******************************************************************************************************
********************************************************************************************************
*******************************************************************************************************/
		
int Bispo::mover(){

	int natureza = this -> Peca::mover();
	
	if(natureza != -1){
		
		Conjunto::definirStatusEnPassant(true);
	}
	
	return natureza;}

/*******************************************************************************************************
********************************************************************************************************
*******************************************************************************************************/
		
string Bispo::obterClasse(){

	return "Bispo";
}
