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
