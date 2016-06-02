# Cookpit
Flickr API implementation for Android with C++ core

## Requirement
* android ndk and `ndk-build` on your PATH to build for android
* setup your ndk path in `local.properties` file at root of folder `Cookpit/local.properties`

For example:
```bash
ndk.dir=<your_ndk_path>
sdk.dir=<your_sdk_path>
```

## Installation
* Run `make android` at root folder
* Optionally, run `make android ARCH=all` for all available Android architecture

## Building
* Import `Cookpit/` into Android Studio

## Bridging Code
* `Cookpit/java_gen` and `Cookpit/jni_gen` contains all bridging code in Java/JNI generated by djinni's interface files in `djinni/`

## Folder structure
```bash
Cookpit
├── app/ # app module for Android app
├── gradle/ # gradle tool
├── java_gen/ # bridging code (untrack)
├── jni/ # jni configuration Android.mk & Application.mk
├── jni_gen/ # bridging code (untrack)
└── build.gradle # gradle configuration file
```