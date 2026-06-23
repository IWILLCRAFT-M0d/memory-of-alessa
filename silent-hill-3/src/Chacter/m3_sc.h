#ifndef M3_SC_H
#define M3_SC_H

#include "Chacter/character.h"
#include "Chacter/chara_list.h"

#define WEAPON_ID_START 0x800

int shCharacter_Manage_Delete(u_short kind, u_short id);

SubCharacter* shCharacterCreate(CharaOptions* options);

void shCharacterDelete(SubCharacter* scp);

SubCharacter* shCharacterGetSubCharacter(short kind, short id);

extern SubCharacter* D_003DAD54;
extern void* D_003DAD50;
extern int D_003DAD5C;

#endif
