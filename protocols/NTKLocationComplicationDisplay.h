/* made by EzioChiu.
 */

@protocol NTKLocationComplicationDisplay <NTKComplicationDisplay>

@required

- (void)setLatitude:(NSString *)arg1 longitude:(NSString *)arg2;

@optional

- (void)setLocationName:(NSString *)arg1;
- (void)setValidLocation:(bool)arg1;

@end
