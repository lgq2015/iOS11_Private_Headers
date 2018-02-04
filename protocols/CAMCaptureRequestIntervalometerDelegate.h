/* made by EzioChiu.
 */

@protocol CAMCaptureRequestIntervalometerDelegate <NSObject>

@required

- (bool)intervalometer:(CAMCaptureRequestIntervalometer *)arg1 didGenerateCaptureRequest:(CAMCaptureRequest *)arg2;

@optional

- (void)intervalometerDidReachMaximumCount:(CAMCaptureRequestIntervalometer *)arg1;

@end
