/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNXPCActivity : NSObject {
    id /* block */  _codeBlock;
    NSString * _identifier;
    unsigned long long  _networkRequirements;
    unsigned long long  _qualityOfService;
    bool  _repeat;
    bool  _runOnBattery;
    NSDate * _scheduledDate;
    bool  _shouldWakeDevice;
    double  _tolerance;
    bool  _useCoreDuetPowerBudgeting;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) unsigned long long networkRequirements;
@property (nonatomic, readonly) unsigned long long qualityOfService;
@property (nonatomic, readonly) bool repeat;
@property (nonatomic, readonly) bool runOnBattery;
@property (nonatomic, readonly) NSDate *scheduledDate;
@property (nonatomic, readonly) bool shouldWakeDevice;
@property (nonatomic, readonly) double tolerance;
@property (nonatomic, readonly) bool useCoreDuetPowerBudgeting;

- (void).cxx_destruct;
- (bool)_needsNetworkRequirement:(unsigned long long)arg1;
- (id)debugDescription;
- (id)description;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 repeat:(bool)arg2 shouldWakeDevice:(bool)arg3 useCoreDuetPowerBudgeting:(bool)arg4 runOnBattery:(bool)arg5 tolerance:(double)arg6 qualityOfService:(unsigned long long)arg7 networkRequirements:(unsigned long long)arg8;
- (void)invalidate;
- (unsigned long long)networkRequirements;
- (unsigned long long)qualityOfService;
- (double)remainingTime;
- (bool)repeat;
- (bool)runOnBattery;
- (void)scheduleForDate:(id)arg1 codeBlock:(id /* block */)arg2;
- (id)scheduledDate;
- (bool)shouldWakeDevice;
- (double)tolerance;
- (bool)useCoreDuetPowerBudgeting;

@end
