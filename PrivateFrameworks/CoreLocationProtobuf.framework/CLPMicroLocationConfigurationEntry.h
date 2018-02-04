/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/CoreLocationProtobuf
 */

@interface CLPMicroLocationConfigurationEntry : PBCodable <NSCopying> {
    NSData * _configurationProtobuf;
    int  _configurationType;
    double  _generationTimestamp;
    struct { 
        unsigned int generationTimestamp : 1; 
        unsigned int configurationType : 1; 
    }  _has;
    NSString * _rtLOI;
}

@property (nonatomic, retain) NSData *configurationProtobuf;
@property (nonatomic) int configurationType;
@property (nonatomic) double generationTimestamp;
@property (nonatomic, readonly) bool hasConfigurationProtobuf;
@property (nonatomic) bool hasConfigurationType;
@property (nonatomic) bool hasGenerationTimestamp;
@property (nonatomic, readonly) bool hasRtLOI;
@property (nonatomic, retain) NSString *rtLOI;

- (void).cxx_destruct;
- (int)StringAsConfigurationType:(id)arg1;
- (id)configurationProtobuf;
- (int)configurationType;
- (id)configurationTypeAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (double)generationTimestamp;
- (bool)hasConfigurationProtobuf;
- (bool)hasConfigurationType;
- (bool)hasGenerationTimestamp;
- (bool)hasRtLOI;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)rtLOI;
- (void)setConfigurationProtobuf:(id)arg1;
- (void)setConfigurationType:(int)arg1;
- (void)setGenerationTimestamp:(double)arg1;
- (void)setHasConfigurationType:(bool)arg1;
- (void)setHasGenerationTimestamp:(bool)arg1;
- (void)setRtLOI:(id)arg1;
- (void)writeTo:(id)arg1;

@end
