-- insert customer

insert into customer
(customer_name, customer_address, customer_mobile, city)
values
('jeel', 'Safarin park-2', '1548756325', 'Keshod'),
('Avan', '60-ft DP road', '9876543210', 'Keshod'),
('Manav', 'Kavshal Apartment', '1597532486', 'Keshod'),
('Manthan', 'Safarin park-2', '9516842753', 'Keshod'),
('Uday', 'Safarin park-2',  '6547893210', 'Keshod'),
('Krinish', 'Safarin park-2', '3214569870', 'Keshod'),
('Chetan', 'Kavshal Apartment', '7893214560', 'Keshod'),
('Kunj', 'Ambavadi', '5544669988', 'Keshod'),
('Ajay', 'Kavshal Apartment', '3355779911', 'Keshod'),
('Savan', 'Kavshal Apartment', '1111111111', 'Keshod');

-- insert category

insert into category
(category_name, category_image)
values
('Electronic', 'img_1.jpg'),
('clothes', 'img_2.jpg'),
('toys', 'img_3.jpg'),
('footwear', 'img_4.jpg'),
('Furniture', 'img_5.jpg'),
('Groceries', 'img_6.jpg'),
('Books', 'img_7.jpg'),
('Office', 'img_8.jpg'),
('Stationary', 'img_9.jpg'),
('Computer Hardware', 'img_10.jpg');


-- insert product

insert into product
(product_name, category_id, product_price, product_rating, product_desc)
values
('Samsung S24', '1', '130000', '4.5', 'ABC'),
('t-shirt', '2', '130', '4.5', 'ABC'),
('Remote control car', '3', '1300', '4.5', 'ABC'),
('Shoes', '4', '3000', '4.5', 'ABC'),
('Computer Table', '5', '30000', '4.5', 'ABC'),
('Wheat', '6', '350', '4.5', 'ABC'),
('The Hidden Hindu', '7', '400', '4.5', 'ABC'),
('Desk', '8', '12000', '4.5', 'ABC'),
('Writing Books', '9', '130', '4.5', 'ABC'),
('SSD', '10', '3500', '4.5', 'ABC');


-- insert ordertbl

insert into ordertbl
(product_id, category_id, customer_id, total, order_date)
values
('1', '1', '1', '130000', '2022-3-12'),
('2', '2', '2', '390', '2021-3-2'),
('3', '3', '3', '2600', '2021-7-21'),
('4', '4', '4', '3000', '2022-9-4'),
('5', '5', '5', '60000', '2022-1-20'),
('6', '6', '6', '3500', '2022-10-29'),
('7', '7', '7', '1200', '2021-2-8'),
('8', '8', '8', '12000', '2023-2-19'),
('9', '9', '9', '130', '2022-11-28'),
('10', '10', '10', '7000', '2021-1-2');

-- insert payment

insert into payment
(order_id, total, payment_type)
values
('1', '130050', 'cash'),
('2', '395', 'online'),
('3', '2620', 'online'),
('4', '3030', 'online'),
('5', '60020', 'cash'),
('6', '3550', 'cash'),
('7', '1221', 'online'),
('8', '12012', 'cash'),
('9', '133', 'online'),
('10', '7007', 'cash');
