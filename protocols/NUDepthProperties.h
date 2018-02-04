/* made by EzioChiu.
 */

@protocol NUDepthProperties <NSObject>

@required

- (NSDictionary *)auxiliaryData:(out id*)arg1;
- (AVDepthData *)depthData:(out id*)arg1;
- (NSString *)depthType;
- (struct { long long x1; long long x2; })size;

@end
