SELECT 
customer.customer_id, 
customer.first_name || ' ' || customer.last_name AS full_name_customer, 
customer.email,SUM(payment.amount) AS total_amount,
COUNT(payment.customer_id) AS total_payment, 
city.city, address.district, country.country 

FROM 
payment 

INNER JOIN customer ON customer.customer_id = payment.customer_id 
INNER JOIN address ON address.address_id = customer.address_id 
INNER JOIN city ON city.city_id = address.city_id 
INNER JOIN country ON country.country_id = city.country_id 

GROUP BY customer.customer_id, city.city,address.district, country.country 
/*HAVING country.country LIKE 'Brazil' AND address.district LIKE 'G%'*/
ORDER BY total_amount DESC;
;