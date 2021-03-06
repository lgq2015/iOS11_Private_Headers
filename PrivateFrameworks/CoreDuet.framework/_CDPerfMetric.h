/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _CDPerfMetric : NSObject {
    NSString * _name;
    struct XSPerfCollection { id x1; unsigned int x2; struct XSPerfCounter {} *x3; struct XSPerfMetric {} *x4; char *x5; } * _stats;
    NSDictionary * _userInfo;
}

@property (readonly) double averageElapsedTime;
@property (readonly) unsigned long long count;
@property (readonly) unsigned long long errorCount;
@property (readonly) double lastElapsedTime;
@property (readonly) unsigned long long lastResultCount;
@property (readonly) NSDate *lastUpdate;
@property (readonly) double maximumElapsedTime;
@property (readonly) double minimumElapsedTime;
@property (readonly) NSString *name;
@property (readonly) NSDictionary *userInfo;

+ (id)perfMetricForFetchRequest:(id)arg1;
+ (id)perfMetricWithName:(id)arg1 userInfo:(id)arg2;

- (void).cxx_destruct;
- (double)averageElapsedTime;
- (unsigned long long)count;
- (void)dealloc;
- (id)description;
- (id)elapsedTimeHistogram;
- (unsigned long long)errorCount;
- (id)initWithName:(id)arg1 userInfo:(id)arg2 sharedMemoryRegion:(struct cdpm_shared_memory_region_s { BOOL x1; BOOL x2[1024]; struct cdpm_shared_memory_slot_s { BOOL x_3_1_1[32]; struct XSPerfCounter { unsigned long long x_2_2_1; } x_3_1_2[8]; struct XSPerfMetric { unsigned long long x_3_2_1[32]; } x_3_1_3[1]; } x3[256]; }*)arg3;
- (double)lastElapsedTime;
- (unsigned long long)lastResultCount;
- (id)lastUpdate;
- (double)maximumElapsedTime;
- (double)minimumElapsedTime;
- (id)name;
- (id)userInfo;

@end
