/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface _MRNowPlayingClientProtobuf : PBCodable <NSCopying> {
    NSString * _bundleIdentifier;
    NSString * _displayName;
    struct { 
        unsigned int nowPlayingVisibility : 1; 
        unsigned int processIdentifier : 1; 
        unsigned int processUserIdentifier : 1; 
    }  _has;
    int  _nowPlayingVisibility;
    NSString * _parentApplicationBundleIdentifier;
    int  _processIdentifier;
    int  _processUserIdentifier;
    _MRColorProtobuf * _tintColor;
}

@property (nonatomic, retain) NSString *bundleIdentifier;
@property (nonatomic, retain) NSString *displayName;
@property (nonatomic, readonly) bool hasBundleIdentifier;
@property (nonatomic, readonly) bool hasDisplayName;
@property (nonatomic) bool hasNowPlayingVisibility;
@property (nonatomic, readonly) bool hasParentApplicationBundleIdentifier;
@property (nonatomic) bool hasProcessIdentifier;
@property (nonatomic) bool hasProcessUserIdentifier;
@property (nonatomic, readonly) bool hasTintColor;
@property (nonatomic) int nowPlayingVisibility;
@property (nonatomic, retain) NSString *parentApplicationBundleIdentifier;
@property (nonatomic) int processIdentifier;
@property (nonatomic) int processUserIdentifier;
@property (nonatomic, retain) _MRColorProtobuf *tintColor;

- (int)StringAsNowPlayingVisibility:(id)arg1;
- (id)bundleIdentifier;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)displayName;
- (bool)hasBundleIdentifier;
- (bool)hasDisplayName;
- (bool)hasNowPlayingVisibility;
- (bool)hasParentApplicationBundleIdentifier;
- (bool)hasProcessIdentifier;
- (bool)hasProcessUserIdentifier;
- (bool)hasTintColor;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)nowPlayingVisibility;
- (id)nowPlayingVisibilityAsString:(int)arg1;
- (id)parentApplicationBundleIdentifier;
- (int)processIdentifier;
- (int)processUserIdentifier;
- (bool)readFrom:(id)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setHasNowPlayingVisibility:(bool)arg1;
- (void)setHasProcessIdentifier:(bool)arg1;
- (void)setHasProcessUserIdentifier:(bool)arg1;
- (void)setNowPlayingVisibility:(int)arg1;
- (void)setParentApplicationBundleIdentifier:(id)arg1;
- (void)setProcessIdentifier:(int)arg1;
- (void)setProcessUserIdentifier:(int)arg1;
- (void)setTintColor:(id)arg1;
- (id)tintColor;
- (void)writeTo:(id)arg1;

@end