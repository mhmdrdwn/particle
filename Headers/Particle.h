/*
 * Particle.h
 *
 *  Created on: Jul 13, 2020
 *      Author: mohamed
 */

#ifndef PARTICLE_H_
#define PARTICLE_H_

struct Particle {
	double m_x;
	double m_y;

public:
	Particle();
	virtual ~Particle();
};

#endif /* PARTICLE_H_ */
