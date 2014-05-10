/*
 * collision_checker.h
 *
 *  Created on: 2014. 5. 10.
 *      Author: leeopop
 */

#ifndef COLLISION_CHECKER_H_
#define COLLISION_CHECKER_H_

#include <stdint.h>

#define COLLISION_NOWAIT (1)
#define COLLISION_USE_TEMP (2)

int check_collision(const char* program_name, uint32_t flags);

#endif /* COLLISION_CHECKER_H_ */
