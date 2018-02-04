/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNPreviewExporter : KNSlideExporter <TSKImageExporter>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long height;
@property (nonatomic) bool scaleToFit;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long width;

- (unsigned long long)height;
- (id)p_renderingExporterDelegate;
- (bool)scaleToFit;
- (void)setHeight:(unsigned long long)arg1;
- (void)setScaleToFit:(bool)arg1;
- (void)setWidth:(unsigned long long)arg1;
- (void)setup;
- (unsigned long long)width;

@end
