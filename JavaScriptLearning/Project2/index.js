let myLeads = []
const inputEl = document.getElementById('input-el')
const inputBtn = document.getElementById('input-btn')
const ulEl = document.getElementById('ul-el')
const deleteBtn = document.getElementById('delete-btn')
const tabBtn = document.getElementById('tab-btn')
const leadsFromLocalStorage = JSON.parse(localStorage.getItem('myLeads'))

// const tabs = [{ url: 'https://www.linkedin.com/in/per-harald-borgen/' }]

function deleteBtnAction() {
    localStorage.clear()
    myLeads = []
    render(myLeads)
}

function tabBtnAction() {
    // chrome.tabs.query({ active: true, currentWindow: true }, function(tabs) {

    // })
    chrome.tabs.query({ active: true, currentWindow: true }, function(tabs) {
        myLeads.push(tabs[0].url)
        localStorage.setItem("myLeads", JSON.stringify(myLeads))
        render(myLeads)
    })

}

deleteBtn.addEventListener('dblclick', deleteBtnAction)
tabBtn.addEventListener('click', tabBtnAction)

if (leadsFromLocalStorage) {
    myLeads = leadsFromLocalStorage
    render(myLeads)
}

inputBtn.addEventListener('click', function() {
    myLeads.push(inputEl.value)
    inputEl.value = ''
    localStorage.setItem('myLeads', JSON.stringify(myLeads))
    render(myLeads)

    // To verify that it works:
    console.log(localStorage.getItem('myLeads'))
})

function render(leads) {
    let listItems = ''
    for (let i = 0; i < leads.length; i++) {
        listItems += `
            <li>
                <a target='_blank' href="${leads[i]}">
                    ${leads[i]}
                </a>
            </li>
        `
    }
    ulEl.innerHTML = listItems
}