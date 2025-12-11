/**
 * @file sample_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "sample_gen.h"
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

lv_obj_t * sample_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");

    static lv_style_t style_radio;

    static bool style_inited = false;

    if (!style_inited) {
        lv_style_init(&style_radio);
        lv_style_set_width(&style_radio, LV_SIZE_CONTENT);
        lv_style_set_height(&style_radio, LV_SIZE_CONTENT);
        lv_style_set_layout(&style_radio, LV_LAYOUT_FLEX);
        lv_style_set_flex_flow(&style_radio, LV_FLEX_FLOW_COLUMN);
        lv_style_set_radius(&style_radio, 0);
        lv_style_set_border_width(&style_radio, 0);

        style_inited = true;
    }

    lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
    lv_obj_set_name_static(lv_obj_0, "sample_#");

    lv_obj_t * lv_switch_0 = lv_switch_create(lv_obj_0);
    lv_obj_set_x(lv_switch_0, 24);
    lv_obj_set_y(lv_switch_0, 12);
    
    lv_obj_t * lv_checkbox_0 = lv_checkbox_create(lv_obj_0);
    lv_checkbox_set_text(lv_checkbox_0, "Checkbox");
    lv_obj_set_x(lv_checkbox_0, 29);
    lv_obj_set_y(lv_checkbox_0, 58);
    
    lv_obj_t * lv_slider_0 = lv_slider_create(lv_obj_0);
    lv_obj_set_width(lv_slider_0, 200);
    lv_obj_set_x(lv_slider_0, 15);
    lv_obj_set_y(lv_slider_0, 93);
    lv_obj_set_height(lv_slider_0, 10);
    lv_slider_bind_value(lv_slider_0, &subject_slider);
    
    lv_obj_t * lv_label_0 = lv_label_create(lv_obj_0);
    lv_label_bind_text(lv_label_0, &subject_slider, "Slider value: %d");
    lv_obj_set_x(lv_label_0, 20);
    lv_obj_set_y(lv_label_0, 116);
    
    lv_obj_t * lv_arc_0 = lv_arc_create(lv_obj_0);
    lv_obj_set_x(lv_arc_0, 46);
    lv_obj_set_y(lv_arc_0, 151);
    lv_arc_bind_value(lv_arc_0, &subject_arc);
    
    lv_obj_t * lv_label_1 = lv_label_create(lv_obj_0);
    lv_label_bind_text(lv_label_1, &subject_arc, "Arc value:\n %d");
    lv_obj_set_x(lv_label_1, 77);
    lv_obj_set_y(lv_label_1, 196);
    lv_obj_set_style_text_align(lv_label_1, LV_TEXT_ALIGN_CENTER, 0);
    
    lv_obj_t * lv_button_0 = lv_button_create(lv_obj_0);
    lv_obj_set_x(lv_button_0, 75);
    lv_obj_set_y(lv_button_0, 279);
    lv_obj_t * lv_label_2 = lv_label_create(lv_button_0);
    lv_label_set_text(lv_label_2, "Button");
    
    lv_obj_t * lv_obj_1 = lv_obj_create(lv_obj_0);
    lv_obj_add_style(lv_obj_1, &style_radio, 0);
    lv_obj_t * radio_item_0 = radio_item_create(lv_obj_1, "A");
    lv_obj_bind_state_if_eq(radio_item_0, &subject_radio, LV_STATE_CHECKED, 0);
    lv_obj_add_subject_set_int_event(radio_item_0, &subject_radio, LV_EVENT_CLICKED, 0);
    
    lv_obj_t * radio_item_1 = radio_item_create(lv_obj_1, "B");
    lv_obj_bind_state_if_eq(radio_item_1, &subject_radio, LV_STATE_CHECKED, 1);
    lv_obj_add_subject_set_int_event(radio_item_1, &subject_radio, LV_EVENT_CLICKED, 1);
    
    lv_obj_t * radio_item_2 = radio_item_create(lv_obj_1, "C");
    lv_obj_bind_state_if_eq(radio_item_2, &subject_radio, LV_STATE_CHECKED, 2);
    lv_obj_add_subject_set_int_event(radio_item_2, &subject_radio, LV_EVENT_CLICKED, 2);
    
    lv_obj_t * radio_item_3 = radio_item_create(lv_obj_1, "D");
    lv_obj_bind_state_if_eq(radio_item_3, &subject_radio, LV_STATE_CHECKED, 3);
    lv_obj_add_subject_set_int_event(radio_item_3, &subject_radio, LV_EVENT_CLICKED, 3);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

