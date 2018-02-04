/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ActivitySharing.framework/ActivitySharing
 */

@interface ASCodableCloudKitRelationship : PBCodable <NSCopying> {
    NSMutableArray * _addresses;
    NSString * _cloudKitAddress;
    long long  _eventCount;
    NSMutableArray * _events;
    struct { 
        unsigned int eventCount : 1; 
    }  _has;
    NSString * _incomingHandshakeToken;
    NSString * _outgoingHandshakeToken;
    NSString * _preferredReachableAddress;
    NSString * _preferredReachableService;
    NSData * _uuid;
}

@property (nonatomic, retain) NSMutableArray *addresses;
@property (nonatomic, retain) NSString *cloudKitAddress;
@property (nonatomic) long long eventCount;
@property (nonatomic, retain) NSMutableArray *events;
@property (nonatomic, readonly) bool hasCloudKitAddress;
@property (nonatomic) bool hasEventCount;
@property (nonatomic, readonly) bool hasIncomingHandshakeToken;
@property (nonatomic, readonly) bool hasOutgoingHandshakeToken;
@property (nonatomic, readonly) bool hasPreferredReachableAddress;
@property (nonatomic, readonly) bool hasPreferredReachableService;
@property (nonatomic, readonly) bool hasUuid;
@property (nonatomic, retain) NSString *incomingHandshakeToken;
@property (nonatomic, retain) NSString *outgoingHandshakeToken;
@property (nonatomic, retain) NSString *preferredReachableAddress;
@property (nonatomic, retain) NSString *preferredReachableService;
@property (nonatomic, retain) NSData *uuid;

+ (Class)addressesType;
+ (Class)eventsType;

- (void).cxx_destruct;
- (void)addAddresses:(id)arg1;
- (void)addEvents:(id)arg1;
- (id)addresses;
- (id)addressesAtIndex:(unsigned long long)arg1;
- (unsigned long long)addressesCount;
- (void)clearAddresses;
- (void)clearEvents;
- (id)cloudKitAddress;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (long long)eventCount;
- (id)events;
- (id)eventsAtIndex:(unsigned long long)arg1;
- (unsigned long long)eventsCount;
- (bool)hasCloudKitAddress;
- (bool)hasEventCount;
- (bool)hasIncomingHandshakeToken;
- (bool)hasOutgoingHandshakeToken;
- (bool)hasPreferredReachableAddress;
- (bool)hasPreferredReachableService;
- (bool)hasUuid;
- (unsigned long long)hash;
- (id)incomingHandshakeToken;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)outgoingHandshakeToken;
- (id)preferredReachableAddress;
- (id)preferredReachableService;
- (bool)readFrom:(id)arg1;
- (void)setAddresses:(id)arg1;
- (void)setCloudKitAddress:(id)arg1;
- (void)setEventCount:(long long)arg1;
- (void)setEvents:(id)arg1;
- (void)setHasEventCount:(bool)arg1;
- (void)setIncomingHandshakeToken:(id)arg1;
- (void)setOutgoingHandshakeToken:(id)arg1;
- (void)setPreferredReachableAddress:(id)arg1;
- (void)setPreferredReachableService:(id)arg1;
- (void)setUuid:(id)arg1;
- (id)uuid;
- (void)writeTo:(id)arg1;

@end
