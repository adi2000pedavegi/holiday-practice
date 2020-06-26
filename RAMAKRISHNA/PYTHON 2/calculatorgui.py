from tkinter import *
aditya=Tk()

aditya.geometry('312x324')
aditya.resizable(0,0)
aditya.title('CALCULATOR')
def btn_click(item):
	global expression
	expression=expression+str(item)
	input_text.set(expression)
def btn_clear():
	global expression
	expression=''
	input_text.set('')
def btn_equal():
	global expression
	result=str(eval(expression))
	input_text.set(result)
	expression=''
expression=''
input_text=StringVar()
input_frame=Frame(aditya,width=312,height=50,bd=0,highlightcolor='black',highlightbackground='black',highlightthickness=1)
input_frame.pack(side='top')
		
input_field=Entry(input_frame,font=('arial',18,'bold'),textvariable=input_text,bd=0,bg='#eee',width=50,justify='left')
input_field.grid(row = 0, column = 0)
input_field.pack(ipady=10)

btns_frame=Frame(aditya,width=312,height=272.5,bg='grey')
btns_frame.pack()

clear=Button(btns_frame,width=32,height=3,fg='black',text='C',bd=0,bg='#eee',cursor='hand2',command=lambda:btn_clear()).grid(row=0,column=0,columnspan=3,padx=1,pady=1)
divide=Button(btns_frame,width=10,height=3,fg='black',text='/',bd=0,bg='#eee',cursor='hand2',command=lambda:btn_click('/')).grid(row=0,column=3,padx=1,pady=1)
seven=Button(btns_frame,width=10,height=3,fg='black',text='7',bd=0,bg='#fff',cursor='hand2',command=lambda:btn_click(7)).grid(row=1,column=0,padx=1,pady=1)
eight=Button(btns_frame,width=10,height=3,fg='black',text='8',bd=0,bg='#fff',cursor='hand2',command=lambda:btn_click(8)).grid(row=1,column=1,padx=1,pady=1)
nine=Button(btns_frame,width=10,height=3,fg='black',text='9',bd=0,bg='#fff',cursor='hand2',command=lambda:btn_click(9)).grid(row=1,column=2,padx=1,pady=1)
multiply=Button(btns_frame,width=10,height=3,fg='black',text='*',bd=0,bg='#eee',cursor='hand2',command=lambda:btn_click('*')).grid(row=1,column=3,padx=1,pady=1)
four=Button(btns_frame,width=10,height=3,fg='black',text='4',bd=0,bg='#fff',cursor='hand2',command=lambda:btn_click(4)).grid(row=2,column=0,padx=1,pady=1)
five=Button(btns_frame,width=10,height=3,fg='black',text='5',bd=0,bg='#fff',cursor='hand2',command=lambda:btn_click(5)).grid(row=2,column=1,padx=1,pady=1)
six=Button(btns_frame,width=10,height=3,fg='black',text='6',bd=0,bg='#fff',cursor='hand2',command=lambda:btn_click(6)).grid(row=2,column=2,padx=1,pady=1)
minus=Button(btns_frame,width=10,height=3,fg='black',text='-',bd=0,bg='#eee',cursor='hand2',command=lambda:btn_click('-')).grid(row=2,column=3,padx=1,pady=1)
one=Button(btns_frame,width=10,height=3,fg='black',text='1',bd=0,bg='#fff',cursor='hand2',command=lambda:btn_click(1)).grid(row=3,column=0,padx=1,pady=1)
two=Button(btns_frame,width=10,height=3,fg='black',text='2',bd=0,bg='#fff',cursor='hand2',command=lambda:btn_click(2)).grid(row=3,column=1,padx=1,pady=1)
three=Button(btns_frame,width=10,height=3,fg='black',text='3',bd=0,bg='#fff',cursor='hand2',command=lambda:btn_click(3)).grid(row=3,column=2,padx=1,pady=1)
add=Button(btns_frame,width=10,height=3,fg='black',text='+',bd=0,bg='#eee',cursor='hand2',command=lambda:btn_click('+')).grid(row=3,column=3,padx=1,pady=1)
zero=Button(btns_frame,width=21,height=3,fg='black',text='0',bd=0,bg='#fff',cursor='hand2',command=lambda:btn_click(0)).grid(row=4,column=0,columnspan=2,padx=1,pady=1)
deciamal=Button(btns_frame,width=10,height=3,fg='black',text='.',bd=0,bg='#eee',cursor='hand2',command=lambda:btn_click('.')).grid(row=4,column=2,padx=1,pady=1)
equal=Button(btns_frame,width=10,height=3,fg='black',text='=',bd=0,bg='#eee',cursor='hand2',command=lambda:btn_equal()).grid(row=4,column=3,padx=1,pady=1)
aditya.mainloop()


