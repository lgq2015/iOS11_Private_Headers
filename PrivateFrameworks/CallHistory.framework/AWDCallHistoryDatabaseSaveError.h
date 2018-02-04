/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
 */

@interface AWDCallHistoryDatabaseSaveError : PBCodable <NSCopying> {
    unsigned int  _domain;
    unsigned int  _error;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int domain : 1; 
        unsigned int error : 1; 
    }  _has;
    NSString * _table;
    unsigned long long  _timestamp;
}

@property (nonatomic) unsigned int domain;
@property (nonatomic) unsigned int error;
@property (nonatomic) bool hasDomain;
@property (nonatomic) bool hasError;
@property (nonatomic, readonly) bool hasTable;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic, retain) NSString *table;
@property (nonatomic) unsigned long long timestamp;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)domain;
- (unsigned int)error;
- (bool)hasDomain;
- (bool)hasError;
- (bool)hasTable;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDomain:(unsigned int)arg1;
- (void)setError:(unsigned int)arg1;
- (void)setHasDomain:(bool)arg1;
- (void)setHasError:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setTable:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (id)table;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
