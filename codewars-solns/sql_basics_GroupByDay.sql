/*
here is an events table used to track different key activities taken on a website. For this task you need to filter the name field to only show "trained" events. Events should be grouped by the day they happened and counted. The description field is used to distinguish which items the events happened on.
*/

with trained_events as (
  SELECT
    DATE(e.created_at) as day,e.description, COUNT(e.description) as count
  FROM
    events e
  WHERE
    e.name LIKE '%trained%'
  GROUP BY
    e.description,e.created_at
)

SELECT day,description,count(*) as count
FROM trained_events
group by description,day
ORDER BY day ASC


