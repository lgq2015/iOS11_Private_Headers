/* made by EzioChiu.
 */

@protocol _SFPBMapRegion <NSObject>

@required

- (double)eastLng;
- (bool)hasEastLng;
- (bool)hasNorthLat;
- (bool)hasSouthLat;
- (bool)hasWestLng;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (double)northLat;
- (void)setEastLng:(double)arg1;
- (void)setNorthLat:(double)arg1;
- (void)setSouthLat:(double)arg1;
- (void)setWestLng:(double)arg1;
- (double)southLat;
- (double)westLng;

@end
