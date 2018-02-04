/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIBrowseItemComponent : SKUIPageComponent {
    SKUIImageViewElement * _decorationImage;
    long long  _index;
    bool  _showTopBorder;
    NSString * _subtitle;
    NSString * _title;
}

@property (nonatomic, readonly) SKUIImageViewElement *decorationImage;
@property (nonatomic) long long index;
@property (nonatomic) bool showTopBorder;
@property (nonatomic, readonly) NSString *subtitle;
@property (nonatomic, readonly) NSString *title;

- (void).cxx_destruct;
- (long long)componentType;
- (id)decorationImage;
- (long long)index;
- (id)initWithViewElement:(id)arg1;
- (void)setIndex:(long long)arg1;
- (void)setShowTopBorder:(bool)arg1;
- (bool)showTopBorder;
- (id)subtitle;
- (id)title;

@end
