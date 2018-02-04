/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPStoreAssetPlaybackResponse : NSObject <NSCopying, NSMutableCopying> {
    NSDictionary * _dialogDictionary;
    NSDate * _expirationDate;
    NSArray * _fileAssetInfoList;
    MPStoreHLSAssetInfo * _hlsAssetInfo;
    id  _suzeLeaseID;
}

@property (nonatomic, readonly, copy) NSDictionary *dialogDictionary;
@property (nonatomic, readonly, copy) NSDate *expirationDate;
@property (nonatomic, readonly, copy) NSArray *fileAssetInfoList;
@property (nonatomic, readonly) MPStoreHLSAssetInfo *hlsAssetInfo;
@property (nonatomic, readonly) id suzeLeaseID;

- (void).cxx_destruct;
- (id)_copyWithPlaybackResponseClass:(Class)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dialogDictionary;
- (id)expirationDate;
- (id)fileAssetInfoList;
- (id)hlsAssetInfo;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)suzeLeaseID;

@end
