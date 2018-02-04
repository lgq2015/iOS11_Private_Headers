/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BiometricKit.framework/BiometricKit
 */

@interface BiometricKitEnrollProgressInfo : NSObject {
    NSDictionary * _captureImage;
    long long  _currentPrimaryComponentID;
    int  _message;
    NSDictionary * _messageDetails;
    long long  _progress;
    NSDictionary * _renderedImage;
}

@property (nonatomic, retain) NSDictionary *captureImage;
@property (nonatomic) long long currentPrimaryComponentID;
@property (nonatomic) int message;
@property (nonatomic, retain) NSDictionary *messageDetails;
@property (nonatomic) long long progress;
@property (nonatomic, retain) NSDictionary *renderedImage;

- (void).cxx_destruct;
- (id)captureImage;
- (long long)currentPrimaryComponentID;
- (void)dealloc;
- (id)init;
- (int)message;
- (id)messageDetails;
- (long long)progress;
- (id)renderedImage;
- (void)setCaptureImage:(id)arg1;
- (void)setCurrentPrimaryComponentID:(long long)arg1;
- (void)setMessage:(int)arg1;
- (void)setMessageDetails:(id)arg1;
- (void)setProgress:(long long)arg1;
- (void)setRenderedImage:(id)arg1;

@end
