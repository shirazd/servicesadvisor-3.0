api = 2
core = 7.x

;--------
; Modules
;--------

projects[admin_menu][subdir] = contrib
projects[admin_menu][version] = "3.0-rc5"

projects[admin_views][subdir] = contrib
projects[admin_views][version] = "1.6"

projects[backup_migrate][subdir] = contrib
projects[backup_migrate][version] = "3.1"

projects[better_exposed_filters][subdir] = contrib
projects[better_exposed_filters][version] = "3.2"

projects[captcha][subdir] = contrib
projects[captcha][version] = "1.3"

projects[chained_selects][subdir] = contrib
projects[chained_selects][version] = "1.x-dev"

projects[chosen][subdir] = contrib
projects[chosen][version] = "2.0-beta5"

projects[color_field][subdir] = contrib
projects[color_field][version] = "1.8"

projects[colorbox][subdir] = contrib
projects[colorbox][version] = "2.12"

projects[conditional_fields][subdir] = contrib
projects[conditional_fields][version] = "3.0-alpha2"

projects[context][subdir] = contrib
projects[context][version] = "3.7"

projects[ctools][subdir] = contrib
projects[ctools][version] = "1.9"

projects[date][subdir] = contrib
projects[date][version] = "2.9"

projects[datepicker][subdir] = contrib
projects[datepicker][version] = "1.0"

projects[devel][subdir] = contrib
projects[devel][version] = "1.5"

projects[diff][subdir] = contrib
projects[diff][version] = "3.2"

projects[ds][subdir] = contrib
projects[ds][version] = "2.14"

projects[email][subdir] = contrib
projects[email][version] = "1.3"

projects[email_registration][subdir] = contrib
projects[email_registration][version] = "1.3"

projects[entity][subdir] = contrib
projects[entity][version] = "1.7"

projects[entityreference][subdir] = contrib
projects[entityreference][version] = "1.1"

projects[entityreference_prepopulate][subdir] = contrib
projects[entityreference_prepopulate][version] = "1.6"

projects[eva][subdir] = contrib
projects[eva][version] = "1.2"

projects[features][subdir] = contrib
projects[features][version] = "2.10"

projects[field_group][subdir] = contrib
projects[field_group][version] = "1.5"

projects[file_entity][subdir] = contrib
projects[file_entity][version] = "2.0-unstable7"

projects[geocoder][subdir] = contrib
projects[geocoder][version] = "1.3"

projects[geofield][subdir] = contrib
projects[geofield][version] = "2.3"

projects[geolocation][subdir] = contrib
projects[geolocation][version] = "1.6"

projects[geophp][subdir] = contrib
projects[geophp][version] = "1.7"

projects[globalredirect][subdir] = contrib
projects[globalredirect][version] = "1.5"

projects[hierarchical_select][subdir] = contrib
projects[hierarchical_select][version] = "3.0-beta7"
projects[hierarchical_select][patch][] = "https://www.drupal.org/files/issues/feature-code-export-error-2764871-4.patch"

projects[i18n][subdir] = contrib
projects[i18n][version] = "1.13"

projects[imagefield_crop][subdir] = contrib
projects[imagefield_crop][version] = "1.1"

projects[jquery_update][subdir] = contrib
projects[jquery_update][version] = "2.7"

projects[libraries][subdir] = contrib
projects[libraries][version] = "2.3"

projects[link][subdir] = contrib
projects[link][version] = "1.4"

projects[masquerade][subdir] = contrib
projects[masquerade][version] = "1.0-rc7"

projects[node_clone][subdir] = contrib
projects[node_clone][version] = "1.0"

projects[node_view_permissions][subdir] = contrib
projects[node_view_permissions][version] = "1.5"

projects[office_hours][subdir] = contrib
projects[office_hours][version] = "1.x-dev"
projects[office_hours][download][revision] = "9377182c38080968313b86470278df92ed1fe3c7"
projects[office_hours][patch][] = "https://www.drupal.org/files/issues/office_hours-midnight_values-2553501-7.patch"

projects[og][subdir] = contrib
projects[og][version] = "2.9"

projects[pathauto][subdir] = contrib
projects[pathauto][version] = "1.3"

projects[print][subdir] = contrib
projects[print][version] = "2.0"

projects[redirect][subdir] = contrib
projects[redirect][version] = "1.0-rc3"

projects[strongarm][subdir] = contrib
projects[strongarm][version] = "2.0"

projects[taxonomy_csv][subdir] = contrib
projects[taxonomy_csv][version] = "5.10"

projects[token][subdir] = contrib
projects[token][version] = "1.6"

projects[translation_own_nodes][subdir] = contrib
projects[translation_own_nodes][version] = "1.x-dev"
projects[translation_own_nodes][download][revision] = "fefe38b91260b021a76b97e6a21f5af308af87a9"

projects[translation_table][subdir] = contrib
projects[translation_table][version] = "1.x-dev"
projects[translation_table][download][revision] = "e83f56b3f48ecf80b35da03b9aef7862541f7f4c"

projects[unique_field][subdir] = contrib
projects[unique_field][version] = "1.0-rc1"

projects[variable][subdir] = contrib
projects[variable][version] = "2.5"

projects[views][subdir] = contrib
projects[views][version] = "3.14"
projects[views][patch][] = "https://www.drupal.org/files/issues/views-exposed-type-2303939.patch"

projects[views_bulk_operations][subdir] = contrib
projects[views_bulk_operations][version] = "3.3"

projects[views_data_export][subdir] = contrib
projects[views_data_export][version] = "3.0-beta9"

projects[views_datasource][subdir] = contrib
projects[views_datasource][version] = "1.0-alpha2"

projects[views_geojson][subdir] = contrib
projects[views_geojson][version] = "1.0-beta3"

projects[wysiwyg][subdir] = contrib
projects[wysiwyg][version] = "2.2"

;----------
; Libraries
;----------

; Chosen
libraries[chosen][download][type] = get
libraries[chosen][download][url] = https://github.com/harvesthq/chosen/releases/download/v1.6.1/chosen_v1.6.1.zip
libraries[chosen][directory_name] = chosen
libraries[chosen][destination] = libraries

; CKEditor library
libraries[ckeditor][download][type] = get
libraries[ckeditor][download][url] = http://download.cksource.com/CKEditor/CKEditor/CKEditor%204.5.10/ckeditor_4.5.10_standard.zip
libraries[ckeditor][directory_name] = ckeditor
libraries[ckeditor][destination] = libraries

; jQuery Simple Color
libraries[jquery-simple-color][download][type] = get
libraries[jquery-simple-color][download][url] = https://github.com/recurser/jquery-simple-color/archive/v1.2.1.zip
libraries[jquery-simple-color][directory_name] = jquery-simple-color
libraries[jquery-simple-color][destination] = libraries

;-------
; Themes
;-------

projects[zurb-foundation][type] = theme
projects[zurb-foundation][version] = "4.4"
projects[zurb-foundation][subdir] = contrib
projects[zurb-foundation][download][revision] = "581dbdd895e6e401093b7661d47c9290996c94f6"