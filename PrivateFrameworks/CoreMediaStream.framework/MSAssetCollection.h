/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@interface MSAssetCollection : NSObject <NSSecureCoding> {
    NSString * _assetCollectionID;
    NSString * _ctag;
    NSArray * _derivedAssets;
    NSString * _fileName;
    long long  _initialFailureDate;
    MSAsset * _masterAsset;
    NSDate * _serverUploadedDate;
    bool  _wasDeleted;
}

@property (nonatomic, retain) NSString *assetCollectionID;
@property (nonatomic, retain) NSString *ctag;
@property (nonatomic, retain) NSArray *derivedAssets;
@property (nonatomic, retain) NSString *fileName;
@property (nonatomic) long long initialFailureDate;
@property (nonatomic, retain) MSAsset *masterAsset;
@property (nonatomic, readonly) NSData *masterAssetHash;
@property (nonatomic, retain) NSDate *serverUploadedDate;
@property (nonatomic) bool wasDeleted;

+ (id)collectionWithMasterAsset:(id)arg1 fileName:(id)arg2;
+ (id)collectionWithMasterAsset:(id)arg1 fileName:(id)arg2 derivedAssets:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)assetCollectionID;
- (id)ctag;
- (id)derivedAssets;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)fileName;
- (id)initWithCoder:(id)arg1;
- (id)initWithMasterAsset:(id)arg1 fileName:(id)arg2 derivedAssets:(id)arg3;
- (long long)initialFailureDate;
- (bool)isEqual:(id)arg1;
- (id)masterAsset;
- (id)masterAssetHash;
- (id)serverUploadedDate;
- (void)setAssetCollectionID:(id)arg1;
- (void)setCtag:(id)arg1;
- (void)setDerivedAssets:(id)arg1;
- (void)setFileName:(id)arg1;
- (void)setInitialFailureDate:(long long)arg1;
- (void)setMasterAsset:(id)arg1;
- (void)setServerUploadedDate:(id)arg1;
- (void)setWasDeleted:(bool)arg1;
- (bool)wasDeleted;

@end
