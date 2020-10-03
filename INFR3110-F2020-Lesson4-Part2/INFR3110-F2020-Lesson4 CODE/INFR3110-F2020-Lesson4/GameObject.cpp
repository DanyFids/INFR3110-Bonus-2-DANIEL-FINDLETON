#include "GameObject.h"

GameObject::GameObject()
{
}

int GameObject::GetId() const
{
	return m_id;
}

void GameObject::SetId(int id)
{
	m_id = id;
}

Vector2D GameObject::GetPosition() const
{
	return m_position;
}

void GameObject::SetPosition(float x, float y)
{
	m_position.x = x;
	m_position.y = y;
}
