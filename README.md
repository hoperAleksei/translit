# gtests_example

Как настраивать На Windows 7~:

0. Клонируем этот репозиторий: `git clone https://github.com/los-romka/gtests_example`
1. Переходим в папку с проектом в Bash `cd gtests_example`.
2. `rm -rf .git`
3. `git init`
4. `git remote add origin <ссылка на ваш репозиторий>`
5. `git add .`
6. `git commit -m "Initial commit"` 
7. `git push -u origin main` или `git push -u origin master`
8. Клонируем репозиторий googletest: `git clone https://github.com/google/googletest`
9. Устанавливаем Cygwin: https://www.cygwin.com/setup-x86_64.exe добавив пакеты make, gcc-core, gcc-g++, gdb.
10. Открываем прект `gtests_example` в CLion.
11. В CLion > File > Settings > Build, Execution, Deployment > Toolchains. Затем + и выбираем Cygwin. Выбираем путь, который указывали при установке.
12. В CLion справа вверху выбираем main для запуска главной программы и tests для запуска тестов.
13. Ещё можно нажать правой кнопкой мыши на файл tests.cpp и запустить всё тесты через IDE `Run All Tests in tests.cpp`
