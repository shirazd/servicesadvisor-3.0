<?php
/**
 * @file
 * services_advisor_location.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function services_advisor_location_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|service_location|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'service_location';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h3',
        'class' => '',
      ),
    ),
    'links' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'author' => array(
      'weight' => '13',
      'label' => 'inline',
      'format' => 'author',
    ),
    'post_date' => array(
      'weight' => '14',
      'label' => 'inline',
      'format' => 'ds_post_date_long',
    ),
    'expired_node' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|service_location|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|service_location|print';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'service_location';
  $ds_fieldsetting->view_mode = 'print';
  $ds_fieldsetting->settings = array(
    'site_logo' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'site_name' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 0,
        'title_wrapper' => 'h1',
        'ctools' => 'a:3:{s:4:"conf";a:4:{s:6:"linked";i:0;s:14:"override_title";i:0;s:19:"override_title_text";s:0:"";s:22:"override_title_heading";s:2:"h2";}s:4:"type";s:14:"page_site_name";s:7:"subtype";s:14:"page_site_name";}',
        'load_terms' => 0,
      ),
    ),
    'title' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h3',
        'class' => '',
      ),
    ),
  );
  $export['node|service_location|print'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|service_location|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'service_location';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h3',
        'class' => '',
      ),
    ),
    'submitted_by' => array(
      'weight' => '11',
      'label' => 'hidden',
      'format' => 'ds_time_ago',
    ),
    'edit_node' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'expired_node' => array(
      'weight' => '13',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'node_language' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|service_location|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function services_advisor_location_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'dash';
  $ds_field->label = 'Dash';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '-',
      'format' => 'plain_text',
    ),
    'use_token' => 0,
  );
  $export['dash'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'powered_by_peacegeeks';
  $ds_field->label = 'Powered by PeaceGeeks';
  $ds_field->field_type = 7;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'default' => array(),
    'settings' => array(
      'show_title' => array(
        'type' => 'checkbox',
      ),
      'title_wrapper' => array(
        'type' => 'textfield',
        'description' => 'Eg: h1, h2, p',
      ),
      'ctools' => array(
        'type' => 'ctools',
      ),
    ),
  );
  $export['powered_by_peacegeeks'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function services_advisor_location_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|service_location|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'service_location';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_head',
        1 => 'links',
        2 => 'expired_node',
        3 => 'group_active_dates',
        4 => 'og_group_ref',
        5 => 'group_general_info',
        6 => 'title',
        7 => 'field_service_location',
        8 => 'field_service_location_location',
        9 => 'group_location',
        10 => 'field_location_address',
        11 => 'group_office_info',
        12 => 'field_services_provided',
        13 => 'group_reg',
        14 => 'field_service_coverage',
        15 => 'group_nex_steps',
        16 => 'group_add_info',
        17 => 'field_service_registration_type',
        18 => 'field_service_nationality',
        19 => 'field_service_comments',
        20 => 'field_service_intake_criteria',
        21 => 'field_service_more_info_link',
        22 => 'field_service_referral_method',
        23 => 'author',
        24 => 'field_service_contact_name',
        25 => 'field_service_contact_phone',
        26 => 'post_date',
        27 => 'field_service_contact_email',
        28 => 'field_service_referral_next_step',
        29 => 'field_service_availability',
        30 => 'field_response_delay_after_refer',
        31 => 'field_service_accessibility',
        32 => 'field_service_feedback_mechanism',
        33 => 'field_service_feedback_delay',
        34 => 'field_service_location_details',
        35 => 'field_complaints_mechanism',
        36 => 'group_hours',
        37 => 'group_start_end_date',
        38 => 'field_service_start_date',
        39 => 'field_service_end_date',
        40 => 'field_service_office_hours',
      ),
    ),
    'fields' => array(
      'group_head' => 'ds_content',
      'links' => 'ds_content',
      'expired_node' => 'ds_content',
      'group_active_dates' => 'ds_content',
      'og_group_ref' => 'ds_content',
      'group_general_info' => 'ds_content',
      'title' => 'ds_content',
      'field_service_location' => 'ds_content',
      'field_service_location_location' => 'ds_content',
      'group_location' => 'ds_content',
      'field_location_address' => 'ds_content',
      'group_office_info' => 'ds_content',
      'field_services_provided' => 'ds_content',
      'group_reg' => 'ds_content',
      'field_service_coverage' => 'ds_content',
      'group_nex_steps' => 'ds_content',
      'group_add_info' => 'ds_content',
      'field_service_registration_type' => 'ds_content',
      'field_service_nationality' => 'ds_content',
      'field_service_comments' => 'ds_content',
      'field_service_intake_criteria' => 'ds_content',
      'field_service_more_info_link' => 'ds_content',
      'field_service_referral_method' => 'ds_content',
      'author' => 'ds_content',
      'field_service_contact_name' => 'ds_content',
      'field_service_contact_phone' => 'ds_content',
      'post_date' => 'ds_content',
      'field_service_contact_email' => 'ds_content',
      'field_service_referral_next_step' => 'ds_content',
      'field_service_availability' => 'ds_content',
      'field_response_delay_after_refer' => 'ds_content',
      'field_service_accessibility' => 'ds_content',
      'field_service_feedback_mechanism' => 'ds_content',
      'field_service_feedback_delay' => 'ds_content',
      'field_service_location_details' => 'ds_content',
      'field_complaints_mechanism' => 'ds_content',
      'group_hours' => 'ds_content',
      'group_start_end_date' => 'ds_content',
      'field_service_start_date' => 'ds_content',
      'field_service_end_date' => 'ds_content',
      'field_service_office_hours' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|service_location|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|service_location|form';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'service_location';
  $ds_layout->view_mode = 'form';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_date_group',
        1 => 'og_group_ref',
        2 => 'group_general',
        3 => 'group_service_location_office',
        4 => 'group_service_location_details',
        5 => 'group_service_referral',
        6 => 'group_service_feedback',
        7 => 'group_additional',
        8 => 'field_service_start_date',
        9 => 'field_service_end_date',
        12 => 'field_service_comments',
        13 => 'field_service_availability',
        14 => 'field_service_more_info_link',
        15 => 'field_service_location_location',
        16 => 'field_service_office_hours',
        17 => 'field_service_location',
        18 => 'field_service_accessibility',
        19 => 'field_location_address',
        20 => 'field_service_location_details',
        21 => 'field_service_coverage',
        22 => 'path',
        23 => 'field_service_registration_type',
        24 => 'field_service_nationality',
        25 => 'field_service_intake_criteria',
        26 => 'field_service_referral_method',
        27 => 'field_service_contact_name',
        28 => 'field_service_contact_phone',
        29 => 'field_service_contact_email',
        30 => 'field_service_referral_next_step',
        31 => 'field_response_delay_after_refer',
        32 => 'field_service_feedback_mechanism',
        33 => 'field_service_feedback_delay',
        34 => 'field_complaints_mechanism',
        35 => 'field_services_provided',
        36 => 'title',
      ),
      'hidden' => array(
        10 => 'language',
        11 => 'redirect',
        37 => '_add_existing_field',
      ),
    ),
    'fields' => array(
      'group_date_group' => 'ds_content',
      'og_group_ref' => 'ds_content',
      'group_general' => 'ds_content',
      'group_service_location_office' => 'ds_content',
      'group_service_location_details' => 'ds_content',
      'group_service_referral' => 'ds_content',
      'group_service_feedback' => 'ds_content',
      'group_additional' => 'ds_content',
      'field_service_start_date' => 'ds_content',
      'field_service_end_date' => 'ds_content',
      'language' => 'hidden',
      'redirect' => 'hidden',
      'field_service_comments' => 'ds_content',
      'field_service_availability' => 'ds_content',
      'field_service_more_info_link' => 'ds_content',
      'field_service_location_location' => 'ds_content',
      'field_service_office_hours' => 'ds_content',
      'field_service_location' => 'ds_content',
      'field_service_accessibility' => 'ds_content',
      'field_location_address' => 'ds_content',
      'field_service_location_details' => 'ds_content',
      'field_service_coverage' => 'ds_content',
      'path' => 'ds_content',
      'field_service_registration_type' => 'ds_content',
      'field_service_nationality' => 'ds_content',
      'field_service_intake_criteria' => 'ds_content',
      'field_service_referral_method' => 'ds_content',
      'field_service_contact_name' => 'ds_content',
      'field_service_contact_phone' => 'ds_content',
      'field_service_contact_email' => 'ds_content',
      'field_service_referral_next_step' => 'ds_content',
      'field_response_delay_after_refer' => 'ds_content',
      'field_service_feedback_mechanism' => 'ds_content',
      'field_service_feedback_delay' => 'ds_content',
      'field_complaints_mechanism' => 'ds_content',
      'field_services_provided' => 'ds_content',
      'title' => 'ds_content',
      '_add_existing_field' => 'hidden',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|service_location|form'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|service_location|print';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'service_location';
  $ds_layout->view_mode = 'print';
  $ds_layout->layout = 'ds_2col_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'header' => array(
        0 => 'site_logo',
        1 => 'site_name',
      ),
      'left' => array(
        2 => 'title',
        3 => 'field_services_provided',
      ),
      'right' => array(
        4 => 'field_location_address',
        5 => 'field_service_location_location',
      ),
      'footer' => array(
        6 => 'field_service_start_date',
        7 => 'field_service_end_date',
        8 => 'field_service_office_hours',
        9 => 'field_service_nationality',
        10 => 'field_service_registration_type',
        11 => 'field_service_intake_criteria',
        12 => 'field_service_coverage',
        13 => 'field_service_availability',
        14 => 'field_service_accessibility',
        15 => 'field_service_referral_method',
        16 => 'field_service_contact_name',
        17 => 'field_service_contact_phone',
        18 => 'field_service_contact_email',
        19 => 'field_service_referral_next_step',
        20 => 'field_service_feedback_mechanism',
        21 => 'field_service_feedback_delay',
        22 => 'field_complaints_mechanism',
        23 => 'field_service_comments',
      ),
    ),
    'fields' => array(
      'site_logo' => 'header',
      'site_name' => 'header',
      'title' => 'left',
      'field_services_provided' => 'left',
      'field_location_address' => 'right',
      'field_service_location_location' => 'right',
      'field_service_start_date' => 'footer',
      'field_service_end_date' => 'footer',
      'field_service_office_hours' => 'footer',
      'field_service_nationality' => 'footer',
      'field_service_registration_type' => 'footer',
      'field_service_intake_criteria' => 'footer',
      'field_service_coverage' => 'footer',
      'field_service_availability' => 'footer',
      'field_service_accessibility' => 'footer',
      'field_service_referral_method' => 'footer',
      'field_service_contact_name' => 'footer',
      'field_service_contact_phone' => 'footer',
      'field_service_contact_email' => 'footer',
      'field_service_referral_next_step' => 'footer',
      'field_service_feedback_mechanism' => 'footer',
      'field_service_feedback_delay' => 'footer',
      'field_complaints_mechanism' => 'footer',
      'field_service_comments' => 'footer',
    ),
    'classes' => array(),
    'wrappers' => array(
      'header' => 'div',
      'left' => 'div',
      'right' => 'div',
      'footer' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['node|service_location|print'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|service_location|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'service_location';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'node_language',
        1 => 'edit_node',
        2 => 'og_group_ref',
        3 => 'title',
        4 => 'field_service_location_location',
        5 => 'field_services_provided',
        6 => 'group_inline',
        7 => 'field_service_start_date',
        8 => 'field_service_end_date',
        9 => 'submitted_by',
        10 => 'expired_node',
      ),
    ),
    'fields' => array(
      'node_language' => 'ds_content',
      'edit_node' => 'ds_content',
      'og_group_ref' => 'ds_content',
      'title' => 'ds_content',
      'field_service_location_location' => 'ds_content',
      'field_services_provided' => 'ds_content',
      'group_inline' => 'ds_content',
      'field_service_start_date' => 'ds_content',
      'field_service_end_date' => 'ds_content',
      'submitted_by' => 'ds_content',
      'expired_node' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|service_location|teaser'] = $ds_layout;

  return $export;
}
