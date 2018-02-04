/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCodableAuthorizationRequestMessage : PBCodable <NSCopying> {
    NSString * _appBundleIdentifier;
    NSData * _requestIdentifier;
    struct { 
        long long *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _typesToReads;
    struct { 
        long long *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _typesToWrites;
}

@property (nonatomic, retain) NSString *appBundleIdentifier;
@property (nonatomic, readonly) bool hasAppBundleIdentifier;
@property (nonatomic, readonly) bool hasRequestIdentifier;
@property (nonatomic, retain) NSData *requestIdentifier;
@property (nonatomic, readonly) long long*typesToReads;
@property (nonatomic, readonly) unsigned long long typesToReadsCount;
@property (nonatomic, readonly) long long*typesToWrites;
@property (nonatomic, readonly) unsigned long long typesToWritesCount;

- (void).cxx_destruct;
- (void)addTypesToRead:(long long)arg1;
- (void)addTypesToWrite:(long long)arg1;
- (id)appBundleIdentifier;
- (void)clearTypesToReads;
- (void)clearTypesToWrites;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAppBundleIdentifier;
- (bool)hasRequestIdentifier;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)requestIdentifier;
- (void)setAppBundleIdentifier:(id)arg1;
- (void)setRequestIdentifier:(id)arg1;
- (void)setTypesToReads:(long long*)arg1 count:(unsigned long long)arg2;
- (void)setTypesToWrites:(long long*)arg1 count:(unsigned long long)arg2;
- (long long)typesToReadAtIndex:(unsigned long long)arg1;
- (long long*)typesToReads;
- (unsigned long long)typesToReadsCount;
- (long long)typesToWriteAtIndex:(unsigned long long)arg1;
- (long long*)typesToWrites;
- (unsigned long long)typesToWritesCount;
- (void)writeTo:(id)arg1;

@end
