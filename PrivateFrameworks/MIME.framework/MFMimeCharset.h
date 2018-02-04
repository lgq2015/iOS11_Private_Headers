/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@interface MFMimeCharset : NSObject {
    unsigned int  _canBeUsedForOutgoingMessages;
    NSString * _charsetName;
    unsigned int  _coversLargeUnicodeSubset;
    unsigned int  _encoding;
    NSString * _primaryLanguage;
    unsigned int  _useBase64InHeaders;
}

+ (id)allMimeCharsets;
+ (id)allMimeCharsets:(bool)arg1;
+ (id)charsetForEncoding:(unsigned int)arg1;
+ (id)preferredMimeCharset;

- (void)_setPrimaryLanguage:(id)arg1;
- (bool)canBeUsedForOutgoingMessages;
- (id)charsetName;
- (bool)coversLargeUnicodeSubset;
- (void)dealloc;
- (id)description;
- (id)displayName;
- (unsigned int)encoding;
- (id)initWithEncoding:(unsigned int)arg1;
- (id)primaryLanguage;
- (bool)useBase64InHeaders;

@end
