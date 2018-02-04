/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicQuickPlayResponse : NSObject {
    NSString * _containerID;
    long long  _containerType;
    NSData * _recommendationData;
    NSDictionary * _storePlatformDictionary;
}

@property (nonatomic, retain) NSString *containerID;
@property (nonatomic) long long containerType;
@property (nonatomic, retain) NSData *recommendationData;
@property (nonatomic, retain) NSDictionary *storePlatformDictionary;

- (void).cxx_destruct;
- (id)containerID;
- (long long)containerType;
- (id)createPlaybackContext;
- (id)initWithStoreDictionary:(id)arg1;
- (id)recommendationData;
- (void)setContainerID:(id)arg1;
- (void)setContainerType:(long long)arg1;
- (void)setRecommendationData:(id)arg1;
- (void)setStorePlatformDictionary:(id)arg1;
- (id)storePlatformDictionary;

@end
