<?php
    // Inclui o array de posts
    include_once("data/posts.php"); 
    var_dump($posts);
    exit;

    // Inclui o header
    include_once("templates/header.php");

    $currentPost = null;

    if(isset($_GET['id'])) {
        $postId = (int) $_GET['id']; // garante que seja número

        foreach($posts as $post) {
            if($post['id'] === $postId) {
                $currentPost = $post;
                break; // para o loop quando encontrar
            }
        }
    }
?>

<?php if($currentPost): ?>
    <h1><?= $currentPost['title'] ?></h1>
    <p><?= $currentPost['description'] ?></p>
<?php else: ?>
    <h1>Post não encontrado</h1>
<?php endif; ?>

<?php
    include_once("templates/footer.php");
?>
