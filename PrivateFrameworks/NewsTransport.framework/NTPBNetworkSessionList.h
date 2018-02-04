/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBNetworkSessionList : PBCodable <FCKeyValueStoreCoding, NSCopying> {
    NSMutableArray * _networkEvents;
    NSMutableArray * _networkSessions;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableArray *networkEvents;
@property (nonatomic, retain) NSMutableArray *networkSessions;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport

+ (Class)networkEventsType;
+ (Class)networkSessionsType;

- (void)addNetworkEvents:(id)arg1;
- (void)addNetworkSessions:(id)arg1;
- (void)clearNetworkEvents;
- (void)clearNetworkSessions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)networkEvents;
- (id)networkEventsAtIndex:(unsigned long long)arg1;
- (unsigned long long)networkEventsCount;
- (id)networkSessions;
- (id)networkSessionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)networkSessionsCount;
- (bool)readFrom:(id)arg1;
- (void)setNetworkEvents:(id)arg1;
- (void)setNetworkSessions:(id)arg1;
- (void)writeTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore

+ (int)keyValuePairType;
+ (id)readValueFromKeyValuePair:(id)arg1;

- (void)writeToKeyValuePair:(id)arg1;

@end
