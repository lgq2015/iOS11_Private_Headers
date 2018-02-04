/* made by EzioChiu.
 */

@protocol TSKImageExporter <TSKRenderingExporter>

@required

- (unsigned long long)height;
- (bool)scaleToFit;
- (void)setHeight:(unsigned long long)arg1;
- (void)setScaleToFit:(bool)arg1;
- (void)setWidth:(unsigned long long)arg1;
- (unsigned long long)width;

@end
