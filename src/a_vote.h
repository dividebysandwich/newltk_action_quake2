      
//=== map voting ===========================================================
//==========================================================================
      
typedef struct votelist_s
{
  char  *mapname;
  int   num_votes;
  struct votelist_s *next;
} votelist_t;

#define MAPMENUTITLE "Mapmenu"

void Cmd_Votemap_f(edict_t *ent, char *t);
void Cmd_Maplist_f(edict_t *ent, char *dummy);
void _MapInitClient(edict_t *ent);
void _RemoveVoteFromMap(edict_t *ent);
void _MapExitLevel(char *NextMap);
qboolean _CheckMapVotes(void);
void _MapWithMostVotes(void);
cvar_t * _InitMapVotelist(ini_t *ini);
void MapVoteMenu(edict_t *ent, pmenu_t *p);



//=== kick voting ==========================================================
//==========================================================================

#define KICKMENUTITLE "Kickmenu"

cvar_t *_InitKickVote(ini_t *ini);
void _InitKickClient (edict_t *ent);
void _ClientKickDisconnect (edict_t *ent);
void _KickVoteSelected(edict_t *ent, pmenu_t *p);
void _CheckKickVote(void);
void Cmd_Votekick_f(edict_t *ent, char *argument);
void Cmd_Votekicknum_f(edict_t *ent, char *argument);
void Cmd_Kicklist_f(edict_t *ent, char *argument);

//=== player ignoring ======================================================
//==========================================================================

#define IGNOREMENUTITLE "Ignoremenu"
#define PG_MAXPLAYERS 11

typedef edict_t *ignorelist_t[PG_MAXPLAYERS];

void Cmd_Ignoreclear_f(edict_t *self, char *s);
void Cmd_Ignorelist_f(edict_t *self, char *s);
void Cmd_Ignorenum_f(edict_t *self, char *s);
void Cmd_Ignore_f(edict_t *self, char *s);
void _ClrIgnoresOn(edict_t *target);
int  IsInIgnoreList(edict_t *source, edict_t *subject);
void _IgnoreVoteSelected(edict_t *ent, pmenu_t *p);
void _ClearIgnoreList(edict_t *ent);

