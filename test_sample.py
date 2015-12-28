def func():
    while True:
        import serial
        import os
        import shutil
        import datetime
        import time


        ser = serial.Serial("/dev/ttyACM0",9600)
        time.sleep(2.0)
        ser.write("z")

        f = open("sample.txt", 'w')
        print("begin to measure")
        for i in range (1,70):
            val = ser.readline()
            print(val)
            f.write(val)
        f.close()

        time = datetime.datetime.now()
        newname = "{0:%Y%m%d-%H%M%S}.txt".format(time)
        os.rename("sample.txt",newname)

        ser.write("y")
        import time
        time.sleep(30.0)

        ser.close()


from datetime import datetime
timer = datetime.now()
hour = "{:%H}".format(timer)

int (hour)
while True:
    if hour >= 6:
        func()
    elif hour <= 18:
        print("stop measure")
        import time
        time.sleep(600)

