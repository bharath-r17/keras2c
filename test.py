from keras2c import k2c

model = 'my_model.h5'
function_name = 'test_func'
k2c(model, function_name, malloc=False, num_tests=10, verbose=True)