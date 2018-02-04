/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface NSTimer : NSObject

@property (copy) NSDate *fireDate;
@property (readonly) double timeInterval;
@property double tolerance;
@property (readonly, retain) id userInfo;
@property (getter=isValid, readonly) bool valid;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)scheduledTimerWithTimeInterval:(double)arg1 invocation:(id)arg2 repeats:(bool)arg3;
+ (id)scheduledTimerWithTimeInterval:(double)arg1 repeats:(bool)arg2 block:(id /* block */)arg3;
+ (id)scheduledTimerWithTimeInterval:(double)arg1 target:(id)arg2 selector:(SEL)arg3 userInfo:(id)arg4 repeats:(bool)arg5;
+ (id)timerWithFireDate:(id)arg1 target:(id)arg2 selector:(SEL)arg3 userInfo:(id)arg4;
+ (id)timerWithTimeInterval:(double)arg1 invocation:(id)arg2 repeats:(bool)arg3;
+ (id)timerWithTimeInterval:(double)arg1 repeats:(bool)arg2 block:(id /* block */)arg3;
+ (id)timerWithTimeInterval:(double)arg1 target:(id)arg2 selector:(SEL)arg3 userInfo:(id)arg4 repeats:(bool)arg5;

- (double)_cffireTime;
- (struct { long long x1; void *x2; int (*x3)(); int (*x4)(); int (*x5)(); })context;
- (struct __CFString { }*)copyDebugDescription;
- (void)fire;
- (id)fireDate;
- (double)fireTime;
- (id)initWithFireDate:(id)arg1 interval:(double)arg2 repeats:(bool)arg3 block:(id /* block */)arg4;
- (id)initWithFireDate:(id)arg1 interval:(double)arg2 target:(id)arg3 selector:(SEL)arg4 userInfo:(id)arg5 repeats:(bool)arg6;
- (double)interval;
- (void)invalidate;
- (bool)isValid;
- (long long)order;
- (void)setFireDate:(id)arg1;
- (void)setFireTime:(double)arg1;
- (void)setTolerance:(double)arg1;
- (double)timeInterval;
- (double)tolerance;
- (id)userInfo;

// Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI

+ (void)blockInvoke:(id)arg1;
+ (id)pu_scheduledTimerWithTimeInterval:(double)arg1 repeats:(bool)arg2 block:(id /* block */)arg3;
+ (id)pu_scheduledTimerWithTimeInterval:(double)arg1 weakTarget:(id)arg2 selector:(SEL)arg3 userInfo:(id)arg4 repeats:(bool)arg5;
+ (id)pu_timerWithFireDate:(id)arg1 interval:(double)arg2 repeats:(bool)arg3 block:(id /* block */)arg4;

// Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport

+ (void)p_tsu_ExecuteScheduledBlock:(id)arg1;
+ (id)tsu_ScheduledTimerWithTimeInterval:(double)arg1 block:(id /* block */)arg2 repeats:(bool)arg3;
+ (id)tsu_TimerWithTimeInterval:(double)arg1 block:(id /* block */)arg2 repeats:(bool)arg3;

// Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer

+ (void)blockInvoke:(id)arg1;
+ (id)is_timerWithTimeInterval:(double)arg1 block:(id /* block */)arg2 repeats:(bool)arg3;

// Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared

+ (id)safari_scheduledTimerWithTimeInterval:(double)arg1 repeats:(bool)arg2 block:(id /* block */)arg3;
+ (id)safari_timerWithTimeInterval:(double)arg1 repeats:(bool)arg2 block:(id /* block */)arg3;

@end
