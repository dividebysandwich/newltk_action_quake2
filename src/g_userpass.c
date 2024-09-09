#include "g_local.h"

#ifndef MAX_STR_LEN
# define MAX_STR_LEN 1000
#endif // MAX_STR_LEN




qboolean CheckUserExists(char *PW  ,char *user)
{
	edict_t	*ent;
	int	i;
	qboolean found = false;

        for (i=0 ; i<maxclients->value ; i++)
        {
                ent = g_edicts + 1 + i;
		if ((strcmp (user,(Info_ValueForKey (ent->client->pers.userinfo, "name"))) == 0) && (ent->client->pers.connected == true))
		{
		gi.cprintf(NULL, PRINT_MEDIUM, "%s = %s",user,Info_ValueForKey (ent->client->pers.userinfo, "name"));
		found = true;
		return true;
		break;
		}
	}

	return false;
}


