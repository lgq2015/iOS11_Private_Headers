/* made by EzioChiu.
 */

@protocol VNTrackerProviding

@required

- (void)releaseTracker:(VNTracker *)arg1;
- (VNTracker *)trackerWithOptions:(NSDictionary *)arg1 error:(id*)arg2;

@end
