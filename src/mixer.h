/**
 * Copyright (c) 2017 Florian Kesseler
 *
 * This library is free software; you can redistribute it and/or modify it
 * under the terms of the MIT license. See LICENSE for details.
 */

#ifndef MIXER_H
#define MIXER_H

#include <stdint.h>
#include "source.h"

void mixer_play(source_t const *source);
void mixer_mix(int16_t *outputBuffer, unsigned sampleCount);

#endif
