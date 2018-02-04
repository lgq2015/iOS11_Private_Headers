/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

@interface IMSuperToSuperSanitizerContext : IMFromSuperParserContext {
    NSMutableArray * _attachments;
    NSString * _backgroundColor;
    long long  _baseWritingDirection;
    NSMutableAttributedString * _content;
    bool  _extractAttachments;
    NSString * _foregroundColor;
    bool  _hadBaseWritingDirectionAttribute;
    unsigned long long  _offset;
}

@property (readonly, retain) NSArray *attachments;
@property (readonly, retain) NSAttributedString *sanitizedContent;

- (id)attachments;
- (void)dealloc;
- (id)initWithAttributedString:(id)arg1 extractAttachments:(bool)arg2;
- (id)name;
- (void)parser:(id)arg1 foundAttributes:(id)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 characters:(id)arg4;
- (void)parser:(id)arg1 foundAttributes:(id)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 fileTransferGUID:(id)arg4 filename:(id)arg5 bookmark:(id)arg6 width:(id)arg7 height:(id)arg8 emoji:(id)arg9;
- (void)parserDidEnd:(id)arg1;
- (void)parserDidStart:(id)arg1 bodyAttributes:(id)arg2;
- (id)resultsForLogging;
- (id)sanitizedContent;

@end
