#ifndef SH3_WEAPON_H
#define SH3_WEAPON_H

/* from 0x001a84c0 */
#define WEAPON_NONE             0x0
#define WEAPON_HANDGUN          0x1
#define WEAPON_RIFLE            0x2
#define WEAPON_SUBMACHINE_GUN   0x3
#define WEAPON_KNIFE            0x4
#define WEAPON_STEEL_PIPE       0x5
#define WEAPON_KATANA           0x6
#define WEAPON_MAUL             0x7
#define WEAPON_STUN_GUN         0x8
#define WEAPON_LIGHT_SABER      0x9
#define WEAPON_FLAMETHROWER     0xA
#define WEAPON_GOLD_PIPE        0xD
#define WEAPON_SILVER_PIPE      0xE
#define WEAPON_SILENCED_HANDGUN 0xF
#define WEAPON_SILENCED_SMG     0x10
#define WEAPON_UNLIMITED_SMG    0x11
#define WEAPON_SILENCED_USMG    0x12

/* weapon IDs from 0x1D30B12; unclear purpose */
#define EQUIPPED_WEAPON_NONE           0x4
#define EQUIPPED_WEAPON_HANDGUN        0x5
#define EQUIPPED_WEAPON_SUBMACHINE_GUN 0x6
#define EQUIPPED_WEAPON_SHOTGUN        0x7
#define EQUIPPED_WEAPON_KNIFE          0x8
#define EQUIPPED_WEAPON_PIPE           0x9
#define EQUIPPED_WEAPON_MAUL           0xA
#define EQUIPPED_WEAPON_STUN_GUN       0xB
#define EQUIPPED_WEAPON_KATANA         0xC
#define EQUIPPED_WEAPON_BEAM_SABER     0xD
#define EQUIPPED_WEAPON_FLAMETHROWER   0xE

#endif // SH3_WEAPON_H
