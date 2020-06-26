from tkinter import *
#intializing the global expression as null string
expression = " "
#on ptressing the buttons it undergoes iterations and string gets concatenated
def pranay(n):
	global expression
	expression = expression + str(n)
	equation.set(expression)
#function for equal command	
def equal():
	output = str(eval(expression))
	equation.set(output)
#function for the clear command	
def clear():
	global expression 
	expression = " "
	equation.set(" ")
aditya = Tk()
aditya.title('Calculator')
aditya.geometry('265x125')
#understanding for python field entreies are stringvaraibles
equation = StringVar()
#cresting the field entry
field = Entry(aditya,textvariable = equation)
field.grid(columnspan=5,ipadx=70)
equation.set('')
#generating buttons and its frame
button1 = Button(aditya,text='1',fg='orange',bg='green',command=lambda: pranay(1),height = 1,width=7).grid(row=2,column=0)
button2 = Button(aditya,text='2',fg='orange',bg='green',command=lambda: pranay(2),height = 1,width=7).grid(row=2,column=1)
button3 = Button(aditya,text='3',fg='orange',bg='green',command=lambda: pranay(3),height = 1,width=7).grid(row=2,column=2)
plus =  Button(aditya,text='+',fg='orange',bg='green',command=lambda: pranay('+'),height = 1,width=7).grid(row=2,column=3)		

button4 = Button(aditya,text='4',fg='orange',bg='green',command=lambda: pranay(4),height = 1,width=7).grid(row=3,column=0)
button5 = Button(aditya,text='5',fg='orange',bg='green',command=lambda: pranay(5),height = 1,width=7).grid(row=3,column=1)
button6 = Button(aditya,text='6',fg='orange',bg='green',command=lambda: pranay(6),height = 1,width=7).grid(row=3,column=2)
minus =  Button(aditya,text='-',fg='orange',bg='green',command=lambda: pranay('-'),height = 1,width=7).grid(row=3,column=3)		

button7 = Button(aditya,text='7',fg='orange',bg='green',command=lambda: pranay(7),height = 1,width=7).grid(row=4,column=0)
button8 = Button(aditya,text='8',fg='orange',bg='green',command=lambda: pranay(8),height = 1,width=7).grid(row=4,column=1)
button9 = Button(aditya,text='9',fg='orange',bg='green',command=lambda: pranay(9),height = 1,width=7).grid(row=4,column=2)
multiply =  Button(aditya,text='*',fg='orange',bg='green',command=lambda: pranay('*'),height = 1,width=7).grid(row=4,column=3)		

button0 = Button(aditya,text='0',fg='orange',bg='green',command=lambda: pranay(0),height = 1,width=7).grid(row=5,column=0)
clear = Button(aditya,text='C',fg='orange',bg='green',command=clear,height = 1,width=7).grid(row=5,column=1)
equal = Button(aditya,text='=',fg='orange',bg='green',command=equal,height = 1,width=7).grid(row=5,column=2)
divide =  Button(aditya,text='/',fg='orange',bg='green',command=lambda: pranay('/'),height = 1,width=7).grid(row=5,column=3)		

mod = Button(aditya,text='%',fg='orange',bg='green',command=lambda: pranay('%'),height = 1,width=7).grid(row=2,column=4)
binaryxor = Button(aditya,text='^',fg='orange',bg='green',command=lambda: pranay('^'),height = 1,width=7).grid(row=3,column=4)
floordivide = Button(aditya,text='//',fg='orange',bg='green',command=lambda: pranay('//'),height = 1,width=7).grid(row=4,column=4)
power =  Button(aditya,text='**',fg='orange',bg='green',command=lambda: pranay('**'),height = 1,width=7).grid(row=5,column=4)		

aditya.mainloop()



