#pragma once
#ifndef __GAMEOBJECT___
#define __GAMEOBJECT___

#include "PluginSettings.h"
#include "Vector2d.h"

class PLUGIN_API GameObject
{
private:

public:
	// Constructors
	GameObject();

	int GetId() const;
	void SetId(int id = 0);

	Vector2D GetPosition() const;
	void SetPosition(float x = 0.0f, float y = 0.0f);

private:

	int m_id;
	Vector2D m_position;
};

#endif