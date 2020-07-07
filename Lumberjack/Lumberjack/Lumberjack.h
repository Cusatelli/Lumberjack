#pragma once

#include "Severity/Severity.h"

#define SEVERITY Severity::Level

class Lumberjack
{
public:
	void Log(std::string str);
	void Log(SEVERITY severity_level, std::string str);

private:
	std::string GetColor(SEVERITY severity_level);
	std::string ResetColor();
};
