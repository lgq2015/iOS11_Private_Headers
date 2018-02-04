/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSUICellularUsageApp : NSObject {
    NSString * _bundleIdentifier;
    double  _bytesUsedLastCycle;
    double  _bytesUsedThisCycle;
    NSString * _displayName;
    double  _roamingBytesUsedLastCycle;
    double  _roamingBytesUsedThisCycle;
    double  _totalBytesUsed;
    double  _totalRoamingBytesUsed;
}

@property (nonatomic, retain) NSString *bundleIdentifier;
@property (nonatomic) double bytesUsedLastCycle;
@property (nonatomic) double bytesUsedThisCycle;
@property (nonatomic, retain) NSString *displayName;
@property (nonatomic) double roamingBytesUsedLastCycle;
@property (nonatomic) double roamingBytesUsedThisCycle;
@property (nonatomic) double totalBytesUsed;
@property (nonatomic) double totalRoamingBytesUsed;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (double)bytesUsedLastCycle;
- (double)bytesUsedThisCycle;
- (id)description;
- (id)displayName;
- (double)roamingBytesUsedLastCycle;
- (double)roamingBytesUsedThisCycle;
- (void)setBundleIdentifier:(id)arg1;
- (void)setBytesUsedLastCycle:(double)arg1;
- (void)setBytesUsedThisCycle:(double)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setRoamingBytesUsedLastCycle:(double)arg1;
- (void)setRoamingBytesUsedThisCycle:(double)arg1;
- (void)setTotalBytesUsed:(double)arg1;
- (void)setTotalRoamingBytesUsed:(double)arg1;
- (double)totalBytesUsed;
- (double)totalRoamingBytesUsed;

@end
