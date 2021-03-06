/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nogroup";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "#373737",   /* after initialization */
	[INPUT] =  "#3f3f3f",   /* during input */
	[FAILED] = "#1c1c1c",   /* wrong password */
	[PAM] =    "#555555",   /* waiting for PAM */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* PAM service that's used for authentication
 * - preconfigured for Gentoo
 **/
static const char* pam_service = "system-auth";
