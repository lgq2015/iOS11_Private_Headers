/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKRecurrenceHelper : NSObject {
    NSArray * _daysOfTheMonth;
    NSArray * _daysOfTheWeek;
    NSArray * _daysOfTheYear;
    bool  _dirty;
    NSArray * _monthsOfTheYear;
    bool  _parsed;
    NSArray * _setPositions;
    NSString * _specifier;
    NSArray * _weeksOfTheYear;
}

@property (nonatomic, copy) NSArray *daysOfTheMonth;
@property (nonatomic, copy) NSArray *daysOfTheWeek;
@property (nonatomic, copy) NSArray *daysOfTheYear;
@property (nonatomic, readonly) bool isDirty;
@property (nonatomic, copy) NSArray *monthsOfTheYear;
@property (nonatomic, copy) NSArray *setPositions;
@property (nonatomic, copy) NSString *specifier;
@property (nonatomic, copy) NSArray *weeksOfTheYear;

- (void).cxx_destruct;
- (void)_appendDaysOfTheWeek:(id)arg1 toSpecifier:(id)arg2;
- (void)_appendIndexList:(id)arg1 toSpecifier:(id)arg2 propertyKey:(unsigned short)arg3;
- (void)_clearArrays;
- (id)_parseDaysOfWeek:(struct { unsigned short x1[64]; struct __CFString {} *x2; unsigned short *x3; char *x4; struct { long long x_5_1_1; long long x_5_1_2; } x5; long long x6; long long x7; }*)arg1 range:(struct { long long x1; long long x2; })arg2;
- (id)_parseIndexList:(struct { unsigned short x1[64]; struct __CFString {} *x2; unsigned short *x3; char *x4; struct { long long x_5_1_1; long long x_5_1_2; } x5; long long x6; long long x7; }*)arg1 range:(struct { long long x1; long long x2; })arg2;
- (void)_parseSpecifierIfNeeded;
- (void)_updateSpecifier;
- (id)daysOfTheMonth;
- (id)daysOfTheWeek;
- (id)daysOfTheYear;
- (id)initWithSpecifier:(id)arg1;
- (bool)isDirty;
- (bool)isEqual:(id)arg1;
- (id)monthsOfTheYear;
- (void)revert;
- (void)setDaysOfTheMonth:(id)arg1;
- (void)setDaysOfTheWeek:(id)arg1;
- (void)setDaysOfTheYear:(id)arg1;
- (void)setMonthsOfTheYear:(id)arg1;
- (id)setPositions;
- (void)setSetPositions:(id)arg1;
- (void)setSpecifier:(id)arg1;
- (void)setWeeksOfTheYear:(id)arg1;
- (id)specifier;
- (id)weeksOfTheYear;

@end
