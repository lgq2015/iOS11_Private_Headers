/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

@interface HMFSystemInfo : HMFObject {
    NSString * _model;
    NSString * _name;
    struct MGNotificationTokenStruct { } * _notificationToken;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    NSString * _regionInfo;
    NSString * _serialNumber;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSString *model;
@property (copy) NSString *name;
@property (readonly) struct MGNotificationTokenStruct { }*notificationToken;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *propertyQueue;
@property (readonly, copy) NSString *regionInfo;
@property (readonly, copy) NSString *serialNumber;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)systemInfo;

- (void).cxx_destruct;
- (void)__initialize;
- (void)dealloc;
- (id)init;
- (id)model;
- (id)name;
- (struct MGNotificationTokenStruct { }*)notificationToken;
- (void)notifyNameUpdated:(id)arg1;
- (id)propertyQueue;
- (id)regionInfo;
- (id)serialNumber;
- (void)setModel:(id)arg1;
- (void)setName:(id)arg1;
- (void)setRegionInfo:(id)arg1;
- (void)setSerialNumber:(id)arg1;
- (void)startMonitoringSystemChanges;
- (void)updateName;
- (id)workQueue;

@end
