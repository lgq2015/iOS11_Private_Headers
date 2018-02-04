/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MessageSecurity.framework/MessageSecurity
 */

@interface MSDecodeOptions : NSObject {
    NSData * _LAContext;
    struct __SecIdentity { } * _identity;
    NSData * _key;
    NSArray * _signerPolicies;
    bool  _verifySignatures;
    bool  _verifySigners;
    NSDate * _verifyTime;
}

@property (retain) NSData *LAContext;
@property struct __SecIdentity { }*identity;
@property (retain) NSData *key;
@property (retain) NSArray *signerPolicies;
@property bool verifySignatures;
@property bool verifySigners;
@property (retain) NSDate *verifyTime;

- (void).cxx_destruct;
- (id)LAContext;
- (void)dealloc;
- (struct __SecIdentity { }*)identity;
- (id)init;
- (id)initWithDecryptionIdentity:(struct __SecIdentity { }*)arg1;
- (id)initWithDecryptionKey:(id)arg1;
- (id)key;
- (void)setIdentity:(struct __SecIdentity { }*)arg1;
- (void)setKey:(id)arg1;
- (void)setLAContext:(id)arg1;
- (void)setSignerPolicies:(id)arg1;
- (void)setVerifySignatures:(bool)arg1;
- (void)setVerifySigners:(bool)arg1;
- (void)setVerifyTime:(id)arg1;
- (id)signerPolicies;
- (bool)verifySignatures;
- (bool)verifySigners;
- (id)verifyTime;

@end
