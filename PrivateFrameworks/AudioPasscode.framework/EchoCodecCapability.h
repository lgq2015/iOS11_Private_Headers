/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AudioPasscode.framework/AudioPasscode
 */

@interface EchoCodecCapability : AUPasscodeCodecCapability <NSSecureCoding> {
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _frameSizeRange;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _numFrameRepeatRange;
}

@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } frameSizeRange;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } numFrameRepeatRange;

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })frameSizeRange;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })numFrameRepeatRange;

@end
