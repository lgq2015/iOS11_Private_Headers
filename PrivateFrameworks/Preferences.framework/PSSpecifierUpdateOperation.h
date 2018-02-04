/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSSpecifierUpdateOperation : NSObject <NSCopying> {
    NSNumber * _index;
    long long  _operation;
    PSSpecifier * _specifier;
    NSNumber * _toIndex;
}

@property (nonatomic, retain) NSNumber *index;
@property (nonatomic, readonly) long long operation;
@property (nonatomic, retain) PSSpecifier *specifier;
@property (nonatomic, retain) NSNumber *toIndex;

+ (id)insertOperationWithSpecifier:(id)arg1 atIndex:(unsigned long long)arg2;
+ (id)moveOperationWithSpecifier:(id)arg1 fromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;
+ (id)reloadOperationWithSpecifier:(id)arg1 atIndex:(unsigned long long)arg2;
+ (id)removeOperationWithSpecifier:(id)arg1 atIndex:(unsigned long long)arg2;

- (void).cxx_destruct;
- (bool)applyToArray:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)index;
- (id)initWithOperation:(long long)arg1 specifier:(id)arg2 fromIndex:(id)arg3 toIndex:(id)arg4;
- (id)initWithOperation:(long long)arg1 specifier:(id)arg2 index:(id)arg3;
- (long long)operation;
- (void)setIndex:(id)arg1;
- (void)setSpecifier:(id)arg1;
- (void)setToIndex:(id)arg1;
- (id)specifier;
- (id)toIndex;

@end
