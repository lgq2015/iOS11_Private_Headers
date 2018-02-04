/* made by EzioChiu
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMPresenceEvent : HMEvent <HFLocationBasedEvent, NSCopying, NSMutableCopying, NSSecureCoding> {
    HMPresenceEventActivation * _activation;
    HMThreadSafeMutableArrayCollection * _observedUsers;
    unsigned long long  _presenceEventType;
    NSString * _presenceType;
    unsigned long long  _presenceUserType;
}

@property (nonatomic, retain) HMPresenceEventActivation *activation;
@property (nonatomic, readonly) unsigned long long activationGranularity;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long hf_activationGranularity;
@property (nonatomic, readonly) unsigned long long hf_eventType;
@property (nonatomic, readonly) HMThreadSafeMutableArrayCollection *observedUsers;
@property (nonatomic, readonly) unsigned long long presenceEventType;
@property (nonatomic, retain) NSString *presenceType;
@property (nonatomic, readonly) unsigned long long presenceUserType;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

+ (id)createWithDictionary:(id)arg1 home:(id)arg2;
+ (bool)isSupportedForHome:(id)arg1;
+ (bool)supportsSecureCoding;
+ (id)users:(id)arg1 home:(id)arg2 presenceType:(id)arg3;

- (void).cxx_destruct;
- (void)_handleEventUpdatedNotification:(id)arg1;
- (id)_serializeForAdd;
- (void)_update:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_updatePresenceType:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_updateUsers:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)activation;
- (unsigned long long)activationGranularity;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDict:(id)arg1 presenceType:(id)arg2 users:(id)arg3 activation:(id)arg4;
- (id)initWithDict:(id)arg1 presenceType:(id)arg2 users:(id)arg3 activationGranularity:(unsigned long long)arg4;
- (id)initWithPresenceEventType:(unsigned long long)arg1 presenceUserType:(unsigned long long)arg2;
- (id)initWithPresenceEventType:(unsigned long long)arg1 presenceUserType:(unsigned long long)arg2 users:(id)arg3;
- (id)initWithPresenceType:(id)arg1;
- (id)initWithPresenceType:(id)arg1 users:(id)arg2;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)observedUsers;
- (unsigned long long)presenceEventType;
- (id)presenceType;
- (unsigned long long)presenceUserType;
- (void)setActivation:(id)arg1;
- (void)setPresenceType:(id)arg1;
- (void)updatePresenceType:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)updateUsers:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)users;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

+ (unsigned long long)hf_locationEventTypeForPresenceEventType:(unsigned long long)arg1;
+ (unsigned long long)hf_presenceDisableReasonsForHome:(id)arg1;

- (unsigned long long)hf_activationGranularity;
- (unsigned long long)hf_eventType;

@end
