#include "CubeWall.h"


CubeWall::CubeWall()
	: PrimitiveModel(PrimitiveModel::CUBE)
	, posZ(150)
	, missingSide(false)
{
	SetScale(6.f, 6.f, 1.f);
}


CubeWall::~CubeWall()
{
}

void CubeWall::Update()
{
	D3DXVECTOR3 currentPosition = GetPosition();

	posZ -= 100 * gTimer->GetDeltaTime();

	if (!missingSide)
	{
		SetPosition(currentPosition.x, currentPosition.y, posZ);
	}

	if (currentPosition.z <= -10.f)
	{
		SetPosition (currentPosition.x, currentPosition.y, 150.f);
	}
	
	//std::cout << currentPosition.z << std::endl;
}