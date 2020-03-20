#pragma once
#include "Particle.h"

class Damper{
public:
	Particle *p1, *p2;
	float length;
	float k;
	float d;

	void computeForce();
};


