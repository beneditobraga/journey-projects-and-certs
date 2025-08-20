<?php
    include_once("templates/header.php");
?>
    <main>
        <div id="title-container">
            <h1>Tutor Blog</h1>
            <p>Tutoriais de Tecnologia</p>
        </div>
        <div id="posts-container">
            <?php foreach($posts as $post): ?>
                <div class="post-box">
                    <img src="images/<?= $post['img']?>" alt="">
                    <h2 clas="post-title">
                        <a href=""><?= $post['title'] ?></a>
                    </h2>
                </div>
            <?php endforeach; ?>
        </div>
    </main>
<?php
    include_once("templates/footer.php");
?>