from keras.models import load_model
import tensorflow as tf
from tensorflow import keras
from sklearn.metrics import mean_absolute_error

model = load_model('my_model.h5')
(x_train, y_train), (x_test, y_test) = keras.datasets.mnist.load_data()
x_train = x_train.reshape(60000, 784).astype('float32') / 255
x_test = x_test.reshape(10000, 784).astype('float32') / 255

# Evaluate the model on the test set
test_loss, test_accuracy = model.evaluate(x_test, y_test)
print(f'Test Accuracy: {test_accuracy * 100:.2f}%')
print(f'Test Loss: {test_loss:.4f}')

# Make predictions on the test set
predictions = model.predict(x_test)

# You can also convert the predicted probabilities to class labels
predicted_labels = tf.argmax(predictions, axis=1)

# Calculate mean absolute error if applicable (depends on the problem)
mae = mean_absolute_error(y_test, predicted_labels)
print(f'Mean Absolute Error: {mae:.4f}')





# print(y_pred.flatten())
# print(y_test)

# mean_absolute_error(y_pred.flatten().round(),y_test)