#include "common.h"

INCLUDE_ASM("asm/nonmatchings/movie/pss_main", pssSystemColdInit);

INCLUDE_ASM("asm/nonmatchings/movie/pss_main", pssSetWorkAddress);

INCLUDE_ASM("asm/nonmatchings/movie/pss_main", pssInit);

INCLUDE_ASM("asm/nonmatchings/movie/pss_main", pssExit);

INCLUDE_ASM("asm/nonmatchings/movie/pss_main", pssSetControlData);

INCLUDE_ASM("asm/nonmatchings/movie/pss_main", pssMain);

INCLUDE_ASM("asm/nonmatchings/movie/pss_main", readMpeg);

INCLUDE_ASM("asm/nonmatchings/movie/pss_main", pssMpegFinish);

INCLUDE_ASM("asm/nonmatchings/movie/pss_main", pssMpegPlayStart);

INCLUDE_ASM("asm/nonmatchings/movie/pss_main", switchThread);

INCLUDE_ASM("asm/nonmatchings/movie/pss_main", isAudioOK);

INCLUDE_ASM("asm/nonmatchings/movie/pss_main", initAll);

INCLUDE_ASM("asm/nonmatchings/movie/pss_main", termAll);

INCLUDE_ASM("asm/nonmatchings/movie/pss_main", defMain);

INCLUDE_ASM("asm/nonmatchings/movie/pss_main", pssGetPssStatus);

INCLUDE_ASM("asm/nonmatchings/movie/pss_main", pssGetPssAbortFlag);

INCLUDE_ASM("asm/nonmatchings/movie/pss_main", pssGetMaskSwitch);

INCLUDE_ASM("asm/nonmatchings/movie/pss_main", pssSetMaskSwitch);

INCLUDE_ASM("asm/nonmatchings/movie/pss_main", pssCheckMovieCancel);

INCLUDE_ASM("asm/nonmatchings/movie/pss_main", pssSetSubTitleData);

INCLUDE_ASM("asm/nonmatchings/movie/pss_main", ErrMessage);

INCLUDE_ASM("asm/nonmatchings/movie/pss_main", proceedAudio);
