/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

@interface MTAlarmActionSyncObject : MTSyncObject {
    MTSyncActionOperation * _operation;
}

@property (nonatomic, retain) MTSyncActionOperation *operation;

+ (id)alarmActionWithOperation:(id)arg1;
+ (id)createSYChangeFromProtobuffObject:(id)arg1 changeType:(long long)arg2;

- (void).cxx_destruct;
- (id)createProtobufWithOptions:(id)arg1;
- (id)description;
- (id)initWithOperation:(id)arg1;
- (id)lastModifiedDate;
- (id)objectIdentifier;
- (id)operation;
- (void)setOperation:(id)arg1;

@end
