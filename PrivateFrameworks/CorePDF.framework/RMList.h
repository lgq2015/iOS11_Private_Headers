/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface RMList : NSObject {
    NSMutableArray * _items;
}

@property (readonly) NSArray *listItems;
@property (readonly) struct CGPDFPage { }*page;

- (void)addItem:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (id)listItems;
- (struct CGPDFPage { }*)page;

@end
