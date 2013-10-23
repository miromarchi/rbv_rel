<?php
/**
 * @file
 * rbv_rel.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function rbv_rel_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-relation-field_com_description'
  $field_instances['node-relation-field_com_description'] = array(
    'bundle' => 'relation',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_com_description',
    'label' => 'Descrizione della relazione',
    'required' => 0,
    'settings' => array(
      'display_summary' => 0,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 4,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-relation-field_com_foundingdate'
  $field_instances['node-relation-field_com_foundingdate'] = array(
    'bundle' => 'relation',
    'deleted' => 0,
    'description' => 'Quando è iniziata questa relazione?',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'short',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_com_foundingdate',
    'label' => 'Data di inizio',
    'required' => 0,
    'settings' => array(
      'default_value' => 'blank',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'display_all_day' => 0,
        'increment' => 30,
        'input_format' => 'd/m/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'text_parts' => array(),
        'year_range' => '-100:+0',
      ),
      'type' => 'date_popup',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-relation-field_rel_categories'
  $field_instances['node-relation-field_rel_categories'] = array(
    'bundle' => 'relation',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Scegliere le parole chiave che caratterizzano la relazione.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_rel_categories',
    'label' => 'Relazione',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-relation-field_rel_source'
  $field_instances['node-relation-field_rel_source'] = array(
    'bundle' => 'relation',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Selezionare la propria organizzazione.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'entityreference',
        'settings' => array(
          'link' => 1,
        ),
        'type' => 'entityreference_label',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => 1,
        ),
        'type' => 'entityreference_label',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_rel_source',
    'label' => 'Soggetto 1',
    'required' => 1,
    'settings' => array(
      'behaviors' => array(
        'og_widget' => array(
          'admin' => array(
            'widget_type' => 'entityreference_autocomplete',
          ),
          'default' => array(
            'widget_type' => 'options_select',
          ),
          'status' => TRUE,
        ),
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'og',
      'settings' => array(),
      'type' => 'og_complex',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-relation-field_rel_target'
  $field_instances['node-relation-field_rel_target'] = array(
    'bundle' => 'relation',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Selezionare l\'organizzazione con cui si intrattiene una relazione di collaborazione, o il progetto a cui si collabora.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'entityreference',
        'settings' => array(
          'link' => 1,
        ),
        'type' => 'entityreference_label',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => 1,
        ),
        'type' => 'entityreference_label',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_rel_target',
    'label' => 'Soggetto 2',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 10,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Data di inizio');
  t('Descrizione della relazione');
  t('Quando è iniziata questa relazione?');
  t('Relazione');
  t('Scegliere le parole chiave che caratterizzano la relazione.');
  t('Selezionare l\'organizzazione con cui si intrattiene una relazione di collaborazione, o il progetto a cui si collabora.');
  t('Selezionare la propria organizzazione.');
  t('Soggetto 1');
  t('Soggetto 2');

  return $field_instances;
}
