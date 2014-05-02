<?php
/**
 * @file
 * content_types.features.inc
 */

/**
 * Implements hook_node_info().
 */
function content_types_node_info() {
  $items = array(
    'menu' => array(
      'name' => t('Menu'),
      'base' => 'node_content',
      'description' => t('fantastic menus filled with menu items'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'menu_item' => array(
      'name' => t('Menu Item'),
      'base' => 'node_content',
      'description' => t('Menu item'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'restaurant_branch' => array(
      'name' => t('Restaurant Branch'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'special' => array(
      'name' => t('Special'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
