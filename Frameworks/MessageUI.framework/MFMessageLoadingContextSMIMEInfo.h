/* made by EzioChiu
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFMessageLoadingContextSMIMEInfo : NSObject {
    MFMessageLoadingContextEvent * _loadEvent;
}

@property (nonatomic, readonly) MFMessageLoadingContext *context;
@property (nonatomic, readonly) MFMessageSigner *firstSigner;
@property (nonatomic, readonly) MFMessageLoadingContextEvent *loadEvent;
@property (getter=isMessageEncrypted, nonatomic, readonly) bool messageEncrypted;
@property (getter=isMessageSigned, nonatomic, readonly) bool messageSigned;
@property (nonatomic, readonly) NSArray *signers;

+ (id)smimeInfoForLoadEvent:(id)arg1;

- (id)_firstSender;
- (id)context;
- (struct __SecCertificate { }*)copySigningCertificate;
- (void)dealloc;
- (id)firstSigner;
- (id)initWithLoadEvent:(id)arg1;
- (bool)isCertificateStoredInKeychain;
- (bool)isMessageEncrypted;
- (bool)isMessageSigned;
- (unsigned long long)keychainCertificateStatus;
- (id)loadEvent;
- (void)removeSavedEncryptionCertificate;
- (void)saveEncryptionCertificate;
- (id)signers;

@end
