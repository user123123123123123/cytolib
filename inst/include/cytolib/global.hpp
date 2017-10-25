/*
 * global.hpp
 *
 *  Created on: Mar 31, 2014
 *      Author: wjiang2
 */

#ifndef GLOBAL_HPP_
#define GLOBAL_HPP_

#define GATING_SET_LEVEL 1
#define GATING_HIERARCHY_LEVEL 2
#define POPULATION_LEVEL 3
#define GATE_LEVEL 4

extern unsigned short g_loglevel;
extern bool my_throw_on_error;

#ifdef ROUT
#include <R_ext/Print.h>
#endif

#include <iostream>
#include <string>
using namespace std;
void PRINT(string a);
void PRINT(const char * a);

#define PRT true
const int bsti = 1;  // Byte swap test integer
#define is_host_big_endian() ( (*(char*)&bsti) == 0 )

#endif /* GLOBAL_HPP_ */
