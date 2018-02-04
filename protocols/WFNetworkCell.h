/* made by EzioChiu.
 */

@protocol WFNetworkCell <NSObject>

@required

- (unsigned long long)bars;
- (bool)connectionError;
- (WFHotspotDetails *)hotspotDetails;
- (bool)personalHotspot;
- (bool)secure;
- (void)setBars:(unsigned long long)arg1;
- (void)setConnectionError:(bool)arg1;
- (void)setHotspotDetails:(WFHotspotDetails *)arg1;
- (void)setPersonalHotspot:(bool)arg1;
- (void)setSecure:(bool)arg1;
- (void)setState:(long long)arg1;
- (void)setSubtitle:(NSString *)arg1;
- (void)setTitle:(NSString *)arg1;
- (long long)state;
- (NSString *)subtitle;
- (NSString *)title;

@end
