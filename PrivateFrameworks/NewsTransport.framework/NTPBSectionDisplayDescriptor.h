/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBSectionDisplayDescriptor : PBCodable <NSCopying> {
    NSString * _backgroundGradientColor;
    NSString * _discoverMoreVideosSubtitle;
    NSString * _discoverMoreVideosTitle;
    NSString * _discoverMoreVideosURLString;
    bool  _displaysAsVideoPlaylist;
    struct { 
        unsigned int displaysAsVideoPlaylist : 1; 
        unsigned int videoPlaysMutedByDefault : 1; 
    }  _has;
    NSString * _name;
    NSString * _nameColor;
    bool  _videoPlaysMutedByDefault;
}

@property (nonatomic, retain) NSString *backgroundGradientColor;
@property (nonatomic, retain) NSString *discoverMoreVideosSubtitle;
@property (nonatomic, retain) NSString *discoverMoreVideosTitle;
@property (nonatomic, copy) NSURL *discoverMoreVideosURL;
@property (nonatomic, retain) NSString *discoverMoreVideosURLString;
@property (nonatomic) bool displaysAsVideoPlaylist;
@property (nonatomic, readonly) bool hasBackgroundGradientColor;
@property (nonatomic, readonly) bool hasDiscoverMoreVideosSubtitle;
@property (nonatomic, readonly) bool hasDiscoverMoreVideosTitle;
@property (nonatomic, readonly) bool hasDiscoverMoreVideosURLString;
@property (nonatomic) bool hasDisplaysAsVideoPlaylist;
@property (nonatomic, readonly) bool hasName;
@property (nonatomic, readonly) bool hasNameColor;
@property (nonatomic) bool hasVideoPlaysMutedByDefault;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSString *nameColor;
@property (nonatomic) bool videoPlaysMutedByDefault;

// Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport

- (void).cxx_destruct;
- (id)backgroundGradientColor;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)discoverMoreVideosSubtitle;
- (id)discoverMoreVideosTitle;
- (id)discoverMoreVideosURLString;
- (bool)displaysAsVideoPlaylist;
- (bool)hasBackgroundGradientColor;
- (bool)hasDiscoverMoreVideosSubtitle;
- (bool)hasDiscoverMoreVideosTitle;
- (bool)hasDiscoverMoreVideosURLString;
- (bool)hasDisplaysAsVideoPlaylist;
- (bool)hasName;
- (bool)hasNameColor;
- (bool)hasVideoPlaysMutedByDefault;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)name;
- (id)nameColor;
- (bool)readFrom:(id)arg1;
- (void)setBackgroundGradientColor:(id)arg1;
- (void)setDiscoverMoreVideosSubtitle:(id)arg1;
- (void)setDiscoverMoreVideosTitle:(id)arg1;
- (void)setDiscoverMoreVideosURLString:(id)arg1;
- (void)setDisplaysAsVideoPlaylist:(bool)arg1;
- (void)setHasDisplaysAsVideoPlaylist:(bool)arg1;
- (void)setHasVideoPlaysMutedByDefault:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setNameColor:(id)arg1;
- (void)setVideoPlaysMutedByDefault:(bool)arg1;
- (bool)videoPlaysMutedByDefault;
- (void)writeTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday

- (id)discoverMoreVideosURL;
- (void)setDiscoverMoreVideosURL:(id)arg1;

@end
