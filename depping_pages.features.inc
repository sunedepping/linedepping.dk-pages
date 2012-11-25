<?php
/**
 * @file
 * depping_pages.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function depping_pages_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function depping_pages_node_info() {
  $items = array(
    'depping_page' => array(
      'name' => t('Page'),
      'base' => 'node_content',
      'description' => t('Use <em>Page</em> for a regular page on the site.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
