/*
 * Swarm.cpp
 *
 *  Created on: Jul 13, 2020
 *      Author: mohamed
 */

#include "../Headers/Swarm.h"

Swarm::Swarm() {
	m_pParticles = new Particle[NPARTICLES];
}

Swarm::~Swarm() {
	delete [] m_pParticles;
}

