from keras.models import load_model
import numpy as np
# Load the saved model
loaded_model = load_model('regression_model.h5')

# Assuming the scaler used for training is saved as 'scaler.pkl'
# You need to have the pickle file containing the scaler from the training phase

# Load the scaler
# import pickle

# with open('scaler.pkl', 'rb') as scaler_file:
#     scaler = pickle.load(scaler_file)

# Input values for prediction
input_values = np.array([[-0.35139464349045885, 1.8561815225324745, 0.019648332203345185, -0.03602697199409447, -0.45519335442361386, -0.07769971749617115, 1.038502685950199, -1.3428091431408828]])

# Standardize the input values using the loaded scaler
# scaled_input_values = scaler.transform(input_values)

# Make predictions using the loaded model
predictions = loaded_model.predict(input_values)

# Print the predictions
print("Predictions:",predictions)

