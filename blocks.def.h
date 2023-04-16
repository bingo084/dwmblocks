//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
    { "",       "sb-nettraf",   1,                  1 },
    { "",       "sb-cpu",       5,                  2 },
    { "",       "sb-memory",    60,                 3 },
    { "",       "sb-disk",      60,                 4 },
    { "",       "sb-weather",   3600,               5 },
    { "",       "sb-volume",    0,                  6 },
    { "",       "sb-battery",   60,                 7 },
    { "",       "sb-packages",  0,                  8 },
    { "",       "sb-internet",  60,                 9 },
    { "",       "sb-clock",     60,                 10 },
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
