/*
 * author: Cusatelli
 * source: https://github.com/Cusatelli/Luminate
 * license: MIT License
 */
#include "Severity.h"

/*
 * Set the local Severity Level
 */
void Severity::SetSeverityLevelValue(Severity::Level severity_level)
{
	m_Level = severity_level;
}

/*
 * Get the integer value of the enumeration.
 * This can be used to identify and filter the log level.
 */
int Severity::GetSeverityLevelValue()
{
	return static_cast<int>(m_Level);
}

/*
 * Get the prefix for logging in console. I.E when logging a message of Warning
 * Print [ WARNING ]: before the rest of the message.
 */
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
