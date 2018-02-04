/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDAirPlay2Preference : HMDPreference <HMFObject> {
    HMDSystemPreference * _airPlayPreference;
    HMDSystemPreference * _homeKitPreference;
    HMDSystemPreference * _whaPreference;
}

@property (readonly) HMDSystemPreference *airPlayPreference;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) HMDSystemPreference *homeKitPreference;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly) Class superclass;
@property (readonly) HMDSystemPreference *whaPreference;

- (void).cxx_destruct;
- (id)airPlayPreference;
- (bool)boolValue;
- (id)homeKitPreference;
- (id)initWithKey:(id)arg1 options:(unsigned long long)arg2;
- (id)initWithKey:(id)arg1 options:(unsigned long long)arg2 defaultValue:(id)arg3;
- (id)numberValue;
- (id)propertyDescription;
- (id)stringValue;
- (id)whaPreference;

@end
