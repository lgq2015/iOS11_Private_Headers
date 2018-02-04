/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

@interface SYLogServiceState : PBCodable <NSCopying> {
    SYLogEngineState * _engine;
    int  _enqueuedSyncType;
    struct { 
        unsigned int serviceType : 1; 
    }  _has;
    NSString * _name;
    NSString * _peerGenerationID;
    NSString * _peerID;
    int  _serviceType;
    SYLogSessionState * _session;
    bool  _sessionQueueRunning;
    SYLogDeviceState * _targetedDevice;
    NSMutableArray * _transportOptions;
}

@property (nonatomic, retain) NSDictionary *cocoaTransportOptions;
@property (nonatomic, retain) SYLogEngineState *engine;
@property (nonatomic) int enqueuedSyncType;
@property (nonatomic, readonly) bool hasEngine;
@property (nonatomic, readonly) bool hasPeerGenerationID;
@property (nonatomic, readonly) bool hasPeerID;
@property (nonatomic) bool hasServiceType;
@property (nonatomic, readonly) bool hasSession;
@property (nonatomic, readonly) bool hasTargetedDevice;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSString *peerGenerationID;
@property (nonatomic, retain) NSString *peerID;
@property (nonatomic) int serviceType;
@property (nonatomic, retain) SYLogSessionState *session;
@property (nonatomic) bool sessionQueueRunning;
@property (nonatomic, retain) SYLogDeviceState *targetedDevice;
@property (nonatomic, retain) NSMutableArray *transportOptions;

+ (Class)transportOptionsType;

- (void).cxx_destruct;
- (int)StringAsEnqueuedSyncType:(id)arg1;
- (int)StringAsServiceType:(id)arg1;
- (void)addTransportOptions:(id)arg1;
- (void)clearTransportOptions;
- (id)cocoaTransportOptions;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)engine;
- (int)enqueuedSyncType;
- (id)enqueuedSyncTypeAsString:(int)arg1;
- (bool)hasEngine;
- (bool)hasPeerGenerationID;
- (bool)hasPeerID;
- (bool)hasServiceType;
- (bool)hasSession;
- (bool)hasTargetedDevice;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)name;
- (id)peerGenerationID;
- (id)peerID;
- (bool)readFrom:(id)arg1;
- (int)serviceType;
- (id)serviceTypeAsString:(int)arg1;
- (id)session;
- (bool)sessionQueueRunning;
- (void)setCocoaTransportOptions:(id)arg1;
- (void)setEngine:(id)arg1;
- (void)setEnqueuedSyncType:(int)arg1;
- (void)setHasServiceType:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setPeerGenerationID:(id)arg1;
- (void)setPeerID:(id)arg1;
- (void)setServiceType:(int)arg1;
- (void)setSession:(id)arg1;
- (void)setSessionQueueRunning:(bool)arg1;
- (void)setTargetedDevice:(id)arg1;
- (void)setTransportOptions:(id)arg1;
- (id)targetedDevice;
- (id)transportOptions;
- (id)transportOptionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)transportOptionsCount;
- (void)writeTo:(id)arg1;

@end
