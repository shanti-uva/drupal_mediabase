<?php

   
   module_load_include('inc','kaltura','includes/kaltura.admin');
   $sql = "SELECT nid 
   FROM node 
   WHERE type IN ('video','audio') 
   ORDER BY created ASC";
   $nids = db_query($sql)->fetchCol();
   $count=0;
   
   $wf_fields = array(
      'field_audio_quality_acceptable',
      'field_basic_cataloging',
      'field_cataloging_proofed',
      'field_edl_log_files',
      'field_edls_archived',
      'field_extended_cataloging',
      'field_masters_archived',
      'field_media_needs_re_editing',
      'field_media_needs_recompression',
      'field_media_present',
      'field_media_problem_1',
      'field_media_problem_2',
      'field_media_problem_3',
      'field_place_data_present',
      'field_timecode_too_infrequent',
      'field_timecoding_problem_1',
      'field_timecoding_problem_2',
      'field_trans_proofed_lang_1',
      'field_trans_proofed_lang_2',
      'field_trans_proofed_lang_3',
      'field_transcript_input',
      'field_transcript_proofed',
      'field_transcript_timecoded',
      'field_translation_lang_1',
      'field_translation_lang_2',
      'field_translation_lang_3',
      'field_translation_language_1',
      'field_translation_language_2',
      'field_video_quality_acceptable',
      'field_catalog_workflow_note',
      'field_media_workflow_note',
      );
   
   $media_notes =array(
      1 => 'TESTING ABC 123',
      27 => 'Needs Title and Credit Slates',
      28 => 'Low quality compression',
      30 => 'Quality is not horrible, but should probably be recompressed if that will yield a better picture. Needs Title and Credit Slates',
      31 => 'Quality is quite blurry at full screen. Has old Titles, which need to be redone.',
      32 => 'has old title slates, needs to be updated and recompressed at higher quality',
      33 => 'Has old title slates, needs to be updated and recompressed',
      34 => 'Has old title slates, needs to be recompressed',
      35 => 'Has No title cards, needs to be recompressed.',
      36 => 'Has no titles, needs to be recompressed.',
      37 => 'No titles, needs to be recompressed',
      38 => 'Needs updated titles and credit slates.',
      39 => 'Needs updated title and credit slates.',
      40 => 'Needs to have updated title and credit slates made.',
      41 => 'Needs updated title and credit slates.',
      42 => 'Needs updated title and credit slates.',
      43 => 'Needs updated title and credit slates.',
      44 => 'Needs updated title and credit slates.',
      45 => 'Needs updated title and credit slates.',
      46 => 'Needs updated title and credit slates.',
      47 => 'Needs updated title and credit slates.',
      48 => 'Needs updated title and credit slates.',
      49 => 'Needs updated title and credit slates.',
      50 => 'Needs updated title and credit slates.',
      );
   
   $catalog_notes = array(
      1 => 'TESTING DEF 456',
      27 => 'Language 1 = Tibetan and is missing; Language 2 = Chinese, is present',
      28 => 'Needs Credits, copyright info',
      30 => 'Needs credits and copyright info',
      31 => 'Needs Tibetan character entries. Needs rights and expanded credits',
      32 => 'Needs additional information for rights and credits',
      33 => 'Needs Tibetan. Needs copyright and cleaned up credits',
      34 => 'Needs Tibetan',
      36 => 'Needs extended copyright and credit info',
      37 => 'Needs additional languages and copyrights and credits',
      661 => 'Needs Title and Credit Slates',
      1033 => 'Needs to have Title in Tibetan',
      );
   
   foreach ($nids as $nid) {
      if ( in_array($nid, array(1781))) {
         continue;
      }
      $node = node_load ($nid);
      echo PHP_EOL . "Saving node $nid, $node->title" . ($count += 1) . "/" . count($nids) ;
      
      $has_media = !empty($node->field_video) || !empty($node->field_audio);
      $has_transcript = !empty($node->field_transcript);
      
      $fc_values = array();
      $fc_values['field_name'] = "field_workflow";
      $fc_values['is_new'] = 1;
      foreach ($wf_fields as $field_name) {
         switch ( $field_name ) {
         case 'field_media_present':
            if ($node->type =='video') {
               $fc_values[$field_name][$node->language][]['value'] = empty($node->field_video['und']) ? 'No' : 'Yes';
            }
            else {
               $fc_values[$field_name][$node->language][]['value'] = empty($node->field_audio['und']) ? 'No' : 'Yes';
            }
         case 'field_place_data_present':
            $fc_values[$field_name][$node->language][]['value'] = empty($node->field_pbcore_coverage_spatial) ? 'No' : 'Yes';
         case 'field_transcript_input':
            $fc_values[$field_name][$node->language][]['value'] = empty($node->field_transcript['und']) || empty($node->field_transcript['und']) ? 'No' : 'Yes';
         case 'field_media_workflow_note':
            $fc_values[$field_name][$node->language][]['value'] = $media_notes[$node->nid];
         case 'field_catalog_workflow_note':
            $fc_values[$field_name][$node->language][]['value'] = $catalog_notes[$node->nid];
         default:
            $fc_values[$field_name][$node->language][]['value'] = 'Not Reviewed';
         }
      }
      $fc = new FieldCollectionItemEntity($fc_values);
      $fc->setHostEntity('node', $node);
      $fc->save();         
   }
