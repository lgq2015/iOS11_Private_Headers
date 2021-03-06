/* made by EzioChiu
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CADisplayLink : NSObject {
    void * _impl;
}

@property (nonatomic, readonly) CADisplay *display;
@property (nonatomic, readonly) double duration;
@property (nonatomic) long long frameInterval;
@property (nonatomic, readonly) double heartbeatRate;
@property (nonatomic, readonly) double maximumRefreshRate;
@property (nonatomic, readonly) long long minimumFrameDuration;
@property (getter=isPaused, nonatomic) bool paused;
@property (nonatomic) long long preferredFramesPerSecond;
@property (nonatomic, readonly) double targetTimestamp;
@property (nonatomic, readonly) double timestamp;
@property (nonatomic, retain) id userInfo;

// Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore

+ (id)displayLinkWithDisplay:(id)arg1 target:(id)arg2 selector:(SEL)arg3;
+ (id)displayLinkWithTarget:(id)arg1 selector:(SEL)arg2;

- (id)_initWithDisplayLinkItem:(struct DisplayLinkItem { struct Display {} *x1; void *x2; SEL x3; void *x4; int x5; int x6; struct Mutex { struct _opaque_pthread_mutex_t { long long x_1_2_1; BOOL x_1_2_2[56]; } x_7_1_1; } x7; struct Condition { struct _opaque_pthread_cond_t { long long x_1_2_1; BOOL x_1_2_2[40]; } x_8_1_1; } x8; struct _opaque_pthread_t {} *x9; id x10; /* Warning: Unrecognized filer type: 'R' using 'void*' */ void*x11; void*x12; float x13; void*x14; unsigned char x15; SEL x16; SEL x17; long doublex18; int x19; short x20; void*x21; long x22; void*x23; void*x24; SEL x25; SEL x26; long doublex27; int x28; short x29; void*x30; long x31; void*x32; void*x33; unsigned long x34; int x35; in void*x36; void*x37; void*x38; struct DisplayLink {} *x39; }*)arg1;
- (long long)actualFramesPerSecond;
- (void)addToRunLoop:(id)arg1 forMode:(id)arg2;
- (void)dealloc;
- (id)display;
- (double)duration;
- (long long)frameInterval;
- (double)heartbeatRate;
- (void)invalidate;
- (bool)isPaused;
- (double)maximumRefreshRate;
- (long long)minimumFrameDuration;
- (long long)preferredFramesPerSecond;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)setFrameInterval:(long long)arg1;
- (void)setPaused:(bool)arg1;
- (void)setPreferredFramesPerSecond:(long long)arg1;
- (void)setUserInfo:(id)arg1;
- (double)targetTimestamp;
- (double)timestamp;
- (id)userInfo;

// Image: /System/Library/PrivateFrameworks/NetAppsUtilitiesUI.framework/NetAppsUtilitiesUI

+ (id)naui_displayLinkWithWeakTarget:(id)arg1 selector:(SEL)arg2;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

+ (id)px_displayLinkWithWeakTarget:(id)arg1 selector:(SEL)arg2;

// Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos

+ (id)rc_displayLinkWithWeakTarget:(id)arg1 selector:(SEL)arg2;
+ (id)rc_displayWithFrameInterval:(long long)arg1 handlerBlock:(id /* block */)arg2;

@end
