/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
 */

@interface TSgPTPPort : NSObject {
    unsigned int  _interestNotification;
    struct IONotificationPort { } * _notificationPort;
    NSObject<OS_dispatch_queue> * _notificationsQueue;
    unsigned int  _service;
}

@property (nonatomic, readonly) unsigned short portNumber;
@property (nonatomic, readonly) long long portRole;
@property (nonatomic, readonly) long long portType;
@property (nonatomic, readonly) unsigned int service;

+ (id)diagnosticDescriptionForService:(unsigned int)arg1 withIndent:(id)arg2;
+ (id)gPTPPortWithService:(unsigned int)arg1;

- (bool)_commonInitWithService:(unsigned int)arg1;
- (void)_registryPropertyChanged;
- (void)dealloc;
- (id)init;
- (id)initWithMatchingDictionary:(id)arg1;
- (id)initWithService:(unsigned int)arg1;
- (unsigned short)portNumber;
- (long long)portRole;
- (long long)portType;
- (unsigned int)service;
- (void)serviceTerminated;

@end
