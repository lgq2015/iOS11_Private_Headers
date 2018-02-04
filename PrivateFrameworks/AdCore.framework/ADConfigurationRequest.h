/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
 */

@interface ADConfigurationRequest : PBRequest <NSCopying> {
    NSMutableArray * _currentConfigurations;
    NSData * _iAdID;
}

@property (nonatomic, retain) NSMutableArray *currentConfigurations;
@property (nonatomic, readonly) bool hasIAdID;
@property (nonatomic, retain) NSData *iAdID;

+ (Class)currentConfigurationType;
+ (id)options;

- (void).cxx_destruct;
- (void)addCurrentConfiguration:(id)arg1;
- (void)clearCurrentConfigurations;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentConfigurationAtIndex:(unsigned long long)arg1;
- (id)currentConfigurations;
- (unsigned long long)currentConfigurationsCount;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIAdID;
- (unsigned long long)hash;
- (id)iAdID;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCurrentConfigurations:(id)arg1;
- (void)setIAdID:(id)arg1;
- (void)writeTo:(id)arg1;

@end
