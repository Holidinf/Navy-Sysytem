SET(SOURCES screens/ui_Start_Up.c
    ui.c
    ui_helpers.c
    images/ui_img_icon_png.c
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
