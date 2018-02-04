/* made by EzioChiu.
 */

@protocol TSTStyleProviding

@required

- (TSTCellStyle *)bodyCellStyle;
- (TSWPParagraphStyle *)bodyTextStyle;
- (TSTCellStyle *)footerRowCellStyle;
- (TSWPParagraphStyle *)footerRowTextStyle;
- (TSTCellStyle *)headerColumnCellStyle;
- (TSWPParagraphStyle *)headerColumnTextStyle;
- (TSTCellStyle *)headerRowCellStyle;
- (TSWPParagraphStyle *)headerRowTextStyle;
- (void)setBodyCellStyle:(TSTCellStyle *)arg1;
- (void)setBodyTextStyle:(TSWPParagraphStyle *)arg1;
- (void)setFooterRowCellStyle:(TSTCellStyle *)arg1;
- (void)setFooterRowTextStyle:(TSWPParagraphStyle *)arg1;
- (void)setHeaderColumnCellStyle:(TSTCellStyle *)arg1;
- (void)setHeaderColumnTextStyle:(TSWPParagraphStyle *)arg1;
- (void)setHeaderRowCellStyle:(TSTCellStyle *)arg1;
- (void)setHeaderRowTextStyle:(TSWPParagraphStyle *)arg1;
- (void)setTableNameShapeStyle:(TSWPShapeStyle *)arg1;
- (void)setTableNameStyle:(TSWPParagraphStyle *)arg1;
- (void)setTableStyle:(TSTTableStyle *)arg1;
- (TSWPShapeStyle *)tableNameShapeStyle;
- (TSWPParagraphStyle *)tableNameStyle;
- (TSTTableStyle *)tableStyle;

@end
