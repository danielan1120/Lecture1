class Temperature:
    # TODO: Class attribute
    unit = "Celcius"

    def __init__(self, value):
    # TODO: Instance attribute
        self.value = value

    # TODO: Instance method
    def display(self):
        print(f"{self.value} {self.unit}")


    # TODO: Class method with relevant decorator
    @classmethod
    def change_unit(cls, new_unit):
        cls.unit = new_unit
    # TODO: Static method with relevant decorator
    @staticmethod
    def to_fahrenheit(celcius):
        return celcius*(9/5) + 32

temp1 = Temperature(100)
temp1.display()
print(Temperature.to_fahrenheit(temp1.value))
Temperature.change_unit("Kelvin")
temp1.display()

#D Because change_unit() is class method that change class attribute "unit", which affects all instances
