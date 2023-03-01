/*
 * Nombre: Salidas.c
 * Autor: Eduardo L. Blotta
 * Comentarios: Manejo de Salidas Digitales en los GPIO
 * Año 2021
 */
#include "Salidas.h"
/*----------------------------------------------------------------------------
  inicializa Port E/S
 *----------------------------------------------------------------------------*/
void Out_Init(GPIO_TypeDef  *GPIOx, uint32_t mask, uint32_t pull) {
	// Configure pin(s)
	GPIO_InitTypeDef GPIO_InitStructure;
	GPIO_InitStructure.Pin = mask;
	GPIO_InitStructure.Mode = GPIO_MODE_OUTPUT_PP;	// Pin(s) as Output
	GPIO_InitStructure.Speed = GPIO_SPEED_MEDIUM;		// Frec.Max.
	GPIO_InitStructure.Pull = pull;			// Pin(s) as No Pull
	HAL_GPIO_Init(GPIOx, &GPIO_InitStructure);		// Initialize GPIO_InitStructure on GPIOx
}

/*----------------------------------------------------------------------------
  Setea el Mux 2 a 4 que maneja los displays 7-seg.
 *----------------------------------------------------------------------------*/
void SelDig(uint8_t Digito) {
	switch(Digito){
	case 0:
		HAL_GPIO_WritePin(GPIOC, GPIO_PIN_0, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOC, GPIO_PIN_2, GPIO_PIN_RESET);
	break;
	case 1:
		HAL_GPIO_WritePin(GPIOC, GPIO_PIN_0, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOC, GPIO_PIN_2, GPIO_PIN_RESET);
		break;
	case 2:
		HAL_GPIO_WritePin(GPIOC, GPIO_PIN_0, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOC, GPIO_PIN_2, GPIO_PIN_SET);
		break;
	case 3:
		HAL_GPIO_WritePin(GPIOC, GPIO_PIN_0, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOC, GPIO_PIN_2, GPIO_PIN_SET);
		break;
	}
}
