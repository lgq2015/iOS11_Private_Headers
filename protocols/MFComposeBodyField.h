/* made by EzioChiu.
 */

@protocol MFComposeBodyField <NSObject>

@required

- (void)addMailAttributesBeforeDisplayHidingTrailingEmptyQuotes:(bool)arg1;
- (void)appendMarkupString:(NSString *)arg1 quote:(bool)arg2;
- (void)appendOrReplace:(NSString *)arg1 withMarkupString:(NSString *)arg2 quote:(bool)arg3;
- (void)beginPreventingLayout;
- (void)changeQuoteLevel:(long long)arg1;
- (MFFuture *)containsRichText;
- (void)endPreventingLayout;
- (void)getHTMLStringsAttachmentsCharsetsAndPlainTextAlternative:(void *)arg1; // needs 1 arg types, found 9: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSArray *, NSArray *, MFPlainTextDocument *, void*
- (MFFuture *)htmlString;
- (void)insertDocumentWithData:(NSData *)arg1 fileName:(NSString *)arg2 mimeType:(NSString *)arg3 contentID:(NSString *)arg4;
- (void)insertDocumentWithURL:(NSURL *)arg1 isDrawingFile:(bool)arg2;
- (void)insertPhotoOrVideoWithInfoDictionary:(NSDictionary *)arg1;
- (bool)isDirty;
- (void)layoutWithMinimumSize;
- (<MFMailComposeViewDelegate> *)mailComposeViewDelegate;
- (NSString *)nextAttachmentName;
- (MFFuture *)plainTextContent;
- (void)prependMarkupString:(NSString *)arg1 quote:(bool)arg2;
- (void)prependPreamble:(NSString *)arg1;
- (void)prependString:(NSString *)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectOfElementWithID:(NSString *)arg1;
- (void)removeDropPlaceholders;
- (void)replaceAttachment:(void *)arg1 withDocumentAtURL:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: MFAttachment *, NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, MFAttachment *, void*
- (void)replaceAttachment:(MFAttachment *)arg1 withDocumentData:(NSData *)arg2 fileName:(NSString *)arg3 mimeType:(NSString *)arg4;
- (void)replaceImagesIfNecessary;
- (void)scaleImagesToScale:(unsigned long long)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })selectedRange;
- (void)setAttachmentURLsToBeReplacedWithFilename:(NSArray *)arg1;
- (void)setCaretPosition:(unsigned long long)arg1;
- (void)setDirty:(bool)arg1;
- (void)setMailComposeViewDelegate:(id <MFMailComposeViewDelegate>)arg1;
- (void)setMarkupString:(NSString *)arg1;
- (void)setMarkupString:(NSString *)arg1 quote:(bool)arg2;
- (void)setPrefersFirstLineSelection;
- (void)unscaleImages;
- (void)updateInputAssistantItem;

@end
