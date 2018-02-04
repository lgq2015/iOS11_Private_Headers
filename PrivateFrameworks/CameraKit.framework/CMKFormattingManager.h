/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CMKFormattingManager : NSObject {
    bool  _supportsVerticalText;
    bool  _wantsCustomKerning;
}

@property (nonatomic, readonly) bool supportsVerticalText;
@property (nonatomic, readonly) bool wantsCustomKerning;

+ (id)sharedManager;

- (void)_commonCMKFormattingManagerInitialization;
- (id)init;
- (bool)supportsVerticalText;
- (bool)wantsCustomKerning;

@end
