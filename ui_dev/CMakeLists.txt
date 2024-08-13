SET(SOURCES screens/ui_PERSONAL_INCALL.c
    ui.c
    ui_helpers.c
    images/ui_img_lucide_server_png.c
    images/ui_img_1559931635.c
    images/ui_img_388315622.c
    images/ui_img_1200060910.c
    images/ui_img_personal_buttonn_png.c
    images/ui_img_group_button_png.c
    images/ui_img_radiopa_button_png.c
    images/ui_img_logo_navysis_png.c
    images/ui_img_list_personal_incall_png.c
    images/ui_img_button_kom_anjgan_incall_png.c
    images/ui_img_button_palaksa_incall_png.c
    images/ui_img_button_cic_room_incall_png.c
    images/ui_img_button_ecr_ka_incall_png.c
    images/ui_img_button_ecr_ki_incall_png.c
    images/ui_img_button_14_png.c
    fonts/ui_font_CPU.c
    fonts/ui_font_Font1.c
    fonts/ui_font_MHz.c
    fonts/ui_font_about.c
    fonts/ui_font_pabx.c
    fonts/ui_font_roboto_medium.c
    fonts/ui_font_setting.c
    fonts/ui_font_value.c
    fonts/ui_font_volume.c
    fonts/ui_font_waktu.c)

add_library(ui ${SOURCES})
