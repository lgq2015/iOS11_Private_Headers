/* made by EzioChiu
   Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

@interface PDFActionNamed : PDFAction <NSCopying> {
    PDFActionNamedPrivateVars * _private2;
}

@property (nonatomic) long long name;

- (void).cxx_destruct;
- (void)addNameToDictionaryRef:(struct __CFDictionary { }*)arg1;
- (void)commonInit;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (const struct __CFDictionary { }*)createDictionaryRef;
- (id)description;
- (id)initWithActionDictionary:(struct CGPDFDictionary { }*)arg1 forDocument:(id)arg2 forPage:(id)arg3;
- (id)initWithName:(long long)arg1;
- (long long)name;
- (void)setName:(long long)arg1;
- (id)toolTip;

@end
