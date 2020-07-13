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
	double m_speed;
	double m_direction;

public:
	Particle();
	virtual ~Particle();
	void update(int interval);
};

#endif /* PARTICLE_H_ */
