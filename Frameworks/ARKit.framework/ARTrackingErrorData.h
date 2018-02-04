/* made by EzioChiu
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARTrackingErrorData : NSObject <ARResultData> {
    long long  _errorCode;
    double  _timestamp;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long errorCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) double timestamp;

- (long long)errorCode;
- (void)setErrorCode:(long long)arg1;
- (void)setTimestamp:(double)arg1;
- (double)timestamp;

@end
