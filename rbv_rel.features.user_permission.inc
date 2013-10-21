<?php
/**
 * @file
 * rbv_rel.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function rbv_rel_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create relation content'.
  $permissions['create relation content'] = array(
    'name' => 'create relation content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any relation content'.
  $permissions['delete any relation content'] = array(
    'name' => 'delete any relation content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own relation content'.
  $permissions['delete own relation content'] = array(
    'name' => 'delete own relation content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any relation content'.
  $permissions['edit any relation content'] = array(
    'name' => 'edit any relation content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own relation content'.
  $permissions['edit own relation content'] = array(
    'name' => 'edit own relation content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
