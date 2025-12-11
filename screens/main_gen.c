/**
 * @file main_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "main_gen.h"
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

lv_obj_t * main_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    static bool style_inited = false;

    if (!style_inited) {

        style_inited = true;
    }

    lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
    lv_obj_set_name_static(lv_obj_0, "main_#");
    lv_obj_set_flag(lv_obj_0, LV_OBJ_FLAG_SCROLLABLE, false);

    lv_obj_t * lv_image_0 = lv_image_create(lv_obj_0);
    lv_image_set_src(lv_image_0, lvgl_pro);
    
    lv_obj_t * lv_slider_0 = lv_slider_create(lv_obj_0);
    lv_obj_set_width(lv_slider_0, 200);
    lv_obj_set_y(lv_slider_0, 3);
    lv_obj_set_height(lv_slider_0, 10);
    lv_slider_bind_value(lv_slider_0, &subject_slider);
    lv_slider_set_max_value(lv_slider_0, 255);
    lv_obj_set_align(lv_slider_0, LV_ALIGN_CENTER);
    lv_obj_add_event_cb(lv_slider_0, slider_change_cb, LV_EVENT_VALUE_CHANGED, NULL);
    
    lv_obj_t * lv_label_0 = lv_label_create(lv_obj_0);
    lv_label_bind_text(lv_label_0, &subject_slider, "%d");
    lv_obj_set_y(lv_label_0, -20);
    lv_obj_set_align(lv_label_0, LV_ALIGN_CENTER);
    
    lv_obj_t * lv_arc_0 = lv_arc_create(lv_obj_0);
    lv_arc_bind_value(lv_arc_0, &subject_arc);
    lv_obj_set_align(lv_arc_0, LV_ALIGN_BOTTOM_MID);
    lv_arc_set_max_value(lv_arc_0, 255);
    lv_obj_add_event_cb(lv_arc_0, arc_change_cb, LV_EVENT_VALUE_CHANGED, NULL);
    
    lv_obj_t * lv_label_1 = lv_label_create(lv_obj_0);
    lv_label_bind_text(lv_label_1, &subject_arc, "%d");
    lv_obj_set_y(lv_label_1, -80);
    lv_obj_set_style_text_align(lv_label_1, LV_TEXT_ALIGN_CENTER, 0);
    lv_obj_set_align(lv_label_1, LV_ALIGN_BOTTOM_MID);
    
    lv_obj_t * lv_button_0 = lv_button_create(lv_obj_0);
    lv_obj_set_align(lv_button_0, LV_ALIGN_BOTTOM_MID);
    lv_obj_set_y(lv_button_0, -40);
    lv_obj_t * lv_label_2 = lv_label_create(lv_button_0);
    lv_label_set_text(lv_label_2, "Button");
    
    lv_obj_add_event_cb(lv_button_0, button_click_cb, LV_EVENT_CLICKED, NULL);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

