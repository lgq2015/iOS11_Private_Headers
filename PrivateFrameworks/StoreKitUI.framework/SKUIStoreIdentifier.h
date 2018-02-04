/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIStoreIdentifier : NSObject <NSCopying> {
    NSString * _bundleIdentifier;
    NSNumber * _itemIdentifier;
    NSString * _podcastFeedURLIdentifier;
}

@property (nonatomic, retain) NSString *bundleIdentifier;
@property (nonatomic, readonly) NSNumber *itemIdentifier;
@property (nonatomic, retain) NSString *podcastFeedURLIdentifier;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithLongLong:(long long)arg1;
- (id)initWithNumber:(id)arg1;
- (id)initWithPodcastFeedURL:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)itemIdentifier;
- (long long)longLongValue;
- (id)numberValue;
- (id)podcastFeedURLIdentifier;
- (void)setBundleIdentifier:(id)arg1;
- (void)setPodcastFeedURLIdentifier:(id)arg1;
- (id)stringValue;

@end
