/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

@interface AWDAccountsRenewCredentialsEnd : PBCodable <NSCopying> {
    NSString * _accountType;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int result : 1; 
    }  _has;
    unsigned int  _result;
    unsigned long long  _timestamp;
}

@property (nonatomic, retain) NSString *accountType;
@property (nonatomic, readonly) bool hasAccountType;
@property (nonatomic) bool hasResult;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned int result;
@property (nonatomic) unsigned long long timestamp;

- (void).cxx_destruct;
- (id)accountType;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAccountType;
- (bool)hasResult;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)result;
- (void)setAccountType:(id)arg1;
- (void)setHasResult:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setResult:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
