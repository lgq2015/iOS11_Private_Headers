/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoAppMonitor.framework/NanoAppMonitor
 */

@interface NanoAppUsage : NSObject {
    NSString * _companionBundleID;
    NSDate * _lastInForeground;
    NSString * _watchBundleID;
}

@property (nonatomic, retain) NSString *companionBundleID;
@property (nonatomic, retain) NSDate *lastInForeground;
@property (nonatomic, retain) NSString *watchBundleID;

+ (id)fromDictionary:(id)arg1;

- (void).cxx_destruct;
- (id)companionBundleID;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)lastInForeground;
- (void)setCompanionBundleID:(id)arg1;
- (void)setLastInForeground:(id)arg1;
- (void)setWatchBundleID:(id)arg1;
- (id)toDictionary;
- (id)watchBundleID;

@end
