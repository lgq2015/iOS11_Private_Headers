/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ApplePushService.framework/ApplePushService
 */

@interface APSMessage : NSObject <NSCoding> {
    NSObject<OS_dispatch_queue> * _ivarQueue;
    NSMutableDictionary * _plist;
    NSMutableDictionary * _properties;
    void * _xpcMessage;
}

@property (nonatomic, retain) NSString *correlationIdentifier;
@property (nonatomic) unsigned long long identifier;
@property (nonatomic, retain) NSString *topic;
@property (nonatomic, retain) NSDictionary *userInfo;

// Image: /System/Library/PrivateFrameworks/ApplePushService.framework/ApplePushService

- (id)correlationIdentifier;
- (void)dealloc;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)guid;
- (unsigned long long)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1 xpcMessage:(id)arg2;
- (id)initWithTopic:(id)arg1 userInfo:(id)arg2;
- (id)instanceObjectForKey:(id)arg1;
- (id)objectForKey:(id)arg1;
- (void)setCorrelationIdentifier:(id)arg1;
- (void)setGuid:(id)arg1;
- (void)setIdentifier:(unsigned long long)arg1;
- (void)setInstanceObject:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setTopic:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (id)topic;
- (id)userInfo;

// Image: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer

- (id)uns_bundleIdentifier;

@end
