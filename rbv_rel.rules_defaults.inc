<?php
/**
 * @file
 * rbv_rel.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function rbv_rel_default_rules_configuration() {
  $items = array();
  $items['rules_extend_audience_to_subject2'] = entity_import('rules_config', '{ "rules_extend_audience_to_subject2" : {
      "LABEL" : "extend_audience_to_subject2",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "og", "rules" ],
      "ON" : { "node_insert--relation" : { "bundle" : "relation" } },
      "DO" : [
        { "og_group_content_add" : { "entity" : [ "node" ], "group" : [ "node:field-rel-target" ] } }
      ]
    }
  }');
  return $items;
}
