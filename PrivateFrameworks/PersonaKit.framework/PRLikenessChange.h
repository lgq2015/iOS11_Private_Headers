/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PersonaKit.framework/PersonaKit
 */

@interface PRLikenessChange : NSObject {
    NSString * _changedLikenessID;
    NSNumber * _changedLikenessVersion;
    NSArray * _dirtyLikenessProperties;
    NSString * _identifier;
    unsigned long long  _type;
}

@property (nonatomic, copy) NSString *changedLikenessID;
@property (nonatomic, copy) NSNumber *changedLikenessVersion;
@property (nonatomic, copy) NSArray *dirtyLikenessProperties;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) unsigned long long type;

+ (id)changeForLikeness:(id)arg1 withType:(unsigned long long)arg2;
+ (unsigned long long)changeTypeFromDescription:(id)arg1;
+ (id)descriptionForChangeType:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)changedLikenessID;
- (id)changedLikenessVersion;
- (id)description;
- (id)dirtyLikenessProperties;
- (id)identifier;
- (void)setChangedLikenessID:(id)arg1;
- (void)setChangedLikenessVersion:(id)arg1;
- (void)setDirtyLikenessProperties:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (unsigned long long)type;

@end
