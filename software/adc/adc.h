/*
 * adc.c
 *
 *  Created on: Jul 1, 2019
 *      Author: Jeferson Pedroso
 *              Leticia Nunes
 *              Marieli Matos
 *      Modified: Renan Augusto Starke
 *      Instituto Federal de Santa Catarina
 * 
 * 
 * ADC functions example.
 * -----------------------------------------
 */

#ifndef __ADC_H
#define __ADC_H

#include <stdint.h>
#include "../_core/hardware.h"

//estrutura de dados para armazenar o valor e canal lidos.
typedef struct 
{
	uint32_t indata_adc;        //lido
	uint32_t ch_adc_feed;       //só mexe no sel_ch
	uint32_t sel_ch_adc;        
		
}ADC_TYPE;

#define ADC ((ADC_TYPE *) &ADC_BASE_ADDRESS)

uint32_t adc_read (uint32_t channel_sel);

#endif //__ADC_H
