#pragma once
#ifndef __WRAPPER__
#define __WRAPPER__

#include "PluginSettings.h"
#include "Vector2d.h"

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus
	PLUGIN_API int GetId();

	PLUGIN_API void SetId(int id);

	PLUGIN_API Vector2D GetPosition();

	PLUGIN_API void SetPosition(float x, float y);

#ifdef __cplusplus
}
#endif // __cplusplus



class Wrapper
{

};


#endif // !__WRAPPER__