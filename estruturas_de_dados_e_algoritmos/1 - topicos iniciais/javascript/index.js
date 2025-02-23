class Product {
  constructor(name, price, quantity) {
    this.name = name;
    this.price = price;
    this.quantity = quantity;
  }

  toString() {
    return `${this.name}, ${this.price}, ${this.quantity}`;
  }

  total() {
    return this.price * this.quantity;
  }

  updatePrice(percentage) {
    return (this.price += this.price * percentage);
  }
}

const p1 = new Product('Product 1', 1000, 3);
const p2 = new Product('Product 2', 2999, 5);

console.log(p1.toString());

console.log(p2.toString());

function total(product) {
  return product.price * product.quantity;
}

function updatePrice(product, percentage) {
  return (product.price += product.price * percentage);
}

console.log(updatePrice(p1, 0.1));
console.log(p1.total());
console.log(p1.updatePrice(0.1));
