<?php
/**
 * @file
 * rbv_rel.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function rbv_rel_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_relorg_data|node|relationorg|form';
  $field_group->group_name = 'group_relorg_data';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'relation';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Dati',
    'weight' => '3',
    'children' => array(
      0 => 'group_relorg_description',
      1 => 'group_relorg_relation',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-relorg-data field-group-tabs',
      ),
    ),
  );
  $export['group_relorg_data|node|relationorg|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_relorg_description|node|relationorg|form';
  $field_group->group_name = 'group_relorg_description';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'relation';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_relorg_data';
  $field_group->data = array(
    'label' => 'Descrizione',
    'weight' => '9',
    'children' => array(
      0 => 'field_com_description',
      1 => 'field_com_foundingdate',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-relorg-description field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_relorg_description|node|relationorg|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_relorg_disp_description|node|relationorg|default';
  $field_group->group_name = 'group_relorg_disp_description';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'relation';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Descrizione',
    'weight' => '1',
    'children' => array(
      0 => 'field_com_description',
      1 => 'field_com_foundingdate',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-relorg-disp-description field-group-fieldset',
      ),
    ),
  );
  $export['group_relorg_disp_description|node|relationorg|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_relorg_disp_relation|node|relationorg|default';
  $field_group->group_name = 'group_relorg_disp_relation';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'relation';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Relazione',
    'weight' => '0',
    'children' => array(
      0 => 'field_rel_categories',
      1 => 'field_rel_target',
      2 => 'field_rel_source',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-relorg-disp-relation field-group-fieldset',
      ),
    ),
  );
  $export['group_relorg_disp_relation|node|relationorg|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_relorg_relation|node|relationorg|form';
  $field_group->group_name = 'group_relorg_relation';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'relation';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_relorg_data';
  $field_group->data = array(
    'label' => 'Relazione',
    'weight' => '8',
    'children' => array(
      0 => 'field_rel_categories',
      1 => 'field_rel_target',
      2 => 'field_rel_source',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-relorg-relation field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_relorg_relation|node|relationorg|form'] = $field_group;

  return $export;
}
