/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFMessageWriter : NSObject {
    unsigned int  _allows8BitMimeParts;
    unsigned int  _allowsBinaryMimeParts;
    unsigned int  _allowsQuotedPrintable;
    NSDictionary * _compositionSpecification;
    id  _delegate;
    Class  _messageClassToInstantiate;
    bool  _shouldWriteAttachmentPlaceholders;
    unsigned int  _writeSizeDispositionParameter;
}

@property (nonatomic, readonly) NSDictionary *compositionSpecification;
@property (nonatomic) id delegate;
@property (nonatomic) bool shouldWriteAttachmentPlaceholders;

- (bool)allows8BitMimeParts;
- (bool)allowsBinaryMimeParts;
- (bool)allowsQuotedPrintable;
- (void)appendDataForMimePart:(id)arg1 toData:(id)arg2 withPartData:(id)arg3;
- (id)compositionSpecification;
- (id)createMessageWithHtmlString:(id)arg1 attachments:(id)arg2 headers:(id)arg3;
- (id)createMessageWithHtmlString:(id)arg1 plainTextAlternative:(id)arg2 otherHtmlStringsAndAttachments:(id)arg3 charsets:(id)arg4 headers:(id)arg5;
- (id)createMessageWithHtmlString:(id)arg1 plainTextAlternative:(id)arg2 otherHtmlStringsAndAttachments:(id)arg3 headers:(id)arg4;
- (id)createMessageWithPlainTextDocumentsAndAttachments:(id)arg1 headers:(id)arg2;
- (id)createMessageWithString:(id)arg1 headers:(id)arg2;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (id)initWithCompositionSpecification:(id)arg1;
- (void)setAllows8BitMimeParts:(bool)arg1;
- (void)setAllowsBinaryMimeParts:(bool)arg1;
- (void)setAllowsQuotedPrintable:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMessageClassToInstantiate:(Class)arg1;
- (void)setShouldWriteAttachmentPlaceholders:(bool)arg1;
- (void)setWriteSizeDispositionParameter:(bool)arg1;
- (bool)shouldWriteAttachmentPlaceholders;

@end
