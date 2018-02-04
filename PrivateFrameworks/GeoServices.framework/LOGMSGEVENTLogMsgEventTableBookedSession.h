/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface LOGMSGEVENTLogMsgEventTableBookedSession : PBCodable <NSCopying> {
    NSString * _bookedTableSessionId;
    NSMutableArray * _bookedTables;
}

@property (nonatomic, retain) NSString *bookedTableSessionId;
@property (nonatomic, retain) NSMutableArray *bookedTables;
@property (nonatomic, readonly) bool hasBookedTableSessionId;

+ (Class)bookedTableType;

- (void).cxx_destruct;
- (void)addBookedTable:(id)arg1;
- (id)bookedTableAtIndex:(unsigned long long)arg1;
- (id)bookedTableSessionId;
- (id)bookedTables;
- (unsigned long long)bookedTablesCount;
- (void)clearBookedTables;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBookedTableSessionId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBookedTableSessionId:(id)arg1;
- (void)setBookedTables:(id)arg1;
- (void)writeTo:(id)arg1;

@end
