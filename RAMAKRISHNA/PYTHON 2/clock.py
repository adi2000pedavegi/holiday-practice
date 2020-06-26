import sys
from tkinter import*
import time

def tick():
	time_string=time.strftime("%H:%M:%S")
	clock.config(text=time_string)
	clock.after(200,tick)
aditya=Tk()
aditya.title("Digital Clock")
clock=Label(aditya,fg='green',bg='white')
clock.grid(row=0,column=0)
tick()
aditya.mainloop()	
