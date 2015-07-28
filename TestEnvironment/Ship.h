#pragma once

#include "PrimitiveModel.h"

class Ship
	: PrimitiveModel
{
public:
	Ship();
	~Ship();

	void Update();
	void ShipInput();
	void ShipGravity(float angle);

private:
	const float SPEED;
	const float TUNNEL_RADIUS;
	const float DEFAULT_GRAVITY;

	float gravity;
	float shipAngle;
	float shipPosX;
	float shipPosY;
};

