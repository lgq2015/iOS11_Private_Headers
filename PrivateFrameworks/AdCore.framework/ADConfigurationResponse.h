/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
 */

@interface ADConfigurationResponse : PBCodable <NSCopying> {
    NSString * _resourceProxyURL;
    NSMutableArray * _theConfigurations;
}

@property (nonatomic, readonly) bool hasResourceProxyURL;
@property (nonatomic, retain) NSString *resourceProxyURL;
@property (nonatomic, retain) NSMutableArray *theConfigurations;

+ (Class)theConfigurationType;

- (void).cxx_destruct;
- (void)addTheConfiguration:(id)arg1;
- (void)clearTheConfigurations;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasResourceProxyURL;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)resourceProxyURL;
- (void)setResourceProxyURL:(id)arg1;
- (void)setTheConfigurations:(id)arg1;
- (id)theConfigurationAtIndex:(unsigned long long)arg1;
- (id)theConfigurations;
- (unsigned long long)theConfigurationsCount;
- (void)writeTo:(id)arg1;

@end
