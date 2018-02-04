/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

@interface BLTPBAction : PBCodable <NSCopying> {
    int  _activationMode;
    BLTPBAppearance * _appearance;
    int  _behavior;
    NSData * _behaviorParameters;
    NSData * _behaviorParametersNulls;
    struct { 
        unsigned int behavior : 1; 
    }  _has;
    NSString * _identifier;
    NSString * _launchURL;
}

@property (nonatomic) int activationMode;
@property (nonatomic, retain) BLTPBAppearance *appearance;
@property (nonatomic) int behavior;
@property (nonatomic, retain) NSData *behaviorParameters;
@property (nonatomic, retain) NSData *behaviorParametersNulls;
@property (nonatomic) bool hasBehavior;
@property (nonatomic, readonly) bool hasBehaviorParameters;
@property (nonatomic, readonly) bool hasBehaviorParametersNulls;
@property (nonatomic, readonly) bool hasIdentifier;
@property (nonatomic, readonly) bool hasLaunchURL;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSString *launchURL;

- (void).cxx_destruct;
- (int)activationMode;
- (id)appearance;
- (int)behavior;
- (id)behaviorParameters;
- (id)behaviorParametersNulls;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBehavior;
- (bool)hasBehaviorParameters;
- (bool)hasBehaviorParametersNulls;
- (bool)hasIdentifier;
- (bool)hasLaunchURL;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (id)launchURL;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setActivationMode:(int)arg1;
- (void)setAppearance:(id)arg1;
- (void)setBehavior:(int)arg1;
- (void)setBehaviorParameters:(id)arg1;
- (void)setBehaviorParametersNulls:(id)arg1;
- (void)setHasBehavior:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLaunchURL:(id)arg1;
- (void)writeTo:(id)arg1;

@end
