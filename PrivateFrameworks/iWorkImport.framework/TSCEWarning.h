/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCEWarning : NSObject {
    bool  mIgnored;
    NSDictionary * mMetadata;
}

+ (void)reportAutomaticUnitConversionWarningInContext:(/* Warning: unhandled struct encoding: '{TSCEWarningReportingContext=BB{ObjcSharedPtr<NSMutableSet>=@}}' */ struct TSCEWarningReportingContext { bool x1; bool x2; struct ObjcSharedPtr<NSMutableSet> { id x_3_1_1; } x3; }*)arg1;
+ (void)reportBoolToNumberConversionWarningInContext:(/* Warning: unhandled struct encoding: '{TSCEWarningReportingContext=BB{ObjcSharedPtr<NSMutableSet>=@}}' */ struct TSCEWarningReportingContext { bool x1; bool x2; struct ObjcSharedPtr<NSMutableSet> { id x_3_1_1; } x3; }*)arg1;
+ (void)reportComparisonWarningInContext:(/* Warning: unhandled struct encoding: '{TSCEWarningReportingContext=BB{ObjcSharedPtr<NSMutableSet>=@}}' */ struct TSCEWarningReportingContext { bool x1; bool x2; struct ObjcSharedPtr<NSMutableSet> { id x_3_1_1; } x3; }*)arg1 leftType:(int)arg2 rightType:(int)arg3;
+ (void)reportDayOutOfRangeWarningInContext:(/* Warning: unhandled struct encoding: '{TSCEWarningReportingContext=BB{ObjcSharedPtr<NSMutableSet>=@}}' */ struct TSCEWarningReportingContext { bool x1; bool x2; struct ObjcSharedPtr<NSMutableSet> { id x_3_1_1; } x3; }*)arg1;
+ (void)reportLossOfUnitsWarningInContext:(/* Warning: unhandled struct encoding: '{TSCEWarningReportingContext=BB{ObjcSharedPtr<NSMutableSet>=@}}' */ struct TSCEWarningReportingContext { bool x1; bool x2; struct ObjcSharedPtr<NSMutableSet> { id x_3_1_1; } x3; }*)arg1;
+ (void)reportMismatchedSizesWarningInContext:(/* Warning: unhandled struct encoding: '{TSCEWarningReportingContext=BB{ObjcSharedPtr<NSMutableSet>=@}}' */ struct TSCEWarningReportingContext { bool x1; bool x2; struct ObjcSharedPtr<NSMutableSet> { id x_3_1_1; } x3; }*)arg1;
+ (void)reportMonthOutOfRangeWarningInContext:(/* Warning: unhandled struct encoding: '{TSCEWarningReportingContext=BB{ObjcSharedPtr<NSMutableSet>=@}}' */ struct TSCEWarningReportingContext { bool x1; bool x2; struct ObjcSharedPtr<NSMutableSet> { id x_3_1_1; } x3; }*)arg1;
+ (void)reportNonNumericCellWarningInContext:(/* Warning: unhandled struct encoding: '{TSCEWarningReportingContext=BB{ObjcSharedPtr<NSMutableSet>=@}}' */ struct TSCEWarningReportingContext { bool x1; bool x2; struct ObjcSharedPtr<NSMutableSet> { id x_3_1_1; } x3; }*)arg1 reference:(id)arg2;
+ (bool)setHasVisibleWarnings:(id)arg1;

- (id)copyByRemappingEntityIDs:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)displayStringWithCalculationEngine:(id)arg1 forTable:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; }*)arg2 andCellID:(struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; })arg3;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isIgnored;
- (void)setIgnored:(bool)arg1;
- (id)type;

@end
