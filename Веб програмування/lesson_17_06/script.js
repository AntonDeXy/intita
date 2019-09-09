// part1
// name = prompt('Enter your name','Name')
// input = document.getElementById('inputName')
// input.value = name

// part2
// let dv = document.createElement('p')
// dv.innerHTML = 'lorem'
// let parent = document.body
// parent.appendChild(dv)

// part3
// link = document.createElement('a')
// link.innerHtml = 'text'
// link.href = 'https://www.facebook.com/'
// let parent = document.body
// parent.appendChild(link)

// part4

parent = document.body
list = document.createElement('ul')
parent.appendChild(list)
for(let i = 0; i<5; i++){
  img = document.createElement('img')
  img.src = 'https://upload.wikimedia.org/wikipedia/en/thumb/6/63/IMG_(business).svg/1200px-IMG_(business).svg.png'
  let listElement = document.createElement('li')
  let link = document.createElement('a')
  link.innerHTML = ('Link')
  link.href = 'http://www.google.com.ua'
  link.setAttribute('class', 'link')
  list.appendChild(listElement)
  listElement.appendChild(link)
  listElement.appendChild(img)
}

// console.dir(listElement)


// test = document.getElementById('li')
// console.dir(test)