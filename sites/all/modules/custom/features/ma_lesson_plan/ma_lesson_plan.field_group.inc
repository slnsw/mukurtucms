<?php

/**
 * @file
 * ma_lesson_plan.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ma_lesson_plan_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_base|node|unit_plan|form';
  $field_group->group_name = 'group_base';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'unit_plan';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tabs';
  $field_group->data = array(
    'label' => 'Base',
    'weight' => '12',
    'children' => array(
      0 => 'field_unit_teacher',
      1 => 'field_unit_subject',
      2 => 'field_unit_grade_level',
      3 => 'field_unit_unit_length',
      4 => 'field_unit_class_period_length',
      5 => 'og_group_ref',
      6 => 'field_unit_week_of',
      7 => 'title',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Base',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-base field-group-htab',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_base|node|unit_plan|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_lessons|node|unit_plan|form';
  $field_group->group_name = 'group_lessons';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'unit_plan';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tabs';
  $field_group->data = array(
    'label' => 'Lessons',
    'weight' => '14',
    'children' => array(
      0 => 'field_unit_lessons',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Lessons',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-lessons field-group-htab',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_lessons|node|unit_plan|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_loa|node|unit_plan|form';
  $field_group->group_name = 'group_loa';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'unit_plan';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tabs';
  $field_group->data = array(
    'label' => 'Learning Outcomes and Assessments',
    'weight' => '13',
    'children' => array(
      0 => 'field_unit_overarching',
      1 => 'field_unit_conceptual',
      2 => 'field_unit_nature_of_science',
      3 => 'field_unit_language_learning',
      4 => 'field_unit_technical',
      5 => 'field_unit_assessments',
      6 => 'field_collection',
      7 => 'field_dictionary_word_related_dh',
      8 => 'field_related_dictionary_words',
      9 => 'field_word_list',
      10 => 'field_media_asset',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Learning Outcomes and Assessments',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-loa field-group-htab',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_loa|node|unit_plan|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tabs|node|unit_plan|form';
  $field_group->group_name = 'group_tabs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'unit_plan';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Tabs',
    'weight' => '1',
    'children' => array(
      0 => 'group_base',
      1 => 'group_lessons',
      2 => 'group_loa',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-tabs field-group-htabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_tabs|node|unit_plan|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Base');
  t('Learning Outcomes and Assessments');
  t('Lessons');
  t('Tabs');

  return $field_groups;
}