/* made by EzioChiu.
 */

@protocol DOCShareFPItemLoader <NSObject>

@required

- (<DOCShareFPItemLoaderDelegate> *)delegate;
- (NSArray *)items;
- (bool)loadDidTimeOut;
- (void)setDelegate:(id <DOCShareFPItemLoaderDelegate>)arg1;

@end
