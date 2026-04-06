let heading =document.getElementById("mainHeading");
let paragraph=document.getElementById("paragraph");
let input=document.getElementById("userInput");
let fontSize=16;
document.getElementById("change-btn").addEventListener("click",function(){
    heading.textContent=input.value;
});
document.getElementById("change-bg").addEventListener("click",function(){
    document.body.style.backgroundColor="#"+Math.floor(Math.random()*16777215).toString(16);
})
