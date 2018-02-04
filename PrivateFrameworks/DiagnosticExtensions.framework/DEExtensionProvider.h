/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DiagnosticExtensions.framework/DiagnosticExtensions
 */

@interface DEExtensionProvider : NSObject <NSExtensionRequestHandling> {
    bool  _allowUserAttachmentSelection;
    bool  _canGenerateNewAttachment;
    NSString * _loggingConsent;
}

@property (nonatomic) bool allowUserAttachmentSelection;
@property (nonatomic) bool canGenerateNewAttachment;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *loggingConsent;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_getHostname;
- (bool)allowUserAttachmentSelection;
- (id)attachmentList;
- (id)attachmentsForParameters:(id)arg1;
- (id)attachmentsWithParams:(id)arg1;
- (void)beginRequestWithExtensionContext:(id)arg1;
- (bool)canEnableLogging;
- (bool)canGenerateNewAttachment;
- (void)disableLogging;
- (void)enableLogging;
- (id)filesInDir:(id)arg1 matchingPattern:(id)arg2 excludingPattern:(id)arg3;
- (id)init;
- (bool)isLoggingEnabled;
- (id)loggingConsent;
- (void)setAllowUserAttachmentSelection:(bool)arg1;
- (void)setCanGenerateNewAttachment:(bool)arg1;
- (void)setLoggingConsent:(id)arg1;

@end