/* made by EzioChiu
   Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKTileSet : NSObject <NSCoding, NSCopying> {
    SKTileGroup * _defaultTileGroup;
    struct CGSize { 
        double width; 
        double height; 
    }  _defaultTileSize;
    NSMutableArray * _definitions;
    NSMutableArray * _groups;
    NSString * _name;
    NSArray * _stamps;
    unsigned long long  _type;
}

@property (nonatomic, retain) SKTileGroup *defaultTileGroup;
@property (nonatomic) struct CGSize { double x1; double x2; } defaultTileSize;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) NSArray *stamps;
@property (nonatomic, readonly) NSArray *tileDefinitions;
@property (nonatomic, copy) NSArray *tileGroups;
@property (nonatomic) unsigned long long type;

+ (void)clearTileSetTableCache;
+ (id)findTileSetInBundleNamed:(id)arg1;
+ (id)recursivePathsForResourcesOfType:(id)arg1 inDirectory:(id)arg2;
+ (id)tileSetFromURL:(id)arg1;
+ (id)tileSetNamed:(id)arg1;
+ (id)tileSetWithTileGroups:(id)arg1;
+ (id)tileSetWithTileGroups:(id)arg1 tileSetType:(unsigned long long)arg2;

- (void).cxx_destruct;
- (void)calcDefaultTileSize;
- (void)commonInit;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)defaultTileGroup;
- (struct CGSize { double x1; double x2; })defaultTileSize;
- (void)encodeWithCoder:(id)arg1;
- (id)findTileDefinitionForGroup:(id)arg1 withGroupAdjacency:(unsigned long long*)arg2;
- (id)findTileDefinitionsForGroup:(id)arg1 withGroupAdjacency:(unsigned long long*)arg2;
- (id)getCenterTileDefinitionForGroup:(id)arg1 withRequiredOutputGroupAdjacency:(unsigned long long*)arg2;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithTileGroups:(id)arg1;
- (id)initWithTileGroups:(id)arg1 tileSetType:(unsigned long long)arg2;
- (void)lookForMissingDefinitionsInGroups;
- (id)name;
- (void)observeAllTileDefinitions;
- (void)observeTileDefinition:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)removeTileDefinitionObservers:(id)arg1;
- (void)setDefaultTileGroup:(id)arg1;
- (void)setDefaultTileSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setGroupParentPointers;
- (void)setName:(id)arg1;
- (void)setStamps:(id)arg1;
- (void)setTileGroups:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (id)stamps;
- (id)tileDefinitions;
- (id)tileGroups;
- (unsigned long long)type;
- (void)unobserveAllTileDefinitions;
- (void)updateTileDefinitionIDsInGroupRules;

@end
