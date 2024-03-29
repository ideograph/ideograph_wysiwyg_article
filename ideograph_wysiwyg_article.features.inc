<?php
/**
 * @file
 * ideograph_wysiwyg_article.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ideograph_wysiwyg_article_ctools_plugin_api() {
  return array("version" => "1");
}

/**
 * Implements hook_node_info().
 */
function ideograph_wysiwyg_article_node_info() {
  $items = array(
    'ideograph_article' => array(
      'name' => t('Article'),
      'base' => 'node_content',
      'description' => t('Use <em>articles</em> for time-sensitive content like news, press releases or blog posts.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
