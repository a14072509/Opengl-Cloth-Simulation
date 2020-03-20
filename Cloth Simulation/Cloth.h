#ifndef CLOTH_SIM_H
#define CLOTH_SIM_H

#include "core.h"
#include "display.hpp"
#include "particle.h"
#include "Damper.h"
#include "Triangle.h"
#include <vector>

// Constants
#define CLOTH_WIDTH 10 
#define CLOTH_HEIGHT 10 
#define SAMPLES_PER_FRAME 5

#define CAMERA_ZOOM 8 
#define FLOORHEIGHT -2

extern vec3 wind;

const float SPRING_CONST = 500.f;
const float DAMP_CONST = 5.f;

class Cloth
{
public:
	GLuint VAO, VBO, NBO, EBO;
	vector<GLuint> indices;

	vector<Particle *> particles;
	vector<Damper *> dampers;
	vector<Triangle *> triangles;
	vector<vec3> positions;
	vector<vec3>  normals;

	Cloth();
	~Cloth();

	void rebind();
	void genNormals();
	void genWind();
	void genDamp();
	void translate(vec3 dist);
	void updateParticles();
	void draw();
	void update();
};

#endif