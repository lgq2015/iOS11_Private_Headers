/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFMutableItemSection : HFItemSection

@property (nonatomic, copy) NSString *footerTitle;
@property (nonatomic, copy) NSString *headerTitle;
@property (nonatomic, copy) NSArray *items;
@property (nonatomic, copy) NSDictionary *userInfo;

- (void)setItems:(id)arg1 filteringToDisplayedItems:(id)arg2;

@end
