/* made by EzioChiu.
 */

@protocol FxParameterSettingAPI_v3 <FxParameterSettingAPI_v2>

@required

- (bool)setCustomParameterValue:(id <NSCoding>)arg1 toParm:(unsigned int)arg2 atTime:(double)arg3;
- (bool)setPathID:(void*)arg1 toParm:(unsigned int)arg2 atTime:(double)arg3;

@end
