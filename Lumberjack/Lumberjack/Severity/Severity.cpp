#include "Severity.h"

void Severity::SetSeverityLevelValue(Severity::Level severity_level)
{
	m_Level = severity_level;
}

int Severity::GetSeverityLevelValue()
{
	return static_cast<int>(m_Level);
}

std::string Severity::GetSeverityPrefix(Severity::Level severity_level)
{
	switch (severity_level)
	{
	case Level::ERROR:
		return "[   ERROR   ]: ";
	case Level::CRITICAL:
		return "[  CRITICAL ]: ";
	case Level::WARNING:
		return "[  WARNING  ]: ";
	case Level::INFO:
		return "[    INFO   ]: ";
	default:
		return "";
	}
}
