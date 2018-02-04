/* made by EzioChiu.
 */

@protocol TSKSearchReference <NSObject, NSCopying>

@required

- (<TSKAnnotation> *)annotation;
- (bool)autohideHighlight;
- (TSKCommand *)commandForReplacingWithString:(NSString *)arg1 options:(unsigned long long)arg2;
- (NSArray *)findHighlights;
- (bool)isReplaceable;
- (<TSKModel> *)model;
- (bool)pulseHighlight;
- (<TSKSearchReference> *)searchReferenceEnd;
- (<TSKSearchReference> *)searchReferenceForReplacingWithString:(NSString *)arg1 options:(unsigned long long)arg2 authorCreatedWithCommand:(id*)arg3;
- (struct CGPoint { double x1; double x2; })searchReferencePoint;
- (<TSKSearchReference> *)searchReferenceStart;
- (TSKSelection *)selection;
- (void)setAnnotation:(id <TSKAnnotation>)arg1;
- (void)setAutohideHighlight:(bool)arg1;
- (void)setFindHighlights:(NSArray *)arg1;
- (void)setPulseHighlight:(bool)arg1;
- (void)setSearchReferencePoint:(struct CGPoint { double x1; double x2; })arg1;

@end
