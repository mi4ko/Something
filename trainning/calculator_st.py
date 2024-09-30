
import streamlit as st

import re 

from binary_fractions import Binary

#Special thanks
def special_thanks():
	st.write("")
	st.write("")
	st.write("First of all, I thank God and also Mr. Shubham Bansal") 
	st.write("for developing the logic and base code for this training,")
	st.write("as I was studying and found your posts, which helped me a lot.")
	st.write("")
	st.write("    Michiko Shindou/Gabriel Cassino")
	st.write("")
	st.write("Links:")
	st.write("")
	st.write("Developed by Mr. Shubham Bansal on Geeks for Geeks Website")
	st.write("")
	st.write("Convert Binary fraction to Decimal Last Updated : 13 Sep, 2023")
	st.write("https://www.geeksforgeeks.org/convert-binary-fraction-decimal/")
	st.write("")
	st.write("Convert decimal fraction to binary number Last Updated : 01 Mar, 2024")
	st.write("https://www.geeksforgeeks.org/convert-decimal-fraction-binary-number/")



#------------------------------------Binary to Decimal------------------------------------------------
def check_binary(s):
    return bool(re.fullmatch('[01.]+', s))


def binaryToDecimal(binary, length) : 
      
    # Fetch the radix point  
    point = binary.find('.') 
  
    # Update point if not found  
    if (point == -1) : 
        point = length  
  
    intDecimal = 0
    fracDecimal = 0
    twos = 1
  
    # Convert integral part of binary  
    # to decimal equivalent  
    for i in range(point-1, -1, -1) :  
          
        # Subtract '0' to convert  
        # character into integer  
        intDecimal += ((ord(binary[i]) - 
                        ord('0')) * twos)  
        twos *= 2
  
    # Convert fractional part of binary  
    # to decimal equivalent  
    twos = 2
      
    for i in range(point + 1, length): 
          
        fracDecimal += ((ord(binary[i]) -
                         ord('0')) / twos);  
        twos *= 2.0
  
    # Add both integral and fractional part  
    ans = intDecimal + fracDecimal 
      
    return ans 

def bin_to_float(value_1):

    ans = str(value_1)
	
    return st.number_input(label="Result",value=(binaryToDecimal(ans, len(ans))))

def decimalToBinary(num, k_prec) : 
  
    binary = ""  
  
    # Fetch the integral part of 
    # decimal number  
    Integral = int(num)  
  
    # Fetch the fractional part  
    # decimal number  
    fractional = num - Integral 
  
    # Conversion of integral part to  
    # binary equivalent  
    while (Integral) : 
          
        rem = Integral % 2
  
        # Append 0 in binary  
        binary += str(rem);  
  
        Integral //= 2
      
    # Reverse string to get original 
    # binary equivalent  
    binary = binary[ : : -1]  
  
    # Append point before conversion  
    # of fractional part  
    binary += '.'
  
    # Conversion of fractional part 
    # to binary equivalent  
    while (k_prec) : 
          
        # Find next bit in fraction  
        fractional *= 2
        fract_bit = int(fractional)  
  
        if (fract_bit == 1) : 
              
            fractional -= fract_bit  
            binary += '1'
              
        else : 
            binary += '0'
  
        k_prec -= 1
  
    return float(binary)  
#-----------------------------------------------------------------------------------------------------


def calculate(operation,num1,num2):
    
	if operation == "Add":
		return st.number_input(label="Result",value=num1 + num2)

	elif operation == "Subtract":
		return st.number_input(label="Result",value=num1 - num2)
	elif operation == "Multiply":
		return st.number_input(label="Result",value=num1 * num2)
	elif operation=="Divide" and num2!=0:
		return st.number_input(label="Result",value=num1 / num2)
	else:
		st.warning("Division by 0 error. Please enter a non-zero number.")
		return st.number_input(label="Result",value=-1)
	
def generate_page_op(operation):
	st.subheader(operation)
	
	value_2 = st.number_input(label="Please enter a first number")	
	value_3 = st.number_input(label="Please enter a second number")
	execute=st.button("Calculate result")
	if execute:
		value_4 =calculate(operation,value_2,value_3)

def convert(operation):
	st.subheader(operation)
	
	value_1 = st.number_input(label="Please enter a number")	
	if operation=='Conversion Decimal to Binary':
		st.write("Binary 1-16 bits")
		k_prec= st.number_input(label="Please enter a k precision number",value=0)
		set_prec="%."+str(k_prec) + "f"
	else:
		k_prec=None
		set_prec=None
	execute=st.button("Calculate result")
	if (execute) & (operation=='Conversion Binary to Decimal'):
		if check_binary(str(value_1)):
			value_2 =bin_to_float(value_1)
		else:
			value_2 =st.text_input('Invalid value',disabled=True)
	elif (execute) & (operation=='Conversion Decimal to Binary')&(not(value_1==0))&(not(k_prec==0)):
		value_2 =st.number_input(label="Result",value=decimalToBinary(value_1, k_prec),format=set_prec)  
	elif (execute) & (operation=='Conversion Decimal to Binary')&(not(value_1==0))&(k_prec==0):	
		value_2 =st.number_input(label="Result Integer-Like",value=decimalToBinary(value_1, k_prec),format="%.2f")

def main():
	st.title("Calculator/Converter App using Streamlit")
	
	# creates a horizontal line
	st.write("---")
	
	

	Page_Op=st.sidebar.selectbox('Select an operation to perform:',
						['Special Thanks',
	   					'Conversion Binary to Decimal',
						'Conversion Decimal to Binary',
						'Add',
						'Subtract',
						'Multiply',
						'Divide'])
	if Page_Op=='Special Thanks':
		sub_title=st.subheader('Special Thanks')
		special_thanks()
	else:
		
		if Page_Op=='Conversion Binary to Decimal':
			convert('Conversion Binary to Decimal') 
		elif Page_Op=='Conversion Decimal to Binary':
			convert('Conversion Decimal to Binary') 
		elif Page_Op=='Add':
			generate_page_op('Add')
		elif Page_Op=='Subtract':
			generate_page_op('Subtract')
		elif Page_Op=='Multiply':
			generate_page_op('Multiply')
		elif Page_Op=='Divide':	
			generate_page_op('Divide')
main()#start project
