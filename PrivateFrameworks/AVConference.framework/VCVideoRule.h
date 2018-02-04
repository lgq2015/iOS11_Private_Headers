/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCVideoRule : NSObject {
    float  _frameRate;
    int  _height;
    int  _payload;
    float  _priority;
    int  _width;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic) float fPref;
@property (nonatomic, readonly) float fRate;
@property (nonatomic, readonly) int iHeight;
@property (nonatomic, readonly) int iPayload;
@property (nonatomic, readonly) int iWidth;

- (long long)compare:(id)arg1;
- (long long)compareByPref:(id)arg1;
- (id)description;
- (float)fPref;
- (float)fRate;
- (int)iHeight;
- (int)iPayload;
- (int)iWidth;
- (id)initWithFrameWidth:(int)arg1 frameHeight:(int)arg2 frameRate:(float)arg3;
- (id)initWithFrameWidth:(int)arg1 frameHeight:(int)arg2 frameRate:(float)arg3 payload:(int)arg4;
- (id)initWithFrameWidth:(int)arg1 frameHeight:(int)arg2 frameRate:(float)arg3 payload:(int)arg4 priority:(float)arg5;
- (bool)isEqual:(id)arg1;
- (void)setFPref:(float)arg1;
- (void)setFrameWidth:(int)arg1 frameHeight:(int)arg2 frameRate:(float)arg3;
- (void)setToVideoRule:(id)arg1;

@end
