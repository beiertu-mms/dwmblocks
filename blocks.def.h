static const Block blocks[] = {
	/* Icon     Command               Interval   Signal */
	{  "",       "echo ''",                                                                         0,         0	},
	{  "  ",    "gh api -H 'Accept: application/vnd.github+json' /notifications | jq length",    300,         0	},
	{  "  ",    "java-version",                                                                    0,         12	},
	{  "  ",    "system-status",                                                                   5,         0	},
	{  "  ",    "datetime",                                                                        1,         0	},
	{  "  ",    "echo dwm-6.4",                                                                    0,         0	},
};

//sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char delim[] = " | ";
static unsigned int delimLen = 5;

