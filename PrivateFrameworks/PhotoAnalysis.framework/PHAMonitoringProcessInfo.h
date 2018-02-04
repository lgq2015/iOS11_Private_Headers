/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

@interface PHAMonitoringProcessInfo : NSObject <NSSecureCoding> {
    double  _cpuUsagePercentage;
    unsigned long long  _memoryResidentBytes;
    double  _powerScore;
}

@property double cpuUsagePercentage;
@property unsigned long long memoryResidentBytes;
@property double powerScore;

+ (bool)supportsSecureCoding;

- (double)cpuUsagePercentage;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)memoryResidentBytes;
- (double)powerScore;
- (void)setCpuUsagePercentage:(double)arg1;
- (void)setMemoryResidentBytes:(unsigned long long)arg1;
- (void)setPowerScore:(double)arg1;

@end
