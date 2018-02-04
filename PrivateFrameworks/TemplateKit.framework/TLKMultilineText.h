/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
 */

@interface TLKMultilineText : TLKObject {
    unsigned long long  _maxLines;
    NSString * _text;
}

@property unsigned long long maxLines;
@property (retain) NSString *text;

+ (id)textWithString:(id)arg1;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)maxLines;
- (id)observableProperties;
- (void)setMaxLines:(unsigned long long)arg1;
- (void)setText:(id)arg1;
- (id)text;

@end
