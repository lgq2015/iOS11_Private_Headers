/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPCloudControllerItemIDList : NSObject {
    HSCloudItemIDList * _cloudItemIDList;
}

+ (id)cloudItemIDListForPlaylist:(id)arg1;

- (void).cxx_destruct;
- (id)HSCloudItemIDList;
- (void)addCloudItemID:(unsigned long long)arg1 idType:(long long)arg2;
- (id)init;
- (void)insertCloudItemID:(unsigned long long)arg1 idType:(long long)arg2 atIndex:(unsigned long long)arg3;

@end
