<?php
/**
 * @file
 * lullablog.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function lullablog_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer lullablog status'.
  $permissions['administer lullablog status'] = array(
    'name' => 'administer lullablog status',
    'roles' => array(
      'Lullabloger' => 'Lullabloger',
    ),
    'module' => 'lullablog',
  );

  // Exported permission: 'create lullablog content'.
  $permissions['create lullablog content'] = array(
    'name' => 'create lullablog content',
    'roles' => array(
      'Lullabloger' => 'Lullabloger',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any lullablog content'.
  $permissions['delete any lullablog content'] = array(
    'name' => 'delete any lullablog content',
    'roles' => array(
      'Lullabloger' => 'Lullabloger',
    ),
    'module' => 'node',
  );

  // Exported permission: 'use text format filtered_html'.
  $permissions['use text format filtered_html'] = array(
    'name' => 'use text format filtered_html',
    'roles' => array(
      'Lullabloger' => 'Lullabloger',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'filter',
  );

  return $permissions;
}
