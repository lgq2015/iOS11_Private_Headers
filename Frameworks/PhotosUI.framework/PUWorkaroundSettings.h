/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUWorkaroundSettings : PXSettings {
    bool  _addRemoveVideoLayer;
}

@property (nonatomic) bool addRemoveVideoLayer;

+ (id)settingsControllerModule;
+ (id)sharedInstance;

- (bool)addRemoveVideoLayer;
- (id)parentSettings;
- (void)setAddRemoveVideoLayer:(bool)arg1;
- (void)setDefaultValues;

@end
