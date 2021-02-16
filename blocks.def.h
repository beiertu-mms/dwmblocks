static const Block blocks[] = {
	/*	Icon	Command								Interval	Signal	*/
	{	"🕓",		"datetime",						1,			0	},
	{	"",			"volume",						0,			10	},
};

//sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char delim[] = " | ";
static unsigned int delimLen = 5;

