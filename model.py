import tensorflow as tf
import numpy as np
import matplotlib.pyplot as plt
import pandas as pd
 
plt.rcParams['figure.figsize'] = (16, 10)
plt.rcParams['text.usetex'] = True
plt.rc('font', size=15)
 
import numpy as np
import tensorflow as tf
import matplotlib.pyplot as plt
import math
 
plt.rcParams['figure.figsize'] = (16, 10)
plt.rc('font', size=15)
 
# define random seed for reproducibility
np.random.seed(1) # numpy seed
tf.random.set_seed(1) # tensorflow global random seed
 
 
# Generate a uniformly distributed set of random numbers in the range from
# 0 to 2π, which covers a complete sine wave oscillation
 
X = np.random.uniform(
    low=0, high=2*math.pi, size=10000).astype(np.float32)
 
# Shuffle the values to guarantee they're not in order
np.random.shuffle(X)
 
# Calculate the corresponding sine values
y = np.sin(X).astype(np.float32)
 
# Add a small random number to each y value
y += 0.1 * np.random.randn(*y.shape)
 
from sklearn.model_selection import train_test_split
 
X_train, X_test, y_train, y_test = train_test_split(X, y, test_size=0.2, random_state=1)
X_train, X_val, y_train, y_val = train_test_split(X_train, y_train, test_size=0.25, random_state=1)
 
model = tf.keras.Sequential(name='sine2')
 
# First layer takes a scalar input and feeds it through 16 "neurons". The
# neurons decide whether to activate based on the 'relu' activation function.
model.add(tf.keras.layers.Dense(16, activation='relu', input_shape=(1,)))
 
# The new second layer may help the network learn more complex representations
model.add(tf.keras.layers.Dense(16, activation='relu'))
 
# Final layer is a single neuron, since we want to output a single value
model.add(tf.keras.layers.Dense(1))
 
# Compile the model using a standard optimizer and loss function for regression
model.compile(optimizer='adam', loss='mse', metrics=['accuracy', 'mae'])
 
model.summary()
 
history = model.fit(X_train, y_train, epochs=50, batch_size=64,
                    validation_data=(X_val, y_val), verbose=False)

# model.save('my_model.h5')

