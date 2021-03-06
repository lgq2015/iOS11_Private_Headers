/* made by EzioChiu.
 */

@protocol MusicJSProductNativeViewController <JSExport, MusicJSNativeViewController>

@required

- (void)presentShareDocument:(IKDOMDocument *)arg1 :(NSDictionary *)arg2;
- (void)setNumberOfLikes:(unsigned long long)arg1;
- (void)setProductEntityValueProvider:(NSDictionary *)arg1;
- (void)setProminentTrackStoreID:(NSString *)arg1;
- (void)setRelatedContentDocument:(IKDOMDocument *)arg1 :(NSDictionary *)arg2;
- (void)setReportingInformation:(NSDictionary *)arg1;
- (void)setTracklistItems:(NSArray *)arg1;
- (void)setUberParameters:(NSDictionary *)arg1;

@end
