def Settings( **kwargs ):
  return {
    'flags': [
        '-x',
        'c++',
        '-Wall',
        '-Wextra',
        '-Werror' ,
        '-std=c++14',

        '-Iutils/include',
        '-Igizmo/include',
        '-Igizmo/src',
        ],
  }

