# Class variables - are the same for each instance
# as alternative of using class varaible , we can use class method
#inheritance allows us to inherit attributes and methods from parent class
class Employees:
    pay_raise = 1.05

    def __init__(self, first, last, pay):
        self.first = first
        self.last = last
        self.pay = pay
        self.email = first + "." + last + "@gmail.com"
    def fullname(self):
        return f"{self.first} {self.last}"

    def raise_amount(self):
        return int(self.pay * self.pay_raise)
#     @classmethod
#     def set_raise_amount(cls, amount):
#         cls.pay_raise = amount
# Employees.set_raise_amount(1.05)
# emp1 = Employees('Dennis', 'Appiah', 900)
# emp2 = Employees('Kofi', 'Owusu', 800)
class Developers(Employees):
    pay_raise = 1.10

    def __init__(self, first,last, pay, prog_lang):
        super(Developers, self).__init__(first, last,pay)
        self.prog_lang = prog_lang

    def __repr__(self):
        return f"Developers('{self.first} {self.last} {self.pay}')"

    def __str__(self):
        return f"{self.fullname()}- {self.pay}"

class Manager(Employees):
    pay_raise = 1.05
    def __init__(self, first,last, pay, employees = None):
        super(Manager, self).__init__(first, last,pay)
        if employees is None:
            self.employees = []
        else:
            self.employees = employees

    def add_emp(self, emp):
        if emp not in self.employees:
            self.employees.append(emp)

    def remove_emp(self, emp):
        if emp in self.employees:
            self.employees.remove(emp)

    def print_emp(self):
        for emp in self.employees:
            print(emp.fullname())

dev_1 = Developers('Dennis','Appiah',20000, 'Python')
dev_2 = Developers('kofi','Owusu',3000, 'Java')

manager_1 = Manager('Kwao','Owusu', 100000, [dev_1])

manager_1.print_emp()
# print(dev_1) -real use case of repr and str methods
print(dev_2)





