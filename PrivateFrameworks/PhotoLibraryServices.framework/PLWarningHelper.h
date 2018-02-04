/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLWarningHelper : NSObject {
    NSArray * __additionalPhotoStreamAssets;
    NSArray * __assets;
    NSString * __clientName;
    long long  __style;
}

@property (setter=_setAdditionalPhotoStreamAssets:, nonatomic, retain) NSArray *_additionalPhotoStreamAssets;
@property (setter=_setAssets:, nonatomic, retain) NSArray *_assets;
@property (setter=_setClientName:, nonatomic, retain) NSString *_clientName;
@property (setter=_setStyle:, nonatomic) long long _style;

+ (void)_getWarningTitle:(id*)arg1 message:(id*)arg2 buttonTitle:(id*)arg3 forItemSuffix:(id)arg4 count:(unsigned long long)arg5 operation:(long long)arg6 clientName:(id)arg7;
+ (id)_usedElsewhereWarningTextForAssetCount:(long long)arg1 inPhotoStreamCount:(long long)arg2 iniPhotoCount:(long long)arg3 inSomeAlbumCount:(long long)arg4 affectedLocalAlbumsCount:(long long)arg5 itemKindSuffix:(id)arg6 actualDeletionCount:(long long)arg7;
+ (id)allWarningMessageCombinations;
+ (void)getAvalancheDeleteWarning:(id*)arg1 actualDeletionCount:(long long*)arg2 forAssets:(id)arg3;
+ (void)getDeletionWarningTitle:(id*)arg1 message:(id*)arg2 buttonTitle:(id*)arg3 forAlbums:(id)arg4 folders:(id)arg5 clientName:(id)arg6 style:(long long)arg7;
+ (void)getDeletionWarningTitle:(id*)arg1 message:(id*)arg2 buttonTitle:(id*)arg3 forAssets:(id)arg4 additionalPhotoStreamAssets:(id)arg5 clientName:(id)arg6 style:(long long)arg7;
+ (void)getExpungeWarningMessage:(id*)arg1 buttonTitle:(id*)arg2 forAssets:(id)arg3;
+ (void)getWarningTitle:(id*)arg1 message:(id*)arg2 buttonTitle:(id*)arg3 forAssets:(id)arg4 operation:(long long)arg5 clientName:(id)arg6;

- (id)_additionalPhotoStreamAssets;
- (id)_assets;
- (id)_clientName;
- (id)_cloudSharedWarningTextForAssets:(id)arg1;
- (void)_getDeletionWarningTitle:(id*)arg1 message:(id*)arg2 buttonTitle:(id*)arg3;
- (void)_setAdditionalPhotoStreamAssets:(id)arg1;
- (void)_setAssets:(id)arg1;
- (void)_setClientName:(id)arg1;
- (void)_setStyle:(long long)arg1;
- (long long)_style;
- (id)_usedElsewhereWarningTextForAssets:(id)arg1 additionalPhotoStreamAssets:(id)arg2 actualDeletionCount:(long long)arg3;
- (void)dealloc;

@end
