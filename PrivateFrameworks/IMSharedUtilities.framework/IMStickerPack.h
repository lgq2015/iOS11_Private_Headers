/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

@interface IMStickerPack : NSObject {
    struct NSString { Class x1; } * _GUID;
    NSString * _appBundleIdentifier;
    NSString * _appVersion;
    NSURL * _displayAssetURL;
    NSURL * _fileURL;
    NSString * _name;
    NSMutableSet * _stickers;
}

@property (nonatomic, copy) NSString *GUID;
@property (nonatomic, copy) NSString *appBundleIdentifier;
@property (nonatomic, copy) NSString *appVersion;
@property (nonatomic, copy) NSURL *displayAssetURL;
@property (nonatomic, copy) NSURL *fileURL;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, readonly) NSSet *stickers;

- (struct NSString { Class x1; }*)GUID;
- (id)_generatePackGUIDWithPackID:(id)arg1 appBundleID:(id)arg2 appVersion:(id)arg3;
- (void)addSticker:(id)arg1;
- (id)appBundleIdentifier;
- (id)appVersion;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)displayAssetURL;
- (id)fileURL;
- (id)initWithDictionary:(id)arg1;
- (id)initWithGUID:(struct NSString { Class x1; }*)arg1 name:(id)arg2 displayAssetURL:(id)arg3 fileURL:(id)arg4 appBundleIdentifier:(id)arg5 appVersion:(id)arg6;
- (id)initWithStickerPackProperties:(id)arg1 stickerPackBundleURL:(id)arg2 appBundleIdentifier:(id)arg3 appVersion:(id)arg4;
- (id)name;
- (void)setAppBundleIdentifier:(id)arg1;
- (void)setAppVersion:(id)arg1;
- (void)setDisplayAssetURL:(id)arg1;
- (void)setFileURL:(id)arg1;
- (void)setGUID:(struct NSString { Class x1; }*)arg1;
- (void)setName:(id)arg1;
- (id)stickers;

@end
