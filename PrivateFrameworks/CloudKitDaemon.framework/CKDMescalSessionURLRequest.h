/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDMescalSessionURLRequest : CKDURLRequest {
    NSData * _mescalData;
    NSData * _sessionData;
}

@property (nonatomic, retain) NSData *mescalData;
@property (nonatomic, retain) NSData *sessionData;

- (void).cxx_destruct;
- (bool)allowsAnonymousAccount;
- (id)generateRequestOperations;
- (id)initWithSessionData:(id)arg1;
- (id)mescalData;
- (int)operationType;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperationClasses;
- (bool)requiresDeviceID;
- (bool)requiresSignature;
- (id)sessionData;
- (void)setMescalData:(id)arg1;
- (void)setSessionData:(id)arg1;

@end
