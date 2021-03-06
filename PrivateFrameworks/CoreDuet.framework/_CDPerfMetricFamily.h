/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _CDPerfMetricFamily : NSObject {
    NSString * _name;
    NSMutableDictionary * _perfMetrics;
    BOOL  _region_path;
    struct cdpm_shared_memory_region_s { BOOL x1; BOOL x2[1024]; struct cdpm_shared_memory_slot_s { BOOL x_3_1_1[32]; struct XSPerfCounter { unsigned long long x_2_2_1; } x_3_1_2[8]; struct XSPerfMetric { unsigned long long x_3_2_1[32]; } x_3_1_3[1]; } x3[256]; } * _sharedMemoryRegion;
}

@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) NSString *identifier;
@property (readonly) NSString *name;
@property (readonly) NSMutableDictionary *perfMetrics;
@property (nonatomic, readonly) NSString *process;
@property (readonly) struct cdpm_shared_memory_region_s { BOOL x1; BOOL x2[1024]; struct cdpm_shared_memory_slot_s { BOOL x_3_1_1[32]; struct XSPerfCounter { unsigned long long x_2_2_1; } x_3_1_2[8]; struct XSPerfMetric { unsigned long long x_3_2_1[32]; } x_3_1_3[1]; } x3[256]; }*sharedMemoryRegion;

+ (id)allPerfMetricFamilies;
+ (id)defaultPerfMetricFamily;
+ (id)perfMetricFamilyWithRegionPath:(id)arg1 name:(id)arg2;
+ (id)regionPathForIdentifier:(id)arg1 signingIdentifier:(id)arg2;

- (void).cxx_destruct;
- (id)allPerfMetrics;
- (id)bundleIdentifier;
- (id)description;
- (id)identifier;
- (id)initWithRegionPath:(id)arg1 name:(id)arg2;
- (id)name;
- (id)perfMetricWithName:(id)arg1 userInfo:(id)arg2;
- (id)perfMetrics;
- (id)process;
- (struct cdpm_shared_memory_region_s { BOOL x1; BOOL x2[1024]; struct cdpm_shared_memory_slot_s { BOOL x_3_1_1[32]; struct XSPerfCounter { unsigned long long x_2_2_1; } x_3_1_2[8]; struct XSPerfMetric { unsigned long long x_3_2_1[32]; } x_3_1_3[1]; } x3[256]; }*)sharedMemoryRegion;

@end
