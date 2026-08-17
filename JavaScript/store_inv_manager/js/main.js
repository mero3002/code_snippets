import {
    Product
} from "./Product.js"

const banana = new Product(1, "Banana", "Fruit", 30, true);
const apple = new Product(2, "Apple", "Fruit", 50, true);
const mountain_dew = new Product(3, "Mountain Dew", "Beverage", 20, false);
const bread = new Product(4, "Bread", "Baked", 3, true);
const cocaine = new Product(5, "Magic Powder", "Powder", 1_000, false);
const mouse = new Product(6, "Mouse", "Electronics", 100, true);
const laptop = new Product(7, "Laptop", "Electronics", 600, true);
const sugar_powder = new Product(8, "Sugar Powder", "Powder", 12, true);

let products = [banana, apple, mountain_dew, bread, cocaine, mouse, laptop, sugar_powder];

function showAllProducts() {
    for (let i = 0; i < products.length; i++){
        console.log(`${i + 1}. ${products[i]}`)
    }
}

let categories = products.map(product => product.category);
categories = [...new Set(categories)];
// i didn't know how else could i do this honestly

function showByCategory() {
    for (let cat of categories){
        console.log(`${cat}:`);
        for (let product of products){
                product.category === cat ? console.log(product.name) : null;
        }
        console.log("======================")
    }
}

let inStock = products
    .filter(product => product.stock)
    .map(product => product.name);
// again, i don't know what's the easier way

function showInStock() {
    console.log(inStock)
}

let productNames = products.map(product => product.name)