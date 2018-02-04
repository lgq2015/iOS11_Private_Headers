/* made by EzioChiu.
 */

@protocol NTKCFaceDetailDataSourcesSectionDelegate <NSObject>

@required

- (void)dataSourcesSection:(NTKCFaceDetailDataSourcesSectionController *)arg1 didChangeDataSources:(NTKUpNextDisabledDataSourcesEditOption *)arg2 forMode:(long long)arg3;
- (void)dataSourcesSectionDidFinishLoading:(NTKCFaceDetailDataSourcesSectionController *)arg1;

@end
