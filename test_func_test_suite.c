#include <stdio.h> 
#include <math.h> 
#include <time.h> 
#include "./include/k2c_include.h" 
#include "test_func.h" 

float maxabs(k2c_tensor *tensor1, k2c_tensor *tensor2);
struct timeval GetTimeStamp(); 
 
float test1_dense_input_input_array[8] = {
+4.07578313e-01f,-1.42413912e+00f,-5.19852932e-01f,+3.87073940e-01f,-1.45063082e+00f,
-5.34692647e-01f,-1.19655893e+00f,+1.31726458e+00f,}; 
k2c_tensor test1_dense_input_input = {&test1_dense_input_input_array[0],1,8,{8,1,1,1,1}}; 
float keras_dense_2_test1_array[1] = {
+6.28877974e+00f,}; 
k2c_tensor keras_dense_2_test1 = {&keras_dense_2_test1_array[0],1,1,{1,1,1,1,1}}; 
float c_dense_2_test1_array[1] = {0}; 
k2c_tensor c_dense_2_test1 = {&c_dense_2_test1_array[0],1,1,{1,1,1,1,1}}; 
float test2_dense_input_input_array[8] = {
-9.61255730e-01f,-2.72273901e-01f,+1.77627714e+00f,+1.89193346e+00f,+9.63539572e-01f,
+1.94930045e+00f,+1.57587161e+00f,+4.96759106e-01f,}; 
k2c_tensor test2_dense_input_input = {&test2_dense_input_input_array[0],1,8,{8,1,1,1,1}}; 
float keras_dense_2_test2_array[1] = {
+4.95878458e-01f,}; 
k2c_tensor keras_dense_2_test2 = {&keras_dense_2_test2_array[0],1,1,{1,1,1,1,1}}; 
float c_dense_2_test2_array[1] = {0}; 
k2c_tensor c_dense_2_test2 = {&c_dense_2_test2_array[0],1,1,{1,1,1,1,1}}; 
float test3_dense_input_input_array[8] = {
-1.93640597e+00f,-1.82054284e+00f,-1.74671931e+00f,+1.53408016e+00f,-1.85618884e+00f,
-8.47467297e-01f,+1.74728847e+00f,+5.80134564e-01f,}; 
k2c_tensor test3_dense_input_input = {&test3_dense_input_input_array[0],1,8,{8,1,1,1,1}}; 
float keras_dense_2_test3_array[1] = {
+2.91202688e+00f,}; 
k2c_tensor keras_dense_2_test3 = {&keras_dense_2_test3_array[0],1,1,{1,1,1,1,1}}; 
float c_dense_2_test3_array[1] = {0}; 
k2c_tensor c_dense_2_test3 = {&c_dense_2_test3_array[0],1,1,{1,1,1,1,1}}; 
float test4_dense_input_input_array[8] = {
-2.79845528e-01f,+1.39653183e+00f,-6.58510934e-01f,+3.03097829e-01f,-1.07602032e+00f,
+7.73540632e-01f,+4.45756055e-01f,+9.87185302e-01f,}; 
k2c_tensor test4_dense_input_input = {&test4_dense_input_input_array[0],1,8,{8,1,1,1,1}}; 
float keras_dense_2_test4_array[1] = {
+3.03960174e-01f,}; 
k2c_tensor keras_dense_2_test4 = {&keras_dense_2_test4_array[0],1,1,{1,1,1,1,1}}; 
float c_dense_2_test4_array[1] = {0}; 
k2c_tensor c_dense_2_test4 = {&c_dense_2_test4_array[0],1,1,{1,1,1,1,1}}; 
float test5_dense_input_input_array[8] = {
-1.86597486e+00f,-2.43444940e-01f,-8.22431968e-01f,+1.30381387e+00f,-1.22839189e+00f,
-2.96809395e-01f,-1.57595962e+00f,+1.03791427e+00f,}; 
k2c_tensor test5_dense_input_input = {&test5_dense_input_input_array[0],1,8,{8,1,1,1,1}}; 
float keras_dense_2_test5_array[1] = {
+5.17081928e+00f,}; 
k2c_tensor keras_dense_2_test5 = {&keras_dense_2_test5_array[0],1,1,{1,1,1,1,1}}; 
float c_dense_2_test5_array[1] = {0}; 
k2c_tensor c_dense_2_test5 = {&c_dense_2_test5_array[0],1,1,{1,1,1,1,1}}; 
float test6_dense_input_input_array[8] = {
+1.62617394e+00f,-1.89118818e+00f,+6.80037047e-01f,+1.45674709e+00f,-7.06814668e-01f,
+1.03886773e+00f,-9.30581420e-01f,+8.13535683e-01f,}; 
k2c_tensor test6_dense_input_input = {&test6_dense_input_input_array[0],1,8,{8,1,1,1,1}}; 
float keras_dense_2_test6_array[1] = {
+3.35891700e+00f,}; 
k2c_tensor keras_dense_2_test6 = {&keras_dense_2_test6_array[0],1,1,{1,1,1,1,1}}; 
float c_dense_2_test6_array[1] = {0}; 
k2c_tensor c_dense_2_test6 = {&c_dense_2_test6_array[0],1,1,{1,1,1,1,1}}; 
float test7_dense_input_input_array[8] = {
-1.24993195e-01f,-8.58050320e-01f,-1.88043837e+00f,+7.47432245e-01f,+1.61150720e+00f,
+1.21279443e+00f,-3.17366605e-01f,-3.74992633e-01f,}; 
k2c_tensor test7_dense_input_input = {&test7_dense_input_input_array[0],1,8,{8,1,1,1,1}}; 
float keras_dense_2_test7_array[1] = {
+2.31772327e+00f,}; 
k2c_tensor keras_dense_2_test7 = {&keras_dense_2_test7_array[0],1,1,{1,1,1,1,1}}; 
float c_dense_2_test7_array[1] = {0}; 
k2c_tensor c_dense_2_test7 = {&c_dense_2_test7_array[0],1,1,{1,1,1,1,1}}; 
float test8_dense_input_input_array[8] = {
+1.14537135e+00f,-1.32350854e-01f,+1.99079262e+00f,+1.89743313e+00f,+1.09440133e+00f,
-1.02503881e+00f,-8.35651480e-02f,-9.91254451e-01f,}; 
k2c_tensor test8_dense_input_input = {&test8_dense_input_input_array[0],1,8,{8,1,1,1,1}}; 
float keras_dense_2_test8_array[1] = {
+1.51501131e+01f,}; 
k2c_tensor keras_dense_2_test8 = {&keras_dense_2_test8_array[0],1,1,{1,1,1,1,1}}; 
float c_dense_2_test8_array[1] = {0}; 
k2c_tensor c_dense_2_test8 = {&c_dense_2_test8_array[0],1,1,{1,1,1,1,1}}; 
float test9_dense_input_input_array[8] = {
+8.57611916e-02f,+1.45810929e+00f,-1.02167573e+00f,-4.20181680e-01f,+5.54421573e-01f,
-1.10783424e+00f,+2.26706837e-01f,-1.37494666e+00f,}; 
k2c_tensor test9_dense_input_input = {&test9_dense_input_input_array[0],1,8,{8,1,1,1,1}}; 
float keras_dense_2_test9_array[1] = {
+1.61545715e+01f,}; 
k2c_tensor keras_dense_2_test9 = {&keras_dense_2_test9_array[0],1,1,{1,1,1,1,1}}; 
float c_dense_2_test9_array[1] = {0}; 
k2c_tensor c_dense_2_test9 = {&c_dense_2_test9_array[0],1,1,{1,1,1,1,1}}; 
float test10_dense_input_input_array[8] = {
-1.57878894e+00f,-1.54567339e+00f,-1.96505230e+00f,-3.90490564e-01f,-1.94513331e+00f,
-6.79003589e-01f,+7.79698957e-01f,-1.00155788e+00f,}; 
k2c_tensor test10_dense_input_input = {&test10_dense_input_input_array[0],1,8,{8,1,1,1,1}}; 
float keras_dense_2_test10_array[1] = {
+3.58290529e+00f,}; 
k2c_tensor keras_dense_2_test10 = {&keras_dense_2_test10_array[0],1,1,{1,1,1,1,1}}; 
float c_dense_2_test10_array[1] = {0}; 
k2c_tensor c_dense_2_test10 = {&c_dense_2_test10_array[0],1,1,{1,1,1,1,1}}; 
int main(){
 float errors[10];
 size_t num_tests = 10; 
size_t num_outputs = 1; 
test_func_initialize(); 
clock_t t0 = clock(); 
test_func(&test1_dense_input_input,&c_dense_2_test1); 
test_func(&test2_dense_input_input,&c_dense_2_test2); 
test_func(&test3_dense_input_input,&c_dense_2_test3); 
test_func(&test4_dense_input_input,&c_dense_2_test4); 
test_func(&test5_dense_input_input,&c_dense_2_test5); 
test_func(&test6_dense_input_input,&c_dense_2_test6); 
test_func(&test7_dense_input_input,&c_dense_2_test7); 
test_func(&test8_dense_input_input,&c_dense_2_test8); 
test_func(&test9_dense_input_input,&c_dense_2_test9); 
test_func(&test10_dense_input_input,&c_dense_2_test10); 

clock_t t1 = clock(); 
printf("Average time over 10 tests: %e s \n", 
 ((double)t1-t0)/(double)CLOCKS_PER_SEC/(double)10); 
errors[0] = maxabs(&keras_dense_2_test1,&c_dense_2_test1); 
errors[1] = maxabs(&keras_dense_2_test2,&c_dense_2_test2); 
errors[2] = maxabs(&keras_dense_2_test3,&c_dense_2_test3); 
errors[3] = maxabs(&keras_dense_2_test4,&c_dense_2_test4); 
errors[4] = maxabs(&keras_dense_2_test5,&c_dense_2_test5); 
errors[5] = maxabs(&keras_dense_2_test6,&c_dense_2_test6); 
errors[6] = maxabs(&keras_dense_2_test7,&c_dense_2_test7); 
errors[7] = maxabs(&keras_dense_2_test8,&c_dense_2_test8); 
errors[8] = maxabs(&keras_dense_2_test9,&c_dense_2_test9); 
errors[9] = maxabs(&keras_dense_2_test10,&c_dense_2_test10); 
float maxerror = errors[0]; 
for(size_t i=1; i< num_tests*num_outputs;i++){ 
if (errors[i] > maxerror) { 
maxerror = errors[i];}} 
printf("Max absolute error for 10 tests: %e \n", maxerror);
test_func_terminate(); 
if (maxerror > 1e-05) { 
return 1;} 
return 0;
} 

float maxabs(k2c_tensor *tensor1, k2c_tensor *tensor2){ 

    float x = 0; 

    float y = 0; 

    for(size_t i=0; i<tensor1->numel; i++){

    y = fabsf(tensor1->array[i]-tensor2->array[i]);
    if (y>x) {x=y;}}
    return x;}

