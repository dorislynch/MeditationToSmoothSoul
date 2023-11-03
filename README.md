
# react-native-meditation-to-smooth-soul

## Getting started

`$ npm install react-native-meditation-to-smooth-soul --save`

### Mostly automatic installation

`$ react-native link react-native-meditation-to-smooth-soul`

### Manual installation


#### iOS

1. In XCode, in the project navigator, right click `Libraries` ➜ `Add Files to [your project's name]`
2. Go to `node_modules` ➜ `react-native-meditation-to-smooth-soul` and add `RNMeditationToSmoothSoul.xcodeproj`
3. In XCode, in the project navigator, select your project. Add `libRNMeditationToSmoothSoul.a` to your project's `Build Phases` ➜ `Link Binary With Libraries`
4. Run your project (`Cmd+R`)<

#### Android

1. Open up `android/app/src/main/java/[...]/MainActivity.java`
  - Add `import com.reactlibrary.RNMeditationToSmoothSoulPackage;` to the imports at the top of the file
  - Add `new RNMeditationToSmoothSoulPackage()` to the list returned by the `getPackages()` method
2. Append the following lines to `android/settings.gradle`:
  	```
  	include ':react-native-meditation-to-smooth-soul'
  	project(':react-native-meditation-to-smooth-soul').projectDir = new File(rootProject.projectDir, 	'../node_modules/react-native-meditation-to-smooth-soul/android')
  	```
3. Insert the following lines inside the dependencies block in `android/app/build.gradle`:
  	```
      compile project(':react-native-meditation-to-smooth-soul')
  	```

#### Windows
[Read it! :D](https://github.com/ReactWindows/react-native)

1. In Visual Studio add the `RNMeditationToSmoothSoul.sln` in `node_modules/react-native-meditation-to-smooth-soul/windows/RNMeditationToSmoothSoul.sln` folder to their solution, reference from their app.
2. Open up your `MainPage.cs` app
  - Add `using Meditation.To.Smooth.Soul.RNMeditationToSmoothSoul;` to the usings at the top of the file
  - Add `new RNMeditationToSmoothSoulPackage()` to the `List<IReactPackage>` returned by the `Packages` method


## Usage
```javascript
import RNMeditationToSmoothSoul from 'react-native-meditation-to-smooth-soul';

// TODO: What to do with the module?
RNMeditationToSmoothSoul;
```
  