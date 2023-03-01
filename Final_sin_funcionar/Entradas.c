/*
 * Nombre: Entradas.h
 * Autor: Eduardo L. Blotta
 * Comentarios: Manejo de Entradas Digitales en GPIO
 * Año 2021
 */
#include "Entradas.h"
/*----------------------------------------------------------------------------
  Inicializa Pines del Puerto, especificados en la mascara, como entrada
 *----------------------------------------------------------------------------*/
void In_Init(GPIO_TypeDef  *GPIOx, uint32_t mask, uint32_t pull) {
	GPIO_InitTypeDef GPIO_InitStructure;
	GPIO_InitStructure.Mode = GPIO_MODE_INPUT;
	GPIO_InitStructure.Pull = pull;
	GPIO_InitStructure.Pin =mask;
	GPIO_InitStructure.Speed = GPIO_SPEED_MEDIUM;		// Frec.Max.
	HAL_GPIO_Init(GPIOx, &GPIO_InitStructure);
}

