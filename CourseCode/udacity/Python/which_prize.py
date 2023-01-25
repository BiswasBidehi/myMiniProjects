points = 174

if points >= 1 and points <= 50:
    message = 'Congratulations! You won a {}!'.format('wooden rabbit')
elif points >= 51 and points <= 150:
    message = 'Oh dear, no prize this time.'
elif points >= 151 and points <= 180:
    message = 'Congratulations! You won a {}!'.format('wafer-thin mint')
elif points >= 181 and points <= 200:
    message = 'Congratulations! You won a {}!'.format('penguin')

print(message)
