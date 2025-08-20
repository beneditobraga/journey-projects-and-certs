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
                        <a href="data/post.php/id=<?= $post['id'] ?>"><?= $post['title'] ?></a>
                    </h2>
                    <p class="post-description"><?= $post['description'] ?></p>
                    <div class="tags-container">
                        <?php foreach($post['tags'] as $tag): ?>
                            <a href="#"><?= $tag ?></a>
                        <?php endforeach; ?>
                    </div>
                </div>
            <?php endforeach; ?>
        </div>
    </main>
<?php
    include_once("templates/footer.php");
?>