/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXDataTableLayouter : NSObject {
    SXDataTableBlueprint * _blueprint;
    double  _currentWidth;
    <SXDataTableDataSource> * _dataSource;
    NSMutableDictionary * _intendedColumnWidths;
    NSMutableDictionary * _minimumColumnWidths;
}

@property (nonatomic, retain) SXDataTableBlueprint *blueprint;
@property (nonatomic, readonly) double currentWidth;
@property (nonatomic, readonly) <SXDataTableDataSource> *dataSource;
@property (nonatomic, retain) NSMutableDictionary *intendedColumnWidths;
@property (nonatomic, retain) NSMutableDictionary *minimumColumnWidths;

- (void).cxx_destruct;
- (id)blueprint;
- (id)blueprintForWidth:(double)arg1;
- (id)blueprintUsingRowHeights:(id)arg1 columnWidths:(id)arg2 andTableWidth:(double)arg3;
- (id)columnWidthsForWidth:(double)arg1 resultingTableWidth:(double*)arg2;
- (double)currentWidth;
- (id)dataSource;
- (id)initWithDataSource:(id)arg1;
- (id)intendedColumnWidths;
- (double)intendedPercentualWidthForColumnAtIndex:(unsigned long long)arg1;
- (id)layoutDataTableForWidth:(double)arg1;
- (id)minimumColumnWidths;
- (double)minimumWidthForColumnAtIndex:(unsigned long long)arg1;
- (void)reset;
- (id)rowHeightsForColumnWidths:(id)arg1;
- (void)setBlueprint:(id)arg1;
- (void)setIntendedColumnWidths:(id)arg1;
- (void)setMinimumColumnWidths:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })tableInsets;
- (double)totalColumnDividerWidth;
- (double)totalTableBorderHeight;
- (double)totalTableBorderWidth;

@end
