static const Block blocks[] = {
	/*	Icon	Command								Interval	Signal	*/
	{	"",			"echo dwm",						0,			10	},
	{	"",			"volume",						0,			10	},
	{	"🕓 ",		"datetime",						1,			0	},
};

//sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char delim[] = " | ";
static unsigned int delimLen = 5;

