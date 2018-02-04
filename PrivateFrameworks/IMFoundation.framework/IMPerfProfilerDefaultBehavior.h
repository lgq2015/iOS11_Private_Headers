/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@interface IMPerfProfilerDefaultBehavior : NSObject <IMPerfProfilerBehavior>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)instance;

- (void)perfProfiler:(id)arg1 measurementDidFinish:(struct IMPerfMeasurement_t { struct IMFileLocation_t { char *x_1_1_1; char *x_1_1_2; char *x_1_1_3; char *x_1_1_4; int x_1_1_5; } x1; unsigned long long x2; unsigned long long x3; struct __CFString {} *x4; double x5; double x6; double x7; }*)arg2 withSink:(id)arg3;

@end
