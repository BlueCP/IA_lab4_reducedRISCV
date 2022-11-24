import math

file = open("dataram.mem", "w")

# Generate sine wave
for i in range(10000):
    sinValue = int(256 * math.sin((2 * math.pi / 20) * i)) # Omega = 2pi/N where N=20
    if sinValue < 0:
        sinValue = 0xffffffff - abs(sinValue) + 1 # Convert to Two's complement
    hexString = hex(sinValue)[2:] # Remove 0x at beginning
    leadingZeros = (8 - len(hexString)) * "0"
    result = leadingZeros + hexString
    file.write(result + "\n")