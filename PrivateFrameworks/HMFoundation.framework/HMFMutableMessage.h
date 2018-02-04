/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

@interface HMFMutableMessage : HMFMessage

@property (nonatomic, retain) HMFMessageDestination *destination;
@property (nonatomic, copy) NSDictionary *headers;
@property (nonatomic, copy) NSUUID *identifier;
@property (nonatomic, copy) NSDictionary *messagePayload;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) long long qualityOfService;
@property (getter=isRemote, nonatomic) bool remote;
@property (nonatomic, retain) NSString *remoteSourceID;
@property (nonatomic, copy) id /* block */ responseHandler;
@property (nonatomic) HMFMessageTransport *transport;
@property (nonatomic, copy) NSDictionary *userInfo;

// Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)setHeaderValue:(id)arg1 forKey:(id)arg2;
- (void)setHeaders:(id)arg1;
- (void)setName:(id)arg1;
- (void)setQualityOfService:(long long)arg1;
- (void)setTransport:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (void)setUserInfoValue:(id)arg1 forKey:(id)arg2;

// Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon

+ (id)internalMessageWithName:(id)arg1 destination:(id)arg2 messagePayload:(id)arg3;
+ (id)internalMessageWithName:(id)arg1 messagePayload:(id)arg2;
+ (id)internalMessageWithName:(id)arg1 messagePayload:(id)arg2 responseHandler:(id /* block */)arg3;

- (void)setRemote:(bool)arg1;
- (void)setRemoteSourceID:(id)arg1;

@end
