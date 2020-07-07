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
	// Get Prefix should be private. Work in progress for a workaround.
	static std::string GetSeverityPrefix(Level severity_level);

private:
	Level m_Level = Level::INFO; // Default Severity Level.
	void SetSeverityLevelValue(Level severity_level);
	int GetSeverityLevelValue();
};
