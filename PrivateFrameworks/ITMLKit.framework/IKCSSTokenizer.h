/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKCSSTokenizer : NSObject {
    IKCSSToken * _currentToken;
    unsigned long long  currentOffset;
    IKCSSToken * reconsumeToken;
    unsigned short * textBytes;
    unsigned long long  textBytesCharCount;
}

@property (nonatomic, readonly) IKCSSToken *currentToken;

+ (bool)isDigit:(unsigned short)arg1;
+ (bool)isHexDigit:(unsigned short)arg1;
+ (bool)isLetter:(unsigned short)arg1;
+ (bool)isLowercaseLetter:(unsigned short)arg1;
+ (bool)isNameCodePoint:(unsigned short)arg1;
+ (bool)isNameStartCodePoint:(unsigned short)arg1;
+ (bool)isNewline:(unsigned short)arg1;
+ (bool)isNonASCIICodePoint:(unsigned short)arg1;
+ (bool)isNonPrintable:(unsigned short)arg1;
+ (bool)isUppercaseLetter:(unsigned short)arg1;
+ (bool)isWhitespace:(unsigned short)arg1;

- (void).cxx_destruct;
- (id)_consumeAsterisk:(unsigned long long)arg1 consumed:(unsigned long long*)arg2;
- (id)_consumeAt:(unsigned long long)arg1 consumed:(unsigned long long*)arg2;
- (id)_consumeBackslash:(unsigned long long)arg1 consumed:(unsigned long long*)arg2;
- (void)_consumeBadUrlRemnants:(unsigned long long)arg1 consumed:(unsigned long long*)arg2;
- (id)_consumeCaret:(unsigned long long)arg1 consumed:(unsigned long long*)arg2;
- (id)_consumeComment:(unsigned long long)arg1 consumed:(unsigned long long*)arg2;
- (id)_consumeDollar:(unsigned long long)arg1 consumed:(unsigned long long*)arg2;
- (id)_consumeDot:(unsigned long long)arg1 consumed:(unsigned long long*)arg2;
- (unsigned short)_consumeEscapedCodePoint:(unsigned long long)arg1 consumed:(unsigned long long*)arg2;
- (id)_consumeHash:(unsigned long long)arg1 consumed:(unsigned long long*)arg2;
- (id)_consumeIdentLike:(unsigned long long)arg1 consumed:(unsigned long long*)arg2;
- (id)_consumeLessThan:(unsigned long long)arg1 consumed:(unsigned long long*)arg2;
- (id)_consumeMinus:(unsigned long long)arg1 consumed:(unsigned long long*)arg2;
- (id)_consumeName:(unsigned long long)arg1 consumed:(unsigned long long*)arg2;
- (id)_consumeNameStart:(unsigned long long)arg1 consumed:(unsigned long long*)arg2;
- (id)_consumeNumber:(unsigned long long)arg1 consumed:(unsigned long long*)arg2;
- (id)_consumeNumeric:(unsigned long long)arg1 consumed:(unsigned long long*)arg2;
- (id)_consumePipe:(unsigned long long)arg1 consumed:(unsigned long long*)arg2;
- (id)_consumePlus:(unsigned long long)arg1 consumed:(unsigned long long*)arg2;
- (id)_consumeSlash:(unsigned long long)arg1 consumed:(unsigned long long*)arg2;
- (id)_consumeString:(unsigned long long)arg1 consumed:(unsigned long long*)arg2 toEndChar:(unsigned short)arg3;
- (id)_consumeTilde:(unsigned long long)arg1 consumed:(unsigned long long*)arg2;
- (id)_consumeToken:(unsigned long long)arg1 consumed:(unsigned long long*)arg2;
- (id)_consumeUnicodeRange:(unsigned long long)arg1 consumed:(unsigned long long*)arg2;
- (id)_consumeUrl:(unsigned long long)arg1 consumed:(unsigned long long*)arg2;
- (id)_consumeWhitespace:(unsigned long long)arg1 consumed:(unsigned long long*)arg2;
- (unsigned short)_getChar:(unsigned long long)arg1;
- (id)currentToken;
- (void)dealloc;
- (id)getNextToken;
- (id)initWithText:(id)arg1;
- (bool)isEOF:(unsigned long long)arg1;
- (bool)isValidEscape:(unsigned long long)arg1;
- (void)reconsumeToken:(id)arg1;
- (bool)wouldStartIdentifier:(unsigned long long)arg1;
- (bool)wouldStartNumber:(unsigned long long)arg1;

@end
