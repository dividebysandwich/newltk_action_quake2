

void InitBanList(void);
qboolean AddToBanList(char *ip);
qboolean Checkban(edict_t *ent, char *userinfo);
void DoBan(edict_t *target, char *msg);
qboolean NameInUse(edict_t *self, char *s);
char *GetDummyName(edict_t *self, char *s);
void MakeLegalName(edict_t *self, char *s);

//zu l÷schen!!:
void pg_testban(edict_t *ent, char *s);
void pg_hardban(edict_t *ent, char *s);
void pg_ipinfo(edict_t *ent, char *s);


