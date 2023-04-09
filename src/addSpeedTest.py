
# Open the file for reading
with open('EMVSpeedOutput.txt', 'r') as f:
    nb = 0
    # Initialize the total to zero
    total = 0
    # Loop through each line in the file
    for line in f:
        # Convert the line to a float and add it to the total
        total += float(line)
        nb+= 1
    # Print the total
    print('Total:', total/nb)