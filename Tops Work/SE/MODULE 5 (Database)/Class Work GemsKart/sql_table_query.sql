create database gemskart;
use gemskart;

create table customer(
	customer_id int auto_increment,
    customer_name varchar(50),
    customer_address varchar(50),
    customer_mobile varchar(50),
    city varchar(50),
    primary key (customer_id)
);

create table category(
	category_id int auto_increment,
    category_name varchar(50),
    category_image varchar(50),
    primary key (category_id)
);

create table product(
	product_id int auto_increment,
    product_name varchar(50),
    category_id int,
    product_price double,
    product_rating float,
    product_desc varchar(50),
    primary key (product_id),
    foreign key (category_id) references category (category_id)
); 

create table ordertbl(
	order_id int auto_increment,
    product_id int,
    category_id int,
    customer_id int,
    total double,
    order_date date,
    primary key (order_id),
    foreign key (product_id) references product(product_id),
    foreign key (category_id) references category(category_id),
    foreign key (customer_id) references customer(customer_id)
);

create table payment(
	payment_id int auto_increment,
    order_id int,
    total double,
    payment_type varchar(50),
    primary key (payment_id),
    foreign key (order_id) references ordertbl(order_id)
);