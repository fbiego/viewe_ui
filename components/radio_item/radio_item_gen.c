/**
 * @file radio_item_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "radio_item_gen.h"
#include "viewe_ui.h"

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/***********************
 *  STATIC VARIABLES
 **********************/

/***********************
 *  STATIC PROTOTYPES
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

lv_obj_t * radio_item_create(lv_obj_t * parent, const char * text)
{
    LV_TRACE_OBJ_CREATE("begin");

    static lv_style_t style_main;
    static lv_style_t style_dot;
    static lv_style_t style_dot_checked;
    static lv_style_t style_dot_pressed;

    static bool style_inited = false;

    if (!style_inited) {
        lv_style_init(&style_main);
        lv_style_set_width(&style_main, LV_SIZE_CONTENT);
        lv_style_set_height(&style_main, LV_SIZE_CONTENT);
        lv_style_set_radius(&style_main, 0);
        lv_style_set_pad_all(&style_main, 0);
        lv_style_set_bg_opa(&style_main, 0);
        lv_style_set_border_width(&style_main, 0);
        lv_style_set_layout(&style_main, LV_LAYOUT_FLEX);
        lv_style_set_flex_track_place(&style_main, LV_FLEX_ALIGN_CENTER);
        lv_style_set_flex_cross_place(&style_main, LV_FLEX_ALIGN_CENTER);

        lv_style_init(&style_dot);
        lv_style_set_width(&style_dot, 20);
        lv_style_set_height(&style_dot, 20);
        lv_style_set_radius(&style_dot, 10);
        lv_style_set_bg_color(&style_dot, lv_color_hex(0x2c0fe1));
        lv_style_set_bg_opa(&style_dot, 0);
        lv_style_set_pad_all(&style_dot, 0);
        lv_style_set_border_color(&style_dot, lv_color_hex(0x2c0fe1));

        lv_style_init(&style_dot_checked);
        lv_style_set_bg_opa(&style_dot_checked, 255);

        lv_style_init(&style_dot_pressed);
        lv_style_set_border_width(&style_dot_pressed, 3);
        lv_style_set_bg_opa(&style_dot_pressed, 127);

        style_inited = true;
    }

    lv_obj_t * lv_obj_0 = lv_obj_create(parent);
    lv_obj_set_name_static(lv_obj_0, "radio_item_#");
    lv_obj_set_flag(lv_obj_0, LV_OBJ_FLAG_STATE_TRICKLE, true);

    lv_obj_add_style(lv_obj_0, &style_main, 0);
    lv_obj_t * lv_obj_1 = lv_obj_create(lv_obj_0);
    lv_obj_set_flag(lv_obj_1, LV_OBJ_FLAG_CLICKABLE, false);
    lv_obj_add_style(lv_obj_1, &style_dot, 0);
    lv_obj_add_style(lv_obj_1, &style_dot_checked, LV_STATE_CHECKED);
    lv_obj_add_style(lv_obj_1, &style_dot_pressed, LV_STATE_PRESSED);
    
    lv_obj_t * lv_label_0 = lv_label_create(lv_obj_0);
    lv_label_set_text(lv_label_0, text);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

