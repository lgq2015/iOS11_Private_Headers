/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BiometricKit.framework/BiometricKit
 */

@interface BKEnrollOperation : BKOperation {
    NSData * _credentialSet;
    unsigned int  _userID;
}

@property (nonatomic, copy) NSData *credentialSet;
@property (nonatomic) <BKEnrollOperationDelegate> *delegate;
@property (nonatomic) unsigned int userID;

- (void).cxx_destruct;
- (id)credentialSet;
- (void)enrollFeedback:(id)arg1 client:(unsigned long long)arg2;
- (void)enrollResult:(id)arg1 client:(unsigned long long)arg2;
- (void)enrollUpdate:(id)arg1 client:(unsigned long long)arg2;
- (id)initWithDevice:(id)arg1;
- (id)optionsDictionaryWithError:(id*)arg1;
- (void)setCredentialSet:(id)arg1;
- (void)setUserID:(unsigned int)arg1;
- (void)startBioOperation:(bool)arg1 reply:(id /* block */)arg2;
- (void)statusMessage:(unsigned int)arg1 client:(unsigned long long)arg2;
- (unsigned int)userID;

@end
