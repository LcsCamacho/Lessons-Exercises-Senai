function alternaTela() {
    if (document.querySelector('.container-2').style.display == 'grid') {
        document.querySelector('.container-2').style.display = 'none';
        document.querySelector('.container').style.display = 'grid';
    } else {
        document.querySelector('.container').style.display = 'none';
        document.querySelector('.container-2').style.display = 'grid';
    }
}

let objectMouse = document.querySelector('.content-notice')
var moverobj = false

objectMouse.addEventListener('mousedown', () => {
    moverobj = true
    objectMouse.style.position = 'absolute'
    objectMouse.style.width = '40%'
    objectMouse.style.height = '40%'
    objectMouse.style.transition = 'all .1s'
})
document.querySelector('body').addEventListener('mouseup', () => {
    moverobj = false
    objectMouse.style.position = 'relative'
    objectMouse.style.width = '100%'
    objectMouse.style.height = '100%'
})
document.querySelector('body').addEventListener('mousemove', (e) => {
    e.preventDefault()
    if (moverobj) {
        objectMouse.style.top = e.clientY + 'px'
        objectMouse.style.left = e.clientX + 'px'
    }
})


