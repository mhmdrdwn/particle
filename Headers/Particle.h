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
	double xSpeed;
	double ySpeed;

public:
	Particle();
	virtual ~Particle();
	void update();
};

#endif /* PARTICLE_H_ */
