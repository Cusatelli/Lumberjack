
#include "../Lumberjack.h"

int main()
{
	Lumberjack debug;
	debug.Log("This is a Debug.Log(str) test");
	debug.Log(SEVERITY::ERROR, "Test Print");
	debug.Log(SEVERITY::CRITICAL, "Test Print");
	debug.Log(SEVERITY::WARNING, "Test Print");
	debug.Log(SEVERITY::INFO, "Test Print");
}
