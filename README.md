# Добавление опции compression в команду CREATE TABLESPACE

В синтаксис команды CREATE TABLESPACE была добавлена опция компресси, позволяющая фиксировать алгоритм сжатия для табличного пространства. Теперь в postgres возможен такой запрос:  
CREATE TABLESPACE tablespace_name LOCATION ’directory’ WITH (compression=’algorithm_name’)

Общая структура:

# Внедрение алгоритма brotli в postgres

В postgres был внедрён новый алгоритм для сжатия таблиц - brotli.