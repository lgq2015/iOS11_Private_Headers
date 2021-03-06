/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDUploadCompletedLogEvent : HMDLogEvent {
    NSError * _error;
}

@property (nonatomic, readonly) NSError *error;

+ (id)uploadCompletedWithError:(id)arg1;
+ (id)uuid;

- (void).cxx_destruct;
- (id)error;
- (id)initUploadWithError:(id)arg1;

@end
