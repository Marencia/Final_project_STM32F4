/*
 * Nombre: SysTick.c
 * Autor: Eduardo L. Blotta 
 * Comentarios: Manejo de System Tick
 * Año 2021
 */
#include "SysTick.h"

// ----------------------------------------------------------------------------
// ----- SysTick_Handler() ----------------------------------------------------
// ----------------------------------------------------------------------------
 __IO uint32_t TimeRecBase = 0;  /* Time Recording base variable */
extern __IO uint32_t CmdIndex;


void SysTick_Handler (void)
{
	HAL_IncTick();	//Incrementa Tick del sistema (usado por algunas funciones de HAL Driver)
	SysTickHook (); // Función para colgarse de la interrupción del System Tick //y acá tendria que agregar GPIO_Pin
	/* Test on the command: Recording */
	  if (CmdIndex == 1)
	  {
	    /* Increments the time recording base variable */
	    TimeRecBase ++;
	  }
}

void SysTick_Init(uint16_t Frec_Ticks_Hz){
	SysTick_Config (SystemCoreClock / Frec_Ticks_Hz);
}
