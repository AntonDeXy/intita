// let Arr = [
//   'red',
//   'green',
//   'blue',
//   'white',
//   'black',
// ]
// console.log(Arr.shift() + ' ' + Arr.shift())

// Arr.push('four')
// Arr.push('five')
// Arr.push('six')
// Arr.push('seven')
// Arr.push('eight')

// console.log(Arr)

let Colors = [
  '#FFFFFF',
  '#C0C0C0',
  '#808080',
  '#000000',
  '#FF0000',
  '#800000',
  '#FFFF00',
  '#808000',
  '#00FF00',
  '#008000',
  '#00FFFF',
  '#008080',
  '#0000FF',
  '#000080',
  '#FF00FF',
  '#800080',
]

// document.write("Hello")
let div = document.getElementById('myDiv')
// alert(div)
console.log(div.innerHTML)
div.innerHTML = 'Hello worl`````d '
console.log(div.innerHTML)
let cl = document.getElementsByClassName('myClass')
console.dir(document.getElementsByClassName('myClass'))

let links = document.getElementsByTagName('a')
console.dir(links)

div.classList.add('test')
div.classList.remove('class')

// div.style.backgroundColor = 'red'

for(let i = 0; i<Colors.length; i++){
  if(i == Colors.length){
    i = 0
  }
  function setColor(){
    let color = Colors[i]
    div.style.color = color
    console.log(Colors[i])
    // setTimeout(setColor, 1000)
  }
}
div.classList.add('active')

for(let i = 0; i < cl.length; i++){
  cl[i].classList.add('active')
}

let links = document.getElementsByTagName('a')
function Click() {
  for(let i = 0; i<links.length; i++){
    links[i].classList.toggle('active')
  }
}