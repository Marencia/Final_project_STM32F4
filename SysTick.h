/*
 * Nombre: SysTick.h
 * Autor: Eduardo L. Blotta
 * Comentarios: Manejo de System Tick
 * Año 2021
 */
#include "CommonIO.h"
// ----------------------------------------------------------------------------
void SysTick_Handler(void);
void SysTick_Init(uint16_t); // Esta funcion se cre� aca para que gcc compile systick_handler (cosas del compilador...)
extern void SysTickHook ();//Acá tendria que agregar uint8_t GPIO_Pin
// ----------------------------------------------------------------------------
