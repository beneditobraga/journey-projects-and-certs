<?php

# $BASE_URL = "http://" . $_SERVER['SERVER_NAME'] . dirname($_SERVER['REQUEST_URL']. '?') . '/';
$BASE_URL = "http://" . rtrim($_SERVER['SERVER_NAME'], '.') . dirname($_SERVER['PHP_SELF']) . '';
# $BASE_URL = "http://localhost/";
