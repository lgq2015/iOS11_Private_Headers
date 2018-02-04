/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMPMediaItem : SAMPMediaEntity

@property (nonatomic, copy) NSString *album;
@property (nonatomic, copy) NSString *artist;
@property (nonatomic, retain) SACalendar *dateAdded;
@property (nonatomic, retain) SACalendar *datePurchased;
@property (nonatomic, copy) NSString *genre;
@property (nonatomic, copy) NSNumber *perceivableStartTimeInSeconds;
@property (nonatomic, retain) SAMPPlaybackInfo *playbackInfo;
@property (nonatomic, retain) SAMPReleaseInfo *releaseInfo;
@property (nonatomic, copy) NSString *sortAlbum;
@property (nonatomic, copy) NSString *sortArtist;

+ (id)mediaItem;
+ (id)mediaItemWithDictionary:(id)arg1 context:(id)arg2;

- (id)album;
- (id)artist;
- (id)dateAdded;
- (id)datePurchased;
- (id)encodedClassName;
- (id)genre;
- (id)groupIdentifier;
- (id)perceivableStartTimeInSeconds;
- (id)playbackInfo;
- (id)releaseInfo;
- (void)setAlbum:(id)arg1;
- (void)setArtist:(id)arg1;
- (void)setDateAdded:(id)arg1;
- (void)setDatePurchased:(id)arg1;
- (void)setGenre:(id)arg1;
- (void)setPerceivableStartTimeInSeconds:(id)arg1;
- (void)setPlaybackInfo:(id)arg1;
- (void)setReleaseInfo:(id)arg1;
- (void)setSortAlbum:(id)arg1;
- (void)setSortArtist:(id)arg1;
- (id)sortAlbum;
- (id)sortArtist;

@end
