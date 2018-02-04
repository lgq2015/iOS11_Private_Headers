/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
 */

@interface ATPRequest : PBRequest <NSCopying> {
    NSString * _command;
    NSString * _dataClass;
}

@property (nonatomic, retain) NSString *command;
@property (nonatomic, retain) NSString *dataClass;
@property (nonatomic, readonly) bool hasCommand;
@property (nonatomic, readonly) bool hasDataClass;

- (void).cxx_destruct;
- (id)command;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataClass;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCommand;
- (bool)hasDataClass;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCommand:(id)arg1;
- (void)setDataClass:(id)arg1;
- (void)writeTo:(id)arg1;

@end
