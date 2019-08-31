def Settings( **kwargs ):
  return {
    'flags': [
        '-x',
        'c++',
        '-Wall',
        '-Wextra',
        '-Werror' ,
        '-std=c++14',

        '-Isrc/utils/include',
        '-Isrc/gizmo/include',
        '-Isrc/gizmo/src',
        ],
  }

