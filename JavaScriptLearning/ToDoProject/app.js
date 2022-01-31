//selectors
const todoInput = document.querySelector('.todo-input')
const todoButton = document.querySelector('.todo-btn')
const todoList = document.querySelector('.todo-list')
const filterOption = document.querySelector('.filter-todo')

//Functions for all the Todo Listeners
function addTodo(event) {
    //prevent form from submitting
    event.preventDefault()
    console.log('hello')
        //Creating ToDo DIV
    const todoDiv = document.createElement('div')
    todoDiv.classList.add('todo')

    //Creating LI
    const newToDo = document.createElement('li')
    newToDo.innerText = todoInput.value

    newToDo.classList.add('todo-item')
    todoDiv.appendChild(newToDo)

    //Creating Check mark BUTTON

    const completedBtn = document.createElement('button')
    completedBtn.innerHTML = '<i class="fas fa-check"></i>'
    completedBtn.classList.add('complete-btn')
    todoDiv.appendChild(completedBtn)

    //Trash BUTTON

    const trashdBtn = document.createElement('button')
    trashdBtn.innerHTML = '<i class="fas fa-trash"></i>'
    trashdBtn.classList.add('trash-btn')
    todoDiv.appendChild(trashdBtn)

    //Append To List

    todoList.appendChild(todoDiv)

    //clear TOdo Input Value
    todoInput.value = ''
}

function deleteCheck(e) {
    // console.log(e.target);
    const item = e.target
        //DELTE TODO

    if (item.classList[0] === 'trash-btn') {
        const todo = item.parentElement
            //Animation
        todo.classList.add('fall')
        todo.addEventListener('transitionend', function() {
            todo.remove()
        })
    }

    if (item.classList[0] === 'complete-btn') {
        const todo = item.parentElement
        todo.classList.toggle('completed')
    }
}

//Event Listeners

todoButton.addEventListener('click', addTodo)
todoList.addEventListener('click', deleteCheck)
filterOption.addEventListener('click', filterTodo)

function filterTodo(e) {
    const todos = todoList.childNodes
    todos.forEach(function(todo) {
        switch (e.target.value) {
            case 'all':
                todo.style.display = 'flex'
                break
            case 'completed':
                if (todo.classList.contains('completed')) {
                    todo.style.display = 'flex'
                } else {
                    todo.style.display = 'none'
                }
        }
    })
}