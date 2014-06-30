# Overview
A collection of basic projects to demonstrate how Gradle works with
multi-language builds.

## Gradle Wrapper
To run any of the Gradle tasks, use `./gradlew` on \*nix or `gradle.bat` on
Windows.

# Setting Things Up

## Defining Projects
Projects can be define either in their own Gradle build file or in the root
project's build file. The former method is used for the `native` projects; the
latter is used for the `jvm` projects.

## Including Projects
You need to tell Gradle about which projects it should manage. These projects
are included by specifying them in the `settings.gradle` file.

To see the projects that Gradle will oversee, run `./gradlew projects`.

## Running Tasks
To get a list of available tasks for a project, run `./gradlew tasks`. For
example, `./gradlew jvm:jni:tasks`

You can call a task by its fully qualified Gradle path (usually a good idea),
such as `./gradlew level1:level2:levelN:taskName` or by just the task's name,
such as `./gradlew taskName`. In the latter, all tasks of taskName in your
Gradle project will be executed.

For example, the following two commands will build the JNI shared library:
`./gradlew jniPlatformSharedLibrary` or `./gradlew jvm:jni:jniPlatformSharedLibrary`

# Examples

## JNI

    $./gradlew jvm:jni:build
    $java -Djava.library.path=jvm/jni/build/binaries/jniPlatformSharedLibrary -cp jvm/jni/build/libs/jni.jar example.jni.app.Main [optional_arg]

