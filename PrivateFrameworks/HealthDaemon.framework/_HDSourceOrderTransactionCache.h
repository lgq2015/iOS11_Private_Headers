/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface _HDSourceOrderTransactionCache : NSObject {
    NSArray * _defaultOrderedSources;
    NSMutableDictionary * _orderedSourceIDsByBundleIdentifier;
    HDProfile * _profile;
}

- (void).cxx_destruct;
- (id)_orderedSourceIDsForBundleIdentifier:(id)arg1 database:(id)arg2 error:(id*)arg3;
- (id)defaultOrderSourcesWithDatabase:(id)arg1 error:(id*)arg2;
- (id)init;
- (id)initWithProfile:(id)arg1;
- (id)orderedSourceIDsForBundleIdentifier:(id)arg1 database:(id)arg2 error:(id*)arg3;

@end
