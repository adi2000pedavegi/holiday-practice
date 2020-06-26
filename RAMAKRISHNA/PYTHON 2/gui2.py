import tkinter
import tkinter.messagebox
aditya=tkinter.Tk()
aditya.title('GUI')
tkinter.messagebox.showinfo('Alert message','This is just an alert message')
response=tkinter.messagebox.askquestion('Simple Question','Do u love python?')
if (response==1):
	tkinter.Label(aditya,text='Yes i love python').pack()
else:
	tkinter.Label(aditya,text='No i do not love python').pack()
	
aditya.mainloop()
