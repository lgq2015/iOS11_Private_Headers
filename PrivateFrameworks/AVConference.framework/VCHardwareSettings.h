/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCHardwareSettings : NSObject {
    int  _supportHEVC;
}

@property (nonatomic, readonly) bool supportHEVC;
@property (nonatomic, readonly) bool vcpSupportsHEVCEncoder;

- (id)init;
- (bool)supportHEVC;
- (bool)vcpSupportsHEVCEncoder;

@end
