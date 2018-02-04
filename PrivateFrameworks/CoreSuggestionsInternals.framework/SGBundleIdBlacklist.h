/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGBundleIdBlacklist : NSObject <NSFastEnumeration> {
    NSMutableDictionary * _blacklist;
}

+ (id)defaultBlacklist;

- (void).cxx_destruct;
- (void)blacklistBundleId:(id)arg1 startDate:(id)arg2 endDate:(id)arg3;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (void)enumerateBlacklistRangesForBundleId:(id)arg1 block:(id /* block */)arg2;
- (id)init;
- (id)initWithContentsOfFile:(id)arg1;
- (id)initWithPlist:(id)arg1;
- (bool)isBlacklisted:(id)arg1 date:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToBundleIdBlacklist:(id)arg1;
- (id)plist;

@end
