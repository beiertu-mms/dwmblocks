static const Block blocks[] = {
	/* Icon     Command               Interval   Signal */
	{  "Java",  "java-version",       0,         12	},
	{  " ",    "volume",             0,         10	},
	{  " ",    "mic",                0,         11	},
	{  " ",    "datetime",           1,         0	},
	{  " ",    "echo dwm-6.2",       0,         0	},
};

//sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char delim[] = " | ";
static unsigned int delimLen = 5;

