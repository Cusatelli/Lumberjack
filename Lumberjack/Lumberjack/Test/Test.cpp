/*
 * author: Cusatelli
 * source: https://github.com/Cusatelli/Luminate
 * license: MIT License
 */
#include "../Lumberjack.h"

int main()
{
	Lumberjack debug;									// Initialise Lumberjack Class.
	debug.Log("This is a Debug.Log(str) test");		// Print a default message in console.
	debug.Log(SEVERITY::ERROR, "Test Print");		// Print an Error message in console.
	debug.Log(SEVERITY::CRITICAL, "Test Print");	// Print a Critical message in console.
	debug.Log(SEVERITY::WARNING, "Test Print");		// Print a Warning message in console.
	debug.Log(SEVERITY::INFO, "Test Print");		// Print a Info message in console.
}
