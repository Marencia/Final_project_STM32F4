/**
  ******************************************************************************
  * @file    Audio/Audio_playback_and_record/Inc/main.h
  * @author  MCD Application Team
  * @brief   Header for main.c module.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2017 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under Ultimate Liberty license
  * SLA0044, the "License"; You may not use this file except in compliance with
  * the License. You may obtain a copy of the License at:
  *                             www.st.com/SLA0044
  *
  ******************************************************************************
  */ 
  
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx_hal.h"
#include "stm32f4_discovery.h"
#include "stm32f4_discovery_audio.h"
#include "stm32f4_discovery_accelerometer.h"
#include <stdio.h>
#include "stm32f4xx_it.h"
#include "waveplayer.h"

#include "waverecorder.h"
#include "ff.h"
#include "ff_gen_drv.h"
#include "usbh_diskio_dma.h"
 
/* Exported types ------------------------------------------------------------*/
/* Exported constants --------------------------------------------------------*/
/* Uncomment this define to disable repeat feature */
#define PLAY_REPEAT_DISABLED

typedef enum
{
  APPLICATION_IDLE = 0,  
  APPLICATION_START,    
  APPLICATION_RUNNING,
}
MSC_ApplicationTypeDef;
/* You can change the Wave file name as you need, but do not exceed 11 characters */
#define WAVE_NAME "0:audio_sample.wav"
#define REC_WAVE_NAME "0:rec_00.wav"
#define REC_WAVE_NAME_1 "1:rec_01.wav"
#define REC_WAVE_NAME_2 "2:rec_02.wav"
#define REC_WAVE_NAME_3 "3:rec_03.wav"
#define REC_WAVE_NAME_4 "4:rec_04.wav"
#define REC_WAVE_NAME_5 "5:rec_05.wav"
#define REC_WAVE_NAME_6 "6:rec_06.wav"
#define REC_WAVE_NAME_7 "7:rec_07.wav"
#define REC_WAVE_NAME_8 "8:rec_08.wav"
#define REC_WAVE_NAME_9 "9:rec_09.wav"
#define REC_WAVE_NAME_10 "10:rec_A.wav"
#define REC_WAVE_NAME_11 "11:rec_B.wav"
#define REC_WAVE_NAME_12 "12:rec_C.wav"
#define REC_WAVE_NAME_13 "13:rec_D.wav"
#define REC_WAVE_NAME_14 "14:rec_E.wav"
#define REC_WAVE_NAME_15 "15:rec_F.wav"

/* State Machine for the USBH_USR_ApplicationState */
#define USBH_USR_FS_INIT    ((uint8_t)0x00)
#define USBH_USR_AUDIO      ((uint8_t)0x01)

/* Defines for the Audio used commands */
#define CMD_PLAY           ((uint32_t)0x00)
#define CMD_RECORD         ((uint32_t)0x01)
#define CMD_STOP           ((uint32_t)0x02)
#define CMD_STOPP		   ((uint32_t)0x03)
#define CMD_STOPR		   ((uint32_t)0x04)

/* Defines for LEDs lighting */
#define LED3_TOGGLE      0x03  /* Toggle LED3 */
#define LED4_TOGGLE      0x04  /* Toggle LED4 */
#define LED6_TOGGLE      0x06  /* Toggle LED6 */
#define LEDS_OFF         0x07  /* Turn OFF all LEDs */
#define STOP_TOGGLE      0x00  /* Stop LED Toggling */

/* Defines for the Audio playing process */
#define PAUSE_STATUS     ((uint32_t)0x00) /* Audio Player in Pause Status */
#define RESUME_STATUS    ((uint32_t)0x01) /* Audio Player in Resume Status */
#define IDLE_STATUS      ((uint32_t)0x02) /* Audio Player in Idle Status */

#define REPEAT_ON        ((uint32_t)0x00) /* Replay Status in ON */
#define REPEAT_OFF       ((uint32_t)0x01) /* Replay Status in OFF */

/* Defines for MEMS Acclerometer ID Types */
#define MEMS_LIS3DSH     0x3F /* LIS3DSH MEMS Acclerometer ID */
#define MEMS_LIS302DL    0x3B /* LIS302DL MEMS Acclerometer ID */
                                                                                    
/* Exported macro ------------------------------------------------------------*/
/* Exported functions ------------------------------------------------------- */
void Error_Handler(void);

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
