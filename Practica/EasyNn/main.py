#
# def neuralNetwork(int, weight):
#     prediction = int * weight
#     return prediction
#
# out_1 = neuralNetwork(150, 0.6)
# out_2 = neuralNetwork(200, 0.2)
#
# print(out_1)
# print(out_2)
#
# def neuralNetwork2(inps, weights):
#     prediction = 0
#     for i in range(len(weights)):
#         prediction += inps[i] * weights[i]
#     return prediction
#
# out_1 = neuralNetwork2([150, 200], [0.6, 0.2])
#
# print(out_1)

# def neuralNetwork3(inp, weights):
#     prediction = [0,0]
#     for i in range(len(weights)):
#         prediction[i] = inp * weights[i]
#     return prediction
#
# out_1 = neuralNetwork3(200, [0.6, 0.2])
#
# print(out_1)

# def neuralNetwork4(inps, weights):
#     prediction = [0]*len(weights)
#     for i in range(len(weights)):
#         ws = 0
#         for j in range(len(inps)):
#             ws += inps[j] * weights[i][j]
#         prediction[i] = ws
#     return prediction
#
#
# inps = [1,1,1]
# weight1 = [0.4, 0.6, 0.2]
# weight2 = [0.5, 0.3, 0.8]
# weight3 = [0.1, 0.7, 0.5]
#
# out_1 = neuralNetwork4(inps, [weight1, weight2, weight3])
#
# print(out_1)



def neuralNetwork4(inps, weights):
    prediction_h = [0]*len(weights[0])
    for i in range(len(weights[0])):
        ws = 0
        for j in range(len(inps)):
            ws += inps[j] * weights[0][i][j]
        prediction_h[i] = ws

    prediction_out = [0] * len(weights[1])
    for i in range(len(weights[1])):
        ws = 0
        for j in range(len(prediction_h)):
            ws += prediction_h[j] * weights[1][i][j]
        prediction_out[i] = ws
    return prediction_out

inps = [34,54]
weight1_h = [0.4, 0.7]
weight2_h = [0.5, 0.3]
weight1_out = [0.2, 0.4]
weight2_out = [0.7, 0.6]
weight_h = [weight1_h, weight2_h]
weight_out = [weight1_out, weight2_out]

weights = [weight_h, weight_out]

out_1 = neuralNetwork4(inps, weights)

print(out_1)
