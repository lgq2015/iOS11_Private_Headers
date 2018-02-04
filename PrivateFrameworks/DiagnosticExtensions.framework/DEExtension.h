/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DiagnosticExtensions.framework/DiagnosticExtensions
 */

@interface DEExtension : NSObject {
    bool  _allowUserAttachmentSelection;
    NSString * _attachmentsName;
    DEExtensionHostContext * _context;
    NSExtension * _extension;
    NSString * _identifier;
    bool  _isLoggingEnabled;
    NSString * _loggingConsent;
}

@property (nonatomic) bool allowUserAttachmentSelection;
@property (nonatomic, retain) NSString *attachmentsName;
@property (nonatomic, retain) DEExtensionHostContext *context;
@property (nonatomic, retain) NSExtension *extension;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic) bool isLoggingEnabled;
@property (nonatomic, retain) NSString *loggingConsent;

- (void).cxx_destruct;
- (bool)allowUserAttachmentSelection;
- (void)attachmentListWithHandler:(id /* block */)arg1;
- (void)attachmentsForParameters:(id)arg1 andHandler:(id /* block */)arg2;
- (id)attachmentsName;
- (id)context;
- (id)description;
- (void)endUsingExtension;
- (id)extension;
- (id)identifier;
- (id)initWithNSExtension:(id)arg1;
- (bool)isLoggingEnabled;
- (id)loggingConsent;
- (void)performWithHostContext:(id /* block */)arg1;
- (void)setAllowUserAttachmentSelection:(bool)arg1;
- (void)setAttachmentsName:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setExtension:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIsLoggingEnabled:(bool)arg1;
- (void)setLoggingConsent:(id)arg1;

@end
