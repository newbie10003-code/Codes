def maxCandies(n, m, gifts):
    gifts.sort(key=lambda x: (-x[1], x[0]))  # Sort by value descending and then by day ascending
    print(gifts)
    candies = 0
    
    for d, v in gifts:
        candies += v * (n - d + 1)
        n = d
            
    return candies

# Example usage
# The first parameter is the number of days.
# The second parameter is the number of gifts.
# The third parameter is a list of tuples where each tuple contains two integers: 
# - the day on which the gift was received and 
# - the value of the coin.

print(maxCandies(3, 5, [(1, 10), (1, 9), (2,8), (3, 7), (3, 6)])) # Output should be based on your logic
