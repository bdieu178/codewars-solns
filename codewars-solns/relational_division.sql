/*
* Given film_actor and film tables 
* from the DVD Rental sample database 
* find all movies both Sidney Crowe (actor_id = 105) 
* and Salma Nolte (actor_id = 122) cast in together and 
* order the result set alphabetically.
*/
with sidney as (
/*Get all of the movies from Sidney*/
SELECT
  fa.actor_id as actor_id, fa.film_id as film_id, f.title as title
FROM
 film_actor as fa
INNER JOIN film as f ON f.film_id = fa.film_id
WHERE
  fa.actor_id = 105
)
,salma as (
/*Get all of the movies from Salma*/
SELECT
  fa.actor_id as actor_id, fa.film_id as film_id, f.title as title
FROM
 film_actor as fa 
INNER JOIN film as f ON f.film_id = fa.film_id
WHERE
  fa.actor_id = 122
) 


SELECT sid.title
FROM sidney as sid
INNER JOIN salma as sal ON sid.title = sal.title
ORDER BY sid.title ASC
