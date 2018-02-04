/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKProtoShowPaymentSetupRequest : PBRequest <NSCopying> {
    NSString * _appDisplayName;
}

@property (nonatomic, retain) NSString *appDisplayName;
@property (nonatomic, readonly) bool hasAppDisplayName;

- (void).cxx_destruct;
- (id)appDisplayName;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAppDisplayName;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAppDisplayName:(id)arg1;
- (void)writeTo:(id)arg1;

@end
