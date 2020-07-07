/*
 * author: Cusatelli
 * source: https://github.com/Cusatelli/Luminate
 * license: MIT License
 */
#pragma once

#include <iostream>

class Severity
{
public:
	enum class Level { ERROR = 0, CRITICAL, WARNING, INFO }; // Different Severity Levels.

private:
	Level m_Level = Level::INFO; // Default Severity Level.
	void SetSeverityLevelValue(Level severity_level);
	int GetSeverityLevelValue();
};
