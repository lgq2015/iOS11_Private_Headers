/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDUploadStartingLogEvent : HMDLogEvent {
    NSString * _saveReason;
}

@property (nonatomic, readonly) NSString *saveReason;

+ (id)uploadReason:(id)arg1;
+ (id)uuid;

- (void).cxx_destruct;
- (id)initUploadReason:(id)arg1;
- (id)saveReason;

@end