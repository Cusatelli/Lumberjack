/*
 * author: Cusatelli
 * source: https://github.com/Cusatelli/Luminate
 * license: MIT License
 */
#pragma once

#include "Severity/Severity.h"
#include <iostream>

#define SEVERITY Severity::Level // Quality of life definition.

class Lumberjack
{
public:
	void Log(std::string str);
	void Log(SEVERITY severity_level, std::string str);

private:
	std::string GetColor(SEVERITY severity_level);
	std::string ResetColor();
	// Was in Severity.h/.cpp, workaround too keep it private was to put it here instead:
	static std::string GetSeverityPrefix(SEVERITY severity_level);
};
