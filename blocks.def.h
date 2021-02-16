static const Block blocks[] = {
	/*	Icon	Command								Interval	Signal	*/
	{	"🕓",		"datetime",						1,			0	},
	{	"",			"volume",						0,			10	},
};

// Sets delimeter between status commands.
// NULL character ('\0') means no delimeter.
static char delim[] = " ";
static unsigned int delimLen = 5;

