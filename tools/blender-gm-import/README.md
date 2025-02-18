# Blender GM import

[Русская версия Readme](https://github.com/storm-devs/storm-engine/blob/develop/tools/blender-gm-import/README_RUS.md)

## Requirements

In order to use this plugin you need:

- [NodeJs](https://nodejs.org/en/)
- models in .gm format and textures in .tga format

The textures must be in ``textures`` subfolder in the same folder as the model.
E.g.:
```
C/
    example-folder/
        model.gm
        textures/
            texture1.tga
            texture2.tga
```

## How to
For correct plugin work the model must be prepared (parsed into json).
In order to do this you need to launch console (terminal) in the folder with ``parse-gm.js`` script and run
``node parse-gm.js {filepath}``

E.g.:
``node parse-gm.js "C:\models\dragoon_1.gm"``

The results (``dragoon_1.gm.json``) will be saved in the folder with .gm model 

List of used in the model textures will be print in the terminal.
```
Used textures: 

Dragoon_1.tga
```

### Remark about Windows
There is an easier way for Windows users -
you can drag file with the model to the file ``parse-gm.cmd`` and results will be saved in the model folder

## Blender Plugin Installation
```
Edit -> Preferences... -> Add-ons -> Install... -> Select import_json_gm.py from io_import_json_gm folder -> Enable "Import: JSON GM"
```

## Blender Usage
```
File -> Import... -> JSON GM Import(.gm.json)
```

The textures must be in ``textures`` subfolder in the same folder as the result.
E.g.:
```
C/
    example-folder/
        model.json.gm
        textures/
            texture1.tga
            texture2.tga
```

## Author

[Artess999](https://github.com/Artess999)

