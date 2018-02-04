/* made by EzioChiu.
 */

@protocol AKFlippableAnnotationProtocol <NSObject>

@optional

- (bool)horizontallyFlipped;
- (void)setHorizontallyFlipped:(bool)arg1;
- (void)setVerticallyFlipped:(bool)arg1;
- (bool)verticallyFlipped;

@end
