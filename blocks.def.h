static const Block blocks[] = {
	/*	Icon	Command								Interval	Signal	*/
	{	"",		"echo ''",							0,			0	},
	{	"",		"date '+%H:%M:%S %a, %d %b %Y'",	1,			0	},
	{	"",		"echo ' '",							0,			0	},
};

// Sets delimeter between status commands.
// NULL character ('\0') means no delimeter.
static char delim[] = " ";
static unsigned int delimLen = 5;

