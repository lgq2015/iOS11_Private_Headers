/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Spotlight.framework/Spotlight
 */

@interface SPZKWSession : NSObject {
    ATXClient * _atxClient;
    _DECCachedConsumer * _cachedConsumer;
}

@property (retain) ATXClient *atxClient;
@property (retain) _DECCachedConsumer *cachedConsumer;

+ (id)cachedZKWAppBundleIDs;

- (void).cxx_destruct;
- (id)atxClient;
- (id)cachedConsumer;
- (id)init;
- (id)newQuery:(bool)arg1;
- (void)setAtxClient:(id)arg1;
- (void)setCachedConsumer:(id)arg1;

@end
