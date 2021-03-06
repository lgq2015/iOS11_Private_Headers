/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoAppMonitor.framework/NanoAppMonitor
 */

@interface NAMPBCompanionMessage : PBCodable <NSCopying> {
    NSMutableArray * _apps;
}

@property (nonatomic, retain) NSMutableArray *apps;

+ (Class)appsType;
+ (id)fromUsages:(id)arg1;

- (void).cxx_destruct;
- (void)addApps:(id)arg1;
- (id)apps;
- (id)appsAtIndex:(unsigned long long)arg1;
- (unsigned long long)appsCount;
- (void)clearApps;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setApps:(id)arg1;
- (void)writeTo:(id)arg1;

@end
