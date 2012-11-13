<?php
/**
 * @file
 * media_services.services.inc
 */

/**
 * Implements hook_default_services_endpoint().
 */
function media_services_default_services_endpoint() {
  $export = array();

  $endpoint = new stdClass();
  $endpoint->disabled = FALSE; /* Edit this to true to make a default endpoint disabled initially */
  $endpoint->api_version = 3;
  $endpoint->name = 'media_service';
  $endpoint->server = 'rest_server';
  $endpoint->path = 'api/v1/media';
  $endpoint->authentication = array(
    'services' => 'services',
  );
  $endpoint->server_settings = array();
  $endpoint->resources = array(
    'views' => array(
      'operations' => array(
        'retrieve' => array(
          'enabled' => '1',
        ),
      ),
    ),
  );
  $endpoint->debug = 0;
  $export['media_service'] = $endpoint;

  return $export;
}
