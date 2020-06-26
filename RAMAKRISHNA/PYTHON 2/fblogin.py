import tkinter
aditya=tkinter.Tk()
aditya.title('GUI')
tkinter.Label(aditya,text='Username').grid(row=0)
tkinter.Label(aditya,text='password').grid(row=1)
tkinter.Entry(aditya).grid(row=0,column=1)
tkinter.Entry(aditya).grid(row=1,column=1)
tkinter.Button(aditya,text='Sign up',fg='white',bg='green').grid(row=2,column=0,columnspan=2)
tkinter.Checkbutton(aditya,text='keep me logged in').grid(row=3,column=0,columnspan=2)
aditya.mainloop()



