// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.0
// LVGL version: 8.3.6
// Project name: UI

#include "../ui.h"

void ui_HOME_screen_init(void)
{
    ui_HOME = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_HOME, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_HOME, lv_color_hex(0x1480BC), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_HOME, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_HOME, lv_color_hex(0x03303C), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_HOME, LV_GRAD_DIR_VER, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_server_on = lv_imgbtn_create(ui_HOME);
    lv_imgbtn_set_src(ui_server_on, LV_IMGBTN_STATE_RELEASED, NULL, &ui_img_lucide_server_png, NULL);
    lv_obj_set_height(ui_server_on, 28);
    lv_obj_set_width(ui_server_on, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_x(ui_server_on, 20);
    lv_obj_set_y(ui_server_on, 14);

    ui_Peta_FF = lv_label_create(ui_HOME);
    lv_obj_set_width(ui_Peta_FF, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Peta_FF, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Peta_FF, 51);
    lv_obj_set_y(ui_Peta_FF, 14);
    lv_label_set_text(ui_Peta_FF, "PETA FF");
    lv_obj_set_style_text_color(ui_Peta_FF, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Peta_FF, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Peta_FF, &ui_font_Font1, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Waktu = lv_label_create(ui_HOME);
    lv_obj_set_width(ui_Waktu, 73);
    lv_obj_set_height(ui_Waktu, 33);
    lv_obj_set_x(ui_Waktu, 436);
    lv_obj_set_y(ui_Waktu, 16);
    lv_label_set_text(ui_Waktu, "08:00");
    lv_obj_set_style_text_color(ui_Waktu, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Waktu, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Waktu, &ui_font_waktu, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Sound = lv_imgbtn_create(ui_HOME);
    lv_imgbtn_set_src(ui_Sound, LV_IMGBTN_STATE_RELEASED, NULL, &ui_img_1559931635, NULL);
    lv_obj_set_width(ui_Sound, 40);
    lv_obj_set_height(ui_Sound, 40);
    lv_obj_set_x(ui_Sound, 518);
    lv_obj_set_y(ui_Sound, 8);

    ui_Brightness = lv_imgbtn_create(ui_HOME);
    lv_imgbtn_set_src(ui_Brightness, LV_IMGBTN_STATE_RELEASED, NULL, &ui_img_388315622, NULL);
    lv_obj_set_width(ui_Brightness, 50);
    lv_obj_set_height(ui_Brightness, 50);
    lv_obj_set_x(ui_Brightness, 567);
    lv_obj_set_y(ui_Brightness, 3);

    ui_Setting = lv_imgbtn_create(ui_HOME);
    lv_imgbtn_set_src(ui_Setting, LV_IMGBTN_STATE_RELEASED, NULL, &ui_img_1200060910, NULL);
    lv_obj_set_width(ui_Setting, 40);
    lv_obj_set_height(ui_Setting, 39);
    lv_obj_set_x(ui_Setting, 626);
    lv_obj_set_y(ui_Setting, 8);

    ui_Personal_Home = lv_imgbtn_create(ui_HOME);
    lv_imgbtn_set_src(ui_Personal_Home, LV_IMGBTN_STATE_RELEASED, NULL, &ui_img_personal_button_png, NULL);
    lv_obj_set_width(ui_Personal_Home, 80);
    lv_obj_set_height(ui_Personal_Home, 100);
    lv_obj_set_x(ui_Personal_Home, 711);
    lv_obj_set_y(ui_Personal_Home, 65);

    ui_Group_Home = lv_imgbtn_create(ui_HOME);
    lv_imgbtn_set_src(ui_Group_Home, LV_IMGBTN_STATE_RELEASED, NULL, &ui_img_group_button_png, NULL);
    lv_obj_set_width(ui_Group_Home, 80);
    lv_obj_set_height(ui_Group_Home, 100);
    lv_obj_set_x(ui_Group_Home, 711);
    lv_obj_set_y(ui_Group_Home, 195);

    ui_radio_Home = lv_imgbtn_create(ui_HOME);
    lv_imgbtn_set_src(ui_radio_Home, LV_IMGBTN_STATE_RELEASED, NULL, &ui_img_radiopa_button_png, NULL);
    lv_obj_set_width(ui_radio_Home, 80);
    lv_obj_set_height(ui_radio_Home, 120);
    lv_obj_set_x(ui_radio_Home, 712);
    lv_obj_set_y(ui_radio_Home, 320);

    ui_logo_Intercom = lv_img_create(ui_HOME);
    lv_img_set_src(ui_logo_Intercom, &ui_img_logo_navysis_png);
    lv_obj_set_width(ui_logo_Intercom, LV_SIZE_CONTENT);   /// 613
    lv_obj_set_height(ui_logo_Intercom, LV_SIZE_CONTENT);    /// 248
    lv_obj_set_align(ui_logo_Intercom, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_logo_Intercom, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_logo_Intercom, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    lv_obj_add_event_cb(ui_Sound, ui_event_Sound, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Brightness, ui_event_Brightness, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Setting, ui_event_Setting, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Personal_Home, ui_event_Personal_Home, LV_EVENT_ALL, NULL);
    
}
