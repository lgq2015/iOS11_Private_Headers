/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface _MPMediaLibraryArtworkVisualIdenticalityIdentifier : NSObject <MPArtworkDataSourceVisualIdenticality> {
    long long  _artworkType;
    NSString * _availableArtworkToken;
    NSString * _fetchableArtworkToken;
}

@property (nonatomic, readonly) long long artworkType;
@property (nonatomic, readonly) NSString *availableArtworkToken;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *fetchableArtworkToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)artworkType;
- (id)availableArtworkToken;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)fetchableArtworkToken;
- (unsigned long long)hash;
- (id)init;
- (id)initWithArtworkType:(long long)arg1 availableArtworkToken:(id)arg2 fetchableArtworkToken:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)stringRepresentation;

@end