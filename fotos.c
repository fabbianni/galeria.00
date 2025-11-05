<!DOCTYPE html>
<html lang="pt-br">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>meu site</title>
    <style>
        
        *{
            
            margin: 0;
            padding: 0;
            box-sizing: border-box;
        }

        .caixa {
            width: 1240px;
            margin: 0 auto;
            
        }
        .camera{
            height: 27.5px;
            width: 30px;
            
        }
        .container{
            display: flex;
            align-items: center;
            justify-content:space-between;
            
            
            
        }
         .b{
            list-style: none;
            display: flex;
            gap: 30px;
            

            
        }
        .pesquisa{
            height: 45px;
            background: grey;
            opacity: 56%;
            border-radius: 5;
            padding: 0 10px;
            width: 1000px;
            align-items: center;
            display: flex;

        }
        .b2{
            color: white;
        }
        .camera2{
            width: 30px;
            height: 30px;
            border-radius: 50%;
        }
        .img{
            width: 390px;
            height: 194px;
        }
        .container2{
            display: flex;
            flex-wrap: wrap;
            align-items: center;
            row-gap: 15px;
            justify-content: space-between;
            
        }
        .t{
            display: flex;
            justify-content: center;
        }
        .t p {
            
            width: fit-content;
            padding:  10px;
        }
        .background{
            background-color: #d8d8d8;
            
        }

        .card {
            background: white;
            width: 400px
        }

        .card img {
            width: 100%;
        }

        .card .tag {
           
            color: black;
            padding: 5px;
            border-radius: 10px;
            width: fit-content;
        }
        .titulo{
            display: flex;
            padding: 0 170px;
        }
        
    </style>
</head>
<body>
    <div class="container caixa">
        <img class="camera" src="Vector.png" alt="logo">
        <ul class="b">
            <li >home</li>
            <li >galeria</li>
        </ul>
        <div class="pesquisa">
            <p class="b2">Pesquise por imagens ou coleções</p>
        </div>
        <img class="camera2" src="f.p.jpg" alt="logo">
    </div>
    <div class="background">
        <h1 class="titulo">Galeria</h1>
        <div class="container2 caixa">
            
            <div class="card">
                <img class="img" src="c:\Users\anthonella_herrera\Downloads\a2ae231f150d823c57aa56be4a711c8d5b0e373a.jpg" alt="">
                <p>Workspace elétrica</p>
                <p class="tag">tag</p>
            </div>
            <div class="card">
                <img class="img" src="c:\Users\anthonella_herrera\Downloads\795344754ff0bdbe25a0e494e4416d7e48d01ab3.jpg" alt="">
                <p>Dark and red</p>
                <p class="tag">tag</p>
            </div>
            <div class="card">
            
                <img class="img" src="c:\Users\anthonella_herrera\Downloads\dc98c5db44c3fe30ab593d5d1a29369895adff38 (2).jpg" alt="">
                <p>Organização e grids</p>
                <p class="tag">tag</p>
            </div>
            
            <div class="card">
                <img class="img" src="c:\Users\anthonella_herrera\Downloads\d440d66676e16e51b159ff519525cc1bf836d765.jpg" alt="">
                <p>Colméia</p>
                <p class="tag">tag</p>
            </div>

            <div class="card">
                <img class="img" src="c:\Users\anthonella_herrera\Downloads\d440d66676e16e51b159ff519525cc1bf836d765.jpg" alt="">
                <p>Setup de escritor</p>
                <p class="tag">tag</p>
            </div>

            <div class="card">
                <img class="img" src="c:\Users\anthonella_herrera\Downloads\0e57a0e2a8b0de2e904de82f795c2da1bccf8015.jpg" alt="">
                <p>Ergonomia e cores</p>
                <p class="tag">tag</p>
            </div>
            
            <div class="card">
                <img class="img" src="c:\Users\anthonella_herrera\Downloads\650720fd835fee3d69a68aa76cee86e46740a3f8 (2).jpg" alt="">
                <p>Show de luzes</p>
                <p class="tag">tag</p>
            </div>

            <div class="card">
                <img class="img" src="c:\Users\anthonella_herrera\Downloads\a14316ee2a94275d1934b53ff044087e750168c7 (3).jpg" alt="">
                <p>Deep purple</p>
                <p class="tag">tag</p>
            </div>

            <div class="card">
                <img class="img" src="c:\Users\anthonella_herrera\Downloads\307c7430a7bed4abcba5fdd99bb52bc27314ca0e (1).jpg" alt="">
                <p>Multi-Screen</p>
                <p class="tag">tag</p>
            </div>
            
        </div>
         <br>
    </div>
    <div class="t">
        <p>© 2025 - Web Gallery </p>
    </div> 
    <br>
</body> 
</html>
