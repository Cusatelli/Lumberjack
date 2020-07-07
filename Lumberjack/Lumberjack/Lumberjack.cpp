/*
 * author: Cusatelli
 * source: https://github.com/Cusatelli/Luminate
 * license: MIT License
 */
#include "Lumberjack.h"
#include "Luminate.h"

/*
 * Log in console using the default colors.
 */
void Lumberjack::Log(std::string str)
{
	std::cout << COLOR::Default() << str << ResetColor() << std::endl;
}

/*
 * Log in console using custom console colors depending on Severity Levels.
 * I.E. Severity Level Warning will be printed as yellow. Promptly reset back to
 * default values at the end of console-out operation.
 */
void Lumberjack::Log(SEVERITY severity_level, std::string str)
{
	std::cout << GetColor(severity_level) << GetSeverityPrefix(severity_level) << str << ResetColor() << std::endl;
}

/*
 * Return the ANSI color values back in the form of a string value,
 * depending on Severity Levels the color value will change.
 * I.E. CRITICAL will return a highlighted RED color.
 */
std::string Lumberjack::GetColor(SEVERITY severity_level)
{
	switch (severity_level)
	{
	case SEVERITY::ERROR:
		return COLOR::Bright_Red(); //"\033[1m\033[31m";
	case SEVERITY::CRITICAL:
		return COLOR::Red(); //"\033[31m";
	case SEVERITY::WARNING:
		return COLOR::Yellow(); //"\033[33m";
	case SEVERITY::INFO:
		return COLOR::Bright_White(); //"\033[37m";
	default:
		return COLOR::Default(); //"\033[0m";
	}
}

/*
 * Get the prefix for logging in console. I.E when logging a message of Warning
 * Print [ WARNING ]: before the rest of the message.
 */
std::string Lumberjack::GetSeverityPrefix(SEVERITY severity_level)
{
	switch (severity_level)
	{
	case SEVERITY::ERROR:
		return "[   ERROR   ]: ";
	case SEVERITY::CRITICAL:
		return "[  CRITICAL ]: ";
	case SEVERITY::WARNING:
		return "[  WARNING  ]: ";
	case SEVERITY::INFO:
		return "[    INFO   ]: ";
	default:
		return "";
	}
}

/*
 * Return the default ANSI color values back in the form of a string value.
 * This can be used to reset the previously set color value, back to default.
 */
std::string Lumberjack::ResetColor()
{
	return COLOR::Reset();
}
