#ifndef PINS_H_
#define PINS_H_

#undef OLED_SDA
#undef OLED_SCL
#undef OLED_RST

#define OLED_SDA	21
#define OLED_SCL	22
#define OLED_RST	16

#ifdef TTGO_T_Beam_V0_7
	#define GPS_RX	15
	#define GPS_TX	12
#endif

#ifdef TTGO_T_Beam_V1_0
	#define GPS_RX	12
	#define GPS_TX	34
	#define MANUAL_SEND 38
#endif

#endif
