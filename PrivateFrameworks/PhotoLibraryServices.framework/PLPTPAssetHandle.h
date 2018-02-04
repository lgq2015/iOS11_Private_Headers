/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLPTPAssetHandle : NSObject {
    NSManagedObjectID * _assetID;
    bool  _requiresConversion;
    NSManagedObjectID * _sidecarID;
    long long  _type;
}

@property (nonatomic, readonly, copy) NSManagedObjectID *assetID;
@property (nonatomic, readonly) bool requiresConversion;
@property (nonatomic, readonly, copy) NSManagedObjectID *sidecarID;
@property (nonatomic, readonly) long long type;

- (void).cxx_destruct;
- (id)assetHandleBySettingRequiresConversion;
- (id)assetID;
- (id)description;
- (id)initWithType:(long long)arg1 assetID:(id)arg2 sidecarID:(id)arg3 requiresConversion:(bool)arg4;
- (bool)isEqual:(id)arg1;
- (bool)requiresConversion;
- (id)sidecarID;
- (long long)type;

@end
