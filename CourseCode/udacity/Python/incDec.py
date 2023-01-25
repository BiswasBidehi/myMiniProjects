reservoir_volume = 4.445e8
rainfall = 5e6

# decrement 10%
rainfall *= .9

# add rainfall to the reservoir_volume
reservoir_volume += rainfall

# increment 5%
reservoir_volume *= 1.05

# decrease 5%
reservoir_volume *= .95

# sub 2.5e5
reservoir_volume -= 2.5e5

print(reservoir_volume)
