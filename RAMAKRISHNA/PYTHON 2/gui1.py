import tkinter
aditya=tkinter.Tk()
aditya.title('GUI')
canvas=tkinter.Canvas(aditya,width=500,height=500)
canvas.pack()
line1=canvas.create_line(25,25,250,150,fill='green')
line2=canvas.create_line(25,250,250,150,fill='red')
rectangle=canvas.create_rectangle(500,25,175,75,fill='khaki')


aditya.mainloop()
