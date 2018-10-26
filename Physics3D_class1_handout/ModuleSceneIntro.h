#pragma once
#include "Module.h"
#include "p2DynArray.h"
#include "Globals.h"


#define BOUNCER_TIME 200

struct PhysBody3D;
class Cube;
class Plane;
class Look;

class ModuleSceneIntro : public Module
{
public:
	ModuleSceneIntro(Application* app, bool start_enabled = true);
	~ModuleSceneIntro();

	bool Start();
	update_status Update();
	bool CleanUp();

public:

	Plane * plane = nullptr;
	vec3* look = nullptr;
};
