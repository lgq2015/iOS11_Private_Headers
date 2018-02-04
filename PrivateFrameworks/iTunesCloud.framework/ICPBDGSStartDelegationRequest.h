/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICPBDGSStartDelegationRequest : PBRequest <NSCopying> {
    NSMutableArray * _playerInfoContextRequestTokens;
}

@property (nonatomic, retain) NSMutableArray *playerInfoContextRequestTokens;

+ (Class)playerInfoContextRequestTokenType;

- (void).cxx_destruct;
- (void)addPlayerInfoContextRequestToken:(id)arg1;
- (void)clearPlayerInfoContextRequestTokens;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)playerInfoContextRequestTokenAtIndex:(unsigned long long)arg1;
- (id)playerInfoContextRequestTokens;
- (unsigned long long)playerInfoContextRequestTokensCount;
- (bool)readFrom:(id)arg1;
- (void)setPlayerInfoContextRequestTokens:(id)arg1;
- (void)writeTo:(id)arg1;

@end
