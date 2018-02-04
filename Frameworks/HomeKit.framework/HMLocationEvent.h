/* made by EzioChiu
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMLocationEvent : HMEvent <HFLocationBasedEvent, NSCopying, NSMutableCopying, NSSecureCoding, _HMLocationHandlerDelegate> {
    int  _locationAuthorization;
    CLRegion * _region;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long hf_eventType;
@property (nonatomic) int locationAuthorization;
@property (nonatomic, retain) CLRegion *region;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

+ (id)createWithDictionary:(id)arg1 home:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_configure:(id)arg1 clientQueue:(id)arg2 delegateCaller:(id)arg3 msgDispatcher:(id)arg4;
- (void)_handleEventUpdatedNotification:(id)arg1;
- (bool)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (void)_retrieveLocationEvent;
- (id)_serializeForAdd;
- (void)_updateRegion:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)didUpdateAuthorization:(int)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDict:(id)arg1 region:(id)arg2;
- (id)initWithRegion:(id)arg1;
- (int)locationAuthorization;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)region;
- (void)setLocationAuthorization:(int)arg1;
- (void)setRegion:(id)arg1;
- (void)updateRegion:(id)arg1 completionHandler:(id /* block */)arg2;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

+ (bool)hf_isRegion:(id)arg1 atHome:(id)arg2;
+ (unsigned long long)hf_locationEventTypeForRegion:(id)arg1;

- (unsigned long long)hf_eventType;
- (bool)hf_isRegionAtHome:(id)arg1;

@end
