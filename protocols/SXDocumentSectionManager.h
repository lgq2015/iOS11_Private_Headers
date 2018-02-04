/* made by EzioChiu.
 */

@protocol SXDocumentSectionManager <NSObject>

@required

- (void)applySectionBlueprint:(id <SXDocumentSectionBlueprint>)arg1 identifier:(NSString *)arg2 offset:(struct CGPoint { double x1; double x2; })arg3 width:(double)arg4;
- (double)heightForBlueprint:(id <SXDocumentSectionBlueprint>)arg1 width:(double)arg2;

@end
