# Blender GM import

## Требования

Для корректной работы необходимо:

- [NodeJs](https://nodejs.org/ru/)
- Модели в формате .gm и текстуры в формате .tga

Текстуры должны находиться в той же папке, что и модели, в подпапке textures.
Пример:
```
C/
    example-folder/
        model.gm
        textures/
            texture1.tga
            texture2.tga
```

## Подготовка
Для корректной работы плагина для Blender модель необходимо распарсить в json.
Чтобы это сделать, необходимо запустить консоль (терминал) в папке со скриптом ``parse-gm.js`` и ввести команду
``node parse-gm.js {filepath}``

Пример:
``node parse-gm.js "C:\models\dragoon_1.gm"``

В папке с моделью будет сохранен файл с результатами ``dragoon_1.gm.json``

Также список используемых в модели текстур будет выведен в терминале:
```
Used textures: 

Dragoon_1.tga
```

### Примечание
Для пользователей Windows есть более простой способ —
можно перетащить на файл ``parse-gm.cmd`` файл с моделью и в папке с моделью будет сохранен файл с результатами

## Установка плагина в Blender
```
Edit -> Preferences... -> Add-ons -> Install... -> Выбрать import_json_gm.py из папки io_import_json_gm -> Включить "Import: JSON GM"
```

## Использование плагина в Blender
```
File -> Import... -> JSON GM Import(.gm.json)
```

Текстуры должны находиться в той же папке, что и результат, в подпапке textures.
Пример:
```
C/
    example-folder/
        model.json.gm
        textures/
            texture1.tga
            texture2.tga
```

## Автор

[Artess999](https://github.com/Artess999)

