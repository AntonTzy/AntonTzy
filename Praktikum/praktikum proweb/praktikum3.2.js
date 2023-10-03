document.getElementById('id1').textContent = "ayam hasil id";

let class1 = document.getElementsByClassName('class1');
for (let i = 0; i < class1.length; i++) {
    class1[i].textContent = "ayam hasil class";
} //fungsi for dan array disini  digunakan karena ada lebih dari 1 class/tag yang dipanggil

var h1 = document.getElementsByTagName('h1');
for(var i = 0; i < h1.length; i++){
    h1[i].textContent = "ayam hasil tag";
}

let text = document.querySelector('.text')
text.textContent = "Text 1"

let items = document.querySelectorAll('.item, #item, span');
for (let i = 0; i < items.length; i++){
    items[i].textContent = "item " + (i+1)
}



function inputName() {
    let inputName = document.getElementById('inputName').value;
    console.log(inputName)
}
let paragraf = document.getElementById('paragraf').textContent = "ini adalah paragraf baru"
let p = document.getElementById('p').innerHTML = "ini adalah paragraf baru"
//innerhtml bisa merubah semua element yang dideefinisikan misalnya menambahkan bold dan italic

let body = document.getElementById('body');
body.classList.remove('darkmode')