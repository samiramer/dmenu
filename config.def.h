/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int fuzzy = 1;                      /* -F  option; if 0, dmenu doesn't use fuzzy matching     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"monospace:size=12"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	//[SchemeNorm] = { "#d8a657", "#1d2021" },
	//[SchemeSel] = { "#1d2021", "#d8a657" },
	//[SchemeSelHighlight] = { "#d8a657", "#1d2021" },
	//[SchemeNormHighlight] = { "#d8a657", "#1d2021" },
	//[SchemeOut] = { "#1d2021", "#d8a657" },
	[SchemeNorm] = { "#dedede", "#011627" },
	[SchemeSel] = { "#011627", "#999999" },
	[SchemeSelHighlight] = { "#dedede", "#011627" },
	[SchemeNormHighlight] = { "#dedede", "#011627" },
	[SchemeOut] = { "#011627", "#dedede" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
