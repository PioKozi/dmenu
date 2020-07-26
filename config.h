/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int instant = 0;
static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int fuzzy = 1;
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"Jetbrains Mono Nerd Font:size=11"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*                fg         bg       */
	[SchemeNorm] = { "#ebdbb2", "#1d2021" },
	[SchemeSel]  = { "#cc241d", "#1d2021" },
	[SchemeOut]  = { "#000000", "#83a598" }, // I don't actually know when this is used, probably not using dmenu to the fullest
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
