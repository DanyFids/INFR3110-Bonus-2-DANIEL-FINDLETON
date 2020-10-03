#include "Wrapper.h"
#include "GameObject.h"


GameObject gameObject;

PLUGIN_API int GetId()
{
	return gameObject.GetId();
}

PLUGIN_API void SetId(int id)
{
	return gameObject.SetId(id);
}

PLUGIN_API Vector2D GetPosition()
{
	return gameObject.GetPosition();
}

PLUGIN_API void SetPosition(float x, float y)
{
	return gameObject.SetPosition(x, y);
}
