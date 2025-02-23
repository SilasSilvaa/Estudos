class Product:
    def __init__(self, name, price, quantity):
        self.name = name
        self.price = price
        self.quantity = quantity
    
    def __str__(self):
        return f"{self.name}, ${self.price:.2f}, {self.quantity}"
    
    def total(self):
        return self.price * self.quantity
    
    def update_price(self, percentage):
        self.price = self.price + (1 + percentage / 100)
    
def total(product):
    return product.price * product.quantity


def update_price(product, percentage):
    product.price = product.price * (1 + percentage / 100 )

p1 = Product("P1", 1000.0, 5)

print(total(p1))
update_price(p1, 10)
print(p1.price)

p1.total()
p1.update_price(10)

