static const Block blocks[] = {
	/* Icon     Command               Interval   Signal */
	{  "jdk",   "java-version",       0,         12	},
	{  " ",    "volume",             0,         10	},
	{  " ",    "mic",                0,         11	},
	{  " ",    "datetime",           1,         0	},
	{  " ",    "echo dwm-6.2",       0,         0	},
};

// Sets delimeter between status commands.
// NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;

