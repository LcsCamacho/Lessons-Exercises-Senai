
function carregar() {
    let msg = document.querySelector('.msg')
    let foto = document.querySelector('#imagem')
    const data = new Date()
    let hora = data.getHours()
    msg.innerHTML = ` Agora são ${hora} horas`
    if (hora >= 0 && hora <= 12) {
        document.body.style.backgroundColor = "blue"
        foto.src = 'https://th.bing.com/th/id/R.cd293eafcfcfe4b26a46f0c016f1a92b?rik=UAg%2fhLxn55XeMQ&riu=http%3a%2f%2fimages.unsplash.com%2fphoto-1553552240-aaf8591789e4%3fixlib%3drb-1.2.1%26q%3d80%26fm%3djpg%26crop%3dentropy%26cs%3dtinysrgb%26w%3d1080%26fit%3dmax%26ixid%3deyJhcHBfaWQiOjEyMDd9&ehk=4BOH29S%2fHtWs7ObGuvj0ORe8cpa8hVO%2fMitKSwcqI74%3d&risl=&pid=ImgRaw&r=0'
    } else if (hora > 12 && hora < 18) {
        document.body.style.backgroundColor = "gray"
        foto.src = 'https://th.bing.com/th/id/OIP.RYFHCnNvn6hA7un1wTZs0QHaJ3?pid=ImgDet&rs=1'
    } else {
        document.body.style.backgroundColor = "red"
        foto.src = 'https://th.bing.com/th/id/R.2ace1822d7d4a0307e4400703faf67d5?rik=3sDBx6l%2b3S6KhA&riu=http%3a%2f%2fwww.cawdialogos.com.br%2fwp-content%2fuploads%2f2015%2f02%2fnoite.jpg&ehk=ae5KcwiEg5lM%2fypcsZVNQEsFX76d2B9MUb%2fTCCLQ4zk%3d&risl=&pid=ImgRaw&r=0'
    }
} 