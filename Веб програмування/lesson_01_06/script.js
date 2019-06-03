let people = [
  {
    firstname: "Semen",
    secondname: 'Lenin',
    age: 27,
    city: 'Vinnitsia',
  },
  {
    favoriteGameTitle: 'Title',
    favoriteGameCompany: 'Name of Company',
    favoriteGameyear: 2018,
  },
]

for(i=0; i<people.length; i++){
  if(i==0){
    console.log('main info:')
  }
  if(i==1){
    console.log('Secondary info:')
  }
  for(let inf in people[i]){
    console.log(inf + ': ' + people[i][inf])
  }
  
}