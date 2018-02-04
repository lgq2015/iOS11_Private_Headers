/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

@interface TRDeviceSetupAuthenticateAction : TRDeviceSetupAction

@property (nonatomic, readonly, copy) NSString *accountID;
@property (nonatomic, readonly, copy) NSString *accountPassword;
@property (nonatomic, readonly) unsigned long long accountType;
@property (nonatomic, readonly, copy) NSArray *accountTypesWithSharedCredentials;
@property (nonatomic, readonly) unsigned long long attemptCount;
@property (nonatomic, readonly, copy) NSString *failureMessage;
@property (nonatomic, readonly, copy) NSString *requestMessage;

+ (id)actionForCancelledRequestWithOriginalAction:(id)arg1;
+ (id)actionForFailedAttemptWithOriginalAction:(id)arg1 requestMessage:(id)arg2 failureMessage:(id)arg3;
+ (id)actionForFinishedRequestWithOriginalAction:(id)arg1 accountID:(id)arg2 accountPassword:(id)arg3 accountTypesWithSharedCredentials:(id)arg4;
+ (id)actionForInitialAttemptWithAccountType:(unsigned long long)arg1 requestMessage:(id)arg2;

- (id)_initWithAccountType:(unsigned long long)arg1 accountID:(id)arg2 accountPassword:(id)arg3 accountTypesWithSharedCredentials:(id)arg4 attemptCount:(unsigned long long)arg5 requestMessage:(id)arg6 failureMessage:(id)arg7;
- (id)accountID;
- (id)accountPassword;
- (unsigned long long)accountType;
- (id)accountTypesWithSharedCredentials;
- (unsigned long long)attemptCount;
- (id)failureMessage;
- (id)init;
- (id)requestMessage;

@end
