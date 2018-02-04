/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDOperationInfoMetadata : NSObject {
    NSDate * _lastAttemptDate;
    CKOperationInfo * _operationInfo;
    NSNumber * _retryNumber;
}

@property (nonatomic, retain) NSDate *lastAttemptDate;
@property (nonatomic, retain) CKOperationInfo *operationInfo;
@property (nonatomic, retain) NSNumber *retryNumber;

- (void).cxx_destruct;
- (id)lastAttemptDate;
- (id)operationInfo;
- (id)retryNumber;
- (void)setLastAttemptDate:(id)arg1;
- (void)setOperationInfo:(id)arg1;
- (void)setRetryNumber:(id)arg1;

@end
