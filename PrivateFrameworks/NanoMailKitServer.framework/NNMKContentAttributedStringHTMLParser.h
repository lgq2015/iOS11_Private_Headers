/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

@interface NNMKContentAttributedStringHTMLParser : NNMKHTMLParser {
    NSMutableDictionary * _imageAtachmentsDataByContentId;
    NSLock * _lock;
    double  _maxImageWidth;
    unsigned long long  _maxLength;
    NSMutableAttributedString * _parsedAttributedString;
    bool * _partiallyParsed;
}

@property (nonatomic, retain) NSMutableDictionary *imageAtachmentsDataByContentId;
@property (nonatomic, retain) NSLock *lock;
@property (nonatomic) double maxImageWidth;
@property (nonatomic) unsigned long long maxLength;
@property (nonatomic, retain) NSMutableAttributedString *parsedAttributedString;
@property (nonatomic) bool*partiallyParsed;

+ (id)_scaleAndPrepareImageForClient:(id)arg1 maxWidth:(double)arg2 screenScale:(double)arg3;
+ (struct CGSize { double x1; double x2; })_scaledDownSize:(struct CGSize { double x1; double x2; })arg1 maxWidth:(double)arg2;
+ (id)adjustedImage:(id)arg1 maxWidth:(double)arg2 screenScale:(double)arg3;
+ (id)attachmentAttributedStringWithContentId:(id)arg1 mergingAttributes:(id)arg2;
+ (id)imageAttachmentAttributedStringWithContentId:(id)arg1 imageSize:(struct CGSize { double x1; double x2; })arg2 mergingAttributes:(id)arg3;
+ (id)trimAttributedString:(id)arg1;

- (void).cxx_destruct;
- (void)_addDataDetectionAttributes:(id)arg1;
- (id)_parseHTMLBody:(id)arg1 encoding:(unsigned long long)arg2 maxLength:(unsigned long long)arg3 maxImageWidth:(double)arg4 partiallyParsed:(bool*)arg5 imageAttachmentsLoaded:(id*)arg6 urlsForValidation:(id)arg7 urlsFound:(id*)arg8;
- (bool)_validateURLsAndHTMLTagsInParsedString:(id)arg1 urlsFound:(id*)arg2;
- (void)appendImageWithSource:(id)arg1 width:(double)arg2 height:(double)arg3 stringAttributes:(id)arg4;
- (void)appendString:(id)arg1 stringAttributes:(id)arg2;
- (id)imageAtachmentsDataByContentId;
- (bool)isElementBlacklisted:(id)arg1 attributeQueryBlock:(id /* block */)arg2;
- (bool)isElementIgnorable:(id)arg1;
- (bool)isErrorTypeBlacklisted:(char *)arg1;
- (id)lock;
- (double)maxImageWidth;
- (unsigned long long)maxLength;
- (id)parseHTMLBody:(id)arg1 encoding:(unsigned long long)arg2 maxLength:(unsigned long long)arg3 maxImageWidth:(double)arg4 partiallyParsed:(bool*)arg5 imageAttachmentsLoaded:(id*)arg6 urlsForValidation:(id)arg7;
- (id)parseHTMLBody:(id)arg1 encoding:(unsigned long long)arg2 maxLength:(unsigned long long)arg3 maxImageWidth:(double)arg4 partiallyParsed:(bool*)arg5 imageAttachmentsLoaded:(id*)arg6 urlsFound:(id*)arg7;
- (id)parsedAttributedString;
- (bool*)partiallyParsed;
- (void)setImageAtachmentsDataByContentId:(id)arg1;
- (void)setLock:(id)arg1;
- (void)setMaxImageWidth:(double)arg1;
- (void)setMaxLength:(unsigned long long)arg1;
- (void)setParsedAttributedString:(id)arg1;
- (void)setPartiallyParsed:(bool*)arg1;

@end
