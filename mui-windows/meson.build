mui_windows_timeout_seconds = '.8'
mui_windows_srcs = [
  'mui-windows.c',
]
mui_windows_inc = [
 inc,
 '.',
 '../mui-windows',
 '../mui-atlas',
 '../mui',
 '../mui-render',
 '../submodules/c_deps',
 '../submodules/c_deps/submodules',
 '../submodules/c_deps/submodules/c_ansi',
 '../submodules/c_deps/submodules/c_ansi/ansi-utils',
 '../submodules/c_deps/submodules/djbhash',
 '../submodules/c_deps/submodules/djbhash/src',
]
mui_windows_deps = [
   window_utils_dep,
   app_utils_dep,
   timestamp_dep,
   djbhash_dep,
   sdl2_dep,
   sdl2_image_dep,
   sdl2_ttf_dep,
   mui_dep,
   mui_render_dep,
   active_app_dep,
   cargs_dep,
   colors_csv_parser_dep,
   colors_json_parser_dep,
   c_stringfn_dep,
   c_vector_dep,
   c_stringfn_dep,
   parson_dep,
   fs_dep,
   rgba_dep,
   ansi_codes_dep,
   process_dep,
   ansi_rgb_utils_dep,
   bytes_dep,
   c_string_buffer_dep,
   db_dep,
   ansi_utils_deps, 
]
mui_windows_c_args = [
 '-DWINDOW_X_OFFSET="25"',
 '-DWINDOW_Y_OFFSET="25"',
]

mui_windows_lib = static_library('mui-windows',
  mui_windows_srcs,
  install: false,
  dependencies: mui_windows_deps,
  c_args: mui_windows_c_args,
  include_directories: mui_windows_inc,
)

mui_windows_dep = declare_dependency(
  include_directories: mui_windows_inc,
  link_with: mui_windows_lib,
)
