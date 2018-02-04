/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBSessionBatch : PBCodable <NSCopying> {
    NSMutableArray * _events;
    NTPBSession * _session;
}

@property (nonatomic, retain) NSMutableArray *events;
@property (nonatomic, readonly) bool hasSession;
@property (nonatomic, retain) NTPBSession *session;

+ (Class)eventsType;

- (void).cxx_destruct;
- (void)addEvents:(id)arg1;
- (void)clearEvents;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)events;
- (id)eventsAtIndex:(unsigned long long)arg1;
- (unsigned long long)eventsCount;
- (bool)hasSession;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)session;
- (void)setEvents:(id)arg1;
- (void)setSession:(id)arg1;
- (void)writeTo:(id)arg1;

@end
