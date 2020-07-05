#include "Lumberjack.h"

int main()
{
	Lumberjack::Debug* debug = new Lumberjack::Debug;
	debug->Warning("Debug Warning");

	for (float i = 0; i < 1000; i += .001f)
	{
		if (i <= 1.0f)
		{
			debug->Message("Log message: %f, ", i);
		}
	}

	return 0;
}
