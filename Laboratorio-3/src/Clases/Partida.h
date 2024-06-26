/*
 * Partida.h
 *
 *  Created on: 26 jun. 2024
 *      Author: Luciano Guerrero
 */

#ifndef CLASES_PARTIDA_H_
#define CLASES_PARTIDA_H_

#include "Jugador.h"


class Partida {

private:
	Jugador* vectorJugador;
	int totalHorasJugadas;
public:
	Partida();

	Jugador* getVectorJugador();
	void setVectorJugador(Jugador*);

	int getTotalHorasJugadas();
	void setTotalHorasJugadas(int);
	virtual ~Partida();
};

#endif /* CLASES_PARTIDA_H_ */
