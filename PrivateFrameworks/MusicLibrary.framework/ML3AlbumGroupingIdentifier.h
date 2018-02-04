/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3AlbumGroupingIdentifier : NSObject <NSCopying> {
    long long  _albumArtistPersistentID;
    bool  _compilation;
    NSString * _feedURL;
    NSData * _groupingKey;
    long long  _seasonNumber;
}

@property (nonatomic, readonly) long long albumArtistPersistentID;
@property (nonatomic, readonly) bool compilation;
@property (nonatomic, readonly) NSString *feedURL;
@property (nonatomic, readonly) NSData *groupingKey;
@property (nonatomic, readonly) NSData *keyValue;
@property (nonatomic, readonly) long long seasonNumber;

- (void).cxx_destruct;
- (long long)albumArtistPersistentID;
- (bool)compilation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)feedURL;
- (id)groupingKey;
- (unsigned long long)hash;
- (id)initWithAlbumArtistPersistentID:(long long)arg1 groupingKey:(id)arg2 feedURL:(id)arg3 seasonNumber:(long long)arg4 compilation:(bool)arg5;
- (bool)isEqual:(id)arg1;
- (id)keyValue;
- (long long)seasonNumber;

@end
