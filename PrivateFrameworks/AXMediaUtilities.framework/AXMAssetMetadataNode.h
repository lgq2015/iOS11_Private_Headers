/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

@interface AXMAssetMetadataNode : AXMSourceNode

+ (bool)isSupported;
+ (bool)supportsSecureCoding;
+ (id)title;

- (void)triggerWithAssetURL:(id)arg1 cacheKey:(id)arg2 resultHandler:(id /* block */)arg3;

@end
