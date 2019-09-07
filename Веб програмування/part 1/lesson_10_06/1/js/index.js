pararaph = document.getElementById('paragraph') 
links = document.getElementsByClassName('link')
div = document.getElementsByTagName('div')

let isClicked = false

function test () {
  if(!isClicked){
    pararaph.style = 'color: red'
    for(let i = 0; i<links.length; i++){
      links[i].classList.add('test')
    }
    div[0].classList.remove('div')
    isClicked = true
  }else{
    pararaph.style = 'color: black';
    for(let i = 0; i<links.length; i++){
      links[i].classList.remove('test')
    }
    div[0].classList.add('div')
    isClicked = false
  }
}