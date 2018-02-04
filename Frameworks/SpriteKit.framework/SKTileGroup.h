/* made by EzioChiu
   Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKTileGroup : NSObject <NSCoding, NSCopying> {
    NSString * _name;
    SKTileSet * _parentSet;
    NSMutableArray * _rules;
    unsigned long long  _type;
}

@property (nonatomic, copy) NSString *name;
@property (nonatomic) SKTileSet *parentSet;
@property (nonatomic, copy) NSArray *rules;
@property (nonatomic) unsigned long long type;

+ (id)emptyTileGroup;
+ (id)tileGroupWithRules:(id)arg1;
+ (id)tileGroupWithTileDefinition:(id)arg1;

- (void).cxx_destruct;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)findTileDefinitionIDsForAdjacencyData:(unsigned long long)arg1 tileSetType:(unsigned long long)arg2;
- (unsigned long long)findTileDefinitionIndexForAdjacencyData:(unsigned long long)arg1 tileSetType:(unsigned long long)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithRules:(id)arg1;
- (id)initWithTileDefinition:(id)arg1;
- (id)name;
- (id)parentSet;
- (id)rules;
- (void)setName:(id)arg1;
- (void)setParentSet:(id)arg1;
- (void)setRuleParentPointers;
- (void)setRules:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (unsigned long long)type;

@end
