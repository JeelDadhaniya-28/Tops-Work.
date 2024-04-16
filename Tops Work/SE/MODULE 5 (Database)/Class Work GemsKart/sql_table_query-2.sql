use gemskart;

delete from ordertbl where order_id in (11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40);  

update ordertbl set order_date = '2022-03-12' where order_id=1;
update ordertbl set order_date = '2021-3-2' where order_id=2;
update ordertbl set order_date = '2021-7-21' where order_id=3;
update ordertbl set order_date = '2022-9-4' where order_id=4;
update ordertbl set order_date = '2022-1-20' where order_id=5;
update ordertbl set order_date = '2022-10-29' where order_id=6;
update ordertbl set order_date = '2021-2-8' where order_id=7;
update ordertbl set order_date = '2023-2-19' where order_id=8;
update ordertbl set order_date = '2022-11-28' where order_id=9;
update ordertbl set order_date = '2021-1-2' where order_id=10;

select distinct(city) from customer;
select * from customer where customer_id between 2 and 5;
select * from customer where customer_id >= 2 and customer_id <= 5;


select * from customer where customer_name like 'm%';
select * from customer where customer_name like 'a%n';
select * from customer where customer_name like 'u__y';
select * from customer where customer_name like '%n';
select * from customer where customer_name like 'avan';

select * from customer order by customer_name;
select * from customer order by customer_name desc;
select * from product order by product_price;
select * from product order by product_price desc;
select * from product where product_price > 2000 order by product_price desc;

select count(*) from product;
select category_id, count(*) from product group by(category_id);
select category_id, sum(product_price) from product group by(category_id);
select count(city), city from customer group by(city);
select count(city), city from customer group by(city);

select count(*), product_price, product_name from product group by product_price having 5000 < sum(product_price);

desc product;

select product.product_name,category.category_name
from product inner join category
on product.category_id = category_id;

select customer.customer_name, product.product_name, ordertbl.total, ordertbl.order_data
from product 
inner join ordertbl
on ordertbl.product_id = product.product_id
inner join customer
on customer.customer_id = ordertbl.customer_id;
