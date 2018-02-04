/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCCameraPreview : NSObject {
    bool  _isStarted;
}

@property (getter=isStarted, nonatomic) bool started;

- (id)description;
- (bool)isStarted;
- (void)setStarted:(bool)arg1;

@end
