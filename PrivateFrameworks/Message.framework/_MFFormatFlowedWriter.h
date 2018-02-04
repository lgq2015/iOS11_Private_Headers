/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface _MFFormatFlowedWriter : NSObject {
    unsigned int  _addedTrailingSpaces;
    unsigned int  _encoding;
    MFPlainTextDocument * _inputDocument;
    NSMutableString * _lineString;
    NSMutableString * _outputString;
    NSMutableString * _quotedString;
}

+ (id)newWithPlainTextDocument:(id)arg1 encoding:(unsigned int)arg2;

- (unsigned long long)_findLineBreakInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 maxCharWidthCount:(unsigned long long)arg2 endIsURL:(bool)arg3;
- (void)_outputQuotedParagraph:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 withQuoteLevel:(unsigned int)arg3;
- (bool)addedTrailingSpaces;
- (void)dealloc;
- (id)outputString;
- (id)quotedString;

@end
