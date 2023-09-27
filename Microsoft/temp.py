def getSubarraySum(arr):
    n = len(arr)

    # Calculate the prefix sum of the array
    prefix_sum = [0] * (n + 1)
    for i in range(n):
        prefix_sum[i + 1] = prefix_sum[i] + arr[i]

    # Initialize variables to keep track of maximum differences
    max_diff1 = float('-inf')
    max_diff2 = float('-inf')
    max_diff3 = float('-inf')
    max_diff4 = float('-inf')

    # Iterate through the array to find the maximum differences
    for i in range(1, n):
        max_diff1 = max(max_diff1, prefix_sum[i])
        max_diff2 = max(max_diff2, max_diff1 - prefix_sum[i])
        max_diff3 = max(max_diff3, prefix_sum[n] - prefix_sum[i])
        max_diff4 = max(max_diff4, max_diff3 - (prefix_sum[n] - prefix_sum[i]))

    # Return the maximum difference
    return max(max_diff1, max_diff2, max_diff3, max_diff4, prefix_sum[-1] - prefix_sum[0])

# Example usage
arr = [-3, 4, -5, 2, 6, -5]
result = getSubarraySum(arr)
print(result)
