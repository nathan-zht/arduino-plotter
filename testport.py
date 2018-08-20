import serial

s = serial.Serial('COM7')
res = s.read()
print(res)