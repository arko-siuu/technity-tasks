function Strike(path){
    var Play = new Audio(path);
    Play.currentTime = 0;
    Play.play();
}

document.addEventListener('keydown',(e)=>{
    var code = e.key;
    if(code == "w"){
        Strike('bang-140381.mp3');
    }else if(code == "a"){
        Strike('foley-far-distant-low-drum-beat-162368.mp3');
    }else if(code == "s"){
        Strike('sunflower-street-drumloop-85bpm-163900.mp3');
    }else if(code == "d"){
        Strike('tribe-drum-loop-103173.mp3');
    }else if(code == "j"){
        Strike('typical-trap-loop-2b-130751.mp3')
    }else if(code == "k"){
        Strike('typical-trap-loop-140bpm-129880.mp3')
    }else if(code == "l"){
        Strike('typical-trap-loop-140bpm-129880.mp3')
    }
})