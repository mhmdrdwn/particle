/*
 * Particle.cpp
 *
 *  Created on: Jul 13, 2020
 *      Author: mohamed
 */

#include "../Headers/Particle.h"
#include <stdlib.h>

Particle::Particle() {
	m_x = (2.0 * rand()/RAND_MAX) - 1;
	m_y = (2.0 * rand()/RAND_MAX) - 1;
	xSpeed = 0.001 * ((2.0 * rand())/RAND_MAX -1);
	ySpeed = 0.001 * ((2.0 * rand())/RAND_MAX -1);
}

Particle::~Particle() {

}

void Particle::update(){
	m_x += xSpeed;
	m_y += ySpeed;

	if(m_x < -1 || m_x >= 1.0){
		xSpeed = -xSpeed;
	}
	if(m_y < -1 || m_y >= 1.0){
		ySpeed = -ySpeed;
	}
}
