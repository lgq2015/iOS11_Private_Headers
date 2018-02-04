/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNSettingsManager : NSObject {
    MNObserverHashTable * _observers;
    MNSettings * _settings;
}

@property (nonatomic, readonly) MNSettings *settings;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_setVolumeFromDefaults;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (id)settings;
- (void)updateForSettings:(id)arg1;

@end
