/* 
 * File:   OLED.h
 * Author: Sparky
 *
 * Created on ?????, 2014, ??? 16, 18:51
 */

#ifndef OLED_H
#define	OLED_H

#ifdef	__cplusplus
extern "C" {
#endif

typedef struct __PACKED{
    int SH1106:1;
    int InternalChargePump:1;
}displaysetup_t;

#ifndef _OLED_C
#define OLEDC_EXTERN extern

extern volatile displaysetup_t DisplaySetup;

#else
#define OLEDC_EXTERN
#endif


OLEDC_EXTERN union {
    UINT32 D[8][32];
    UINT8 B[8][128];
}OLEDBUFF;

OLEDC_EXTERN void OLEDInit();
OLEDC_EXTERN void OLEDUpdate();

#undef OLEDC_EXTERN



#ifdef	__cplusplus
}
#endif

#endif	/* OLED_H */

