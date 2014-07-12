/*
 * dota2timer.h
 *
 *  Created on: 13/07/2014
 *      Author: nicolas
 */

#ifndef DOTA2TIMER_H_
#define DOTA2TIMER_H_

// Constantes.
#define TIME_BUFFER_SIZE 6
#define ROSHAN_STATUS_BUFFER_SIZE 6

#define INBOUND_SIZE 64
#define OUTBOUND_SIZE 64

#define MAX_TIME 6000
#define COURIER_UPGRADE_TIME 180
#define STACK_MARK 53
#define ROSHAN_ALIVE 100
#define ROSHAN_DEAD 0

#define ROSHAN_RESPAWN_TIME_LOWER 480
#define ROSHAN_RESPAWN_TIME_UPPER 660

// Valores para pruebas.
/*
#define ROSHAN_RESPAWN_TIME_LOWER 10
#define ROSHAN_RESPAWN_TIME_UPPER 20
*/

// Devuelve un string con el estado de Roshan.
void get_string_for_roshan(unsigned int roshan_status, char* s);

// Helper para obtener los segundos transcurridos.
int seconds(void);

// Prints the elapsed time in a human readable format on the specified buffer.
void get_string_for_time(int elapsed_time, char *s);

#endif /* DOTA2TIMER_H_ */
