#include "common.h"

INCLUDE_ASM("asm/nonmatchings/movie/pss_disp", pssInitDisplay);

INCLUDE_ASM("asm/nonmatchings/movie/pss_disp", pssDispClear);

INCLUDE_ASM("asm/nonmatchings/movie/pss_disp", clearFinish);

INCLUDE_ASM("asm/nonmatchings/movie/pss_disp", vblankHandler);

INCLUDE_ASM("asm/nonmatchings/movie/pss_disp", pssDrawSubTitle);

INCLUDE_ASM("asm/nonmatchings/movie/pss_disp", handler_endimage);

INCLUDE_ASM("asm/nonmatchings/movie/pss_disp", startDisplay);

INCLUDE_ASM("asm/nonmatchings/movie/pss_disp", endDisplay);

INCLUDE_ASM("asm/nonmatchings/movie/pss_disp", MovePicture);

INCLUDE_ASM("asm/nonmatchings/movie/pss_disp", SetDrawFBP);

INCLUDE_ASM("asm/nonmatchings/movie/pss_disp", SetUndoXYOFFSET);
