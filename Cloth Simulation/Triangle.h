#pragma once
#include "Particle.h"

class Triangle{
public:
	const float AIR_DENSITY = 10.f;
	const float DRAG_COEFF = 1.f;

	Particle *p1, *p2, *p3;

	Triangle(Particle* pa1, Particle* pa2, Particle* pa3);
	
	void applyWind();
};


