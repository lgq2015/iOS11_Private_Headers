/* made by EzioChiu.
 */

@protocol AKTextAnnotationProtocol <NSObject>

@required

- (NSTextStorage *)annotationText;
- (bool)isEditingText;
- (void)setAnnotationText:(NSTextStorage *)arg1;
- (void)setIsEditingText:(bool)arg1;
- (void)setShouldUsePlaceholderText:(bool)arg1;
- (void)setTextIsClipped:(bool)arg1;
- (void)setTextIsFixedHeight:(bool)arg1;
- (void)setTextIsFixedWidth:(bool)arg1;
- (void)setTypingAttributes:(NSDictionary *)arg1;
- (bool)shouldUsePlaceholderText;
- (bool)textIsClipped;
- (bool)textIsFixedHeight;
- (bool)textIsFixedWidth;
- (NSDictionary *)typingAttributes;

@end
