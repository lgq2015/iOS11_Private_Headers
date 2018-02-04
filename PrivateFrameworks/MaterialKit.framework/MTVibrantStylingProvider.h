/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MaterialKit.framework/MaterialKit
 */

@interface MTVibrantStylingProvider : NSObject <MTMaterialSettingsObserving> {
    <MTMaterialSettings> * _materialSettings;
    NSPointerArray * _observers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/MaterialKit.framework/MaterialKit

+ (id)vibrantStylingWithPrivateStyle:(long long)arg1 andRecipe:(long long)arg2;
+ (id)vibrantStylingWithStyle:(long long)arg1 andRecipe:(long long)arg2;

- (void).cxx_destruct;
- (void)_notifyObserversWithBlock:(id /* block */)arg1;
- (id)_observableMaterialSettings;
- (long long)_privateStyleForStyle:(long long)arg1;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)initWithMaterialSettings:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (id)vibrantStylingWithPrivateStyle:(long long)arg1;
- (id)vibrantStylingWithStyle:(long long)arg1;

// Image: /System/Library/PrivateFrameworks/ControlCenterUIKit.framework/ControlCenterUIKit

+ (id)_controlCenterKeyLineOnDarkVibrantStyling;
+ (id)_controlCenterKeyLineOnLightVibrantStyling;
+ (id)_controlCenterPrimaryVibrantStyling;
+ (id)_controlCenterScrollViewDarkeningVibrantStyling;
+ (id)_controlCenterSecondaryVibrantStyling;

@end
