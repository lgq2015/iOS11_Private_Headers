/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

@interface SiriUISuggestionsHeaderText : NSObject <NSCopying> {
    NSString * _compactString;
    NSString * _regularString;
    long long  _textAlignment;
}

@property (nonatomic, readonly) NSAttributedString *attributedStringForMainScreenTraitCollection;
@property (nonatomic, copy) NSString *compactString;
@property (nonatomic, copy) NSString *regularString;
@property (nonatomic) long long textAlignment;

- (void).cxx_destruct;
- (id)_attributedStringWithString:(id)arg1;
- (id)attributedStringForMainScreenTraitCollection;
- (id)compactString;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithRegularString:(id)arg1 compactString:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)regularString;
- (void)setCompactString:(id)arg1;
- (void)setRegularString:(id)arg1;
- (void)setTextAlignment:(long long)arg1;
- (long long)textAlignment;

@end
