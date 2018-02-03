/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDMDNSResponderResolveStatsDNSServer : PBCodable <NSCopying> {
    NSData * _address;
    struct { 
        unsigned int networkType : 1; 
        unsigned int serverID : 1; 
    }  _has;
    int  _networkType;
    unsigned int  _serverID;
}

@property (nonatomic, retain) NSData *address;
@property (nonatomic, readonly) bool hasAddress;
@property (nonatomic) bool hasNetworkType;
@property (nonatomic) bool hasServerID;
@property (nonatomic) int networkType;
@property (nonatomic) unsigned int serverID;

- (int)StringAsNetworkType:(id)arg1;
- (id)address;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAddress;
- (bool)hasNetworkType;
- (bool)hasServerID;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)networkType;
- (id)networkTypeAsString:(int)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)serverID;
- (void)setAddress:(id)arg1;
- (void)setHasNetworkType:(bool)arg1;
- (void)setHasServerID:(bool)arg1;
- (void)setNetworkType:(int)arg1;
- (void)setServerID:(unsigned int)arg1;
- (void)writeTo:(id)arg1;

@end