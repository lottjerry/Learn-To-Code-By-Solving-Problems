# DMOJ problem wc18c3j1, An Honest Day’s Work 

total_paint = int(input())
paint_per_cap = int(input())
price_per_cap = int(input())

covered_caps = int(total_paint / paint_per_cap)

remaining_paint = total_paint % paint_per_cap

profit = (covered_caps * price_per_cap) + (remaining_paint * 1)

print(profit)