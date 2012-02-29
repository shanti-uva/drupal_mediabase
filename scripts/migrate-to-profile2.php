<?php
$sql = "SELECT * FROM profile_value";
$result = db_query($sql);
$users = array();
foreach ( $result as $row ) {
   $users[$row->uid][$row->fid] = $row->value;
}  
foreach ($users as $uid => $user) {
   $account = user_load($uid);
   $profile2=profile2_load_by_user($account);
   if (empty($profile2) ) {
      $profile = array();
      $profile['type']='main';
      $profile['bundle']='profile';
      $profile['uid']=$uid;
      $profile['field_firstname']['und'][0]['value']=$user[1];
      $profile['field_lastname']['und'][0]['value']=$user[2];
      $entity = entity_create('profile2',$profile);
      entity_save('profile2',$entity);
   }
}
