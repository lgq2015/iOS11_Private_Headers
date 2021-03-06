/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
 */

@interface PPNamedEntity : NSObject <NSCopying> {
    NSString * _bestLanguage;
    unsigned long long  _category;
    PPNamedEntityRecord * _mostRelevantRecord;
    NSString * _name;
}

@property (nonatomic, readonly) NSString *bestLanguage;
@property (nonatomic, readonly) unsigned long long category;
@property (nonatomic, readonly) PPNamedEntityRecord *mostRelevantRecord;
@property (nonatomic, readonly) NSString *name;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)describeCategory:(unsigned long long)arg1;

- (id)bestLanguage;
- (unsigned long long)category;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned long long)hash;
- (id)initWithName:(id)arg1 category:(unsigned long long)arg2 language:(id)arg3;
- (id)initWithName:(id)arg1 category:(unsigned long long)arg2 language:(id)arg3 mostRelevantRecord:(id)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToNamedEntity:(id)arg1;
- (id)mostRelevantRecord;
- (id)name;

@end
