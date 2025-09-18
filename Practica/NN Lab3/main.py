import numpy as np

#оценка ошибки
def neuralNetwork(inps, weights):
    return inps.dot(weights)

def get_error(prediction, true_prediction):
    return (prediction-true_prediction)**2

prediction = neuralNetwork(np.array([12,15]), [0.6, 0.8])
# print(prediction)

true_prediction = 15
# print(true_prediction - prediction)

#градиентный спуск
def neuralNetwork2(inp, weight):
    return inp*weight

inp = 0.9
weight = 0.2
true_prediction = 0.2
print(get_error(neuralNetwork2(inp, weight), true_prediction))

for i in range(13):
    prediction = neuralNetwork2(inp, weight)
    error = get_error(prediction, true_prediction)
    print("Prediction: %.10f, Weight: %.5f, Error: %.20f" % (prediction, weight, error))
    delta = (prediction - true_prediction) * inp
    weight = weight - delta
