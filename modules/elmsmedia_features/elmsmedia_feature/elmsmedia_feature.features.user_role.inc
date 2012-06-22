<?php

/**
 * Implementation of hook_user_default_roles().
 */
function elmsmedia_feature_user_default_roles() {
  $roles = array();

  // Exported role: admin
  $roles['admin'] = array(
    'name' => 'admin',
  );

  // Exported role: instructional designer
  $roles['instructional designer'] = array(
    'name' => 'instructional designer',
  );

  // Exported role: instructor
  $roles['instructor'] = array(
    'name' => 'instructor',
  );

  // Exported role: media staff
  $roles['media staff'] = array(
    'name' => 'media staff',
  );

  return $roles;
}
