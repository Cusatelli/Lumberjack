#pragma once

#include <iostream>

class Severity
{
public:
	enum class Level { ERROR = 0, CRITICAL, WARNING, INFO };
	static std::string GetSeverityPrefix(Level severity_level);

private:
	Level m_Level = Level::INFO;
	void SetSeverityLevelValue(Level severity_level);
	int GetSeverityLevelValue();
};
