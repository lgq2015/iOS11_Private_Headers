/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EMCellNumberMapper : CMMapper {
    double  _columnWidth;
    EDStyle * edStyle;
    double  edValue;
    EDWorkbook * workbook;
}

@property double columnWidth;

- (void).cxx_destruct;
- (double)columnWidth;
- (id)formatValueAsNumber;
- (id)initWithDoubleValue:(double)arg1 style:(id)arg2 columnWidth:(double)arg3 workbook:(id)arg4 parent:(id)arg5;
- (id)insertRedSpanIfNegativeAt:(id)arg1;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (void)setColumnWidth:(double)arg1;

@end
