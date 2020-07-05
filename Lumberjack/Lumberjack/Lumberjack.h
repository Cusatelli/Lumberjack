#pragma once

#include <iostream>

#include "Colors.h"

#define DEFAULT RESET

namespace Lumberjack
{
	template<class ...Debug> void Test(Debug ... args);

	class Debug
	{
	public:
		void Warning(std::string message);
		void Log(std::string str);
		void Log(std::string str, std::string color);
		void Log(std::string str, std::string color, bool endline);

		void Message(std::string str, int value);
		void Message(std::string str, float value);

	private:
		void print(std::string str, std::string color, bool endline);
	};
}
