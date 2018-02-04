/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
 */

@interface CDPDRecoveryKeyValidatorImpl : NSObject <CDPRecoveryKeyValidatorInternal> {
    CDPContext * _context;
    <CDPDRecoveryKeyValidatorInternalDelegate> * _delegate;
    NSString * _recoveryKey;
    bool  _recoveryKeyVerified;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *recoveryKey;
@property (nonatomic) bool recoveryKeyVerified;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)confirmRecoveryKey:(id)arg1 completion:(id /* block */)arg2;
- (void)generateRecoveryKey:(id /* block */)arg1;
- (id)initWithContext:(id)arg1 delegate:(id)arg2;
- (id)recoveryKey;
- (bool)recoveryKeyVerified;
- (void)setRecoveryKey:(id)arg1;
- (void)setRecoveryKeyVerified:(bool)arg1;

@end
