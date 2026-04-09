function countdownTimer(){
    let no=parseInt(document.getElementById("no").value);
    let display=document.getElementById("display");
    if(no<=0){
        display.innerHTML="Enter a number other than 0";
        return;
        
    }
    display.innerHTML=no;
    let timer=setInterval(function(){
        no--;
        if(no<=0){
            display.innerHTML="Done!";
            clearInterval(timer);
        }
        else{
            display.innerHTML=no;
        }
    },1000);
}