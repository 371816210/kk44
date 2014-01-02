
#ifndef __LCD_NULL__
#define __LCD_NULL__


/* Base */
#define SCREEN_TYPE		SCREEN_RGB
#define LVDS_FORMAT       	LVDS_8BIT_1
#define OUT_FACE		OUT_P888
#define DCLK			71000000
#define LCDC_ACLK       	500000000    //29 lcdc axi DMA ÆµÂÊ

/* Timing */
#define H_PW			1
#define H_BP			1
#define H_VD			1280
#define H_FP			158

#define V_PW			1
#define V_BP			1
#define V_VD		 800
#define V_FP			21

#define LCD_WIDTH       	216    //need modify
#define LCD_HEIGHT      	135

/* Other */
#define DCLK_POL		0
#define DEN_POL			0
#define VSYNC_POL		0
#define HSYNC_POL		0

#define SWAP_RB			0
#define SWAP_DUMMY		0
#define SWAP_GB			0
#define SWAP_RG			0



#endif

