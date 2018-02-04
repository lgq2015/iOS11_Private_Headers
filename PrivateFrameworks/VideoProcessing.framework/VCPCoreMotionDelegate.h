/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface VCPCoreMotionDelegate : NSObject {
    int  accelRingIndex;
    double  accelRingTime;
    float  accelRingX;
    float  accelRingY;
    float  accelRingZ;
    struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; } * gyroFile;
    struct { 
        double w; 
        double x; 
        double y; 
        double z; 
    }  lastReadQuaternion;
    CMMotionManager * motionManager;
    NSOperationQueue * operationQueue;
    struct { 
        double w; 
        double x; 
        double y; 
        double z; 
    }  quaternionBuffer;
    int  quaternionBufferIndex;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  ringMutex;
    double  timestampBuffer;
    VCPCoreMotionDelegate * weakSelf;
}

- (void)dealloc;
- (void)didUpdateAcceleration:(struct { float x1; float x2; float x3; })arg1 time:(double)arg2;
- (struct { double x1; double x2; double x3; double x4; })getQuaternionByTimestamp:(double)arg1;
- (int)getVectorX:(float*)arg1 y:(float*)arg2 z:(float*)arg3 forTimeStamp:(double)arg4;
- (id)init;
- (void)processGyroData:(id)arg1 withError:(id)arg2;
- (void)start;
- (void)stop;

@end
