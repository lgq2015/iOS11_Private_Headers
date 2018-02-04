/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BiometricKit.framework/BiometricKit
 */

@interface BKExtendEnrollTouchIDOperation : BKOperation {
    NSData * _credentialSet;
    BKIdentity * _identity;
}

@property (nonatomic, copy) NSData *credentialSet;
@property (nonatomic) <BKExtendEnrollTouchIDOperationDelegate> *delegate;
@property (nonatomic, retain) BKIdentity *identity;

- (void).cxx_destruct;
- (id)credentialSet;
- (void)homeButtonPressed:(unsigned long long)arg1;
- (id)identity;
- (void)matchResult:(id)arg1 details:(id)arg2 client:(unsigned long long)arg3;
- (void)setCredentialSet:(id)arg1;
- (void)setIdentity:(id)arg1;
- (void)startBioOperation:(bool)arg1 reply:(id /* block */)arg2;
- (void)statusMessage:(unsigned int)arg1 client:(unsigned long long)arg2;

@end
