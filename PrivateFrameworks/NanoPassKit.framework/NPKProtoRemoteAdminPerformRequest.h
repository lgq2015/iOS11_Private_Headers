/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKProtoRemoteAdminPerformRequest : PBRequest <NSCopying> {
    NSString * _command;
    NSData * _infoDictionary;
    NSString * _seid;
    NSData * _url;
}

@property (nonatomic, retain) NSString *command;
@property (nonatomic, readonly) bool hasInfoDictionary;
@property (nonatomic, retain) NSData *infoDictionary;
@property (nonatomic, retain) NSString *seid;
@property (nonatomic, retain) NSData *url;

- (void).cxx_destruct;
- (id)command;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasInfoDictionary;
- (unsigned long long)hash;
- (id)infoDictionary;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)seid;
- (void)setCommand:(id)arg1;
- (void)setInfoDictionary:(id)arg1;
- (void)setSeid:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)url;
- (void)writeTo:(id)arg1;

@end
