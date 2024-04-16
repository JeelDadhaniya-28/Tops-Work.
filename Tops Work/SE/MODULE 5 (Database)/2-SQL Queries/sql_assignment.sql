create database exp;
use exp;

-- 1. Create Table Name : Student and Exam -- 

create table student(
	rollno int auto_increment,
	stud_name varchar(50),
    branch varchar(50),
    primary key (rollno)
);

create table exam(
	rollno int,
    s_code varchar(50),
    marks int,
    branch_code varchar(50),
    foreign key(rollno) references student(rollno)
);


-- 2. Create table given below: Employee and Incentive Table --

create table emp(
	emp_id int auto_increment,
    first_name varchar(50),
    last_name varchar(50),
    salary int,
    joining_date datetime,
    department varchar(50),
    primary key(emp_id)
);

insert into emp
(first_name, last_name, salary, joining_date, department)
values
('John', 'abraham', 1000000, '2013-1-01 12:00:00', 'Banking'),
('Michael', 'Clarke', 800000, '2013-1-01 12:00:00', 'Insurance'),
('Roy', 'Thomas', 700000, '2013-2-01 12:00:00', 'Banking'),
('Tom', 'Jose', 600000, '2013-2-01 12:00:00', 'Insurance'),
('Jerry', 'Pinto', 650000, '2013-2-01 12:00:00', 'Insurance'),
('Philip', 'Mathew', 750000, '2013-1-01 12:00:00', 'Services'),
('TestName1', '123', 650000, '2013-1-01 12:00:00', 'Services'),
('TestName2', 'Lname%', 600000, '2013-2-01 12:00:00', 'Insurance');

create table incentive(
	emp_ref_id int,
    incentive_date date,
    incentive_amount int
);

insert into incentive
(emp_ref_id, incentive_date, incentive_amount)
values
(1, '2013-02-01', 5000),
(2, '2013-02-01', 3000),
(3, '2013-02-01', 4000),
(1, '2013-01-01', 4500),
(2, '2013-01-01', 3500);


-- 3. Get First_Name from employee table using Tom name “Employee Name”. --

update emp set first_name='Employee Name' where emp_id=4;


-- 4. Get FIRST_NAME, Joining Date, and Salary from employee table --

select first_name, joining_date, salary from emp;


-- 5. Get all employee details from the employee table order by First_Name Ascending and Salary descending? -- 

select * from emp order by first_name; 
select * from emp order by salary desc;


-- 6. Get employee details from employee table whose first name contains ‘J’. --

select * from emp where first_name like 'j%';


-- 7. Get department wise maximum salary from employee table order by
-- 8. salary ascending?

SELECT department,salary FROM emp order by salary;


-- 9. Select first_name, incentive amount from employee and incentives table
-- forthose employees who have incentives and incentive amount greater than 3000

select first_Name, incentive_amount from emp, incentive where incentive_amount > 3000;


-- 10. Create After Insert trigger on Employee table which insert records in viewtable



-- 11.Create table given below: Salesperson and Customer

create table salseperson(
	sno int primary key,
    sname varchar(50),
    city varchar(50),
    comm varchar(50)
);

insert into salseperson  
(sno ,sname, city, comm)  
values
(1001, 'Peel', 'London', '.12'),
(1002, 'Serres', 'San Jose', '.13'),
(1004, 'Motika', 'London', '.11'),
(1007, 'Rafkin', 'Barcelona', '.15'),
(1003, 'Axelrod', 'New York', '.1');

create table customer(
	cnm int primary key,
    cname varchar(50),
    city varchar(50),
    rating int,
    sno int,
    foreign key (sno) references salseperson (sno)
);

insert into customer
(cnm, cname, city, rating, sno)
values
(201, 'Hoffman', 'London', 100, 1001),
(202, 'Giovanne', 'Roe', 200, 1003),
(203, 'Liu', 'San Jose', 300, 1002),
(204, 'Grass', 'Barcelone', 100, 1002),
(206, 'Clemens', 'London', 300, 1007),
(207, 'Pereira', 'Roe', 100, 1004);


-- 12.Retrieve the below data from above table 



-- 13.All orders for more than $1000

SELECT *
FROM orders
WHERE order_value > 1000;


-- 14.Names and cities of all salespeople in London with commission above 0.12

select sname, city from salseperson where city = 'London' and comm = 0.12;


-- 15.All salespeople either in Barcelona or in London

select * from salseperson where city = 'London' or city = 'Barcelona';


-- 16.All salespeople with commission between 0.10 and 0.12. (Boundary values should be excluded).

select * from salseperson where comm >= 0.10 and comm <= 0.12;


-- 17.All customers excluding those with rating <= 100 unless they are located in Rome

select * from customer where rating <= 100 and city = 'Roe';


-- 18. Write a SQL statement that displays all the information about all salespeople

select * from salseperson;


-- 19. From the following table, write a SQL query to find orders that are
  -- delivered by a salesperson with ID. 5001. Return ord_no, ord_date, purch_amt

-- salesman table
create table salesman(
	salesman_id int ,
    sale_m_name varchar(50),
    sm_city varchar(50),
    cmm double,
    primary key (salesman_id)
);

insert into salesman
(salesman_id, sale_m_name, sm_city, cmm)
values
(5001,'James Hoog','New York',0.15),
(5002,'Nail Knite','Paris',0.13),
(5005,'Pit Alex','London',0.11),
(5006,'MC Lyon','Paris',0.14),
(5007,'Paul Adam','Rome',0.13),
(5003,'Lauson Hen','San Jose',0.12); 

-- Order table
create table orders(
	ord_no int,
    purch_amt varchar(50),
    ord_date date,
    customer_id int,
    salesman_id int,
    primary key(ord_no),
    foreign key (salesman_id) references salesman(salesman_id)
);

insert into orders
( ord_no, purch_amt, ord_date, customer_id, salesman_id)
values
(70001,'150.5','2012-10-05',3005,5002),
(70009,'150.5','2012-09-10',3001,5005),
(70002,'150.5','2012-10-05',3002,5001),
(70004,'150.5','2012-08-17',3009,5003),
(70007,'150.5','2012-09-10',3005,5002),
(70005,'150.5','2012-07-27',3007,5001),
(70008,'150.5','2012-09-10',3002,5001),
(70010,'150.5','2012-10-10',3004,5006),
(70003,'150.5','2012-10-10',3009,5003),
(70012,'150.5','2012-06-27',3008,5002),
(70011,'150.5','2012-08-17',3003,5007),
(70013,'150.5','2012-04-25',3002,5001); 

select ord_no, purch_amt, ord_date from orders where salesman_id=5001;


-- 20. From the following table, write a SQL query to select a range of
-- products whose price is in the range Rs.200 to Rs.600. Begin and end
-- values are included. Return pro_id, pro_name, pro_price, and pro_com.

create table item_mast(
	pro_id int,
    pro_name varchar(50),
    pro_price varchar(50),
    pro_com int,
    primary key(pro_id)
); 

insert into item_mast
(pro_id, pro_name, pro_price, pro_com)
values
(101,'Mother Borad','3200.00',15),
(102,'Key Borad','450.00',16),
(103,'ZIP Drive','250.00',14),
(104,'Speaker','550.00',16),
(105,'Monitor','5000.00',11),
(106,'DVD Drive','900.00',12),
(107,'CD Drive','800.00',12),
(108,'Printer','2600.00',13),
(109,'Refill cartridge','350.00',13),
(110,'Mouse','250.00',12); 

select * from item_mast where pro_price<=600 and pro_price>=200;


-- 21. From the following table, write a SQL query to calculate the average
-- price for a manufacturer code of 16. Return avg.

select sum(pro_price) from item_mast where pro_com = 16;
select avg(pro_price) from item_mast where pro_com = 16;


-- 22. From the following table, write a SQL query to display the pro_name
-- as 'Item Name' and pro_priceas 'Price in Rs

select pro_name as 'item Name', pro_price as 'Price in Rs.' from item_mast;


-- 23. From the following table, write a SQL query to find the items whose
-- prices are higher than or equal to $250. Order the result by product price in
-- descending, then product name in ascending. Return pro_name and pro_price.

select pro_name from item_mast where pro_price >= 250 ;
select * from item_mast order by pro_price  desc;
select pro_name from item_mast order by pro_name;


-- 24. From the following table, write a SQL query to calculate average price of 
-- the items for each company. Return average price and companycode.

select avg(pro_price),pro_com
from item_mast
where pro_com = 11;

select avg(pro_price),pro_com
from item_mast
where pro_com = 12;

select avg(pro_price),pro_com
from item_mast
where pro_com = 13;

select avg(pro_price),pro_com
from item_mast
where pro_com = 14;

select avg(pro_price),pro_com
from item_mast
where pro_com = 15;

select avg(pro_price),pro_com
from item_mast
where pro_com = 16;