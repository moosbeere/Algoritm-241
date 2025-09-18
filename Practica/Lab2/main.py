import numpy as np

def neuralNetwork4(inps, weights):
    prediction_h = inps.dot(weights[0])
    prediction_out = prediction_h.dot(weights[1])
    return prediction_out

inp = np.array([34,54])
np.random.seed(1)
weight1_h = np.random.rand(2)
weight2_h = np.random.rand(2)
weight1_out = np.random.rand(2)
weight2_out = np.random.rand(2)

weight_h = np.array([weight1_h, weight2_h]).T
weight_out = np.array([weight1_out, weight2_out]).T

weights = [weight_h,weight_out]

print(neuralNetwork4(inp,weights))





#
# arr1 = np.array([3,4,5])
# arr2 = np.array([12,8,4,6,8,4])
#
# print(arr1[0])
# print(arr2[2])
# slice = arr2[1:4]
# print(slice)
#
# mask = arr2[0] > 2
# print(mask)
# masked_data = arr2[mask]
# print(masked_data)
#
# print(arr2[arr2 > 2])
#
# print(np.mean(arr2))
# print(np.std(arr2))
#
# print(np.max(arr2))
# print(np.min(arr2))
# # arr2 = np.array([[2,4],[7,8]])
# # print(arr2)
#
# # print(arr1 + arr2)
# # print(arr1 - arr2)
# # print(arr1 * arr2)
# # print(arr1 / arr2)
#
# # arr_zero = np.zeros((3,2))
# # print(arr_zero)
# #
# # arr_one = np.ones((2,1))
# # print(arr_one)
# #
# # print(np.ones_like(arr1))
# #
# # print(np.random.randn(2,3))
#
#
# arr1 = np.random.rand(3,2)
#
# arr2 = np.random.rand(5,2)
# print(arr2.dot(arr1.T))
