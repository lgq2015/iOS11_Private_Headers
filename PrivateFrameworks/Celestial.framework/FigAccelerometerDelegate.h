/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface FigAccelerometerDelegate : NSObject <SBSAccelerometerDelegate> {
    int  ringIndex;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  ringMutex;
    double  ringTime;
    float  ringX;
    float  ringY;
    float  ringZ;
    SBSAccelerometer * sbsaccel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)accelerometer:(id)arg1 didAccelerateWithTimeStamp:(double)arg2 x:(float)arg3 y:(float)arg4 z:(float)arg5 eventType:(int)arg6;
- (void)dealloc;
- (void)deferOnRunloop_accelerometerEventsEnable;
- (void)getVectorX:(float*)arg1 y:(float*)arg2 z:(float*)arg3 forTimeStamp:(double)arg4;
- (id)init;

@end
