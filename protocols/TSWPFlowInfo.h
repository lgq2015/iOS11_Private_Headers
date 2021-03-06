/* made by EzioChiu.
 */

@protocol TSWPFlowInfo <NSObject, TSKDocumentObject>

@required

+ (TSUColor *)fillColorForUserInterfaceIdentifier:(unsigned long long)arg1;
+ (TSUColor *)strokeColorForUserInterfaceIdentifier:(unsigned long long)arg1;

- (NSString *)displayNameOfMaxLength:(unsigned long long)arg1 usesEllipsis:(bool)arg2;
- (unsigned long long)indexOfTextBox:(TSWPShapeInfo *)arg1;
- (bool)isLocked;
- (void)setTextboxes:(NSArray *)arg1;
- (void)setUserInterfaceIdentifier:(unsigned long long)arg1;
- (TSWPStorage *)textStorage;
- (NSArray *)textboxes;
- (TSUColor *)userInterfaceFillColor;
- (unsigned long long)userInterfaceIdentifier;
- (TSUColor *)userInterfaceStrokeColor;

@end
