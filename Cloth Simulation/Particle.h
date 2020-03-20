#pragma once

#include "core.h"

class Particle{
public:

	const vec3 GRAVITY = vec3(0.f, -9.8f, 0.f);
	const float TIMER = 1.f/3000.f;
	const float ELASTICITY = 0.05f;
	const float FRICTION = 0.80f;

	float mass;
	vec3 velocity = vec3(0.f, 0.f, 0.f);
	vec3 force =  vec3(0.f, 0.f, 0.f);
	vec3 position;

	GLuint index;
	bool fixed;

	void update();
	void applyForce(vec3);
	void collisionCheck();
};
