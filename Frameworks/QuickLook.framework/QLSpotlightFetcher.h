/* made by EzioChiu
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLSpotlightFetcher : QLItemFetcher {
    NSString * _applicationBundleIdentifier;
    NSString * _queryString;
    NSString * _searchableItemUniqueIdentifier;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (void)fetchContentWithAllowedOutputClasses:(id)arg1 inQueue:(id)arg2 updateBlock:(id /* block */)arg3 completionBlock:(id /* block */)arg4;
- (id)initWithCoder:(id)arg1;
- (id)initWithSearchableItemUniqueIdentifier:(id)arg1 queryString:(id)arg2 applicationBundleIdentifier:(id)arg3;
- (bool)isLongFetchOperation;
- (id)itemSize;

@end
