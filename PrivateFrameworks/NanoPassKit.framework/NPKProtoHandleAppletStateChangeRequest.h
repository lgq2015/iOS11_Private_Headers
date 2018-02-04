/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKProtoHandleAppletStateChangeRequest : PBRequest <NSCopying> {
    NSData * _passAppletState;
    NSString * _passID;
}

@property (nonatomic, readonly) bool hasPassAppletState;
@property (nonatomic, readonly) bool hasPassID;
@property (nonatomic, retain) NSData *passAppletState;
@property (nonatomic, retain) NSString *passID;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPassAppletState;
- (bool)hasPassID;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)passAppletState;
- (id)passID;
- (bool)readFrom:(id)arg1;
- (void)setPassAppletState:(id)arg1;
- (void)setPassID:(id)arg1;
- (void)writeTo:(id)arg1;

@end
