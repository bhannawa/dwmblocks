//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/									/*Update Interval*/	/*Update Signal*/
	/* {"⌨", 	"~/gitRepos/dwmblocks/statusbar/sb-kbselect", 					0,			30}, */
	/* {"",		"~/gitRepos/dwmblocks/statusbar/sb-tasks",					10,			26}, */
	/* {"",		"~/gitRepos/dwmblocks/statusbar/sb-music",					0,			11}, */
	/* {"",		"~/gitRepos/dwmblocks/statusbar/sb-news",					0,			6}, */
	/* {"",		"~/gitRepos/dwmblocks/statusbar/sb-price lbc \"LBRY Token\" 📚",			9000,			22}, */
	/* {"",		"~/gitRepos/dwmblocks/statusbar/sb-price bat \"Basic Attention Token\" 🦁",	9000,			20}, */
	/* {"",		"~/gitRepos/dwmblocks/statusbar/sb-price link \"Chainlink\" 🔗",			300,			25}, */
	/* {"",		"~/gitRepos/dwmblocks/statusbar/sb-price xmr \"Monero\" 🔒",			9000,			24}, */
	/* {"",		"~/gitRepos/dwmblocks/statusbar/sb-price eth Ethereum 🍸",			9000,			23}, */
	/* {"",		"~/gitRepos/dwmblocks/statusbar/sb-price btc Bitcoin 💰",			9000,			21}, */
	/* {"",		"~/gitRepos/dwmblocks/statusbar/sb-torrent",					20,			7}, */
	/* {"",		"~/gitRepos/dwmblocks/statusbar/sb-moonphase",					18000,			17}, */
	{"",		"~/gitRepos/dwmblocks/statusbar/sb-memory",					10,			14},
	/* {"",		"~/gitRepos/dwmblocks/statusbar/sb-cpu",						10,			18}, */
	{"",		"~/gitRepos/dwmblocks/statusbar/sb-forecast",					18000,			5},
	{"",		"~/gitRepos/dwmblocks/statusbar/sb-nettraf",					1,			16},
	{"",		"~/gitRepos/dwmblocks/statusbar/sb-pacpackages",					0,			8},
	{"",		"~/gitRepos/dwmblocks/statusbar/sb-mailbox",					180,			12},
	{"",		"~/gitRepos/dwmblocks/statusbar/sb-internet",					5,			4},
	{"",		"~/gitRepos/dwmblocks/statusbar/sb-volume",					0,			10},
	{"",		"~/gitRepos/dwmblocks/statusbar/sb-clock",					60,			1},
	{"",		"~/gitRepos/dwmblocks/statusbar/sb-battery",					5,			3},
};

//Sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char *delim = " ";

// Have dwmblocks automatically recompile and run when you edit this file in
// vim with the following line in your vimrc/init.vim:

// autocmd BufWritePost ~/.local/src/dwmblocksgitRepos.h !cd ~/.local/src/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid dwmblocks & }
