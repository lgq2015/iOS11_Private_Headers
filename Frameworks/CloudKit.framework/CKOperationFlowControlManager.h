/* made by EzioChiu
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKOperationFlowControlManager : NSObject {
    NSMutableDictionary * _flowControlledOperationClasses;
}

@property (readonly) NSMutableDictionary *flowControlledOperationClasses;

- (void).cxx_destruct;
- (id)CKStatusReportArray;
- (id)flowControlledOperationClasses;
- (id)init;
- (bool)isOperationLimited:(id)arg1 outLimitError:(id*)arg2;
- (void)limitOperation:(id)arg1 retryAfter:(id)arg2 error:(id)arg3;
- (double)secondsUntilUnlimited:(id)arg1;
- (void)unlimitAllOperations;

@end
