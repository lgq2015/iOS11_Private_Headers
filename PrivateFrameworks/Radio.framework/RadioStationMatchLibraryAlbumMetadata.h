/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioStationMatchLibraryAlbumMetadata : RadioStationMatchMetadata {
    NSString * _albumName;
    NSNumber * _albumStoreID;
    NSNumber * _representativeCloudID;
}

@property (nonatomic, copy) NSString *albumName;
@property (nonatomic, copy) NSNumber *albumStoreID;
@property (nonatomic, copy) NSNumber *representativeCloudID;

+ (id)metadataKey;

- (void).cxx_destruct;
- (id)albumName;
- (id)albumStoreID;
- (id)copyMetadataDictionary;
- (id)representativeCloudID;
- (void)setAlbumName:(id)arg1;
- (void)setAlbumStoreID:(id)arg1;
- (void)setRepresentativeCloudID:(id)arg1;

@end
