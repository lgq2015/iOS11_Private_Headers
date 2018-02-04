/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface _HFSettingsObserverTuple : NSObject <HMAccessorySettingsDelegate, NAIdentifiable> {
    <HFAccessorySettingsObserver> * _observer;
    NADeallocationSentinel * _observerDeallocationSentinel;
    <_HFSettingsObserverTupleOwning> * _owner;
    HMAccessorySetting * _setting;
    HMAccessorySettings * _settings;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <HFAccessorySettingsObserver> *observer;
@property (nonatomic, retain) NADeallocationSentinel *observerDeallocationSentinel;
@property (nonatomic) <_HFSettingsObserverTupleOwning> *owner;
@property (nonatomic, retain) HMAccessorySetting *setting;
@property (nonatomic, retain) HMAccessorySettings *settings;
@property (readonly) Class superclass;

+ (id)na_identity;
+ (id)tupleForSettings:(id)arg1 setting:(id)arg2 observer:(id)arg3 owner:(id)arg4;

- (void).cxx_destruct;
- (void)_accessorySettingDidUpdate:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithSettings:(id)arg1 setting:(id)arg2 observer:(id)arg3 owner:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)observer;
- (id)observerDeallocationSentinel;
- (id)owner;
- (void)setObserver:(id)arg1;
- (void)setObserverDeallocationSentinel:(id)arg1;
- (void)setOwner:(id)arg1;
- (void)setSetting:(id)arg1;
- (void)setSettings:(id)arg1;
- (id)setting;
- (id)settings;
- (void)settingsDidUpdate:(id)arg1;
- (void)settingsWillUpdate:(id)arg1;

@end
