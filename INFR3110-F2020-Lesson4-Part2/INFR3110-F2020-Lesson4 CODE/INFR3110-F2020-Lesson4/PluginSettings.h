#pragma once
#ifndef __PLUGIN_SETTINGS__
#define __PLUGIN_SETTINGS__
	#ifdef PLUGIN_EXPORTS
	#define PLUGIN_API __declspec(dllexport)
	#elif PLUGIN_IMPORTS
	#define PLUGIN_API __declspec(dllimport)
	#else PLUGIN_API
	#endif
#endif