#include "Lumberjack.h"

namespace Lumberjack
{
	/* PUBLIC */
	void Debug::Warning(std::string message)
	{
		std::cout << YELLOW << message << RESET << std::endl;
	}

	void Debug::Log(std::string str)
	{
		print(str, DEFAULT, true);
	}

	void Debug::Log(std::string str, std::string color)
	{
		print(str, color, true);
	}

	void Debug::Log(std::string str, std::string color, bool endline)
	{
		print(str, color, endline);
	}

	void Debug::Message(std::string str, int value)
	{
		printf(str.c_str(), value);
		std::cout << std::endl;
	}

	void Debug::Message(std::string str, float value)
	{
		printf(str.c_str(), value);
		std::cout << std::endl;
	}

	/* PRIVATE */
	void Debug::print(std::string str, std::string color, bool endline)
	{
		std::cout << color << str << RESET;
		if (endline)
		{
			std::cout << std::endl;
		}
	}
}
