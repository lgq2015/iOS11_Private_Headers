/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WMTableMapper : CMMapper {
    WMTableColumnInfo * mColumnInfo;
    WMBordersProperty * mInsideBorders;
    WMTableStyle * mStyle;
    WDTable * mWdTable;
}

+ (bool)isTableDeleted:(id)arg1;

- (void).cxx_destruct;
- (id)columnInfo;
- (id)copyColumnInfo;
- (id)copyStopArrayForRow:(unsigned long long)arg1;
- (id)initWithWDTable:(id)arg1 parent:(id)arg2;
- (id)insideBorders;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (void)setInsideBorders:(id)arg1;

@end
