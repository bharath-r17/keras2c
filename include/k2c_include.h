/**
k2c_include.h
This file is part of keras2c
Copyright 2020 Rory Conlin
Licensed under MIT License
https://github.com/f0uriest/keras2c
 */

#pragma once

#include <stdlib.h>
#include "k2c_tensor_include.h"


// Activations
void k2c_linear_func(float * x, const size_t size);
void k2c_relu_func(float * x, const size_t size);
typedef void k2c_activationType(float * x, const size_t size);
extern k2c_activationType * k2c_linear;
extern k2c_activationType * k2c_relu;


// Advanced Activations
void k2c_ReLU(float * x, const size_t size, const float max_value, const float negative_slope,
              const float threshold);

// Core Layers
void k2c_dense(k2c_tensor* output, const k2c_tensor* input, const k2c_tensor* kernel,
               const k2c_tensor* bias, k2c_activationType *activation, float * fwork);

