/* made by EzioChiu
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFComposeTypeFactory : NSObject

+ (id)_markupForInlineAttachment:(id)arg1 willBeIncluded:(bool)arg2 prependBlankLine:(bool)arg3 delegate:(id)arg4;
+ (id)_markupStringForExcludedInlineAttachmentWithFilename:(id)arg1;
+ (void)_mergeModel:(id)arg1 withDelegate:(id)arg2;
+ (void)_prependQuotedMarkup:(id)arg1 shouldIndent:(bool)arg2 toBodyField:(id)arg3;
+ (void)_quoteFromModel:(id)arg1 delegate:(id)arg2;
+ (void)_sanitizeRecipientsForComposeType:(unsigned long long)arg1 sendingAddress:(id)arg2 delegate:(id)arg3;
+ (void)_setContent:(id)arg1 includeAttachments:(bool)arg2 shouldQuote:(bool)arg3 prependBlankLine:(bool)arg4 delegate:(id)arg5;
+ (void)_setupForForwardWithModel:(id)arg1 delegate:(id)arg2;
+ (void)_setupForNewMessageWithModel:(id)arg1 delegate:(id)arg2;
+ (void)_setupForReplyAllWithModel:(id)arg1 delegate:(id)arg2;
+ (void)_setupForReplyWithModel:(id)arg1 delegate:(id)arg2;
+ (void)_updateDelegate:(id)arg1 toRecipients:(id)arg2 ccRecipients:(id)arg3 bccRecipients:(id)arg4;
+ (void)addAttachment:(id)arg1 prepend:(bool)arg2 withCompositionModel:(id)arg3 delegate:(id)arg4;
+ (id)headersFromDelegate:(id)arg1;
+ (id)headersFromDelegate:(id)arg1 originatingBundleID:(id)arg2 sourceAccountManagement:(int)arg3;
+ (void)hijackThreadFromDelegate:(id)arg1;
+ (unsigned long long)imageScaleFromUserDefaults;
+ (id)messageFromDelegate:(id)arg1 originatingBundleID:(id)arg2 sourceAccountManagement:(int)arg3;
+ (id)messageFromDelegate:(id)arg1 withSubstituteDOMDocument:(id)arg2 compositionSpecification:(id)arg3 originatingBundleID:(id)arg4 sourceAccountManagement:(int)arg5 writeAttachmentPlaceholders:(bool)arg6;
+ (void)setupSwitchToReplyAllWithModel:(id)arg1 delegate:(id)arg2;
+ (void)setupWithCompositionModel:(id)arg1 delegate:(id)arg2;
+ (void)setupWithContent:(id)arg1 delegate:(id)arg2;
+ (id)subjectFromSubject:(id)arg1 withComposeType:(int)arg2;

@end
