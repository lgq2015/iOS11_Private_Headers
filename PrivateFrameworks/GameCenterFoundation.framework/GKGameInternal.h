/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKGameInternal : GKGameDescriptor {
    NSString * _defaultLeaderboardIdentifier;
    union { 
        struct { 
            unsigned int _platform : 8; 
            unsigned int _prerendered : 1; 
            unsigned int _supportsLeaderboards : 1; 
            unsigned int _supportsLeaderboardSets : 1; 
            unsigned int _hasAggregateLeaderboard : 1; 
            unsigned int _supportsAchievements : 1; 
            unsigned int _supportsMultiplayer : 1; 
            unsigned int _valid : 1; 
            unsigned int _unused : 1; 
            unsigned int _supportsTurnBasedMultiplayer : 1; 
            unsigned int _reserved : 13; 
        } ; 
        unsigned int _value; 
    }  _flags;
    NSDictionary * _icons;
    unsigned short  _maxAchievementPoints;
    NSString * _name;
    unsigned short  _numberOfAchievements;
    unsigned short  _numberOfLeaderboardSets;
    unsigned short  _numberOfLeaderboards;
    GKStoreItemInternal * _storeItem;
}

@property (nonatomic, retain) NSString *defaultLeaderboardIdentifier;
@property (nonatomic) unsigned int flags;
@property (nonatomic) bool hasAggregateLeaderboard;
@property (nonatomic, retain) NSDictionary *icons;
@property (nonatomic) unsigned short maxAchievementPoints;
@property (nonatomic, retain) NSString *name;
@property (nonatomic) unsigned short numberOfAchievements;
@property (nonatomic) unsigned short numberOfLeaderboardSets;
@property (nonatomic) unsigned short numberOfLeaderboards;
@property (nonatomic) unsigned char platform;
@property (getter=isPrerendered, nonatomic) bool prerendered;
@property (nonatomic, retain) GKStoreItemInternal *storeItem;
@property (nonatomic) bool supportsAchievements;
@property (nonatomic) bool supportsLeaderboardSets;
@property (nonatomic) bool supportsLeaderboards;
@property (nonatomic) bool supportsMultiplayer;
@property (nonatomic) bool supportsTurnBasedMultiplayer;
@property (getter=isValid, nonatomic) bool valid;

+ (id)secureCodedPropertyKeys;

- (void)dealloc;
- (id)defaultCategory;
- (id)defaultLeaderboardIdentifier;
- (id)description;
- (unsigned int)flags;
- (bool)hasAggregateLeaderboard;
- (unsigned long long)hash;
- (id)icons;
- (bool)isEqual:(id)arg1;
- (bool)isPrerendered;
- (bool)isValid;
- (unsigned short)maxAchievementPoints;
- (id)name;
- (unsigned short)numberOfAchievements;
- (unsigned short)numberOfCategories;
- (unsigned short)numberOfLeaderboardSets;
- (unsigned short)numberOfLeaderboards;
- (unsigned char)platform;
- (id)serverRepresentation;
- (void)setDefaultLeaderboardIdentifier:(id)arg1;
- (void)setFlags:(unsigned int)arg1;
- (void)setHasAggregateLeaderboard:(bool)arg1;
- (void)setIcons:(id)arg1;
- (void)setMaxAchievementPoints:(unsigned short)arg1;
- (void)setName:(id)arg1;
- (void)setNumberOfAchievements:(unsigned short)arg1;
- (void)setNumberOfLeaderboardSets:(unsigned short)arg1;
- (void)setNumberOfLeaderboards:(unsigned short)arg1;
- (void)setPlatform:(unsigned char)arg1;
- (void)setPrerendered:(bool)arg1;
- (void)setStoreItem:(id)arg1;
- (void)setSupportsAchievements:(bool)arg1;
- (void)setSupportsLeaderboardSets:(bool)arg1;
- (void)setSupportsLeaderboards:(bool)arg1;
- (void)setSupportsMultiplayer:(bool)arg1;
- (void)setSupportsTurnBasedMultiplayer:(bool)arg1;
- (void)setValid:(bool)arg1;
- (id)storeItem;
- (bool)supportsAchievements;
- (bool)supportsLeaderboardSets;
- (bool)supportsLeaderboards;
- (bool)supportsMultiplayer;
- (bool)supportsTurnBasedMultiplayer;

@end
