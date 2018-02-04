/* made by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHAssetPhotosOneUpProperties : PHAssetPropertySet {
    NSData * _reverseLocationData;
    bool  _reverseLocationDataIsValid;
    unsigned long long  _variationSuggestionStates;
}

@property (nonatomic, readonly) NSDictionary *locationAddressDictionary;
@property (nonatomic, readonly) NSData *reverseLocationData;
@property (nonatomic, readonly) bool reverseLocationDataIsValid;
@property (nonatomic, readonly) unsigned long long variationSuggestionStates;

+ (id)propertiesToFetch;
+ (id)propertySetName;

- (void).cxx_destruct;
- (id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(bool)arg3;
- (id)localizedGeoDescriptionIsHome:(bool*)arg1;
- (id)locationAddressDictionary;
- (id)reverseLocationData;
- (bool)reverseLocationDataIsValid;
- (unsigned long long)variationSuggestionStates;

@end
