/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKProtoEnableServiceModeRequest : PBRequest <NSCopying> {
    bool  _cancelOutstandingRequests;
    struct { 
        unsigned int cancelOutstandingRequests : 1; 
    }  _has;
    NSString * _uniqueID;
}

@property (nonatomic) bool cancelOutstandingRequests;
@property (nonatomic) bool hasCancelOutstandingRequests;
@property (nonatomic, readonly) bool hasUniqueID;
@property (nonatomic, retain) NSString *uniqueID;

- (void).cxx_destruct;
- (bool)cancelOutstandingRequests;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCancelOutstandingRequests;
- (bool)hasUniqueID;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCancelOutstandingRequests:(bool)arg1;
- (void)setHasCancelOutstandingRequests:(bool)arg1;
- (void)setUniqueID:(id)arg1;
- (id)uniqueID;
- (void)writeTo:(id)arg1;

@end
