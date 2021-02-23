static const Block blocks[] = {
	/* Icon     Command               Interval   Signal */
	{  "",      "volume",             0,         10	},
	{  "",      "datetime",           1,         0	},
	{  "",      "echo dwm-6.2",       0,         0	},
};

//sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char delim[] = " | ";
static unsigned int delimLen = 5;

