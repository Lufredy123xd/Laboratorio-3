/*
 * Jugador.h
 *
 *  Created on: 23 jun. 2024
 *      Author: Valentino Vignolo
 */

#ifndef JUGADOR_H_
#define JUGADOR_H_

#include "Usuario.h"
#include "Partida.h"

#include <vector>
#include <iostream>

using namespace std;

class Jugador: public Usuario {

public:
	Jugador();
	vector<Partida*> vectorPartida;
	virtual ~Jugador();

private:
	string nickname;
	string descripcion;
};

#endif /* JUGADOR_H_ */
