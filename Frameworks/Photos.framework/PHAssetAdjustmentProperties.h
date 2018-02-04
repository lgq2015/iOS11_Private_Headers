/* made by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHAssetAdjustmentProperties : PHAssetPropertySet {
    NSString * _formatIdentifier;
    NSString * _formatVersion;
}

@property (nonatomic, readonly) NSString *formatIdentifier;
@property (nonatomic, readonly) NSString *formatVersion;

+ (id)propertiesToFetch;
+ (id)propertySetName;

- (void).cxx_destruct;
- (id)formatIdentifier;
- (id)formatVersion;
- (id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(bool)arg3;

@end
