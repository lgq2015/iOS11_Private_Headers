/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
 */

@interface LPiTunesMediaPodcastEpisodeUnresolvedMetadata : NSObject <LPiTunesMediaUnresolvedMetadata> {
    NSString * _artist;
    LPiTunesMediaAsset * _artwork;
    NSString * _episodeName;
    NSArray * _offers;
    NSString * _podcastName;
    NSString * _releaseDate;
    NSString * _storeFrontIdentifier;
    NSString * _storeIdentifier;
}

@property (nonatomic, copy) NSString *artist;
@property (nonatomic, retain) LPiTunesMediaAsset *artwork;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *episodeName;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *offers;
@property (nonatomic, copy) NSString *podcastName;
@property (nonatomic, copy) NSString *releaseDate;
@property (nonatomic, copy) NSString *storeFrontIdentifier;
@property (nonatomic, copy) NSString *storeIdentifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)artist;
- (id)artwork;
- (id)assetsToResolve;
- (id)episodeName;
- (id)offers;
- (id)podcastName;
- (id)releaseDate;
- (id)resolve;
- (void)setArtist:(id)arg1;
- (void)setArtwork:(id)arg1;
- (void)setEpisodeName:(id)arg1;
- (void)setOffers:(id)arg1;
- (void)setPodcastName:(id)arg1;
- (void)setReleaseDate:(id)arg1;
- (void)setStoreFrontIdentifier:(id)arg1;
- (void)setStoreIdentifier:(id)arg1;
- (id)storeFrontIdentifier;
- (id)storeIdentifier;

@end
