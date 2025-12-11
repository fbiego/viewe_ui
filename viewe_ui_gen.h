/**
 * @file viewe_ui_gen.h
 */

#ifndef VIEWE_UI_GEN_H
#define VIEWE_UI_GEN_H

#ifndef UI_SUBJECT_STRING_LENGTH
#define UI_SUBJECT_STRING_LENGTH 256
#endif

#ifdef __cplusplus
extern "C" {
#endif

/*********************
 *      INCLUDES
 *********************/

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
    #include "lvgl.h"
#else
    #include "lvgl/lvgl.h"
#endif

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 * GLOBAL VARIABLES
 **********************/

/*-------------------
 * Permanent screens
 *------------------*/

/*----------------
 * Global styles
 *----------------*/

/*----------------
 * Fonts
 *----------------*/

/*----------------
 * Images
 *----------------*/

extern const void * lvgl_pro;

/*----------------
 * Subjects
 *----------------*/

extern lv_subject_t subject_arc;
extern lv_subject_t subject_slider;
extern lv_subject_t subject_radio;

/**********************
 * GLOBAL PROTOTYPES
 **********************/

/*----------------
 * Event Callbacks
 *----------------*/

void slider_change_cb(lv_event_t * e);
void arc_change_cb(lv_event_t * e);
void button_click_cb(lv_event_t * e);

/**
 * Initialize the component library
 */

void viewe_ui_init_gen(const char * asset_path);

/**********************
 *      MACROS
 **********************/

/**********************
 *   POST INCLUDES
 **********************/

/*Include all the widget and components of this library*/
#include "components/radio_item/radio_item_gen.h"
#include "screens/main_gen.h"
#include "screens/sample_gen.h"

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*VIEWE_UI_GEN_H*/