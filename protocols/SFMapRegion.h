/* made by EzioChiu.
 */

@protocol SFMapRegion <NSObject>

@required

- (NSDictionary *)dictionaryRepresentation;
- (double)eastLng;
- (NSData *)jsonData;
- (double)northLat;
- (void)setEastLng:(double)arg1;
- (void)setNorthLat:(double)arg1;
- (void)setSouthLat:(double)arg1;
- (void)setWestLng:(double)arg1;
- (double)southLat;
- (double)westLng;

@end
