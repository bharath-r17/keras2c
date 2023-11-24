from keras.datasets import mnist
import matplotlib.pyplot as plt

# Load MNIST dataset
(X_train, y_train), (X_test, y_test) = mnist.load_data()

# Select a sample to inspect
sample_index = 1
sample_image = X_train[sample_index]
sample_label = y_train[sample_index]

# Print the label
print(f"Label: {sample_label}")

# Show the image
plt.imshow(sample_image, cmap=plt.cm.binary)
plt.show()

# Flatten the image for use with the model
sample_image = sample_image.reshape((1, 784))

# Normalize the image
sample_image = sample_image / 255.0


print(list(sample_image))

# Now sample_image can be used as input to the model
