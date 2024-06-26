/*
 * Jugador.h
 *
 *  Created on: 23 jun. 2024
 *      Author: Valentino Vignolo
 */

#ifndef JUGADOR_H_
#define JUGADOR_H_

#include <iostream>
using namespace std;

#include"Usuario.h"
#include "Multijugador.h"
#include "Abandona.h"
#include <vector>

class Jugador : public Usuario{
private:

	vector<Multijugador*> vectorMultijugador;
	vector<Abandona*> vectorAbandona;
	string nickname;
	string descripcion;

public:
	Jugador();

	vector<Multijugador*> getVectorMultijugador();
	void setVectorMultijugador(vector<Multijugador*>);

	vector<Abandona*> getVectorAbandona();
	void setVectorAbandona(vector<Abandona*>);

	virtual ~Jugador();
};

#endif /* JUGADOR_H_ */
