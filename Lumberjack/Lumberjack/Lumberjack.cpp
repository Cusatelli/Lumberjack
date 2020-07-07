#include "Lumberjack.h"

void Lumberjack::Log(std::string str)
{
	std::cout << "\033[0m" << str << "\033[0m" << std::endl;
}

void Lumberjack::Log(SEVERITY severity_level, std::string str)
{
	std::cout << GetColor(severity_level) << Severity::GetSeverityPrefix(severity_level) << str << ResetColor() << std::endl;
}

std::string Lumberjack::GetColor(SEVERITY severity_level)
{
	switch (severity_level)
	{
	case SEVERITY::ERROR:
		return "\033[1m\033[31m";
	case SEVERITY::CRITICAL:
		return "\033[31m";
	case SEVERITY::WARNING:
		return "\033[33m";
	case SEVERITY::INFO:
		return "\033[37m";
	default:
		return "\033[0m";
	}
}

std::string Lumberjack::ResetColor()
{
	return "\033[0m";
}
