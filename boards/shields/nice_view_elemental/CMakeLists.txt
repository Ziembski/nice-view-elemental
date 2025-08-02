if(CONFIG_ZMK_DISPLAY AND CONFIG_NICE_VIEW_WIDGET_STATUS)
  zephyr_library_include_directories(${CMAKE_SOURCE_DIR}/include)

  zephyr_library_sources(
    ./src/main.c
    ./src/fonts/custom_font_22.c
    ./src/images/background_0.c
    ./src/images/background_1.c
    ./src/images/background_2.c
    ./src/images/background_3.c
    ./src/images/background_4.c
    ./src/images/background_5.c
    ./src/images/background_6.c
    ./src/images/background_7.c
    ./src/images/background_8.c
    ./src/images/background_9.c
    ./src/images/background_10.c
    ./src/images/background_11.c
    ./src/images/background_12.c
    ./src/images/background_13.c
    ./src/images/background_14.c
    ./src/images/background_15.c
    ./src/images/background_16.c
    ./src/images/background_17.c
    ./src/images/background_18.c
    ./src/images/background_19.c
    ./src/images/background_20.c
    ./src/images/background_21.c
    ./src/images/background_22.c
    ./src/images/background_23.c
    ./src/images/background_24.c
    ./src/images/background_25.c
    ./src/images/background_26.c
    ./src/images/background_27.c
    ./src/images/background_28.c
    ./src/images/background_29.c
    ./src/images/background_30.c
    ./src/images/background_31.c
    

    ./src/images/bluetooth_logo_outlined.c
    ./src/images/bluetooth_logo.c
    ./src/images/bluetooth_searching.c
    ./src/images/usb_logo.c
    ./src/utils/draw_background.c
    ./src/utils/draw_battery.c
    ./src/utils/draw_bluetooth_logo_outlined.c
    ./src/utils/draw_bluetooth_logo.c
    ./src/utils/draw_bluetooth_searching.c
    ./src/utils/draw_usb_logo.c
    ./src/utils/rotate_connectivity_canvas.c
  )

  if(NOT CONFIG_ZMK_SPLIT OR CONFIG_ZMK_SPLIT_ROLE_CENTRAL)
    zephyr_library_sources(
      ./src/central/initialize_listeners.c
      ./src/central/render.c
      # These are not included on the peripheral since they are only used for
      # displaying the layer name.
      ./src/fonts/custom_font_44.c
      ./src/fonts/custom_font_shadow.c
      ./src/fonts/custom_font_outline.c
    )
  else()
    zephyr_library_sources(
      ./src/peripheral/initialize_listeners.c
      ./src/peripheral/render.c
    )
  endif()
endif()
