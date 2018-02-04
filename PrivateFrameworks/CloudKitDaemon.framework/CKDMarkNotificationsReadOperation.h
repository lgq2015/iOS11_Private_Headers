/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDMarkNotificationsReadOperation : CKDOperation {
    NSMutableDictionary * _errorByNotificationID;
    NSArray * _notificationIDs;
    id /* block */  _notificationMarkedRead;
    NSMutableSet * _successfulNotificationIDs;
}

@property (nonatomic, retain) NSMutableDictionary *errorByNotificationID;
@property (nonatomic, retain) NSArray *notificationIDs;
@property (nonatomic, copy) id /* block */ notificationMarkedRead;
@property (nonatomic, retain) NSMutableSet *successfulNotificationIDs;

+ (long long)isPredominatelyDownload;

- (void).cxx_destruct;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleNotificationID:(id)arg1 withResponse:(id)arg2;
- (id)activityCreate;
- (id)errorByNotificationID;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (void)main;
- (id)notificationIDs;
- (id /* block */)notificationMarkedRead;
- (void)setErrorByNotificationID:(id)arg1;
- (void)setNotificationIDs:(id)arg1;
- (void)setNotificationMarkedRead:(id /* block */)arg1;
- (void)setSuccessfulNotificationIDs:(id)arg1;
- (id)successfulNotificationIDs;

@end
