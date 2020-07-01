class pizza:
    def __init__(self,toppings):
        self.toppings= toppings
@staticmethod
def validate_topping(topping):
     if topping=="pineapple" :
         raise valueError("no pineapples!")
     else:   
        return True
 ingradiants =['chees','onion','spam'] 

 if all(pizza.validate_topping(i) for i in ingradiants)        

pizza=pizza(ingradiants)