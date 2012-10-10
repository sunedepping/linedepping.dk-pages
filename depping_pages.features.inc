<?php
/**
 * @file
 * depping_pages.features.inc
 */

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
