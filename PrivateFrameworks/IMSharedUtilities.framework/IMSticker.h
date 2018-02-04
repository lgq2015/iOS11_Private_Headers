/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

@interface IMSticker : NSObject {
    NSString * _accessibilityLabel;
    NSDictionary * _attributionInfo;
    NSString * _ballonBundleID;
    NSURL * _fileURL;
    NSString * _moodCategory;
    NSData * _recipe;
    struct NSString { Class x1; } * _stickerGUID;
    NSString * _stickerName;
    struct NSString { Class x1; } * _stickerPackGUID;
}

@property (nonatomic, copy) NSString *accessibilityLabel;
@property (nonatomic, copy) NSDictionary *attributionInfo;
@property (nonatomic, copy) NSString *ballonBundleID;
@property (nonatomic, readonly, copy) NSURL *fileURL;
@property (nonatomic, copy) NSString *moodCategory;
@property (nonatomic, retain) NSData *recipe;
@property (nonatomic, readonly, copy) NSString *stickerGUID;
@property (nonatomic, copy) NSString *stickerName;
@property (nonatomic, readonly, copy) NSString *stickerPackGUID;

- (id)accessibilityLabel;
- (id)attributionInfo;
- (id)ballonBundleID;
- (void)dealloc;
- (id)description;
- (id)fileURL;
- (unsigned long long)hash;
- (id)init;
- (id)initWithStickerID:(struct NSString { Class x1; }*)arg1 stickerPackID:(struct NSString { Class x1; }*)arg2 fileURL:(id)arg3 accessibilityLabel:(id)arg4 moodCategory:(id)arg5 stickerName:(id)arg6;
- (id)initWithStickerPropertyDictionary:(id)arg1 stickerPackID:(struct NSString { Class x1; }*)arg2 stickerPackBundlePath:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)moodCategory;
- (id)recipe;
- (void)setAccessibilityLabel:(id)arg1;
- (void)setAttributionInfo:(id)arg1;
- (void)setBallonBundleID:(id)arg1;
- (void)setMoodCategory:(id)arg1;
- (void)setRecipe:(id)arg1;
- (void)setStickerName:(id)arg1;
- (struct NSString { Class x1; }*)stickerGUID;
- (id)stickerName;
- (struct NSString { Class x1; }*)stickerPackGUID;

@end
