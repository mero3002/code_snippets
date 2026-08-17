export class Product{
    id;
    name;
    category;
    #price;
    stock;

    constructor(id, name, category, price, stock){
        this.id = id;
        this.name = name;
        this.category = category;
        this.price = price;
        this.stock = stock;
    }
    set price(price){
        this.#price = price;
    }
    get price(){
        return this.#price;
    }
}