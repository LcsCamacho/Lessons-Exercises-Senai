let liq = document.querySelector("#liquido");
let liq2 = document.querySelector("#liquido2");
let liq3 = document.querySelector("#liquido3");
let liq4 = document.querySelector("#liquido4");

let vol = 0;
let vol2 = 0;
let vol3 = 0;
let vol4 = 0;

setInterval(() => {
    liq.style.height = vol+"%";
    vol += 4;
    if (vol >= 96) {vol=0}
}, 500)
setInterval(() => {
    liq2.style.height = vol2+"%";
    vol2 += 4;
    if (vol2 >= 20) {vol2=0}
}, 500)
setInterval(() => {
    liq3.style.height = vol3+"%";
    vol3 += 4;
    if (vol3 >= 40) {vol3=0}
}, 500)
setInterval(() => {
    liq4.style.height = vol4+"%";
    vol4 += 4;
    if (vol4 >= 96) {vol4=0}
}, 500)