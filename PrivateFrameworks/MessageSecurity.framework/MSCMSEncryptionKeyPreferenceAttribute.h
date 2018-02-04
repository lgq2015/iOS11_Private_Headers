/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MessageSecurity.framework/MessageSecurity
 */

@interface MSCMSEncryptionKeyPreferenceAttribute : NSObject <MSCMSAttributeCoder> {
    struct __SecCertificate { } * _encryptionCertificate;
}

@property (readonly) struct __SecCertificate { }*encryptionCertificate;

- (void)dealloc;
- (id)encodeAttributeWithError:(id*)arg1;
- (struct __SecCertificate { }*)encryptionCertificate;
- (id)initWithAttribute:(id)arg1 error:(id*)arg2;
- (id)initWithCertificate:(struct __SecCertificate { }*)arg1;
- (id)initWithEmailAddress:(id)arg1;
- (id)initWithIdentity:(struct __SecIdentity { }*)arg1;

@end
