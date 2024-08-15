

db.Catalog.aggregate([

{

$search: {

index: 'default', 

text: {

query: 'your_search_query_here', 

path: 'description' 

}

}

},

{

$project: {

_id: 0, 

productName: 1, 

description: 1, 

score: { $meta: 'searchScore' } 

}

}

])
