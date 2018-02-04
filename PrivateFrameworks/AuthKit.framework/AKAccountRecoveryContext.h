/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
 */

@interface AKAccountRecoveryContext : NSObject <NSSecureCoding> {
    AKAppleIDAuthenticationContext * _authContext;
    NSString * _encodedRecoveryIdentityToken;
    NSString * _encodedRecoveryPET;
    NSURL * _recoveryContinuationURL;
    bool  _supportsMasterKeyRecovery;
}

@property (nonatomic, retain) AKAppleIDAuthenticationContext *authContext;
@property (nonatomic, readonly) NSString *decodedRecoveryIdentityTokenString;
@property (nonatomic, readonly) NSString *decodedRecoveryPETString;
@property (nonatomic, copy) NSString *encodedRecoveryIdentityToken;
@property (nonatomic, copy) NSString *encodedRecoveryPET;
@property (nonatomic, copy) NSURL *recoveryContinuationURL;
@property (nonatomic) bool supportsMasterKeyRecovery;

+ (id)recoveryContextWithServerInfo:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)authContext;
- (id)decodedRecoveryIdentityTokenString;
- (id)decodedRecoveryPETString;
- (void)encodeWithCoder:(id)arg1;
- (id)encodedRecoveryIdentityToken;
- (id)encodedRecoveryPET;
- (id)initWithCoder:(id)arg1;
- (bool)isValid;
- (id)recoveryContinuationURL;
- (void)setAuthContext:(id)arg1;
- (void)setEncodedRecoveryIdentityToken:(id)arg1;
- (void)setEncodedRecoveryPET:(id)arg1;
- (void)setRecoveryContinuationURL:(id)arg1;
- (void)setSupportsMasterKeyRecovery:(bool)arg1;
- (bool)supportsMasterKeyRecovery;

@end
