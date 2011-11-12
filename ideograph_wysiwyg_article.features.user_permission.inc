<?php
/**
 * @file
 * ideograph_wysiwyg_article.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ideograph_wysiwyg_article_user_default_permissions() {
  $permissions = array();

  // Exported permission: create ideograph_article content
  $permissions['create ideograph_article content'] = array(
    'name' => 'create ideograph_article content',
    'roles' => array(
      0 => 'administrator',
      1 => 'contributor',
      2 => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any ideograph_article content
  $permissions['delete any ideograph_article content'] = array(
    'name' => 'delete any ideograph_article content',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own ideograph_article content
  $permissions['delete own ideograph_article content'] = array(
    'name' => 'delete own ideograph_article content',
    'roles' => array(
      0 => 'administrator',
      1 => 'contributor',
      2 => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any ideograph_article content
  $permissions['edit any ideograph_article content'] = array(
    'name' => 'edit any ideograph_article content',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own ideograph_article content
  $permissions['edit own ideograph_article content'] = array(
    'name' => 'edit own ideograph_article content',
    'roles' => array(
      0 => 'administrator',
      1 => 'contributor',
      2 => 'editor',
    ),
    'module' => 'node',
  );

  return $permissions;
}
