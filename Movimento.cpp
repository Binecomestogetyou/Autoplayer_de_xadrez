#include"Movimento.h"
#include"Posicao.h"

Movimento::Movimento(Posicao destino, int natureza)
	: destino(destino), natureza(natureza) {}
	
/************************************************************************************************************************
*************************************************************************************************************************
************************************************************************************************************************/

Posicao Movimento::obterDestino(){
	
	return this -> destino;
}

/************************************************************************************************************************
*************************************************************************************************************************
************************************************************************************************************************/

int Movimento::obterNatureza(){

	return this -> natureza;
}