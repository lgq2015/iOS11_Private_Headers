/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NUHTMLBuilder : NSObject {
    NSMutableString * _string;
}

@property (nonatomic, retain) NSMutableString *string;

- (void).cxx_destruct;
- (id)HTML;
- (id)URLEncode:(id)arg1;
- (id)appendBreak;
- (id)appendHTML:(id)arg1;
- (id)appendLink:(id)arg1 withURL:(id)arg2;
- (id)appendParagraph:(id)arg1;
- (id)appendParagraphText:(id)arg1;
- (id)appendStrong:(id)arg1;
- (id)appendText:(id)arg1;
- (id)encodeHTMLEntities:(id)arg1;
- (id)fullHTML;
- (id)init;
- (void)setString:(id)arg1;
- (id)string;

@end
