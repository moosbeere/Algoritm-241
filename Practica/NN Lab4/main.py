import numpy as np


def neuralNetwork(inps, weights):
    return inps.dot(weights)

#оценка ошибки
def get_error(prediction, true_prediction):
    return (prediction-true_prediction)**2

#градиентный спуск
inp = np.array([
                [150,40],
                [170,80],
                [160,90]])

weights = np.array([0.2,0.3])
true_predictions = np.array([50, 120, 140])
learning_rate = 0.00001

# predict = inp.dot(weights)
# print(predict)
for i in range(1000):
    error = 0
    for j in range(len(inp)):
        current_inp = inp[j]
        true_prediction = true_predictions[j]
        prediction = neuralNetwork(current_inp, weights)
        error += get_error(prediction, true_prediction)
        print("Prediction: %.10f, True_prediction: %.10f, Weights: %s" % (prediction, true_prediction, weights))
        delta = (prediction - true_prediction) * inp[j] * learning_rate
        weights = weights - delta
    print("Error: %.10f"% error)
    print("-----------------")
