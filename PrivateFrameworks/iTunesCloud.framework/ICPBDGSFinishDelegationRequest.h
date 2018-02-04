/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICPBDGSFinishDelegationRequest : PBRequest <NSCopying> {
    NSMutableArray * _playerDelegateInfoTokens;
}

@property (nonatomic, retain) NSMutableArray *playerDelegateInfoTokens;

+ (Class)playerDelegateInfoTokenType;

- (void).cxx_destruct;
- (void)addPlayerDelegateInfoToken:(id)arg1;
- (void)clearPlayerDelegateInfoTokens;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)playerDelegateInfoTokenAtIndex:(unsigned long long)arg1;
- (id)playerDelegateInfoTokens;
- (unsigned long long)playerDelegateInfoTokensCount;
- (bool)readFrom:(id)arg1;
- (void)setPlayerDelegateInfoTokens:(id)arg1;
- (void)writeTo:(id)arg1;

@end