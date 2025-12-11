/**
 * @file viewe_ui_gen.c
 */

/*********************
 *      INCLUDES
 *********************/

#include "viewe_ui_gen.h"

#if LV_USE_XML
#endif /* LV_USE_XML */

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 *  STATIC PROTOTYPES
 **********************/

/**********************
 *  STATIC VARIABLES
 **********************/

/*----------------
 * Translations
 *----------------*/

/**********************
 *  GLOBAL VARIABLES
 **********************/

/*--------------------
 *  Permanent screens
 *-------------------*/

/*----------------
 * Global styles
 *----------------*/

/*----------------
 * Fonts
 *----------------*/

/*----------------
 * Images
 *----------------*/

const void * lvgl_pro;
extern const void * lvgl_pro_data;

/*----------------
 * Subjects
 *----------------*/

lv_subject_t subject_arc;
lv_subject_t subject_slider;
lv_subject_t subject_radio;

/**********************
 *      MACROS
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

void viewe_ui_init_gen(const char * asset_path)
{
    char buf[256];

    /*----------------
     * Global styles
     *----------------*/

    /*----------------
     * Fonts
     *----------------*/


    /*----------------
     * Images
     *----------------*/
    lvgl_pro = &lvgl_pro_data;

    /*----------------
     * Subjects
     *----------------*/
    lv_subject_init_int(&subject_arc, 50);
    lv_subject_init_int(&subject_slider, 50);
    lv_subject_init_int(&subject_radio, 0);

    /*----------------
     * Translations
     *----------------*/

#if LV_USE_XML
    /* Register widgets */

    /* Register fonts */

    /* Register subjects */
    lv_xml_register_subject(NULL, "subject_arc", &subject_arc);
    lv_xml_register_subject(NULL, "subject_slider", &subject_slider);
    lv_xml_register_subject(NULL, "subject_radio", &subject_radio);

    /* Register callbacks */
    lv_xml_register_event_cb(NULL, "slider_change_cb", slider_change_cb);
    lv_xml_register_event_cb(NULL, "arc_change_cb", arc_change_cb);
    lv_xml_register_event_cb(NULL, "button_click_cb", button_click_cb);
#endif

    /* Register all the global assets so that they won't be created again when globals.xml is parsed.
     * While running in the editor skip this step to update the preview when the XML changes */
#if LV_USE_XML && !defined(LV_EDITOR_PREVIEW)
    /* Register images */
    lv_xml_register_image(NULL, "lvgl_pro", lvgl_pro);
#endif

#if LV_USE_XML == 0
    /*--------------------
     *  Permanent screens
     *-------------------*/
    /* If XML is enabled it's assumed that the permanent screens are created
     * manaully from XML using lv_xml_create() */
#endif
}

/* Callbacks */
#if defined(LV_EDITOR_PREVIEW)
void __attribute__((weak)) slider_change_cb(lv_event_t * e)
{
    LV_UNUSED(e);
    LV_LOG("slider_change_cb was called\n");
}
void __attribute__((weak)) arc_change_cb(lv_event_t * e)
{
    LV_UNUSED(e);
    LV_LOG("arc_change_cb was called\n");
}
void __attribute__((weak)) button_click_cb(lv_event_t * e)
{
    LV_UNUSED(e);
    LV_LOG("button_click_cb was called\n");
}
#endif

/**********************
 *   STATIC FUNCTIONS
 **********************/