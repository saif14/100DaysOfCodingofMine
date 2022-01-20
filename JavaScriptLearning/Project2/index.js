let myLeads = []
const inputEl = document.getElementById("input-el")
const intputBtn = document.getElementById('input-btn')
const ulEl = document.getElementById("ul-el")



intputBtn.addEventListener('click', function() {
    myLeads.push(inputEl.value)
    console.log(myLeads)
})

for (let i = 0; i < myLeads.length; i++) {
    ulEl.textContent = myLeads[i]
}