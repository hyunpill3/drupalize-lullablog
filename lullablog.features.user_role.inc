<?php
/**
 * @file
 * lullablog.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function lullablog_user_default_roles() {
  $roles = array();

  // Exported role: Lullabloger.
  $roles['Lullabloger'] = array(
    'name' => 'Lullabloger',
    'weight' => 3,
  );

  return $roles;
}
