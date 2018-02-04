/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSParsecTableRowCardSection : WBSParsecCardSection {
    WBSParsecTableAlignmentSchema * _alignmentSchema;
    bool  _hideDivider;
    long long  _rowType;
    NSString * _tableID;
    NSArray * _values;
}

@property (nonatomic, readonly) WBSParsecTableAlignmentSchema *alignmentSchema;
@property (nonatomic, readonly) bool hideDivider;
@property (nonatomic, readonly) long long rowType;
@property (nonatomic, readonly, copy) NSString *tableID;
@property (nonatomic, readonly, copy) NSArray *values;

+ (id)_specializedCardSectionSchema;

- (void).cxx_destruct;
- (id)_initWithDictionary:(id)arg1;
- (id)alignmentSchema;
- (bool)hideDivider;
- (long long)rowType;
- (id)tableID;
- (id)values;

@end
